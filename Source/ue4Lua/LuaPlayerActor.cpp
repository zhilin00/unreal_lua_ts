// Fill out your copyright notice in the Description page of Project Settings.


#include "LuaPlayerActor.h"

ALuaPlayerActor::ALuaPlayerActor() {
	LuaFilePath = "MyLuaActor";
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.SetTickFunctionEnable(true);
	bool tickcheck = IsActorTickEnabled();

}