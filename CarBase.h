// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CarBase.generated.h"

UCLASS()
class HIGHWAYGAME_API ACarBase : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACarBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
private:
    //components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = true))
    class UBoxComponent* BoxComponent;
    
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = true))
	class USkeletalMeshComponent* Car;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = true))
    class USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = true))
    class UCameraComponent* PlayerViewpoint;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = true)) 
	class UGR_Spawn* SpawnPoint;

    //Varibles
	UPROPERTY(EditAnywhere, Category = "Car Movement")
	float Speed = 200.f;

    UPROPERTY(EditAnywhere, Category = "Car Movement")
	float SteerSpeed = 200.f;
	
	//Functions
	void Move(float DeltaTime, float Axis);

    void SteerCar(float Axis);

};
