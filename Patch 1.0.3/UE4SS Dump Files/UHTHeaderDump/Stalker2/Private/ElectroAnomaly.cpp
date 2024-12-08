#include "ElectroAnomaly.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AElectroAnomaly::AElectroAnomaly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponentPtr = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootComponent"));
    this->CollisionMeshPtr = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionMesh"));
    this->CollisionMeshPtr->SetupAttachment(RootComponentPtr);
    this->RootComponentPtr->SetupAttachment(RootComponent);
}

float AElectroAnomaly::GetRadius() const {
    return 0.0f;
}

FVector AElectroAnomaly::GetParticleSpawnLocation() const {
    return FVector{};
}

FElectroAnomalyBakedDataFloat AElectroAnomaly::GetElectroBakedData() const {
    return FElectroAnomalyBakedDataFloat{};
}




