---@type BulletPrefab_C
local M = UnLua.Class()

function M:ReceiveTick(DeltaTime)
    local NewLocation = self.Speed * DeltaTime + self:K2_GetActorLocation()
    self:K2_SetActorLocation(NewLocation, false, nil, false)
end

function M:ReceiveBeginPlay()
    self:SetLifeSpan(1.0)
end

function M:ReceiveActorBeginOverlap(OtherActor)
    if OtherActor:Cast(self.EnemyPrefabClassRef) then
        OtherActor:K2_DestroyActor()
    end
end

return M
