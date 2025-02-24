local M = UnLua.Class()

local SpawnNum = 100
local SpawnCount = 0
local SpawnInterval = 0.3
local SpawnTimer = 0
local AlwaysSpawn = UE.ESpawnActorCollisionHandlingMethod.AlwaysSpawn
local FVector = UE.FVector()
local FTransform = UE.FTransform()
local FQuat = UE.FQuat()
local DefaultScale = FVector(1.0, 1.0, 1.0)
local DefaultRotation = FQuat(0.0, 0.0, 0.0, 1.0)

function M:ReceiveTick(DeltaSeconds)
  --[[  local World = self:GetWorld()

    local SpawnClass = self.SpawnEnemyClass



    local RandomPoint = FTransform()
    RandomPoint.Scale3D = DefaultScale
    RandomPoint.Rotation = DefaultRotation

    if SpawnTimer >= SpawnInterval then
        SpawnTimer = 0
        for spawnCnt = 1, SpawnNum do
            local x = math.random(-10000, 0)
            local y = math.random(-10000, 0)
            local z = math.random(-100, 300)
            RandomPoint.Translation = FVector(x,y,z)
            World:SpawnActor(SpawnClass, RandomPoint, AlwaysSpawn, self, self, "EnemyPrefab")
        end
    end
    SpawnTimer = SpawnTimer + DeltaSeconds]]
end

return M
