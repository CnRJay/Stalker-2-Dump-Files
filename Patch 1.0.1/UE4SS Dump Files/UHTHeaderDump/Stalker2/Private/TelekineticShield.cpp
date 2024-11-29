#include "TelekineticShield.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkComponent -FallbackName=AkComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent

ATelekineticShield::ATelekineticShield(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->Particle = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Particle"));
    this->ShieldDestroyedParticle = NULL;
    this->HitImpactParticle = NULL;
    this->AkAudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AudioKineticComponent"));
    this->ShieldDestroyedSound = NULL;
    this->ShieldSpawnedSound = NULL;
    this->ShieldImpactSound = NULL;
    this->Health = 100.00f;
    this->MovementSpeed = 1.00f;
    this->DistanceFromOwner = 200.00f;
    this->OwnerHeightOffset = 100.00f;
    this->ParticleIntensityChangeSpeed = 1.00f;
    this->MaxLifetime = 15.00f;
    this->SpawnShiftFraction = 0.15f;
    this->Particle->SetupAttachment(RootComponent);
    this->AkAudioComponent->SetupAttachment(RootComponent);
    this->MeshComponent->SetupAttachment(RootComponent);
}



void ATelekineticShield::OnDeathParticleFinished(UNiagaraComponent* DeathVFXComponent) {
}

AObj* ATelekineticShield::GetOwnerActor() const {
    return NULL;
}


