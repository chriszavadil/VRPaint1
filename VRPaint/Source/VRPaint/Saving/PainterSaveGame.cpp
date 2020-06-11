// Fill out your copyright notice in the Description page of Project Settings.


#include "PainterSaveGame.h"
#include "VRPaint/Stroke.h"

UPainterSaveGame * UPainterSaveGame::Create()
{
	USaveGame* NewSaveGame = UGameplayStatics::CreateSaveGameObject(StaticClass());
	return Cast<UPainterSaveGame>(NewSaveGame);
}

bool UPainterSaveGame::Save()
{
	return UGameplayStatics::SaveGameToSlot(this, TEXT("Test"), 0);
}

UPainterSaveGame * UPainterSaveGame::Load()
{
	return Cast<UPainterSaveGame>(UGameplayStatics::LoadGameFromSlot(TEXT("Test"), 0));
}

void UPainterSaveGame::SerializedFromWorld(UWorld * World)
{	
	// Clear Array
	// Iterates over all Strokes and Serialize(Store class type in array)
	Strokes.Empty();
	for (TActorIterator<AStroke> StrokeItr(World); StrokeItr; ++StrokeItr)
	{

		Strokes.Add(StrokeItr->SerializedToStruct());
	}
}

void UPainterSaveGame::DeserializeTowWorld(UWorld * World)
{
	ClearWorld(World);
	for (FStrokeState StrokeState : Strokes)
	{
		AStroke::SpawnAndDeserializeFromStruct(World, StrokeState);
	}
	
}

void UPainterSaveGame::ClearWorld(UWorld * World)
{
	for (TActorIterator<AStroke> StrokeItr(World); StrokeItr; ++StrokeItr)
	{
		StrokeItr->Destroy();
	}
}
