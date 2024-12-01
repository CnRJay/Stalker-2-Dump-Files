#include "LightningBallAnomaly.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent
#include "LightningBallNavigationComponent.h"

ALightningBallAnomaly::ALightningBallAnomaly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OverlapDamageComponent = CreateDefaultSubobject<USphereComponent>(TEXT("OverlapDamageComponent"));
    this->IdleParticle = CreateDefaultSubobject<UNiagaraComponent>(TEXT("IdleParticle"));
    this->ExplosionParticle = NULL;
    this->AnomalyEatingParticle = NULL;
    this->FeastAudioEvent = NULL;
    this->FeastIdleSwitch = NULL;
    this->FeastEndSwitch = NULL;
    this->AnomalyExplosionAudioEvent = NULL;
    this->AnomalyNavigationComponent = CreateDefaultSubobject<ULightningBallNavigationComponent>(TEXT("AnomalyNavigationComponent"));
    this->OverlapDamageComponent->SetupAttachment(RootComponent);
    this->IdleParticle->SetupAttachment(RootComponent);
}


