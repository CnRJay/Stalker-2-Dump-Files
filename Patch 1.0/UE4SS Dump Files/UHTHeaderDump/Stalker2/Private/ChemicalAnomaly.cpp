#include "ChemicalAnomaly.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AChemicalAnomaly::AChemicalAnomaly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollisionMeshPtr = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionMesh"));
    this->SplashImpact = NULL;
    this->GrenadeExplosion = NULL;
    this->CollisionMeshPtr->SetupAttachment(RootComponent);
}



