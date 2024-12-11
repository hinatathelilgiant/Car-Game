// Fill out your copyright notice in the Description page of Project Settings.


#include "CarBase.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GR_Spawn.h"

// Sets default values
ACarBase::ACarBase()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// declare components
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	RootComponent = BoxComponent;

	Car = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Car"));
	Car->SetupAttachment(RootComponent);

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Line"));
    SpringArm->SetupAttachment(RootComponent);

	PlayerViewpoint = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	PlayerViewpoint->SetupAttachment(SpringArm);

	SpawnPoint = CreateDefaultSubobject<UGR_Spawn>(TEXT("SpawnPoint")); 
	SpawnPoint->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ACarBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACarBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    
	float Axis = 1.f;
	Move(DeltaTime,Axis);
}

// Called to bind functionality to input
void ACarBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
   
    PlayerInputComponent->BindAxis(TEXT("Steer"), this, &ACarBase::SteerCar);
}

void ACarBase::Move(float DeltaTime, float Axis)
{
	FVector DeltaLocation = FVector::ZeroVector;

	DeltaLocation.X = Speed * Axis * DeltaTime;

	AddActorLocalOffset(DeltaLocation, true);
}

void ACarBase::SteerCar(float Axis)
{
	FRotator DeltaRotation = FRotator::ZeroRotator;

	DeltaRotation.Yaw = SteerSpeed * Axis * UGameplayStatics::GetWorldDeltaSeconds(this);

	AddActorLocalRotation(DeltaRotation, true);
}

