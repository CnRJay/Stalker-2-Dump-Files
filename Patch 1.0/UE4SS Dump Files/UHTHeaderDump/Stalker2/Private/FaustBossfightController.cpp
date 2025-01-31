#include "FaustBossfightController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "SignalSenderComponent.h"

AFaustBossfightController::AFaustBossfightController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("ControllerVolume"));
    this->ControllerVolume = (USphereComponent*)RootComponent;
    this->CloneSpawnEffect = NULL;
    this->CloneKilledSender = CreateDefaultSubobject<USignalSenderComponent>(TEXT("CloneKilledSender"));
    this->PlayerFieldOfViewAngle = 0.00f;
    this->MinSpawnDistance = 100.00f;
}

void AFaustBossfightController::TryTeleportBossToHiddenLocation() {
}

void AFaustBossfightController::SetCloneSpawnEnabled(const bool bEnabled) {
}





