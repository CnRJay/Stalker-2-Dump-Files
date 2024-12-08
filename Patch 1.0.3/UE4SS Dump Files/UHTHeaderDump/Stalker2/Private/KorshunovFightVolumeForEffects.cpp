#include "KorshunovFightVolumeForEffects.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent

AKorshunovFightVolumeForEffects::AKorshunovFightVolumeForEffects(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActiveTime = 3.00f;
    this->VolumeVFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("VolumeVFX"));
    this->VolumeVFX->SetupAttachment(RootComponent);
}


