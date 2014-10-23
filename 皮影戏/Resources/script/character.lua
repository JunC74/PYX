Character = {
	sprite = nil,
	spriteIndex = 1,
	otherSprites = {},
	destination = nil,
	speed = Vec3Make(0, 0, 0),
	isMoving = false,
	health = 100,
	damage = 10,
	defence = 5,
	position = Vec3Make(0, 0, 0),
	STATUS = {"NO_ACTION", "ACTION_PLAYING", "ACTION_FINISHED"},
	action_status = "NO_ACTION",
	action_type = {move = 0, attack = 1, die = 2, speak = 3, attacked = 4, dead = 5}
}
Character.__index = Character

function Character:New(action_sprite)
	-- body
	local character_self = {}
	setmetatable(character_self, Character)
	character_self.sprite = nil
	character_self.otherSprites = {}
	character_self.destination = nil
	character_self.STATUS = {"NO_ACTION", "ACTION_PLAYING", "ACTION_FINISHED"}
	character_self.action_status = "NO_ACTION"
	character_self.speed = Vec3Make(0, 0, 0)
	character_self.health = 100
	character_self.damage = 10
	character_self.defence = 5

	character_self.position = action_sprite:GetPosition()
	character_self:AddSprite(action_sprite)
	character_self:SelectSprite(character_self.otherSprites[1], 1)
	character_self.destination = character_self.position
	character_self.speed = Vec3Make(1, 0, 0)
	character_self.isMoving = false
	character_self.action_status = character_self.STATUS[1]
	character_self.action_type = {move = 0, attack = 1, die = 2}

	return character_self
end

function Character:AddSprite(sprite)
	sprite:SetPosition(self.position)
	sprite:Pause()
	sprite:SetVisible(false)
	table.insert(self.otherSprites, sprite)
	-- Print("Length: %d", #self.otherSprites)
	-- self.otherSprites[#self.otherSprites + 1] = sprite
end

function Character:SetPosition(newPosition)
	-- body
	self.position = newPosition
	self.sprite:SetPosition(newPosition)
end

function Character:SelectSprite(select_sprite, spriteIndex)
	if self.sprite ~= nil then
		self.position = self.sprite:GetPosition()
		self.sprite:SetVisible(false)
		select_sprite:SetPosition(self.position)
	end
	self.spriteIndex = spriteIndex
	self.sprite = select_sprite
	self.sprite:SetPosition(self.position)
	self.sprite:SetVisible(true)
end

function Character:Move()
	-- body
	self:SelectSprite(self.otherSprites[self.action_type.move], self.action_type.move)
	if self.sprite:IsPause() then
		self.sprite:SetPlayCount(0)
		self.sprite:Recover()
	end
	self.isMoving = true
end

function Character:MoveLeft(offset, time)
	-- body
	local frames = time * 20
	local moveSpeed = offset / frames
	self:SetSpeed(Vec3Make(moveSpeed, 0, 0))
	self:SetDestination(Vec3Make(self.position.x - offset, self.position.y, self.position.z))
	self:Move()
end

function Character:MoveRight(offset, time)
	-- body
	local frames = time * 20
	local moveSpeed = offset / frames
	self:SetSpeed(Vec3Make(moveSpeed, 0, 0))
	self:SetDestination(Vec3Make(self.position.x + offset, self.position.y, self.position.z))
	self:Move()
end

function Character:MoveUp(offset, time)
	-- body
	local frames = time * 20
	local moveSpeed = offset / frames
	self:SetSpeed(Vec3Make(0, moveSpeed, 0))
	self:SetDestination(Vec3Make(self.position.x, self.position.y + offset, self.position.z))
	self:Move()
end

function Character:MoveDown(offset, time)
	-- body
	local frames = time * 20
	local moveSpeed = offset / frames
	self:SetSpeed(Vec3Make(0, moveSpeed, 0))
	self:SetDestination(Vec3Make(self.position.x, self.position.y - offset, self.position.z))
	self:Move()
end

function Character:MoveToDestination(time)
	-- body
	local x = math.abs(self.destination.x - self.position.x)
	local y = math.abs(self.destination.y - self.position.y)
	local z = math.abs(self.destination.z - self.position.z)
	local frames = time * 20
	local moveSpeed = Vec3Make(x / frames, y / frames, z / frames)
	self:SetSpeed(moveSpeed)
	self:Move()
end



function Character:ScheduleUpdate()
	self.schedule_id = Schedule:GetInstance():RegisterScriptFunc(
		function(dt)
			self:Update(dt)
		end, 
		0, 
		false)
end

function Character:UnScheduleUpdate()
	Schedule:GetInstance():UnRegisterForTimeing(self.schedule_id)
end

function Character:IsOnDestination()
	-- body
	local a = Vec3Make(
				self.destination.x - self.sprite:GetPosition().x,
				self.destination.y - self.sprite:GetPosition().y,
				self.destination.z - self.sprite:GetPosition().z
			)
	local b = Vec3Make(
			math.abs(self.destination.x - self.sprite:GetPosition().x),
			math.abs(self.destination.y - self.sprite:GetPosition().y),
			math.abs(self.destination.z - self.sprite:GetPosition().z)
		)
	local x = 1
	local y = 1
	local z = 1
	if math.abs(self.destination.x - self.sprite:GetPosition().x) > 0.0001 then
		self.speed.x = math.abs(self.speed.x) * (a.x / b.x)
	else 
		x = 0
	end
	if math.abs(self.destination.y - self.sprite:GetPosition().y) > 0.0001 then
		self.speed.y = math.abs(self.speed.y) * (a.y / b.y)
	else 
		y = 0
	end
	if math.abs(self.destination.z - self.sprite:GetPosition().z) > 0.0001 then
		self.speed.z = math.abs(self.speed.z) * (a.z / b.z)
	else 
		z = 0
	end
	if x + y + z == 0 then
		return true
	end
	return false
end

function Character:Update(dt)
	if self.sprite ~= nil then

		if self:IsOnDestination() == true then
			self.isMoving = false
			if self.spriteIndex == self.action_type.move and
				self.sprite:IsPause() == false then
				self.sprite:Pause()
			end
		end
		if self.isMoving == true then
			self.sprite:SetTranslation(self.speed)
			self.position = self.sprite:GetPosition()
		end

		if self.action_status == self.STATUS[2] then
			if self.sprite:IsPause() == true then
				self.action_status = self.STATUS[3]
			end
		end
		
	end
end

function Character:PlaySprite(playCount)
	self.sprite:SetPlayCount(playCount)
	self.sprite:Recover()
	Print("Character:PlaySprite")
	self.action_status = "ACTION_PLAYING"
end

function Character:SetDestination(newDestination)
	-- body
	self.destination = newDestination
end

function Character:SetSpeed(speed)
	self.speed = speed
end

function Character:Attack()
	-- body
	if self.spriteIndex ~= self.action_type.attack then
		self:SelectSprite(self.otherSprites[self.action_type.attack], self.action_type.attack)
		self:PlaySprite(1)
	end
end

function Character:Die()
	-- body
	if self.spriteIndex ~= self.action_type.die then
		self:SelectSprite(self.otherSprites[self.action_type.die], self.action_type.die)
		self:PlaySprite(1)
	end
	
end

function Character:Dead()
	-- body
	if self.spriteIndex ~= self.action_type.dead then
		self:SelectSprite(self.otherSprites[self.action_type.dead], self.action_type.dead)
		self:PlaySprite(1)
	end
end

function Character:IsDead()
	-- body
	if self.spriteIndex == self.action_type.die then
	
		if self.action_status == self.STATUS[3] then
			Print(self.action_status)
			return true
		end
	end
	return false
end