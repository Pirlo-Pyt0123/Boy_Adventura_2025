// Copyright Epic Games, Inc. All Rights Reserved.

#include "Boy_Adventura_2025GameMode.h"
#include "Boy_Adventura_2025Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Piso_Lentitud.h"
#include "Piso_Congelante.h"
#include "Pollo1.h"
#include "Pollo2.h"
#include "Plataformas.h"
#include "Plataformas_Horizontales.h"
#include "Plataformas_Verticales.h"
#include "Engine/World.h"
#include "Engine/Engine.h"

ABoy_Adventura_2025GameMode::ABoy_Adventura_2025GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ABoy_Adventura_2025GameMode::BeginPlay()
{
	Super::BeginPlay();
	
	// Crear todos los contenedores al iniciar el juego
	CrearContenedorObstaculos();
	CrearContenedorEnemigos();
	CrearContenedorPlataformas();

	// Iniciar timers para movimiento de plataformas
	GetWorldTimerManager().SetTimer(TimerMovimientoHorizontal, this, 
		&ABoy_Adventura_2025GameMode::MoverPlataformasHorizontal, 0.02f, true);
	
	GetWorldTimerManager().SetTimer(TimerMovimientoVertical, this, 
		&ABoy_Adventura_2025GameMode::MoverPlataformasVertical, 0.02f, true);

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, 
			TEXT("Contenedores creados y plataformas en movimiento!"));
	}
}

void ABoy_Adventura_2025GameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void ABoy_Adventura_2025GameMode::CrearContenedorObstaculos()
{
	UWorld* World = GetWorld();
	if (!World) return;

	// Crear pisos de lentitud
	for (int32 i = 0; i < 5; i++)
	{
		FVector Location = FVector(i * 300.0f, 0.0f, 200.0f);
		APiso_Lentitud* PisoLento = World->SpawnActor<APiso_Lentitud>(Location, FRotator::ZeroRotator);
		if (PisoLento)
		{
			ContenedorObstaculos.Add(PisoLento);
		}
	}

	// Crear pisos congelantes
	for (int32 i = 0; i < 3; i++)
	{
		FVector Location = FVector(i * 400.0f, 300.0f, 200.0f);
		APiso_Congelante* PisoCongelante = World->SpawnActor<APiso_Congelante>(Location, FRotator::ZeroRotator);
		if (PisoCongelante)
		{
			ContenedorObstaculos.Add(PisoCongelante);
		}
	}

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, 
			FString::Printf(TEXT("Obstáculos creados: %d"), ContenedorObstaculos.Num()));
	}
}

void ABoy_Adventura_2025GameMode::CrearContenedorEnemigos()
{
	UWorld* World = GetWorld();
	if (!World) return;

	// Crear Pollos1
	for (int32 i = 0; i < 5; i++)
	{
		FVector Location = FVector(i * 200.0f, -300.0f, 200.0f);
		APollo1* Pollo = World->SpawnActor<APollo1>(Location, FRotator::ZeroRotator);
		if (Pollo)
		{
			ContenedorEnemigos.Add(Pollo);
		}
	}

	// Crear Pollos2 (usando Pollo1 como base)
	for (int32 i = 0; i < 5; i++)
	{
		FVector Location = FVector(i * 250.0f, -600.0f, 200.0f);
		APollo1* Pollo2 = World->SpawnActor<APollo1>(Location, FRotator::ZeroRotator);
		if (Pollo2)
		{
			ContenedorEnemigos.Add(Pollo2);
		}
	}

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, 
			FString::Printf(TEXT("Enemigos creados: %d"), ContenedorEnemigos.Num()));
	}
}

void ABoy_Adventura_2025GameMode::CrearContenedorPlataformas()
{
	UWorld* World = GetWorld();
	if (!World) return;

	// Crear plataformas base estáticas
	for (int32 i = 0; i < 5; i++)
	{
		FVector Location = FVector(i * 150.0f, 600.0f, i * 50.0f); // Escalera básica
		APlataformas* PlataformaBase = World->SpawnActor<APlataformas>(Location, FRotator::ZeroRotator);
		if (PlataformaBase)
		{
			ContenedorPlataformas.Add(PlataformaBase);
		}
	}

	// Crear 2 plataformas horizontales
	for (int32 i = 0; i < 2; i++)
	{
		FVector Location = FVector(i * 300.0f, 900.0f, 300.0f);
		APlataformas_Horizontales* PlataformaH = World->SpawnActor<APlataformas_Horizontales>(Location, FRotator::ZeroRotator);
		if (PlataformaH)
		{
			ContenedorPlataformas.Add(PlataformaH);
		}
	}

	// Crear 2 plataformas verticales
	for (int32 i = 0; i < 2; i++)
	{
		FVector Location = FVector(800.0f + i * 200.0f, 900.0f, 200.0f);
		APlataformas_Verticales* PlataformaV = World->SpawnActor<APlataformas_Verticales>(Location, FRotator::ZeroRotator);
		if (PlataformaV)
		{
			ContenedorPlataformas.Add(PlataformaV);
		}
	}

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, 
			FString::Printf(TEXT("Plataformas creadas: %d"), ContenedorPlataformas.Num()));
	}
}

void ABoy_Adventura_2025GameMode::MoverPlataformasHorizontal()
{
	for (APlataformas* Plataforma : ContenedorPlataformas)
	{
		APlataformas_Horizontales* PlataformaH = Cast<APlataformas_Horizontales>(Plataforma);
		if (PlataformaH)
		{
			FVector Location = PlataformaH->GetActorLocation();
			
			// Mover horizontalmente entre límites
			if (bDireccionHorizontal)
			{
				Location.Y += VelocidadMovimiento * 0.02f;
				if (Location.Y > 1100.0f)
					bDireccionHorizontal = false;
			}
			else
			{
				Location.Y -= VelocidadMovimiento * 0.02f;
				if (Location.Y < 700.0f)
					bDireccionHorizontal = true;
			}
			
			PlataformaH->SetActorLocation(Location);
		}
	}
}

void ABoy_Adventura_2025GameMode::MoverPlataformasVertical()
{
	for (APlataformas* Plataforma : ContenedorPlataformas)
	{
		APlataformas_Verticales* PlataformaV = Cast<APlataformas_Verticales>(Plataforma);
		if (PlataformaV)
		{
			FVector Location = PlataformaV->GetActorLocation();
			
			// Mover verticalmente entre límites
			if (bDireccionVertical)
			{
				Location.Z += VelocidadMovimiento * 0.02f;
				if (Location.Z > 400.0f)
					bDireccionVertical = false;
			}
			else
			{
				Location.Z -= VelocidadMovimiento * 0.02f;
				if (Location.Z < 100.0f)
					bDireccionVertical = true;
			}
			
			PlataformaV->SetActorLocation(Location);
		}
	}
}
