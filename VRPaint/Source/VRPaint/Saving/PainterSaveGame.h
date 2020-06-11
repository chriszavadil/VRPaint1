// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h"
#include "PainterSaveGame.generated.h"


// Data Save Struct
USTRUCT()
struct FStrokeState
{
	GENERATED_BODY()

	UPROPERTY()
	TSubclassOf<class AStroke> Class;

	UPROPERTY()
	TArray<FVector> ControlPoints;
};

/**
 * 
 */
UCLASS()
class VRPAINT_API UPainterSaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	static UPainterSaveGame* Create();
	bool Save();
	static UPainterSaveGame* Load();

	// Declaring our set states
	void SetState(FString NewState) { State = NewState; }
	FString GetState() const { return State; }

	// Serializing our Save State
	void SerializedFromWorld(UWorld* World);
	void DeserializeTowWorld(UWorld* World);

private:
	void ClearWorld(UWorld* World);
	// State
	UPROPERTY()
	FString State;

	UPROPERTY()
	TArray<FStrokeState> Strokes;

};
