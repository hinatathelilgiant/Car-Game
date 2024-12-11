// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameRoad.generated.h"

UCLASS()
class HIGHWAYGAME_API AGameRoad : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameRoad();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:

   //Components
   UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = true))
   USceneComponent* SceneComponent;

   // main road static mesh
   UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = true))
   UStaticMeshComponent* Road1;
   UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = true))
   UStaticMeshComponent* Road2;
   UPROPERTY(VisibleAnywhere, BlueprintReadOnly, category = "Components", meta = (AllowPrivateAccess = true))
   UStaticMeshComponent* Road3;

   // wall static mesh
   UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = true))
   UStaticMeshComponent* LeftWall;
   UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = true))
   UStaticMeshComponent* RightWall;
 
protected:

   // UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components") 
   // class UGR_Spawn* SpawnPoint;

  
public:
   //Functions
   
   

};
