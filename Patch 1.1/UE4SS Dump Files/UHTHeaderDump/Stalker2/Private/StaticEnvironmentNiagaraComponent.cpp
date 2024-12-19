#include "StaticEnvironmentNiagaraComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=ENiagaraTickBehavior -FallbackName=ENiagaraTickBehavior

UStaticEnvironmentNiagaraComponent::UStaticEnvironmentNiagaraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    const FProperty* p_TickBehavior = GetClass()->FindPropertyByName("TickBehavior");
    (*p_TickBehavior->ContainerPtrToValuePtr<ENiagaraTickBehavior>(this)) = ENiagaraTickBehavior::UseComponentTickGroup;
    this->ParticleType = EStaticParticleType::None;
}


