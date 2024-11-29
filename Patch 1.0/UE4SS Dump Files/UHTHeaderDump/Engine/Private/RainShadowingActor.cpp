#include "RainShadowingActor.h"
#include "SceneComponent.h"

ARainShadowingActor::ARainShadowingActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}


