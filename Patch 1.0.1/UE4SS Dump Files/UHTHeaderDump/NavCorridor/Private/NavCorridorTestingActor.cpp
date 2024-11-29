#include "NavCorridorTestingActor.h"
#include "NavCorridorTestingComponent.h"

ANavCorridorTestingActor::ANavCorridorTestingActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UNavCorridorTestingComponent>(TEXT("NavCorridorTestingComponent"));
    this->DebugComp = (UNavCorridorTestingComponent*)RootComponent;
}


