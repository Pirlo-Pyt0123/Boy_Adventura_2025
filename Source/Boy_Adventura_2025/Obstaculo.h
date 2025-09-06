// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Boy_Adventura_2025Character.h"
#include "Obstaculo.generated.h"



UCLASS()
class BOY_ADVENTURA_2025_API AObstaculo : public AActor
{
	GENERATED_BODY()
    
public:    
	// Sets default values for this actor's properties
	AObstaculo();
	//esta es su malla o su asecto 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Obstaculo")
	UStaticMeshComponent* Mesh;

public:
	// Método polimórfico
	virtual void Activar(ABoy_Adventura_2025Character* Player) {}//esto se usa para no tener que definir en el cpp y directamente hacerlo en las hijas donde se requiera

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
public:    
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//TArrays de obstaculos
	TArray<AObstaculo*> ObstaculosArray;

	

};
