// Fill out your copyright notice in the Description page of Project Settings.


#include "GameRoad.h"


// Sets default values
AGameRoad::AGameRoad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = SceneComponent;

	Road1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftRoad"));
	Road1->SetupAttachment(RootComponent);
	Road2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MiddleRoad"));
	Road2->SetupAttachment(RootComponent);
	Road3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightRoad"));
	Road3->SetupAttachment(RootComponent);

	LeftWall = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("leftWall"));
	LeftWall->SetupAttachment(RootComponent);
	RightWall = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightWall"));
	RightWall->SetupAttachment(RootComponent);

	// SpawnPoint = CreateDefaultSubobject<UGR_Spawn>(TEXT("SpawnPoint")); 
	// SpawnPoint->SetupAttachment(RootComponent);

    
}


// Called when the game starts or when spawned
void AGameRoad::BeginPlay()
{
	Super::BeginPlay();

    
}

// Called every frame
void AGameRoad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



}
