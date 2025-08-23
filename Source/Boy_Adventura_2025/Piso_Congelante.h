// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculo_Piso.h"
#include "Piso_Congelante.generated.h"

/**
 * 
 */
UCLASS()
class BOY_ADVENTURA_2025_API APiso_Congelante : public AObstaculo_Piso
{
	GENERATED_BODY()
public:
	APiso_Congelante();

	virtual void Activar(ABoy_Adventura_2025Character* Player) override;

protected:
	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision")
	class UBoxComponent* BoxCollision;

	UPROPERTY(EditDefaultsOnly, Category = "Congelamiento")
	float TiempoCongelado;

private:
	FTimerHandle TimerHandleDescongelar;
	void DescongelarJugador();
	ABoy_Adventura_2025Character* JugadorCongelado;
};
