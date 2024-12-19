#include "PossessedObjectComponent.h"

UPossessedObjectComponent::UPossessedObjectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FloatingStartSound = NULL;
    this->FloatingStopSound = NULL;
    this->FloatingVFX = NULL;
    this->FloatingVFXComponent = NULL;
    this->SoundComponent = NULL;
}

void UPossessedObjectComponent::OnSphereComponentHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void UPossessedObjectComponent::OnSphereComponentBeginOverlap(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


