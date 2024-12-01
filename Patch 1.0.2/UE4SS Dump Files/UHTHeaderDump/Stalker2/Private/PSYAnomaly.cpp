#include "PSYAnomaly.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent

APSYAnomaly::APSYAnomaly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
    this->PSYParticle = CreateDefaultSubobject<UNiagaraComponent>(TEXT("PSYParticle"));
    this->CollisionComponent->SetupAttachment(RootComponent);
    this->PSYParticle->SetupAttachment(CollisionComponent);
}


