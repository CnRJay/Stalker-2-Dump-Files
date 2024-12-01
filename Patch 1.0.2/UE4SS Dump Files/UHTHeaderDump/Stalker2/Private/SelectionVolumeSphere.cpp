#include "SelectionVolumeSphere.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

ASelectionVolumeSphere::ASelectionVolumeSphere(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComp"));
    this->CollisionComponent = (UShapeComponent*)RootComponent;
}


