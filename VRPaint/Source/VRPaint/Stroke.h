// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SplineMeshComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Saving/PainterSaveGame.h"
#include "Engine/World.h"
#include "Stroke.generated.h"

UCLASS()
class VRPAINT_API AStroke : public AActor
{
	GENERATED_BODY()
	
public:	
	AStroke();

	void Update(FVector CursorLocation);

	FStrokeState SerializedToStruct() const;
	static AStroke* SpawnAndDeserializeFromStruct(UWorld* World, const FStrokeState& StrokeState);


private:

	FTransform GetNextSegmentTransform(FVector CurrentLocation) const;

	FTransform GetNextJointTransform(FVector CurrentLocation) const;

	FVector GetNextSegmentScale(FVector CurrentLocation) const;
	FQuat GetNextSegmentRotation(FVector CurrentLocation) const;
	FVector GetNextSegmentLocation(FVector CurrentLocation) const;

	// Components
	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;

	// Primary Mesh
	UPROPERTY(VisibleAnywhere)
	UInstancedStaticMeshComponent* StrokeMeshes;

	// Gap filling mesh
	UPROPERTY(VisibleAnywhere)
	UInstancedStaticMeshComponent* JointMeshes;

	// State
	FVector PreviousCursorLocation;
	TArray<FVector> ControlPoints;



};
