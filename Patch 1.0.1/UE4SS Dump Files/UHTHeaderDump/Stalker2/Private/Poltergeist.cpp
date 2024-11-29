#include "Poltergeist.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent

APoltergeist::APoltergeist(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BodyParticles = CreateDefaultSubobject<UNiagaraComponent>(TEXT("BodyParticles"));
    this->BodyCollision = CreateDefaultSubobject<USphereComponent>(TEXT("BodyCollision"));
    this->DeathParticles = CreateDefaultSubobject<UNiagaraComponent>(TEXT("DeathParticles"));
    this->DeathBodyVisibilityDelay = 0.25f;
    this->DeathParticles->SetupAttachment(BodyParticles);
    this->BodyParticles->SetupAttachment(RootComponent);
    this->BodyCollision->SetupAttachment(BodyParticles);
}


