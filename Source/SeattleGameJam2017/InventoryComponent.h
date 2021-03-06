// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"

class UInventoryItem;
class UInventoryRandomizer;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SEATTLEGAMEJAM2017_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UInventoryComponent();

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	TArray<UInventoryItem*> GetItems() const;

	int32 SellItem(UInventoryItem* ItemToSell);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	int32 GetSelectedInventoryItem();
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void SetSelectedInventoryItem(int32 NewSelectedInventoryItem);
	int32 SelectedInventoryItem = 4;

private:
	UPROPERTY(EditDefaultsOnly, Category = "Inventory")
	int32 DefaultInventorySize = 3;

	UInventoryRandomizer* Randomizer = nullptr;
	TArray<UInventoryItem*> Items;
};
