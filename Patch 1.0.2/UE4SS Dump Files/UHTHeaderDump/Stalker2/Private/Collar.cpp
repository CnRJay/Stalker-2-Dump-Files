#include "Collar.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkComponent -FallbackName=AkComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

ACollar::ACollar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CollarSK"));
    this->CollarSID = TEXT("Electrocollar");
    this->HissingComp = CreateDefaultSubobject<UAkComponent>(TEXT("HissingComp"));
    this->CollarSK = (USkeletalMeshComponent*)RootComponent;
    this->HissingComp->SetupAttachment(RootComponent);
}


