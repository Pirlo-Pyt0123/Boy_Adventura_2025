// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstaculo_Pared.h"

AObstaculo_Pared::AObstaculo_Pared()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/paredOv.paredOv'"));
	if (MeshAsset.Succeeded())
	{
		Mesh->SetStaticMesh(MeshAsset.Object);
		Mesh->SetRelativeScale3D(FVector(1.0f, 0.1f, 2.0f)); // Adjust scale as needed
	}
}
