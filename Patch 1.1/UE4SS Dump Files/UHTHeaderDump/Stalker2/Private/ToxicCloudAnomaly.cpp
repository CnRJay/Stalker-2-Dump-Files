#include "ToxicCloudAnomaly.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent
#include "HittableComponent.h"

AToxicCloudAnomaly::AToxicCloudAnomaly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollisionMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionMesh"));
    this->CloudParticle = CreateDefaultSubobject<UNiagaraComponent>(TEXT("CloudParticle"));
    this->ImpactParticle = NULL;
    this->HittableComponent = CreateDefaultSubobject<UHittableComponent>(TEXT("Hittable"));
    this->ToxicCloudSoundEvent = NULL;
    this->AppearSoundEvent = NULL;
    this->DisappearSoundEvent = NULL;
    this->CollisionMesh->SetupAttachment(RootComponent);
    this->CloudParticle->SetupAttachment(RootComponent);
}


