// Fill out your copyright notice in the Description page of Project Settings.


#include "GR_Spawn.h"
#include "GameRoad.h"

// Sets default values for this component's properties
UGR_Spawn::UGR_Spawn()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGR_Spawn::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UGR_Spawn::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

// void UGR_Spawn::SpawnGameRoad()
// {
// 	FVector Location = Spawn->GetComponentLocation();
// 	FRotator Rotation = Spawn->GetComponentRotation();
// 	FActorSpawnParameters info;


// }

