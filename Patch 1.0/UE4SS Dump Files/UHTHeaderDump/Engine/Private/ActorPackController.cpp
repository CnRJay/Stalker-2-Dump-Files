#include "ActorPackController.h"
#include "SceneComponent.h"

AActorPackController::AActorPackController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
}


