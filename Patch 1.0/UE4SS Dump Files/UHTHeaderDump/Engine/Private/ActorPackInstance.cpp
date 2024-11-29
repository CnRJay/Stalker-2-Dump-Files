#include "ActorPackInstance.h"
#include "SceneComponent.h"

AActorPackInstance::AActorPackInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
}


