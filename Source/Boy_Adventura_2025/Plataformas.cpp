// Fill out your copyright notice in the Description page of Project Settings.


#include "Plataformas.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
APlataformas::APlataformas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshP = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshP"));
	RootComponent = MeshP;

}

// Called when the game starts or when spawned
void APlataformas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlataformas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

