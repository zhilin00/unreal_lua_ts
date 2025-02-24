local KismetMathLibrary = import 'KismetMathLibrary'
local KismetSystemLibrary = import 'KismetSystemLibrary'
local GameplayStatics = import "GameplayStatics"
local player = {}
local cd = 0.1

function player:ReceiveBeginPlay()
    self.bCanEverTick = true
    self.name = 'player'
    self.Health = 1
    self.timer = 0
    self.pressed = false
    self.isDead = false
    self.world = self:GetWorld()
    self.Super:ReceiveBeginPlay()
end

function player:ReceiveTick(dt)
    if self.Health <= 0 then
        self:K2_DestroyActor()
        return
    end

    if self.timer > cd then
        local ShootingLocation = self:K2_GetActorLocation() + FVector(30, 10, 30)
        local PlayerForwardDirection = self:K2_GetActorRotation()
        self:Shoot(ShootingLocation, PlayerForwardDirection)
        self.timer = 0
    end

    if self.pressed then
        self.timer = self.timer + dt
    end        
end

function player:Shoot(ShootingLocation, PlayerForwardDirection)
    local SpawnClass = slua.loadClass("/Game/ThirdPersonCPP/Blueprints/LuaVersion/LuaBulletBP.LuaBulletBP")
    if not SpawnClass then
        print("Error: Failed to load bullet class!")
        return
    end

    for yaw = -6, 7 do
        for pitch = -3, 4 do
            local Rotator = FRotator(pitch * 1.5, yaw * 1.5, 0)
            local speedRotator = KismetMathLibrary.ComposeRotators(Rotator, PlayerForwardDirection)
            local speedVector = KismetMathLibrary.Conv_RotatorToVector(speedRotator)
            local actor = self.world:SpawnActor(SpawnClass, ShootingLocation, nil, nil)
            if actor then
                actor.bulletSpeed = KismetMathLibrary.Multiply_VectorFloat(speedVector, 1600)
                actor:K2_SetActorRotation(speedRotator, false, nil, false)
                actor:SetOwner(self)
            end
        end
    end
end

function player:Fire_Pressed()
    self.pressed = true
end

function player:Fire_Released()
    self.pressed = false
end

function player:ReceiveActorBeginOverlap(OtherActor)
--     if OtherActor.name == 'bullet' then
--         return
--     end
--     print('player die from hit')
--     self:K2_DestroyActor()
end

return Class(nil, nil, player)