// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Engine/Engine.h"
#include "Boy_Adventura_2025GameMode.generated.h"

UCLASS(minimalapi)
class ABoy_Adventura_2025GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABoy_Adventura_2025GameMode();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

protected:
	// Contenedores

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Contenedores")
	TArray<class AObstaculo*> ContenedorObstaculos;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Contenedores")
	TArray<class APollo1*> ContenedorEnemigos;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Contenedores")
	TArray<class APlataformas*> ContenedorPlataformas;

	// Funciones para crear los contenedores
	UFUNCTION(BlueprintCallable, Category = "Setup")
	void CrearContenedorObstaculos();

	UFUNCTION(BlueprintCallable, Category = "Setup")
	void CrearContenedorEnemigos();

	UFUNCTION(BlueprintCallable, Category = "Setup")
	void CrearContenedorPlataformas();

	// Lógicas de movimiento para plataformas
	UFUNCTION()
	void MoverPlataformasHorizontal();

	UFUNCTION()
	void MoverPlataformasVertical();

private:
	// Timers para movimiento
	FTimerHandle TimerMovimientoHorizontal;
	FTimerHandle TimerMovimientoVertical;

	// Variables de movimiento
	bool bDireccionHorizontal = true;
	bool bDireccionVertical = true;
	float VelocidadMovimiento = 100.0f;
};



