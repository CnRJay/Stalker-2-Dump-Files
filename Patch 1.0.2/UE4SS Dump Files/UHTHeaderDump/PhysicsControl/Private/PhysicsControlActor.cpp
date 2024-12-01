#include "PhysicsControlActor.h"
#include "PhysicsControlComponent.h"
#include "PhysicsControlInitializerComponent.h"

APhysicsControlActor::APhysicsControlActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPhysicsControlComponent>(TEXT("MyControlComponent"));
    this->ControlComponent = (UPhysicsControlComponent*)RootComponent;
    this->ControlInitializerComponent = CreateDefaultSubobject<UPhysicsControlInitializerComponent>(TEXT("MyControlInitializerComponent"));
}


