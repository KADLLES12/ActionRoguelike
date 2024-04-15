// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SMagicProjectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;
class UParticleSystemComponent;


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ACTIONROGUELIKE_API ASMagicProjectile : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	ASMagicProjectile();

protected:
	
	UPROPERTY(VisibleAnywhere)
	USphereComponent* SphereComp;

	UPROPERTY(VisibleAnywhere)
	UProjectileMovementComponent* MovementComp;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* EffectComp;

	virtual void BeginPlay() override;


public:	
	virtual void Tick(float DeltaTime) override;
		
};
