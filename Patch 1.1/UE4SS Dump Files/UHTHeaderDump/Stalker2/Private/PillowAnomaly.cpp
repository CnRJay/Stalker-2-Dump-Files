#include "PillowAnomaly.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent

APillowAnomaly::APillowAnomaly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollisionMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionMesh"));
    this->IdleParticle = CreateDefaultSubobject<UNiagaraComponent>(TEXT("IdleParticle"));
    this->InteractParticle = NULL;
    this->CollisionMesh->SetupAttachment(RootComponent);
    this->IdleParticle->SetupAttachment(RootComponent);
}


