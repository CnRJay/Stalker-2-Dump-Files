#include "MistAnomaly.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AMistAnomaly::AMistAnomaly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->WeatherSpeedFactor = 1.00f;
    this->CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComp"));
    this->SaveCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("SaveCapsuleComponent"));
    this->CapsuleComponent->SetupAttachment(RootComponent);
    this->SaveCapsuleComponent->SetupAttachment(CapsuleComponent);
}

void AMistAnomaly::SetTeleportationEnabled(const bool InbTeleportationEnabled) {
}

void AMistAnomaly::OnSaveBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult) {
}




void AMistAnomaly::OnAnomalyEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex) {
}

void AMistAnomaly::OnAnomalyBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult) {
}


