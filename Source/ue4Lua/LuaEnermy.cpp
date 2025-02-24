// Fill out your copyright notice in the Description page of Project Settings.


#include "LuaEnermy.h"

ALuaEnermy::ALuaEnermy() {
	LuaFilePath = "LuaEnemyActor";
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.SetTickFunctionEnable(true);
}

void ALuaEnermy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}