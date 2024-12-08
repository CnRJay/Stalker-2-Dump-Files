#include "PlayerContextualAction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "SingleClickComponent.h"

APlayerContextualAction::APlayerContextualAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRootComponent"));
    this->SingleClickComponent = CreateDefaultSubobject<USingleClickComponent>(TEXT("SingleClickComponent"));
    this->CameraPitchMin = -30.00f;
    this->CameraPitchMax = 30.00f;
    this->CameraYawMin = -30.00f;
    this->CameraYawMax = 30.00f;
}

void APlayerContextualAction::ActionStart() {
}

void APlayerContextualAction::ActionEnd() {
}


