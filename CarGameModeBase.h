// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CarGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class HIGHWAYGAME_API ACarGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:

   virtual void BeginPlay() override;

private:

   //Varibles


	
};
