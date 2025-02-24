// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MySpawner.generated.h"

//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNotifyWithFloat, float, A);
//DECLARE_DYNAMIC_DELEGATE_OneParam(FNotifyWithString, FString, A);
//DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(FString, FNotifyWithStringRet, FString, A);
//DECLARE_DYNAMIC_DELEGATE_OneParam(FNotifyWithRefString, FString&, A);
//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FNotifyWithNothing);

UCLASS()
class UNREAL_PUERTS_API AMySpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMySpawner();

	//UPROPERTY()
		//FNotifyWithFloat NotifyWithFloat;

	UPROPERTY()
		float SpawnInterval;

	UPROPERTY()
		float SpawnTimer;

	UPROPERTY()
		int SpawnCnt;

	UPROPERTY()
		int SpawnNum;

public:
	UFUNCTION()
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UFUNCTION()
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
