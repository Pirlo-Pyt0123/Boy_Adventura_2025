// Fill out your copyright notice in the Description page of Project Settings.


#include "Pollo1.h"

APollo1::APollo1()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/pollo.pollo'"));
	if (MeshAsset.Succeeded())
	{
		MeshEnemigo->SetStaticMesh(MeshAsset.Object);
		MeshEnemigo->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f)); // Adjust scale as needed
	}
}
