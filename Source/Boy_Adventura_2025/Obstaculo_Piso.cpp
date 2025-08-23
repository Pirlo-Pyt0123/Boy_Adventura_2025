// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstaculo_Piso.h"

AObstaculo_Piso::AObstaculo_Piso()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane'"));
	if (MeshAsset.Succeeded())
	{
		Mesh->SetStaticMesh(MeshAsset.Object);
		Mesh->SetRelativeScale3D(FVector(1.0f, 1.0f, 0.1f)); // Adjust scale as needed
	}
	

}
