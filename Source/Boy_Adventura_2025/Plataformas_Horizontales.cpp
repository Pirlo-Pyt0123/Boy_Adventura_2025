// Fill out your copyright notice in the Description page of Project Settings.


#include "Plataformas_Horizontales.h"

APlataformas_Horizontales::APlataformas_Horizontales()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/plataformas.plataformas'"));
	if (MeshAsset.Succeeded())
	{
		MeshP->SetStaticMesh(MeshAsset.Object);
		MeshP->SetRelativeScale3D(FVector(1.0f, 1.0f, 0.5f)); // Ajustar la escala según sea necesario
	}
}
