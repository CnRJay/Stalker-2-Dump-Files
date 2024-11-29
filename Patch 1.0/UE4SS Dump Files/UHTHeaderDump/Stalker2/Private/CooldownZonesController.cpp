#include "CooldownZonesController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

ACooldownZonesController::ACooldownZonesController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ControllerVolume"));
    this->ControllerVolume = (UBoxComponent*)RootComponent;
}


