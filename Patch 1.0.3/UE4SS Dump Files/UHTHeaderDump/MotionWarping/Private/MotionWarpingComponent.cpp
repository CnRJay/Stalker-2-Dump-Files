#include "MotionWarpingComponent.h"
#include "Net/UnrealNetwork.h"

UMotionWarpingComponent::UMotionWarpingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSearchForWindowsInAnimsWithinMontages = false;
}

int32 UMotionWarpingComponent::RemoveWarpTarget(FName WarpTargetName) {
    return 0;
}

void UMotionWarpingComponent::DisableAllRootMotionModifiers() {
}

void UMotionWarpingComponent::AddOrUpdateWarpTargetFromTransform(FName WarpTargetName, FTransform TargetTransform) {
}

void UMotionWarpingComponent::AddOrUpdateWarpTargetFromLocationAndRotation(FName WarpTargetName, FVector TargetLocation, FRotator TargetRotation) {
}

void UMotionWarpingComponent::AddOrUpdateWarpTargetFromLocation(FName WarpTargetName, FVector TargetLocation) {
}

void UMotionWarpingComponent::AddOrUpdateWarpTargetFromComponent(FName WarpTargetName, const USceneComponent* Component, FName BoneName, bool bFollowComponent) {
}

void UMotionWarpingComponent::AddOrUpdateWarpTarget(const FMotionWarpingTarget& WarpTarget) {
}

void UMotionWarpingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMotionWarpingComponent, WarpTargets);
}


