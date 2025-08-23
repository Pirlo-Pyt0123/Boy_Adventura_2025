// Fill out your copyright notice in the Description page of Project Settings.



#include "Piso_Lentitud.h"
#include "Boy_Adventura_2025Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/Engine.h"
#include "Components/BoxComponent.h"

APiso_Lentitud::APiso_Lentitud()
{

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	BoxCollision->SetupAttachment(RootComponent);
	BoxCollision->SetBoxExtent(FVector(50.f, 50.f, 50.f)); // Ajusta el tamaño según tu necesidad
	BoxCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	BoxCollision->SetCollisionResponseToAllChannels(ECR_Overlap);
	BoxCollision->SetGenerateOverlapEvents(true);
	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &APiso_Lentitud::OnBeginOverlap);
	BoxCollision->OnComponentEndOverlap.AddDynamic(this, &APiso_Lentitud::OnEndOverlap);
}

void APiso_Lentitud::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ABoy_Adventura_2025Character* Player = Cast<ABoy_Adventura_2025Character>(OtherActor);
	if (Player)
	{
		UCharacterMovementComponent* MoveComp = Player->GetCharacterMovement();
		if (MoveComp)
		{
			MoveComp->MaxWalkSpeed = 200.f; // velocidad lenta
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Yellow, TEXT("¡Piso de lentitud!"));
			}
		}
	}
}

void APiso_Lentitud::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
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

void APiso_Lentitud::Activar(ABoy_Adventura_2025Character* Player)
{
    if (Player)
    {
        UCharacterMovementComponent* MoveComp = Player->GetCharacterMovement();
        if (MoveComp)
        {
            MoveComp->MaxWalkSpeed = 200.f; // velocidad lenta se bajara a 200 solo cuando entre en contacto con el piso 
            if (GEngine)
            {
                GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Yellow, TEXT("¡Piso de lentitud!"));
            }
        }
    }
}

