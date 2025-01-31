#include "RazorAnomaly.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent

ARazorAnomaly::ARazorAnomaly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponentPtr = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootComponent"));
    this->CollisionMeshPtr = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionMesh"));
    this->DamageVFX = NULL;
    this->AIDamageVFX = NULL;
    this->ProjectileDestructionVFX = NULL;
    this->ThrowableDestructionVFX = NULL;
    this->RazorActiveVFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("RazorActiveVFX"));
    this->RazorIntensityRTPC = NULL;
    this->RazorActiveVFX->SetupAttachment(RootComponentPtr);
    this->RootComponentPtr->SetupAttachment(RootComponent);
    this->CollisionMeshPtr->SetupAttachment(RootComponentPtr);
}


