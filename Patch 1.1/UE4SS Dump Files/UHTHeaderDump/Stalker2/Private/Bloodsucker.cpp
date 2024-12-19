#include "Bloodsucker.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationBudgetAllocator -ObjectName=SkeletalMeshComponentBudgeted -FallbackName=SkeletalMeshComponentBudgeted
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent

ABloodsucker::ABloodsucker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InvisibilityTransferParticles = CreateDefaultSubobject<UNiagaraComponent>(TEXT("InvisibilityTransferParticles"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->InvisibilityTransferParticles->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponentBudgeted>(this));
}


