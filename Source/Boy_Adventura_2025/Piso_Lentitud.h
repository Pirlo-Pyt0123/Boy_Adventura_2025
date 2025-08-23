// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculo_Piso.h"
#include "Piso_Lentitud.generated.h"

/**
 * 
 */
UCLASS()
class BOY_ADVENTURA_2025_API APiso_Lentitud : public AObstaculo_Piso
{
	GENERATED_BODY()
public:
	APiso_Lentitud();
	//esta es su caja de collision pueden ser otras como capsule o sphere pero esta es muy util 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision")
	class UBoxComponent* BoxCollision;

protected:
	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:
	virtual void Activar(ABoy_Adventura_2025Character* Player) override;
};
