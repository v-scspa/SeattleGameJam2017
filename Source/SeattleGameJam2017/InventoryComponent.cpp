// Fill out your copyright notice in the Description page of Project Settings.

#include "InventoryComponent.h"

#include "InventoryRandomizer.h"
#include "InventoryItem.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	Randomizer = NewObject<UInventoryRandomizer>();
	if ( !ensure(Randomizer) ) { return; }

	for (int32 index = 0; index < DefaultInventorySize; index++) {
		Items.Add(Randomizer->GetNewItem());
	}
}


TArray<UInventoryItem*> UInventoryComponent::GetItems() const
{
	return Items;
}

