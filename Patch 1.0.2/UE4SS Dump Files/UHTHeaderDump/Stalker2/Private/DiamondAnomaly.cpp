#include "DiamondAnomaly.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ADiamondAnomaly::ADiamondAnomaly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollisionMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionMesh"));
    this->CollisionMesh->SetupAttachment(RootComponent);
}


