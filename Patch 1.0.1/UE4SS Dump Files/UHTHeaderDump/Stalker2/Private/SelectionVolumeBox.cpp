#include "SelectionVolumeBox.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

ASelectionVolumeBox::ASelectionVolumeBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
    this->CollisionComponent = (UShapeComponent*)RootComponent;
}


