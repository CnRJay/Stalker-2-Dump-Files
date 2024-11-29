#include "InstancedStaticMeshComponent.h"

UInstancedStaticMeshComponent::UInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMultiBodyOverlap = true;
    this->bDisallowMeshPaintPerInstance = true;
    this->NumCustomDataFloats = 0;
    this->InstancingRandomSeed = 0;
    this->InstanceStartCullDistance = 0;
    this->InstanceEndCullDistance = 0;
    this->InstanceStartFadeInDistance = -1;
    this->InstanceEndFadeInDistance = -1;
    this->bDisableCollision = false;
    this->NumPendingLightmaps = 0;
}

bool UInstancedStaticMeshComponent::UpdateInstanceTransform(int32 InstanceIndex, const FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport) {
    return false;
}

bool UInstancedStaticMeshComponent::SetCustomDataValue(int32 InstanceIndex, int32 CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty) {
    return false;
}

void UInstancedStaticMeshComponent::SetCullDistances_ForFoliage(int32 StartCullDistance, int32 EndCullDistance, int32 StartFadeInDistance, int32 EndFadeInDistance) {
}

void UInstancedStaticMeshComponent::SetCullDistances(int32 StartCullDistance, int32 EndCullDistance) {
}

void UInstancedStaticMeshComponent::RemoveInstancesRange(int32 Begin, int32 End, bool bMarkRenderStateDirty) {
}

bool UInstancedStaticMeshComponent::RemoveInstances(const TArray<int32>& InstancesToRemove) {
    return false;
}

bool UInstancedStaticMeshComponent::RemoveInstance(int32 InstanceIndex) {
    return false;
}

bool UInstancedStaticMeshComponent::IsValidInstance(int32 InstanceIndex) const {
    return false;
}

bool UInstancedStaticMeshComponent::GetInstanceTransform(int32 InstanceIndex, FTransform& OutInstanceTransform, bool bWorldSpace) const {
    return false;
}

TArray<int32> UInstancedStaticMeshComponent::GetInstancesOverlappingSphere(const FVector& Center, float Radius, bool bSphereInWorldSpace) const {
    return TArray<int32>();
}

TArray<int32> UInstancedStaticMeshComponent::GetInstancesOverlappingBox(const FBox& Box, bool bBoxInWorldSpace) const {
    return TArray<int32>();
}

int32 UInstancedStaticMeshComponent::GetInstanceCount() const {
    return 0;
}

void UInstancedStaticMeshComponent::ClearInstances(bool bCallForSplitMeshes) {
}

bool UInstancedStaticMeshComponent::BatchUpdateInstancesTransforms(int32 StartInstanceIndex, const TArray<FTransform>& NewInstancesTransforms, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport) {
    return false;
}

bool UInstancedStaticMeshComponent::BatchUpdateInstancesTransform(int32 StartInstanceIndex, int32 NumInstances, const FTransform& NewInstancesTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport) {
    return false;
}

int32 UInstancedStaticMeshComponent::AddInstanceWorldSpace(const FTransform& WorldTransform) {
    return 0;
}

TArray<int32> UInstancedStaticMeshComponent::AddInstances(const TArray<FTransform>& InstanceTransforms, bool bShouldReturnIndices, bool bWorldSpace) {
    return TArray<int32>();
}

void UInstancedStaticMeshComponent::AddInstanceCount(int32 Count, const FTransform& InstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty) {
}

int32 UInstancedStaticMeshComponent::AddInstance(const FTransform& InstanceTransform, bool bWorldSpace) {
    return 0;
}


