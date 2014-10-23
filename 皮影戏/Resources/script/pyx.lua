require "character"
require "healthbar"
require "gamestatus"
require "scene_battle_ready"

g_camera = nil -- 摄像机
g_directional_light = nil --点光源

NUM_BUBBLE = 7
math.randomseed(os.time())

testAttention = 45--test
testBlink = 80--test

menu_scene = {camera = nil, point_light = nil, 
	schedule_id = {}, message_register = {}, 
	passed_time = 0, bubble = {}, bubble_manager = nil,
	curtains = nil, curtains2 = nil, game_status = "SCENE_STANDBY",
	audience = {}, healthbar = nil, attention_bar = nil, 
	enemyhealth_bar = nil, meditation_bar = nil,
	signal_bar = nil, character1 = nil}

local function MoveAudiences()
	local direction = Vec3Make(-1, 0, 0)
	local reverseDirection = Vec3Make(1, 0, 0)
	
	for i=1,#menu_scene.audience do
		local audience = menu_scene.audience[i]
		if i < 5 then
			if audience:GetPosition().x > -80 then
				audience:SetTranslation(direction)
			end
		else
			if audience:GetPosition().x < 80 then
				audience:SetTranslation(reverseDirection)
			end
		end
	end
end

--创建窗帘
local function CreateCurtain(material, filePath)
	local curtain = Curtains:Create(40, 20, 5.0, 0.5, 0.02, filePath)
	curtain:ScheduleUpdate()
	return curtain
end

--向前拉动镜头
local function UpdateStatus1()
	-- body
	local direction = Vec3Make(0, 0, 0)
	MoveAudiences()
	local camera_position = g_camera:GetPosition()
	if camera_position.z >= 80 then
		direction.z = 1
		g_camera:Translational(direction, 1)
	else
		menu_scene.game_status = status[2]
		--更新血量条，当作脑电波强度显示条用
		if menu_scene.attention_bar.sprite:IsVisible() == false then
			menu_scene.attention_bar:SetVisible(true)
		end

		if menu_scene.meditation_bar.sprite:IsVisible() == false then
			menu_scene.meditation_bar:SetVisible(true)
		end

		if menu_scene.signal_bar.sprite:IsVisible() == false then
			menu_scene.signal_bar:SetVisible(true)
		end

		Print("Remove Audience")
		Root:GetInstance():GetNode():DeleteChild(menu_scene.audience.node)
		menu_scene.audience = nil
		Print(menu_scene.game_status)
	end
end

--拉窗帘
local function UpdateStatus2()
	-- body
	
	-- local attention = MindController:GetData(DATA_ATTENTION)
	local attention = menu_scene.attention_bar.value
	local speed = 0.07
	if attention > 40 then -- Add condition
		
		if attention > 50 then
			speed = attention / 100.0
		end
		if menu_scene.curtains ~= nil then
			if menu_scene.curtains:moveCurtainsL(speed, -1) == true then -- 如果窗帘拉到一定程度，则切换到状态3
				menu_scene.curtains2:moveCurtainsR(speed, -1)
			else
				menu_scene.game_status = status[3]
				menu_scene.character1:ScheduleUpdate()
				Print(menu_scene.game_status)
			end
		end
	else
		speed = speed * 5
		menu_scene.curtains:moveCurtainsL(speed, 1)
		menu_scene.curtains2:moveCurtainsR(speed, 1)
	end
end

local best_meditation = 0
local nedd_meditation = {}

--悟空出场
local function UpdateStatus3()
	-- body
	-- menu_scene.character1:PlaySprite(0)

	menu_scene.character1:SelectSprite(menu_scene.character1.otherSprites[menu_scene.character1.action_type.move], menu_scene.character1.action_type.move)
	if menu_scene.character1.isMoving == false then
		if menu_scene.character1:IsOnDestination() == false then
			menu_scene.character1:MoveToDestination(5)
		else
			menu_scene.character1:SelectSprite(menu_scene.character1.otherSprites[menu_scene.character1.action_type.weapon], menu_scene.character1.action_type.weapon)
			menu_scene.game_status = status[4]
			Print(menu_scene.game_status)
			best_meditation = 0
		end
	end
end

local blink_imitate = 0
-- 挥动各种武器
local function UpdateStatus4()
	-- body
	local MindController = Input:GetInstance():GetMindControl()
	-- local attention = MindController:GetData(DATA_ATTENTION)
	-- local blink = MindController:GetData(DATA_BLINK_STRENGTH)
	-- local meditation = MindController:GetData(DATA_MEDITATION)
	
	if imitate_mind_input == true then
		local keyboard = Input:GetInstance():GetKeyBoard()
		--blink_imitate
		if keyboard:KeyDown(KEY_B) then
			if  keyboard:KeyDown(KEY_Control) ~= true then 
				blink_imitate = blink_imitate + 2
			else
				blink_imitate = blink_imitate - 2
			end
			Print("blink_imitate: %d", blink_imitate)
		end
	end
	local  meditation = menu_scene.meditation_bar.value 
	local blink = MindController:GetData(DATA_BLINK_STRENGTH) + blink_imitate
	Print("DATA_BLINK_STRENGTH = %d",blink)
	if best_meditation < meditation then 
		best_meditation = meditation
	end

	local spriteIndex = menu_scene.character1.spriteIndex
	menu_scene.character1.sprite:SetPlayTime(60 / best_meditation * 10)--根据脑波专注度变化决定动作的速度
	
	if menu_scene.character1.action_status == Character.STATUS[1] then
		if blink > 0 then-- 如果检测到眨眼动作，则开始播放
			Print("blink: %d",tostring(blink))
			menu_scene.character1:PlaySprite(1)
		end
	elseif menu_scene.character1.action_status == Character.STATUS[3] then
		Print("best_meditation = %d", best_meditation)
		if spriteIndex == 7 then
			if best_meditation >= 90 then 
				menu_scene.game_status = status[5]
				battle_status:Enter()
			else
				best_meditation = 0
				menu_scene.character1.action_status = Character.STATUS[1]
			end
		else
			if best_meditation >= 70 then
				spriteIndex = spriteIndex + 1
				menu_scene.character1:SelectSprite(menu_scene.character1.otherSprites[spriteIndex], spriteIndex)
				menu_scene.character1.action_status = Character.STATUS[1]
			else 
				best_meditation = 0
				menu_scene.character1.action_status = Character.STATUS[1]
			end
		end
	end
end

-- 摄像机控制
local function CameraUpdate()
	if g_camera == nil then return end
	local keyboard = Input:GetInstance():GetKeyBoard()
	local direction = Vec3Make(0, 0, 0)
	if keyboard:KeyDown(KEY_A) == true then
		Print("KEY_A Down")
		direction.x = 1.0
	end
	if keyboard:KeyDown(KEY_D) == true then
		Print("KEY_D Down")
		direction.x = -1
	end
	if keyboard:KeyDown(KEY_W) == true then
		Print("KEY_W Down")
		direction.z = 1
	end
	if keyboard:KeyDown(KEY_S) == true then 
		Print("KEY_S Down")
		direction.z = -1
	end
	g_camera:Translational(direction, 1)
end

--气泡
local function CreateBubble()
	local xCoord = math.random(0, 80)
	local material = Material:Create()
	material.ambient	= C4f(0.1, 0.1, 0.1, 1.0) 		
	material.diffuse	= C4f(0.8, 0.8, 0.8, 1.0)
	material.specular	= C4f(0.3, 0.3, 0.3, 1.0)
	material.emmissive	= C4f(0.0, 0.0, 0.0, 0.0)
	material.shininess	= 100
	local bubble = GeometryModel:CreateSquare(1, 1, 0.5, 0.5)
	bubble:SetTexture(TextureLoader:GetInstance():LoadTexture2D("Tex/bubble.png"))
	bubble:SetMaterial(material)
	local bubble_sprite = Sprite:CreateWithModel(bubble)
	bubble_sprite:SetPosition(-40 + xCoord, -30, 26)
	bubble_sprite:SetScale(math.random(1, 2) / 1.0)
	return bubble_sprite
end

--创建气泡数组
local function InitBubbles()
	menu_scene.bubble_manager = Node:Create()
	for i=1,NUM_BUBBLE do
		local bubble = CreateBubble()
		local x = #menu_scene.bubble + 1
		menu_scene.bubble[x] = {sprite = bubble, speedY = math.random(20, 60) / 100}
		menu_scene.bubble_manager:AddChild(bubble)
	end
end

local function MoveCamera()
	local direction = Vec3Make(0, 0, 0)
	local camera_position = g_camera:GetPosition()
	if camera_position.z <= -80 then
		direction.z = 1
	end
	g_camera:Translational(direction, 1)
end

local function CreateCharacter(action_sprite)
	 menu_scene.character1 = Character:New(action_sprite)
end

local attention_imitate = 0
local meditation_imitate = 0
local signal_imitate = 0

local function GameUpdate(dt)
	if menu_scene.game_status == status[6] then
		local keyboard = Input:GetInstance():GetKeyBoard()
		if keyboard:KeyDown(KEY_Space) then
			menu_scene.game_status = status[1]
			Print(menu_scene.game_status)
		end
	end

	if imitate_mind_input == true then
		
		local keyboard = Input:GetInstance():GetKeyBoard()
		-- attention_imitate
		if keyboard:KeyDown(KEY_A) then
			if  keyboard:KeyDown(KEY_Control) ~= true then 
				attention_imitate = attention_imitate + 2
			else
				attention_imitate = attention_imitate - 2
			end
			Print("attention_imitate: %d", attention_imitate)
		end
		
		-- meditation_imtate
		if keyboard:KeyDown(KEY_M) then
			if  keyboard:KeyDown(KEY_Control) ~= true then 
				meditation_imitate = meditation_imitate + 2
			else
				meditation_imitate = meditation_imitate - 2
			end
			Print("meditation_imitate: %d", meditation_imitate)
		end
		
		-- signal_imitate
		if keyboard:KeyDown(KEY_S) then
			if  keyboard:KeyDown(KEY_Control) ~= true then 
				signal_imitate = signal_imitate + 2
			else
				signal_imitate = signal_imitate - 2
			end
			Print("signal_imitate: %d", signal_imitate)
		end
		
	end
	
	local MindController = Input:GetInstance():GetMindControl()
	local attention = MindController:GetData(DATA_ATTENTION) + attention_imitate
	local meditation = MindController:GetData(DATA_MEDITATION) + meditation_imitate
	local signal = MindController:GetData(DATA_POOR_SIGNAL) + signal_imitate
	
	menu_scene.attention_bar:SetValue(attention)
	menu_scene.meditation_bar:SetValue(meditation)
	menu_scene.signal_bar:SetValue(signal)
	
	Print("DATA_ATTENTION = %d", menu_scene.attention_bar.value)
	Print("DATA_MEDITATION = %d", menu_scene.meditation_bar.value)
	Print("DATA_POOR_SIGNAL = %d", menu_scene.signal_bar.value)
	if menu_scene.game_status == status[1] then
		UpdateStatus1()
	elseif menu_scene.game_status == status[2] then
		UpdateStatus2()
	elseif menu_scene.game_status == status[3] then
		UpdateStatus3()
	elseif menu_scene.game_status == status[4] then
		UpdateStatus4()
	end
	-- MoveCamera()
	-- MoveAudiences()
	for i=1,#menu_scene.bubble do
		local tmpbubble = menu_scene.bubble[i]
		if tmpbubble ~= nil then
			tmpbubble.sprite:SetTranslationY(tmpbubble.speedY)
			-- Print("bubble_moveY[%d]: %f", i, bubble_moveY[i])
			local tmpPosition = tmpbubble.sprite:GetPosition()
			if tmpPosition.y > 50 then
				local xCoord = math.random(0, 80)
				tmpbubble.sprite:SetPosition(-40 + xCoord, -30, tmpPosition.z)
				tmpbubble.speedY = math.random(20, 60) / 100
			end
		end
	end

	--if menu_scene.healthbar ~= nil then
		--menu_scene.healthbar:Update(100)
	--end
end

--创建观众
function InitAudiences(material)
	local xOffset = -19
	--背景观众
	local audience_Sprite = {}
	for i=1,8 do
		local texture = TextureLoader:GetInstance():LoadTexture2D("Tex/audience ("..tostring(i)..").png")
		local audience = GeometryModel:CreateSquare(8, 16, 0, 0, texture)
		audience:SetMaterial(material)
		audience_Sprite[i] = Sprite:CreateWithModel(audience)
		if i < 5 then
			audience_Sprite[i]:SetPosition(-25 + xOffset + i * 3, -20, 60 - i * 6 + 25)
		else
			audience_Sprite[i]:SetPosition(25 + xOffset + 10 + i * 3, -20, 6 + i * 6 + 25)
		end
	end
	return audience_Sprite
end

function InitCharacter()
	local material = Material:Create()
	material.ambient	= C4f(0.1, 0.1, 0.1, 1.0) 		
	material.diffuse	= C4f(1.0, 1.0, 1.0, 1.0)
	material.specular	= C4f(0.1, 0.1, 0.1, 1.0)
	material.emmissive	= C4f(0.0, 0.0, 0.0, 0.0)
	material.shininess	= 0

	-- 悟空
	local action = VDSModel:Create("Action/wukong_hand/wukong_swim.vds")
	action:SetMaterial(material)
	local action_sprite = Sprite:CreateWithModel(action)
	action_sprite:SetPosition(-10, -10, 26)
	action_sprite:SetScale(0.1)

	local action1 = VDSModel:Create("Action/wukong_hand/wukong_walk.vds")
	action1:SetMaterial(material)
	local action_sprite1 = Sprite:CreateWithModel(action1)
	action_sprite1:SetPosition(-10, -10, 26)
	action_sprite1:SetScale(0.1)

	local action2 = VDSModel:Create("Action/wukong_hand/wukong_fall.vds")
	action2:SetMaterial(material)
	local action_sprite2 = Sprite:CreateWithModel(action2)
	action_sprite2:SetPosition(-10, -10, 26)
	action_sprite2:SetScale(0.1)

	local action3 = VDSModel:Create("Action/wukong_weapon/wukong_attack.vds")
	action3:SetMaterial(material)
	local action_sprite3 = Sprite:CreateWithModel(action3)
	action_sprite3:SetPosition(-10, -10, 26)
	action_sprite3:SetScale(0.1)

	local action4 = VDSModel:Create("Action/wukong_weapon/wukong_attacked.vds")
	action4:SetMaterial(material)
	local action_sprite4 = Sprite:CreateWithModel(action4)
	action_sprite4:SetPosition(-10, -10, 26)
	action_sprite4:SetScale(0.1)

	local action5 = VDSModel:Create("Action/wukong_weapon/wukong_dao.vds")
	action5:SetMaterial(material)
	local action_sprite5 = Sprite:CreateWithModel(action5)
	action_sprite5:SetPosition(-10, -10, 26)
	action_sprite5:SetScale(0.1)

	local action6 = VDSModel:Create("Action/wukong_weapon/wukong_stick.vds")
	action6:SetMaterial(material)
	local action_sprite6 = Sprite:CreateWithModel(action6)
	action_sprite6:SetPosition(-10, -10, 26)
	action_sprite6:SetScale(0.1)

	local action7 = VDSModel:Create("Action/wukong_hand/wukong_dead.vds")
	action7:SetMaterial(material)
	local action_sprite7 = Sprite:CreateWithModel(action7)
	action_sprite7:SetPosition(-10, -10, 26)
	action_sprite7:SetScale(0.1)

	local action8 = VDSModel:Create("Action/wukong_weapon/wukong_stand.vds")
	action8:SetMaterial(material)
	local action_sprite8 = Sprite:CreateWithModel(action8)
	action_sprite8:SetPosition(-10, -10, 26)
	action_sprite8:SetScale(0.1)

	local action9 = VDSModel:Create("Action/wukong_weapon/wukong_attacked1.vds")
	action9:SetMaterial(material)
	local action_sprite9 = Sprite:CreateWithModel(action9)
	action_sprite9:SetPosition(-10, -10, 26)
	action_sprite9:SetScale(0.1)

	local action10 = VDSModel:Create("Action/wukong_weapon/wukong_attacked2.vds")
	action10:SetMaterial(material)
	local action_sprite10 = Sprite:CreateWithModel(action10)
	action_sprite10:SetPosition(-10, -10, 26)
	action_sprite10:SetScale(0.1)

	CreateCharacter(action_sprite)
	menu_scene.character1:AddSprite(action_sprite1)
	menu_scene.character1:AddSprite(action_sprite2)
	menu_scene.character1:AddSprite(action_sprite3)
	menu_scene.character1:AddSprite(action_sprite4)
	menu_scene.character1:AddSprite(action_sprite5)
	menu_scene.character1:AddSprite(action_sprite6)
	menu_scene.character1:AddSprite(action_sprite7)
	menu_scene.character1:AddSprite(action_sprite8)
	menu_scene.character1:AddSprite(action_sprite9)
	menu_scene.character1:AddSprite(action_sprite10)

	menu_scene.character1:SetPosition(Vec3Make(40, 86, 26))
	menu_scene.character1:SetDestination(Vec3Make(12, -10, 26))
	menu_scene.character1.action_type.move = 1
	menu_scene.character1.action_type.weapon = 6
	menu_scene.character1.action_type.attack = 4
	menu_scene.character1.action_type.attacked = 5
	menu_scene.character1.action_type.die = 3
	menu_scene.character1.action_type.dead = 8
	menu_scene.character1.action_type.stand = 9
	menu_scene.character1.action_type.attacked1 = 10
	menu_scene.character1.action_type.attacked2 = 11
end

function GameStart()

	-- 开启键盘输入
	Input:GetInstance():SetInputState(INPUT_KeyBoard, true)
	-- 开启意念控制
	Input:GetInstance():SetInputState(INPUT_MindControl, true)
	Input:GetInstance():GetMindControl():EnableBlinkDetection(10)

	local root = Node:Create()
	local phone_shader = ShaderProgramCache:GetInstance():GetShaderForKey("phone")
	root:SetShaderProgram(phone_shader)
	Root:GetInstance():SetNode(root)
	
	

	local material = Material:Create()
	material.ambient	= C4f(0.1, 0.1, 0.1, 1.0) 		
	material.diffuse	= C4f(1.0, 1.0, 1.0, 1.0)
	material.specular	= C4f(0.1, 0.1, 0.1, 1.0)
	material.emmissive	= C4f(0.0, 0.0, 0.0, 0.0)
	material.shininess	= 0

	InitCharacter()

	--地板
	local ground = GeometryModel:CreateSquare(1, 1, 0.5, 0.5)
	ground:SetTexture(TextureLoader:GetInstance():LoadTexture2D("Tex/mu.jpg"))
	ground:SetMaterial(material)
	local ground_sprite = Sprite:CreateWithModel(ground)
	ground_sprite:SetPosition(0, -35, -35)
	ground_sprite:SetRotateX(-90)
	ground_sprite:SetScale(60)
	ground_sprite:ScaleX(3.8)
	ground_sprite:ScaleY(2.0)
	root:AddChild(ground_sprite)

	--注意力强度
	menu_scene.attention_bar = HealthBar:New(20, 1, 0, 0, 100, "Tex/yellow.jpg", "Tex/white.jpg")
	menu_scene.attention_bar:AddTo(root)
	menu_scene.attention_bar:SetPosition(-24, 15, 40)
	menu_scene.attention_bar:SetValue(50)
	menu_scene.attention_bar:SetVisible(false)

	--冥想度
	menu_scene.meditation_bar = HealthBar:New(20, 1, 0, 0, 100, "Tex/green.jpg", "Tex/white.jpg")
	menu_scene.meditation_bar:AddTo(root)
	menu_scene.meditation_bar:SetPosition(-24, 13, 40)
	menu_scene.meditation_bar:SetValue(50)
	menu_scene.meditation_bar:SetVisible(false)

	--血量条
	menu_scene.healthbar = HealthBar:New(20, 1, 0, 0, 100, "Tex/red.jpg", "Tex/white.jpg")
	menu_scene.healthbar:AddTo(root)
	menu_scene.healthbar:SetPosition(0, -17, 40)
	menu_scene.healthbar:SetValue(50)
	menu_scene.healthbar:SetVisible(false)

	--敌人血量
	menu_scene.enemyhealth_bar = HealthBar:New(20, 1, 0, 0, 100, "Tex/red.jpg", "Tex/white.jpg")
	menu_scene.enemyhealth_bar:AddTo(root)
	menu_scene.enemyhealth_bar:SetPosition(-22, -17, 40)
	menu_scene.enemyhealth_bar:SetValue(50)
	menu_scene.enemyhealth_bar:SetVisible(false)

	--信号强度
	menu_scene.signal_bar = HealthBar:New(20, 1, 0, 0, 100, "Tex/blue.jpg", "Tex/white.jpg")
	menu_scene.signal_bar:AddTo(root)
	menu_scene.signal_bar:SetPosition(2, 15, 40)
	menu_scene.signal_bar:SetValue(50)
	menu_scene.signal_bar:SetVisible(false)

	--屏幕背景
	local background = GeometryModel:CreateSquare(1, 1, 0.5, 0.5)
	background:SetTexture(TextureLoader:GetInstance():LoadTexture2D("Tex/sea_bottom.jpg"))
	background:SetMaterial(material)
	local background_sprite = Sprite:CreateWithModel(background)
	background_sprite:SetPosition(0, 3, 22)
	background_sprite:SetScale(60)
	background_sprite:ScaleX(1.3)
	background_sprite:ScaleY(1)
	root:AddChild(background_sprite)

	--背景包围球
	local background = ObjModel:Create("OBJ/ball.obj")
	background:SetTexture(TextureLoader:GetInstance():LoadTexture2D("Tex/sea_bottom.jpg"))
	background:SetMaterial(material)
	local backgroundSphere_sprite = Sprite:CreateWithModel(background)
	backgroundSphere_sprite:SetPosition(0, 0, 0)
	backgroundSphere_sprite:SpinY(180)
	backgroundSphere_sprite:SetScale(180)
	root:AddChild(backgroundSphere_sprite)

	--初始化窗帘
	menu_scene.curtains = CreateCurtain(material, "Tex/chuanglianL.png")
	menu_scene.curtains:SetPosition(-38, 20, 25)
	menu_scene.curtains:SetScale(0.40)
	root:AddChild(menu_scene.curtains)

	menu_scene.curtains2 = CreateCurtain(material, "Tex/chuanglianR.png")
	menu_scene.curtains2:SetPosition(38, 20, 25)
	menu_scene.curtains2:SetScale(0.40)
	root:AddChild(menu_scene.curtains2)

	for i=1,#menu_scene.character1.otherSprites do
		root:AddChild(menu_scene.character1.otherSprites[i])
	end

	--背景观众
	local audience = InitAudiences(material)
	menu_scene.audience = audience
	menu_scene.audience.node = Node:Create()
	root:AddChild(menu_scene.audience.node)
	for i=4, 1, -1 do
		menu_scene.audience.node:AddChild(audience[i])
	end
	for i=5, 8 do
		menu_scene.audience.node:AddChild(audience[i])
	end

	--气泡
	InitBubbles()
	root:AddChild(menu_scene.bubble_manager)

	-- 调度器例子
	local id = 0
	local ScheduleUpdate = function (dt)
		-- CameraUpdate()
		GameUpdate(dt)
	end
	-- 注册调度器
	id = Schedule:GetInstance():RegisterScriptFunc(ScheduleUpdate, 0, false)

	-- -- 消息系统例子
	-- -- 注册消息
	-- local MessageFunc = function (msg)
	-- 	Print("MessageFunc: type ID = %d", msg.type_ID)
	-- 	--id = Schedule:GetInstance():RegistaerScriptFunc(ScheduleUpdate, 0, false)
	-- end
	-- local message_pump = MessagePump:GetInstance()
	-- -- 添加消息类型
	-- message_pump:AddMessageToSystem(217)
	-- -- 注册消息响应
	-- message_pump:RegisterScriptFunc(217, MessageFunc)
	-- --发送消息
	-- local msg = Message:Create(217)
	-- msg.f_timer_ = 5
	-- message_pump:SendMessage(msg)
	

	-- 摄像机
	local eye = Vec4Make(0.0, 0.0, 160, 1.0)
	local look_at = Vec4Make(0, 0, 0, 1)
	local up = Vec4Make(0, 1, 0, 0)
	g_camera = CameraClass:Create(eye, look_at, up)
	local aspect = GLState:GetInstance():GetViewSize().width / GLState:GetInstance():GetViewSize().height
	g_camera:SetPrespective(50.0, aspect, 0.1, 700.0)
	GLState:GetInstance():PushCamera(g_camera)

	-- 光源
	g_directional_light = Light:Create(LIGHT_Point)
	g_directional_light:Translation(Vec3Make(0, 0 , 100))
	g_directional_light.LightType = LIGHT_Directional
	g_directional_light.direction = Vec3Make(0, 0, -5)
	g_directional_light.power = true
	g_directional_light.b_long_range_light = true
	g_directional_light.position = Vec4Make(20, 0, 5, 1)
	g_directional_light.diffuse = C4f(1.0, 1.0, 1.0, 1.0)
	g_directional_light.ambient = C4f(1.0, 1.0, 1.0, 1.0)
	g_directional_light.specular = C4f(1.0, 1.0, 1.0, 1.0)
	GLState:GetInstance():GetLightManage():AddObject(g_directional_light)
end