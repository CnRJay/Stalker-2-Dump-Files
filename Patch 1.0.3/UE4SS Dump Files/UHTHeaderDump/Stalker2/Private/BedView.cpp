#include "BedView.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "BedHoldComponent.h"

ABedView::ABedView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BedMeshComponent"));
    this->SleepComponent = CreateDefaultSubobject<UBedHoldComponent>(TEXT("SleepComponent"));
    this->BedMeshComponent = (UStaticMeshComponent*)RootComponent;
    this->bIgnoreSleepinessValue = false;
    this->bIgnoreEmission = false;
}



void ABedView::Interact() {
}


