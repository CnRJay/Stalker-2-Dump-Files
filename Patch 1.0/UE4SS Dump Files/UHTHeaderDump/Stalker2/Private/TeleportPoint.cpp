#include "TeleportPoint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ATeleportPoint::ATeleportPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->SpriteComponent = NULL;
    this->ArrowComponent = NULL;
}


