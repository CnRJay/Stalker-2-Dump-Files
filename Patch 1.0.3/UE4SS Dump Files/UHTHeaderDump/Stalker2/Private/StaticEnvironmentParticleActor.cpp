#include "StaticEnvironmentParticleActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "StaticEnvironmentNiagaraComponent.h"

AStaticEnvironmentParticleActor::AStaticEnvironmentParticleActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->EnvironmentParticleComponent = CreateDefaultSubobject<UStaticEnvironmentNiagaraComponent>(TEXT("StaticParticleComponent"));
    this->EnvironmentParticleComponent->SetupAttachment(RootComponent);
}


