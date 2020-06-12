// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HandControllerBase.h"
#include "Components/WidgetInteractionComponent.h"
#include "InputCoreTypes.h"
#include "UIPointerHandController.generated.h"

/**
 * 
 */
UCLASS()
class VRPAINT_API AUIPointerHandController : public AHandControllerBase
{
	GENERATED_BODY()

public:
	AUIPointerHandController();

	void TriggerPressed() override;
	void TriggerReleased() override;

private:
	UPROPERTY(VisibleAnywhere)
	UWidgetInteractionComponent*  Pointer;

	
};
