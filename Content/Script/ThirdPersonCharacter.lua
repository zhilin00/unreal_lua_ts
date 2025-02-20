---@type ThirdPersonCharacter_C

local FVector = UE.FVector()
local FRotator = UE.FRotator()
local AlwaysSpawn = UE.ESpawnActorCollisionHandlingMethod.AlwaysSpawn
local M = UnLua.Class()
local Health = 0
local TimerHandle
local this
local World

function M:ReceiveBeginPlay()
    World = self:GetWorld()
    this = self
    TimerHandle = UE.UKismetSystemLibrary.K2_SetTimerDelegate({self, self.OnTimerTick}, 0.1, true)
    UE.UKismetSystemLibrary.K2_PauseTimerHandle(self, TimerHandle)
end

function M:LHandleShotgun(ShootingPoint, PlayerForwardDirection)
    local SpawnClass = self.BulletPrefabClassRef
    for i = -3, 4 do
        for j = -6, 7 do
            local Rotator = FRotator(i, 1.5*j, 0.0)
            local NewRotator = UE.UKismetMathLibrary.ComposeRotators(Rotator, PlayerForwardDirection)
            local NewVector = UE.UKismetMathLibrary.Conv_RotatorToVector(NewRotator)
            local obj = World:SpawnActor(SpawnClass, ShootingPoint, AlwaysSpawn, self, self, "BulletPrefab")
            obj.Speed = UE.UKismetMathLibrary.Multiply_VectorFloat(NewVector, 1600)
        end
    end
end

function M:OnTimerTick()
    local ShootingLocation = this:K2_GetActorLocation() + FVector(-30, 10, 30)
    local ShootingPoint = UE.UKismetMathLibrary.Conv_VectorToTransform(ShootingLocation)
    local PlayerForwardDirection = this:K2_GetActorRotation()
    self:LHandleShotgun(ShootingPoint, PlayerForwardDirection)
end

function M:Fire_Pressed()
    UE.UKismetSystemLibrary.K2_UnPauseTimerHandle(self, TimerHandle)
end

function M:Fire_Released()
    UE.UKismetSystemLibrary.K2_PauseTimerHandle(self, TimerHandle)
end

function M:ReceiveTick(DeltaTime)
end

function M:ReceiveActorBeginOverlap(OtherActor)
    if OtherActor:Cast(self.EnemyPrefabClassRef) then
        Health = Health - 1
        if Health <= 0 then
            self:K2_DestroyActor()
        end
    end
end

return M