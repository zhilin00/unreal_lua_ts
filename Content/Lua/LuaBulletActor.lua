local GameplayStatics=import'GameplayStatics';
local KismetMathLibrary=import'KismetMathLibrary';

local bullet = {}


function bullet:ReceiveBeginPlay()
    self.bCanEverTick = true
    self.name = 'bullet'
    self.bulletSpeed = FVector(200.0, 0, 0)
    self:SetLifeSpan(1)
    self.Super:ReceiveBeginPlay()
end

function bullet:ReceiveEndPlay(reason)
    self.Super:ReceiveEndPlay()
end

function bullet:ReceiveTick(dt)
    local oldLocation = self:K2_GetActorLocation()
    local newLocation = self.bulletSpeed * dt + oldLocation
    self:K2_SetActorLocation(newLocation, false, nil, false)
end  

function bullet:ReceiveActorBeginOverlap(OtherActor)
    if not slua.isValid(OtherActor) then
        self:K2_DestroyActor()
        return
    end
    if OtherActor.name == 'enemy' then
        self:K2_DestroyActor()
    end
end
return Class(nil, nil, bullet)
