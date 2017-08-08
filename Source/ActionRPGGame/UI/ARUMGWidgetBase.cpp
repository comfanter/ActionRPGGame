// Fill out your copyright notice in the Description page of Project Settings.

#include "ARUMGWidgetBase.h"
#include "ARUIAbilityManagerComponent.h"
#include "ARPlayerController.h"



void UARUMGWidgetBase::NativePreConstruct()
{
	if (AARPlayerController* MyPC = Cast<AARPlayerController>(GetOwningPlayer()))
	{
		OwningComponent = MyPC->UIAbilityManagerComponent;
		UIComponent = MyPC->UIComponent;
	}
	Super::NativePreConstruct();
}
void UARUMGWidgetBase::NativeConstruct()
{
	if (AARPlayerController* MyPC = Cast<AARPlayerController>(GetOwningPlayer()))
	{
		OwningComponent = MyPC->UIAbilityManagerComponent;
		UIComponent = MyPC->UIComponent;
	}
	Super::NativeConstruct();
}