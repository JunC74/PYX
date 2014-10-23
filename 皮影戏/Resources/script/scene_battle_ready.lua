battle_status = {
	id = nil,
	enemy = {},
	scene_manager = nil,
	battle_turn = 1,
	hitAvailable = false,
	pause = false
}

testAttention = 45--test

function battle_status:wukongAction()
	local attention = menu_scene.attention_bar.value
	local wukong = menu_scene.character1
	local action_index = 8
	if attention < 30 then
		action_index = wukong.action_type.attack
		Print("battle_status:wukongAction() : action_index = %d",
			action_index)
		wukong:SelectSprite(wukong.otherSprites[action_index], 
			action_index)
		wukong.action_status = Character.STATUS[2]
		wukong:PlaySprite(1)
		wukong.damage = 10
	elseif attention < 60 then
		action_index = wukong.action_type.attacked1
		Print("battle_status:wukongAction() : action_index = %d",
			action_index)
		wukong:SelectSprite(wukong.otherSprites[action_index], 
			action_index)
		wukong.action_status = Character.STATUS[2]
		wukong:PlaySprite(1)
		wukong.damage = 15
	else
		action_index = wukong.action_type.attacked2
		Print("battle_status:wukongAction() : action_index = %d",
			action_index)
		wukong:SelectSprite(wukong.otherSprites[action_index], 
			action_index)
		wukong.action_status = Character.STATUS[2]
		wukong:PlaySprite(1)
		wukong.damage = 35
	end
end


--开始战斗
local is_collision = false
function battle_status:Update()
	-- body
	local enemy = self.enemy[1]
	local wukong = menu_scene.character1
	
	if self.pause == false then
		if enemy:IsOnDestination() == true then
			
			-- local MindController = Input:GetInstance():GetMindControl()
			-- local attention = MindController:GetData(DATA_ATTENTION)
			-- local blink = MindController:GetData(DATA_BLINK_STRENGTH)

			local keyboard = Input:GetInstance():GetKeyBoard()
			
			if keyboard:KeyDown(KEY_Up) then
				testAttention = testAttention + 2
			end
			if keyboard:KeyDown(KEY_Down) then
				testAttention = testAttention - 2
			end
			
			-- local blink = testAttention--Test
			local attention = testAttention--Test
		
			if menu_scene.healthbar.sprite:IsVisible() == false then
				menu_scene.healthbar:SetVisible(true)
			end
			if menu_scene.enemyhealth_bar.sprite:IsVisible() == false then
				menu_scene.enemyhealth_bar:SetVisible(true)
			end

			menu_scene.healthbar:SetValue(wukong.health)
			menu_scene.enemyhealth_bar:SetValue(enemy.health)


			local playTime = 3
			menu_scene.healthbar:SetValue(wukong.health)
			if wukong.health <= 0 then
				if wukong:IsDead() then
					--游戏结束
					Print("Game Over!!!")
					wukong:Dead()
					self.pause = true
				else
					wukong:Die()
				end
			elseif enemy.health <= 0 then
				--敌人死亡没有动画
				if enemy:IsDead() then
					Print("Enemy Died!!! Game Over!!!")
					enemy:Dead()
					self.pause = true
				else
					enemy:Die()
				end
			end

			if self.battle_turn == 1 then
				Print("wukong.action_status = %s", wukong.action_status)
				wukong.sprite:SetPlayTime(playTime)
				local wukong_damage = wukong.damage + attention / 10
				if wukong.action_status == Character.STATUS[1] then
					self:wukongAction()
					is_collision = false
					self.hitAvailable = true
				elseif wukong.action_status == Character.STATUS[2] then
					if enemy.sprite:Collision(wukong.sprite) then
						is_collision = true
					end
				elseif wukong.action_status == Character.STATUS[3] then
					--如果悟空打中敌人
					if is_collision == true then
						enemy.health = enemy.health - wukong_damage + enemy.defence
						Print("enemy.health: %d", enemy.health)
						Print("wukong_damage: %d", wukong_damage)
						self.hitAvailable = false
					end
					self.battle_turn = self.battle_turn * -1
					local stand_index = wukong.action_type.stand
					menu_scene.character1:SelectSprite(menu_scene.character1.otherSprites[stand_index], stand_index)
					wukong.action_status = Character.STATUS[1]
				end
			elseif self.battle_turn == -1 then
				Print("enemy.action_status = %s", enemy.action_status)
				if enemy.action_status == Character.STATUS[1] then
					is_collision = false
					enemy:Attack()
					self.hitAvailable = true
				elseif enemy.action_status == Character.STATUS[2] then
					if enemy.sprite:Collision(wukong.sprite) then
						--如果敌人打中悟空
						is_collision = true
					end
				elseif enemy.action_status == Character.STATUS[3] then
					if is_collision == true then
						wukong.health = wukong.health - enemy.damage + wukong.defence
						Print("wukong.health: %d", wukong.health)
						Print("enemy_damage: %d", enemy.damage)
						self.hitAvailable = false
					end
					self.battle_turn = self.battle_turn * -1
					local stand_index = enemy.action_type.stand
					enemy:SelectSprite(enemy.otherSprites[stand_index], stand_index)
					enemy.action_status = Character.STATUS[1]
				end
			end
		end

		for i=1,#self.enemy do
			if self.enemy[i] ~= nil then
				self.enemy[i]:Update(dt)
			end
		end
	end
end

function battle_status:CreateEnemy(action_sprite)
	-- body
	local enemy = Character:New(action_sprite)
	table.insert(self.enemy, enemy)
end

function battle_status:InitEnemy( )
	
	local material = Material:Create()
	material.ambient	= C4f(0.1, 0.1, 0.1, 1.0) 		
	material.diffuse	= C4f(0.8, 0.8, 0.8, 1.0)
	material.specular	= C4f(0.3, 0.3, 0.3, 1.0)
	material.emmissive	= C4f(0.0, 0.0, 0.0, 0.0)
	material.shininess	= 100

	--虾兵
	local action_xiabing = VDSModel:Create("Action/enemy_weapon/xiabing_walk.vds")
	action_xiabing:SetMaterial(material)
	local xiabing_sprite = Sprite:CreateWithModel(action_xiabing)
	xiabing_sprite:SetPosition(-41, -10, 26)
	xiabing_sprite:SetScale(0.1)
	
	local action_xiabing2 = VDSModel:Create("Action/enemy_weapon/xiabing_attack.vds")
	action_xiabing2:SetMaterial(material)
	local xiabing_sprite2 = Sprite:CreateWithModel(action_xiabing2)
	xiabing_sprite2:SetPosition(-41, -10, 26)
	xiabing_sprite2:SetScale(0.1)
	
	local action_xiabing3 = VDSModel:Create("Action/enemy_weapon/xiabing_die.vds")
	action_xiabing3:SetMaterial(material)
	local xiabing_sprite3 = Sprite:CreateWithModel(action_xiabing3)
	xiabing_sprite3:SetPosition(-41, -10, 26)
	xiabing_sprite3:SetScale(0.1)

	local action_xiabing4 = VDSModel:Create("Action/enemy_weapon/xiabing_dead.vds")
	action_xiabing4:SetMaterial(material)
	local xiabing_sprite4 = Sprite:CreateWithModel(action_xiabing4)
	xiabing_sprite4:SetPosition(-41, -10, 26)
	xiabing_sprite4:SetScale(0.1)

	local action_xiabing5 = VDSModel:Create("Action/enemy_weapon/xiabing_stand.vds")
	action_xiabing5:SetMaterial(material)
	local xiabing_sprite5 = Sprite:CreateWithModel(action_xiabing5)
	xiabing_sprite5:SetPosition(-41, -10, 26)
	xiabing_sprite5:SetScale(0.1)

	local action_xiabing6 = VDSModel:Create("Action/enemy_weapon/xiabing_attack1.vds")
	action_xiabing6:SetMaterial(material)
	local xiabing_sprite6 = Sprite:CreateWithModel(action_xiabing6)
	xiabing_sprite6:SetPosition(-41, -10, 26)
	xiabing_sprite6:SetScale(0.1)

	self:CreateEnemy(xiabing_sprite)
	self.enemy[1]:AddSprite(xiabing_sprite2)
	self.enemy[1]:AddSprite(xiabing_sprite3)
	self.enemy[1]:AddSprite(xiabing_sprite4)
	self.enemy[1]:AddSprite(xiabing_sprite5)
	self.enemy[1]:AddSprite(xiabing_sprite6)

	self.enemy[1]:SetPosition(Vec3Make(-41, -10, 26))
	self.enemy[1].sprite:SetVisible(false)
	self.enemy[1]:SetDestination(Vec3Make(-8, -10, 26))
	self.enemy[1].action_type.move = 1
	self.enemy[1].action_type.attack = 2
	self.enemy[1].action_type.die = 3
	self.enemy[1].action_type.dead = 4
	self.enemy[1].action_type.stand = 5
	self.enemy[1].action_type.attack1 = 6

	self.enemy[1].damage = 20
	self.enemy[1].health = 100

	for j=1, #self.enemy do
		for i=1, #self.enemy[j].otherSprites do
			self.scene_manager:AddChild(self.enemy[j].otherSprites[i])
		end
	end
end

function battle_status:Enter()
	-- body
	self.scene_manager = Node:Create()
	Root:GetInstance():GetNode():AddChild(self.scene_manager)

	self:InitEnemy()

	if self.enemy[1].sprite:IsVisible() == false then
		self.enemy[1].sprite:SetVisible(true)
	end

	self.id = Schedule:GetInstance():RegisterScriptFunc(function() 
			self:Update()
		end, 
		0, false)

	--敌人走到指定位置
	if self.enemy[1].spriteIndex == self.enemy[1].action_type.move then
		if self.enemy[1].isMoving == false then

			if self.enemy[1]:IsOnDestination() == false then
				self.enemy[1]:MoveToDestination(5)
			end
		end
	else
		self.enemy[1]:SelectSprite(self.enemy[1].otherSprites[self.enemy[1].action_type.move], self.enemy[1].action_type.move)
	end
end

function battle_status:Exit()
	Schedule:GetInstance():UnRegisterForTimeing(self.id)
	Root:GetInstance():GetNode():DeleteChild(self.scene_manager)
end