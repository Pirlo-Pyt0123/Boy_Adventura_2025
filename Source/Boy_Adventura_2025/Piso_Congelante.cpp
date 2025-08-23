// Fill out your copyright notice in the Description page of Project Settings.



#include "Piso_Congelante.h"
#include "Boy_Adventura_2025Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"

APiso_Congelante::APiso_Congelante()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/piso_congelante.piso_congelante'"));

	if (MeshAsset.Succeeded())
	{
		Mesh->SetStaticMesh(MeshAsset.Object);
		Mesh->SetRelativeScale3D(FVector(1.0f, 1.0f, 0.1f)); // Adjust scale as needed
	}

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	BoxCollision->SetupAttachment(RootComponent);
	BoxCollision->SetBoxExtent(FVector(50.f, 50.f, 50.f)); // Ajusta el tamaño según tu necesidad
	BoxCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	BoxCollision->SetCollisionResponseToAllChannels(ECR_Overlap);
	BoxCollision->SetGenerateOverlapEvents(true);
	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &APiso_Congelante::OnBeginOverlap);
	BoxCollision->OnComponentEndOverlap.AddDynamic(this, &APiso_Congelante::OnEndOverlap);

	if (Mesh)
	{
		Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		Mesh->SetCollisionResponseToAllChannels(ECR_Overlap);
		Mesh->SetGenerateOverlapEvents(true);
		Mesh->OnComponentBeginOverlap.AddDynamic(this, &APiso_Congelante::OnBeginOverlap);
		Mesh->OnComponentEndOverlap.AddDynamic(this, &APiso_Congelante::OnEndOverlap);
	}
}

void APiso_Congelante::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//casteo al character porque este sera el afectado 
	ABoy_Adventura_2025Character* Player = Cast<ABoy_Adventura_2025Character>(OtherActor);
	if (Player)
	{
		Activar(Player);
	}
}
//el metodo que se ira activando polimorficamente en otros 
void APiso_Congelante::Activar(ABoy_Adventura_2025Character* Player)
{
    if (Player)
    {
        UCharacterMovementComponent* MoveComp = Player->GetCharacterMovement();
        if (MoveComp)
        {
            MoveComp->MaxWalkSpeed = 0.f; // congelar velocidad totalmene a 0 
            if (GEngine)
            {
                GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Cyan, TEXT("¡Piso congelante!"));
            }
			//este es el timer pasado 5 segundos se decongelara con la funcion descongelar 
            JugadorCongelado = Player;
            GetWorld()->GetTimerManager().ClearTimer(TimerHandleDescongelar);
            GetWorld()->GetTimerManager().SetTimer(TimerHandleDescongelar, this, &APiso_Congelante::DescongelarJugador, 5.0f, false);
        }
    }
}

void APiso_Congelante::DescongelarJugador()
{
    if (JugadorCongelado)
    {
        UCharacterMovementComponent* MoveComp = JugadorCongelado->GetCharacterMovement();
        if (MoveComp)
        {
            MoveComp->MaxWalkSpeed = 600.f; // velocidad normal devuele a lo que tenia antes 
            if (GEngine)
            {
                GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, TEXT("¡Jugador descongelado!"));
            }
        }
		// Limpiar el jugador congelado
        JugadorCongelado = nullptr;
    }
}

void APiso_Congelante::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	ABoy_Adventura_2025Character* Player = Cast<ABoy_Adventura_2025Character>(OtherActor);
	if (Player)
	{
		UCharacterMovementComponent* MoveComp = Player->GetCharacterMovement();
		if (MoveComp)
		{
			MoveComp->MaxWalkSpeed = 600.f; // velocidad normal
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, TEXT("¡Velocidad restaurada!"));
			}
		}
	}
}
