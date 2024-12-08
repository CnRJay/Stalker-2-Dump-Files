#include "GroomComponent.h"

UGroomComponent::UGroomComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bCanEverAffectNavigation = false;
    this->GroomAsset = NULL;
    this->GroomCache = NULL;
    this->SourceSkeletalMesh = NULL;
    this->BindingAsset = NULL;
    this->PhysicsAsset = NULL;
    this->AngularSpringsSystem = NULL;
    this->CosseratRodsSystem = NULL;
    this->bUseCards = false;
    this->bRunning = true;
    this->bLooping = true;
    this->bManualTick = false;
    this->ElapsedTime = 0.00f;
}

void UGroomComponent::SetPhysicsAsset(UPhysicsAsset* InPhysicsAsset) {
}

void UGroomComponent::SetHairLengthScaleEnable(bool bEnable) {
}

void UGroomComponent::SetHairLengthScale(float Scale) {
}

void UGroomComponent::SetGroomAsset(UGroomAsset* Asset) {
}

void UGroomComponent::SetEnableSimulation(bool bInEnableSimulation) {
}

void UGroomComponent::SetBindingAsset(UGroomBindingAsset* InBinding) {
}

void UGroomComponent::ResetSimulation() {
}

void UGroomComponent::ResetCollisionComponents() {
}

UNiagaraComponent* UGroomComponent::GetNiagaraComponent(const int32 GroupIndex) {
    return NULL;
}

bool UGroomComponent::GetIsHairLengthScaleEnabled() {
    return false;
}

void UGroomComponent::AddCollisionComponent(USkeletalMeshComponent* SkeletalMeshComponent) {
}


