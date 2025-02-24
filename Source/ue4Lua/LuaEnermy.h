// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LuaActor.h"
#include "LuaEnermy.generated.h"

/**
 * 
 */
UCLASS()
class UE4LUA_API ALuaEnermy : public ALuaActor
{
	GENERATED_BODY()
	ALuaEnermy();
public:
	virtual void Tick(float DeltaTime) override;
};
