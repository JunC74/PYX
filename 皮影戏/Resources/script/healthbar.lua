HealthBar = {
	width = 50,
	height = 5,
	sprite = nil, 
	bg_sprite = nil,
	bar_sprite = nil,
	maxValue = 100,
	value = 100,
}
HealthBar.__index = HealthBar

-- @brief 创建血槽
-- @param width 	宽
-- @param height 	高
-- @param anchor_x	x轴锚点
-- @param anchor_y	y轴锚点
-- @param max_value	最大值
-- @param bar_tex	能量的图片
-- @param bg_tex	背景图片

function HealthBar:New(width, height, anchor_x, anchor_y, max_value, bar_tex, bg_tex)
	-- body
	local healthbar_self = {}
	setmetatable(healthbar_self, HealthBar)

	healthbar_self.sprite = Node:Create()

	local texture = TextureLoader:GetInstance():LoadTexture2D(bar_tex)
	local barModel = GeometryModel:CreateSquare(width, height, anchor_x, anchor_y, texture)
	healthbar_self.bar_sprite = Sprite:CreateWithModel(barModel)
	healthbar_self.sprite:AddChild(healthbar_self.bar_sprite)

	local bg_texture = TextureLoader:GetInstance():LoadTexture2D(bg_tex)
	local bg_model = GeometryModel:CreateSquare(width, height, anchor_x, anchor_y, bg_texture)
	healthbar_self.bg_sprite = Sprite:CreateWithModel(bg_model)
	healthbar_self.sprite:AddChild(healthbar_self.bg_sprite)
	healthbar_self.width = width
	healthbar_self.height = height
	healthbar_self.maxValue = max_value
	healthbar_self.value = max_value

	healthbar_self.sprite:SetShaderProgram(ShaderProgramCache:GetInstance():GetShaderForKey("position_tex"))

	return healthbar_self
end

function HealthBar:SetPosition(x, y, z)
	-- body
	self.sprite:SetPosition(x, y, z)
end

function HealthBar:GetSprite()
	-- body
	return self.sprite
end

function HealthBar:GetPosition()
	-- body
	return self.sprite:GetPosition()
end

function HealthBar:AddTo( parents )
	-- body
	if parents ~= nil then
		parents:AddChild(self.sprite)
	end
end

function HealthBar:SetVisible( state)
	self.sprite:SetVisible(state)
end

function HealthBar:SetValue( value )
	if value < 0 then value = 0 end
	if value > self.maxValue then value = self.maxValue end
	
	if value ~= self.value then
		self.value = value
		local scale = self.value / self.maxValue
		self.bar_sprite:SetScaleX(scale)
	end
end
