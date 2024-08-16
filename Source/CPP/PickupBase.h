// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "PickupBase.generated.h"

UCLASS()
class CPP_API APickupBase : public AActor
{
	GENERATED_BODY()
	
public:	
		// Sets default values for this actor's properties
	APickupBase();

protected:
		// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
		// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Action")
	void Print() const;

	UFUNCTION(BlueprintCallable, Category = "Action")
	void ShowDebug(const FColor& color);

	UPROPERTY(EditAnywhere)
	float RotationRate = 16;

	UPROPERTY(EditAnywhere)
	float SphereRadius = 32;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditAnywhere)
	class USphereComponent* Sphere;
};
