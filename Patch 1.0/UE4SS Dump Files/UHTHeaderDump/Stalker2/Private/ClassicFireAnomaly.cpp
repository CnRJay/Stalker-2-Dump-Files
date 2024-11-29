#include "ClassicFireAnomaly.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DecalComponent -FallbackName=DecalComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent

AClassicFireAnomaly::AClassicFireAnomaly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollisionMeshPtr = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionMesh"));
    const FProperty* p_FlamePillarCapsule_Parent = GetClass()->FindPropertyByName("FlamePillarCapsule");
    this->FlamePillarCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("FlamePillarComponent"));
    this->IdleVFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("IdleVFX"));
    this->DecalComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("DecalComponent"));
    this->CollisionMeshPtr->SetupAttachment(p_FlamePillarCapsule_Parent->ContainerPtrToValuePtr<UCapsuleComponent>(this));
    this->FlamePillarCapsule->SetupAttachment(RootComponent);
    this->IdleVFX->SetupAttachment(FlamePillarCapsule);
    this->DecalComponent->SetupAttachment(FlamePillarCapsule);
}



