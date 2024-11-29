#include "CarouselAnomaly.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent

ACarouselAnomaly::ACarouselAnomaly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollisionMeshPtr = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionMesh"));
    this->IdleParticle = CreateDefaultSubobject<UNiagaraComponent>(TEXT("IdleParticle"));
    this->ActivateParticle = CreateDefaultSubobject<UNiagaraComponent>(TEXT("ActivateParticle"));
    this->InteractionParticle = NULL;
    this->ActionDamagePlayerParticle = NULL;
    this->ActionDamageNPCParticle = NULL;
    this->WaterContactParticle = NULL;
    this->CollisionMeshPtr->SetupAttachment(RootComponent);
    this->IdleParticle->SetupAttachment(RootComponent);
    this->ActivateParticle->SetupAttachment(RootComponent);
}


