local GameplayStatics=import'GameplayStatics';
local KismetMathLibrary=import'KismetMathLibrary';

local enemy = {}

local AttackSpeed = 200.0

function enemy:ReceiveBeginPlay()
    self.bCanEverTick = true
    self.name = 'enemy'
    self.playerBpClass = slua.loadClass("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter.ThirdPersonCharacter")
    self.Super:ReceiveBeginPlay()
end

function enemy:ReceiveEndPlay(reason)
    self.Super:ReceiveEndPlay()
end

function enemy:ReceiveTick(dt)
    local AThirdPerson = GameplayStatics.GetActorOfClass(self, self.playerBpClass)
    if AThirdPerson == nil then
        -- print("Error：not find ThirdPersonCharacter")
        return
    end
    local ThirdPersonLocation = AThirdPerson:K2_GetActorLocation()
    local EnemyLocation = self:K2_GetActorLocation()
    local Direction = ThirdPersonLocation - EnemyLocation
    local DeltaAttackSpeed = dt * AttackSpeed

    KismetMathLibrary.Vector_Normalize(Direction, 0.0001)
    local NewLocation = Direction * DeltaAttackSpeed + EnemyLocation

    self:K2_SetActorLocation(NewLocation, false, nil, false)
end  

function enemy:ReceiveActorBeginOverlap(OtherActor)
    if not slua.isValid(OtherActor) then
        self:K2_DestroyActor()
        return
    end
    if OtherActor.name == 'player' then
        local AThirdPerson = GameplayStatics.GetActorOfClass(self, self.playerBpClass)
        AThirdPerson.Health = AThirdPerson.Health - 1
        self:K2_DestroyActor()
    end
    if OtherActor.name == 'bullet' then
        self:K2_DestroyActor()
    end
end
return Class(nil, nil, enemy)
