// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5_LastDayPickUpComponent.h"

UUE5_LastDayPickUpComponent::UUE5_LastDayPickUpComponent()
{
	// Setup the Sphere Collision
	SphereRadius = 32.f;
}

void UUE5_LastDayPickUpComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register our Overlap Event
	OnComponentBeginOverlap.AddDynamic(this, &UUE5_LastDayPickUpComponent::OnSphereBeginOverlap);
}

void UUE5_LastDayPickUpComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checking if it is a First Person Character overlapping
	AUE5_LastDayCharacter* Character = Cast<AUE5_LastDayCharacter>(OtherActor);
	if(Character != nullptr)
	{
		// Notify that the actor is being picked up
		OnPickUp.Broadcast(Character);

		// Unregister from the Overlap Event so it is no longer triggered
		OnComponentBeginOverlap.RemoveAll(this);
	}
}
