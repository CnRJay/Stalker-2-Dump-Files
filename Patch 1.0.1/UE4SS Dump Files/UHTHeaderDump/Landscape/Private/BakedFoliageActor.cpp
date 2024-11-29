#include "BakedFoliageActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ABakedFoliageActor::ABakedFoliageActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->ComponentSectionBaseX = 0;
    this->ComponentSectionBaseY = 0;
    this->ComponentSizeQuads = 0;
    this->bIsDistantTrees = false;
}


