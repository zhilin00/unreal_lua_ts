local GameplayStatics=import'GameplayStatics';
local KismetMathLibrary=import'KismetMathLibrary';

local luaMgr=  {}

local spawnInterval = 0.3
local spawnNum = 100
local DefaultScale = FVector(1.0, 1.0, 1.0)
local DefaultRotation = FQuat(0.0, 0.0, 0.0, 1.0)

function luaMgr:ReceiveBeginPlay()
    self.bCanEverTick = true
    self.spawnTimer = 0
    self.enemyBpClass = slua.loadClass("/Game/ThirdPersonCPP/Blueprints/LuaVersion/LuaEnermyBP.LuaEnermyBP")
    self.Super:ReceiveBeginPlay()
end

function luaMgr:ReceiveEndPlay(reason)
    self.Super:ReceiveEndPlay()
end

function luaMgr:ReceiveTick(dt)
    local world = self:GetWorld()
    if self.spawnTimer >= spawnInterval then
        self.spawnTimer = 0
        for spawnCnt = 1, spawnNum do
            local SpawnClass = self.enemyBpClass
            local p = FVector(math.random(-10000, 0), math.random(-10000, 0), math.random(-100, 300))
            local actor = world:SpawnActor(SpawnClass, p, nil, nil)
        end
    end
    self.spawnTimer = self.spawnTimer + dt
end

return Class(nil, nil, luaMgr)