---@type EnermyPrefab_C
local M = UnLua.Class()
local AttackSpeed = 200.0

function M:ReceiveTick(DeltaSeconds)
    local AThirdPerson = UE.UGameplayStatics.GetActorOfClass(self, self.ThirdPersonClassRef)
    if AThirdPerson == nil then
        return
    end

    local ThirdPersonLocation = AThirdPerson:K2_GetActorLocation()
    local EnemyLocation = self:K2_GetActorLocation()
    local Direction = ThirdPersonLocation - EnemyLocation
    local DeltaAttackSpeed = DeltaSeconds * AttackSpeed

    UE.UKismetMathLibrary.Vector_Normalize(Direction, 0.0001)
    local NewLocation = Direction * DeltaAttackSpeed + EnemyLocation

    self:K2_SetActorLocation(NewLocation, false, nil, false)
end

function M:ReceiveActorBeginOverlap(OtherActor)
    if OtherActor:Cast(self.ThirdPersonClassRef) or OtherActor:Cast(self.BulletPrefabRefClassRef) then
        self:K2_DestroyActor()
    end
end

return M
