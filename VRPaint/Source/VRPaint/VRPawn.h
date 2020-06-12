// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"
#include "Engine/World.h"
#include "HandControllerBase.h"
#include "VRPawn.generated.h"

UCLASS()
class VRPAINT_API AVRPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AVRPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void SetupPlayerInputComponent(UInputComponent * PlayerInputComponent) override;

private:

	void RightTriggerPressed() { if (RightPaintBrushHandController) RightPaintBrushHandController->TriggerPressed(); }
	void RightTriggerReleased() { if (RightPaintBrushHandController) RightPaintBrushHandController->TriggerReleased(); }
	
	void Save();
	void Load();

	// Config
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AHandControllerBase> PaintBrushHandControllerClass;

	// Components
	UPROPERTY(VisibleAnywhere)
	USceneComponent* VRRoot;

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* Camera;

	// References
	UPROPERTY()
	AHandControllerBase* RightPaintBrushHandController;
};
