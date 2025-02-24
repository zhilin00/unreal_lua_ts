// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "unreal_puertsCharacter.generated.h"

UCLASS(config=Game)
class Aunreal_puertsCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
public:
	Aunreal_puertsCharacter();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

public:

	/** Resets HMD orientation in VR. */
	void OnResetVR();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "MoveForward", ScriptName = "MoveForward", Keywords = "test"), Category = "Test")
	/** Called for forwards/backward input */
	void MoveForward(float Value);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "MoveRight", ScriptName = "MoveRight", Keywords = "test"), Category = "Test")
	/** Called for side to side input */
	void MoveRight(float Value);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "TurnAtRate", ScriptName = "TurnAtRate", Keywords = "test"), Category = "Test")
	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "LookUpAtRate", ScriptName = "LookUpAtRate", Keywords = "test"), Category = "Test")
	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "SetupPlayerInputComponent", ScriptName = "SetupPlayerInputComponent", Keywords = "test"), Category = "Test")
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};

