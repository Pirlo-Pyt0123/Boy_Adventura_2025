// Fill out your copyright notice in the Description page of Project Settings.


#include "Pollo2.h"

APollo2::APollo2()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/pllo2.pllo2'"));
	if (MeshAsset.Succeeded())
	{
		MeshEnemigo->SetStaticMesh(MeshAsset.Object);
		MeshEnemigo->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f)); // Adjust scale as needed
	}
}
