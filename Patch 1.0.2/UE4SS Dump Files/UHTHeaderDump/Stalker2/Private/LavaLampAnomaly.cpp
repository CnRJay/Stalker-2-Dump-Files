#include "LavaLampAnomaly.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent

ALavaLampAnomaly::ALavaLampAnomaly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollisionPlayEvent = NULL;
    this->CollisionStopEvent = NULL;
    this->ClotEvent = NULL;
    this->ParticleLifetimeAfterCollision = 0.50f;
    this->ClotEventDelay = 0.50f;
    this->OverlapSphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("ActivationSphereComponent"));
    this->ActivationParticle = CreateDefaultSubobject<UNiagaraComponent>(TEXT("ActivationParticle"));
    this->ClotDecalMaterial = NULL;
    this->OverlapSphereComponent->SetupAttachment(RootComponent);
    this->ActivationParticle->SetupAttachment(RootComponent);
}


void ALavaLampAnomaly::OnLavaCollision(const FBasicParticleData& BasicParticleData) {
}



