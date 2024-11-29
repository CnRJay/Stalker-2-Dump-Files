#include "FlowerParticleComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent

UFlowerParticleComponent::UFlowerParticleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("FlowerSplineComponent"));
    this->Collision = NULL;
    this->Particle = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    this->Speed = 1.00f;
    this->Distance = 0.00f;
    this->Particle->SetupAttachment(Spline);
}


