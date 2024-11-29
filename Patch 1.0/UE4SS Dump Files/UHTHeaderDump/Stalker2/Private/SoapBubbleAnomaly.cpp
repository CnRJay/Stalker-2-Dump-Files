#include "SoapBubbleAnomaly.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent

ASoapBubbleAnomaly::ASoapBubbleAnomaly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SoapBubbleDamage = NULL;
    this->SoapBubbleDestroy = NULL;
    this->SoapBubbleParticleDestroy = NULL;
    this->SoapBubbleParticleExplosion = NULL;
    this->SoapBubbleParticleMaterial = NULL;
    this->SoapBubbleParticleMesh = NULL;
    this->SoapBubble = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SoapBubble"));
    this->SoapBubbleBoundSphere = CreateDefaultSubobject<USphereComponent>(TEXT("SoapBubbleBoundSphere"));
    this->SoapBubbleExplosionParticle = CreateDefaultSubobject<UNiagaraComponent>(TEXT("SoapBubbleExplosionParticle"));
    this->InterpolationCurve = NULL;
    this->SoapBubble->SetupAttachment(RootComponent);
    this->SoapBubbleBoundSphere->SetupAttachment(RootComponent);
    this->SoapBubbleExplosionParticle->SetupAttachment(SoapBubble);
}

void ASoapBubbleAnomaly::OnActorCollided(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult) {
}


