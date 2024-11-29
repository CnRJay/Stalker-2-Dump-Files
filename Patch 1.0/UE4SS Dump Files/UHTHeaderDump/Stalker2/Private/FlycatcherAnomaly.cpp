#include "FlycatcherAnomaly.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AFlycatcherAnomaly::AFlycatcherAnomaly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OverlapSphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("ActivationSphereComponent"));
    this->VFXEffectSphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VFXStaticMesh"));
    this->FlycatcherAuxBus = NULL;
    this->FlycatcherAuxComponent = NULL;
    this->InfluenceLevelRTPC = NULL;
    this->DefaultStateValue = NULL;
    this->FlycatcherStateValue = NULL;
    this->OverlapSphereComponent->SetupAttachment(RootComponent);
    this->VFXEffectSphere->SetupAttachment(OverlapSphereComponent);
}


