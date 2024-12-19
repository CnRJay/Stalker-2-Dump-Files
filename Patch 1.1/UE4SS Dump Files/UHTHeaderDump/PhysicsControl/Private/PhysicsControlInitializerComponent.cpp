#include "PhysicsControlInitializerComponent.h"

UPhysicsControlInitializerComponent::UPhysicsControlInitializerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCreateControlsAtBeginPlay = true;
}

void UPhysicsControlInitializerComponent::CreateControls(UPhysicsControlComponent* PhysicsControlComponent) {
}


