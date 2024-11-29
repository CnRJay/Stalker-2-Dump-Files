#include "DynamicEnvironmentParticleActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "DynamicEnvironmentNiagaraComponent.h"

ADynamicEnvironmentParticleActor::ADynamicEnvironmentParticleActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->EnvironmentParticleComponent = CreateDefaultSubobject<UDynamicEnvironmentNiagaraComponent>(TEXT("DynamicParticleComponent"));
    this->EnvironmentParticleComponent->SetupAttachment(RootComponent);
}


