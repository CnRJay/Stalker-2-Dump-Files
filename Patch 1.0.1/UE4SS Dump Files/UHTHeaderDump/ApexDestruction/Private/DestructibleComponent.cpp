#include "DestructibleComponent.h"

UDestructibleComponent::UDestructibleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysCreatePhysicsState = true;
    this->bMultiBodyOverlap = true;
    this->bHasCustomNavigableGeometry = EHasCustomNavigableGeometry::Yes;
    this->bFractureEffectOverride = false;
    this->bEnableHardSleeping = false;
    this->LargeChunkThreshold = 25.00f;
}

void UDestructibleComponent::SetDestructibleMesh(UDestructibleMesh* NewMesh) {
}

UDestructibleMesh* UDestructibleComponent::GetDestructibleMesh() {
    return NULL;
}

void UDestructibleComponent::ApplyRadiusDamage(float BaseDamage, const FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage) {
}

void UDestructibleComponent::ApplyDamage(float DamageAmount, const FVector& HitLocation, const FVector& ImpulseDir, float ImpulseStrength) {
}


