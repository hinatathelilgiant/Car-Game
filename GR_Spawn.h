// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "GR_Spawn.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HIGHWAYGAME_API UGR_Spawn : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGR_Spawn();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
  

//    UPROPERTY(EditDefaultsOnly, Category = "Spawn")
//    TSubclassOf<class AGameRoad> GameRoadClass;

   //void SpawnGameRoad();
		
};
