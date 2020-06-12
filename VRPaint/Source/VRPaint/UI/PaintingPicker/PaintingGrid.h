// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/UniformGridPanel.h"
#include "Components/SizeBox.h"
#include "PaintingGrid.generated.h"

/**
 * 
 */
UCLASS()
class VRPAINT_API UPaintingGrid : public UUserWidget
{
	GENERATED_BODY()


public:
	UFUNCTION(BlueprintCallable)
	void AddPainting();
	

protected:
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta = (BindWidget))
	UUniformGridPanel* PaintingGrid;

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UUserWidget> GridCardClass;

};
