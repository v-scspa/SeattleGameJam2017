// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Customer.generated.h"

UENUM()
enum class EConTactic : uint8
{
	SweetTalk,
	Insult,
	Upsell
};

UENUM()
enum class ECustomerType : uint8
{
	Raider,
	Mutant
};

/**
 * 
 */
UCLASS()
class SEATTLEGAMEJAM2017_API UCustomer : public UDataAsset
{
	GENERATED_BODY()

public:

	void Initialize();

	UFUNCTION(BlueprintCallable, Category = "Customer")
	void ProcessConTactic(EConTactic UsedConTactic);

	UFUNCTION(BlueprintCallable, Category = "Customer")
	EConTactic GetPreferredConTactic();
	UFUNCTION(BlueprintCallable, Category = "Customer")
	void SetPreferredConTactic(EConTactic NewPreferredConTactic);
	EConTactic PreferredConTactic;

	UFUNCTION(BlueprintCallable, Category = "Customer")
	EConTactic GetHatedConTactic();
	UFUNCTION(BlueprintCallable, Category = "Customer")
	void SetHatedConTactic(EConTactic NewHatedConTactic);
	EConTactic HatedConTactic;

	UFUNCTION(BlueprintCallable, Category = "Customer")
	ECustomerType GetCustomerType();
	UFUNCTION(BlueprintCallable, Category = "Customer")
	void SetCustomerType(ECustomerType NewCustomerType);
	ECustomerType CustomerType;

	UFUNCTION(BlueprintCallable, Category = "Customer")
	int32 GetCustomerNumber();
	UFUNCTION(BlueprintCallable, Category = "Customer")
	void SetCustomerNumber(int32 NewCustomerNumber);
	int32 CustomerNumber;

	UFUNCTION(BlueprintCallable, Category = "Customer")
	float GetCustomerAngerRating();
	UFUNCTION(BlueprintCallable, Category = "Customer")
	void SetCustomerAngerRating(float NewCustomerAngerRating);
	float CustomerAngerRating;
};
