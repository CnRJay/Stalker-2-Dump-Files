#include "PhysicsControlComponent.h"

UPhysicsControlComponent::UPhysicsControlComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TeleportDistanceThreshold = 300.00f;
    this->TeleportRotationThreshold = 0.00f;
    this->bShowDebugVisualization = true;
    this->VisualizationSizeScale = 5.00f;
    this->bShowDebugControlList = false;
    this->bShowDebugBodyModifierList = false;
    this->VelocityPredictionTime = 0.20f;
    this->MaxNumControlsOrModifiersPerName = 256;
}

void UPhysicsControlComponent::UpdateTargetCaches(float DeltaTime) {
}

void UPhysicsControlComponent::UpdateControls(float DeltaTime) {
}

bool UPhysicsControlComponent::SetControlUseSkeletalAnimation(const FName Name, const bool bUseSkeletalAnimation, const float SkeletalAnimationVelocityMultiplier) {
    return false;
}

void UPhysicsControlComponent::SetControlTargetsInSet(const FName Set, const FPhysicsControlTarget ControlTarget, const bool bEnableControl) {
}

void UPhysicsControlComponent::SetControlTargets(const TArray<FName>& Names, const FPhysicsControlTarget ControlTarget, const bool bEnableControl) {
}

void UPhysicsControlComponent::SetControlTargetPositionsInSet(const FName SetName, const FVector position, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget) {
}

bool UPhysicsControlComponent::SetControlTargetPositionsFromArray(const TArray<FName>& Names, const TArray<FVector>& Positions, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget) {
    return false;
}

void UPhysicsControlComponent::SetControlTargetPositionsAndOrientationsInSet(const FName SetName, const FVector position, const FRotator Orientation, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget) {
}

bool UPhysicsControlComponent::SetControlTargetPositionsAndOrientationsFromArray(const TArray<FName>& Names, const TArray<FVector>& Positions, const TArray<FRotator>& Orientations, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget) {
    return false;
}

void UPhysicsControlComponent::SetControlTargetPositionsAndOrientations(const TArray<FName>& Names, const FVector position, const FRotator Orientation, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget) {
}

void UPhysicsControlComponent::SetControlTargetPositions(const TArray<FName>& Names, const FVector position, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget) {
}

bool UPhysicsControlComponent::SetControlTargetPositionAndOrientation(const FName Name, const FVector position, const FRotator Orientation, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget) {
    return false;
}

bool UPhysicsControlComponent::SetControlTargetPosition(const FName Name, const FVector position, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget) {
    return false;
}

bool UPhysicsControlComponent::SetControlTargetPoses(const FName Name, const FVector ParentPosition, const FRotator ParentOrientation, const FVector ChildPosition, const FRotator ChildOrientation, const float VelocityDeltaTime, const bool bEnableControl) {
    return false;
}

void UPhysicsControlComponent::SetControlTargetOrientationsInSet(const FName SetName, const FRotator Orientation, const float AngularVelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget) {
}

bool UPhysicsControlComponent::SetControlTargetOrientationsFromArray(const TArray<FName>& Names, const TArray<FRotator>& Orientations, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget) {
    return false;
}

void UPhysicsControlComponent::SetControlTargetOrientations(const TArray<FName>& Names, const FRotator Orientation, const float AngularVelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget) {
}

bool UPhysicsControlComponent::SetControlTargetOrientation(const FName Name, const FRotator Orientation, const float AngularVelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget) {
    return false;
}

bool UPhysicsControlComponent::SetControlTarget(const FName Name, const FPhysicsControlTarget ControlTarget, const bool bEnableControl) {
    return false;
}

void UPhysicsControlComponent::SetControlsUseSkeletalAnimation(const TArray<FName>& Names, const bool bUseSkeletalAnimation, const float SkeletalAnimationVelocityMultiplier) {
}

void UPhysicsControlComponent::SetControlsInSetUseSkeletalAnimation(const FName Set, const bool bUseSkeletalAnimation, const float SkeletalAnimationVelocityMultiplier) {
}

void UPhysicsControlComponent::SetControlsInSetEnabled(const FName Set, const bool bEnable) {
}

void UPhysicsControlComponent::SetControlsInSetDisableCollision(const FName Set, const bool bDisableCollision) {
}

void UPhysicsControlComponent::SetControlsInSetAutoDisable(const FName Set, const bool bAutoDisable) {
}

void UPhysicsControlComponent::SetControlsEnabled(const TArray<FName>& Names, const bool bEnable) {
}

void UPhysicsControlComponent::SetControlsDisableCollision(const TArray<FName>& Names, const bool bDisableCollision) {
}

void UPhysicsControlComponent::SetControlsAutoDisable(const TArray<FName>& Names, const bool bAutoDisable) {
}

bool UPhysicsControlComponent::SetControlPoint(const FName Name, const FVector position) {
    return false;
}

void UPhysicsControlComponent::SetControlMultipliersInSet(const FName Set, const FPhysicsControlMultiplier ControlMultiplier, const bool bEnableControl) {
}

void UPhysicsControlComponent::SetControlMultipliers(const TArray<FName>& Names, const FPhysicsControlMultiplier ControlMultiplier, const bool bEnableControl) {
}

bool UPhysicsControlComponent::SetControlMultiplier(const FName Name, const FPhysicsControlMultiplier ControlMultiplier, const bool bEnableControl) {
    return false;
}

bool UPhysicsControlComponent::SetControlLinearData(const FName Name, const float Strength, const float DampingRatio, const float ExtraDamping, const float MaxForce, const bool bEnableControl) {
    return false;
}

bool UPhysicsControlComponent::SetControlEnabled(const FName Name, const bool bEnable) {
    return false;
}

bool UPhysicsControlComponent::SetControlDisableCollision(const FName Name, const bool bDisableCollision) {
    return false;
}

void UPhysicsControlComponent::SetControlDatasInSet(const FName Set, const FPhysicsControlData ControlData, const bool bEnableControl) {
}

void UPhysicsControlComponent::SetControlDatas(const TArray<FName>& Names, const FPhysicsControlData ControlData, const bool bEnableControl) {
}

bool UPhysicsControlComponent::SetControlData(const FName Name, const FPhysicsControlData ControlData, const bool bEnableControl) {
    return false;
}

bool UPhysicsControlComponent::SetControlAutoDisable(const FName Name, const bool bAutoDisable) {
    return false;
}

bool UPhysicsControlComponent::SetControlAngularData(const FName Name, const float Strength, const float DampingRatio, const float ExtraDamping, const float MaxTorque, const bool bEnableControl) {
    return false;
}

bool UPhysicsControlComponent::SetCachedBoneData(const USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName, const FTransform& TM, const FVector Velocity, const FVector AngularVelocity) {
    return false;
}

bool UPhysicsControlComponent::SetBodyModifierUseSkeletalAnimation(const FName Name, const bool bUseSkeletalAnimation) {
    return false;
}

bool UPhysicsControlComponent::SetBodyModifierUpdateKinematicFromSimulation(const FName Name, const bool bUpdateKinematicFromSimulation) {
    return false;
}

void UPhysicsControlComponent::SetBodyModifiersUseSkeletalAnimation(const TArray<FName>& Names, const bool bUseSkeletalAnimation) {
}

void UPhysicsControlComponent::SetBodyModifiersUpdateKinematicFromSimulation(const TArray<FName>& Names, const bool bUpdateKinematicFromSimulation) {
}

void UPhysicsControlComponent::SetBodyModifiersPhysicsBlendWeight(const TArray<FName>& Names, const float PhysicsBlendWeight) {
}

void UPhysicsControlComponent::SetBodyModifiersMovementType(const TArray<FName>& Names, const EPhysicsMovementType MovementType) {
}

void UPhysicsControlComponent::SetBodyModifiersInSetUseSkeletalAnimation(const FName Set, const bool bUseSkeletalAnimation) {
}

void UPhysicsControlComponent::SetBodyModifiersInSetUpdateKinematicFromSimulation(const FName Set, const bool bUpdateKinematicFromSimulation) {
}

void UPhysicsControlComponent::SetBodyModifiersInSetPhysicsBlendWeight(const FName Set, const float PhysicsBlendWeight) {
}

void UPhysicsControlComponent::SetBodyModifiersInSetMovementType(const FName Set, const EPhysicsMovementType MovementType) {
}

void UPhysicsControlComponent::SetBodyModifiersInSetGravityMultiplier(const FName Set, const float GravityMultiplier) {
}

void UPhysicsControlComponent::SetBodyModifiersInSetCollisionType(const FName Set, const TEnumAsByte<ECollisionEnabled::Type> CollisionType) {
}

void UPhysicsControlComponent::SetBodyModifiersGravityMultiplier(const TArray<FName>& Names, const float GravityMultiplier) {
}

void UPhysicsControlComponent::SetBodyModifiersCollisionType(const TArray<FName>& Names, const TEnumAsByte<ECollisionEnabled::Type> CollisionType) {
}

bool UPhysicsControlComponent::SetBodyModifierPhysicsBlendWeight(const FName Name, const float PhysicsBlendWeight) {
    return false;
}

bool UPhysicsControlComponent::SetBodyModifierMovementType(const FName Name, const EPhysicsMovementType MovementType) {
    return false;
}

bool UPhysicsControlComponent::SetBodyModifierKinematicTarget(const FName Name, const FVector KinematicTargetPosition, const FRotator KinematicTargetOrienation, const bool bMakeKinematic) {
    return false;
}

bool UPhysicsControlComponent::SetBodyModifierGravityMultiplier(const FName Name, const float GravityMultiplier) {
    return false;
}

bool UPhysicsControlComponent::SetBodyModifierCollisionType(const FName Name, const TEnumAsByte<ECollisionEnabled::Type> CollisionType) {
    return false;
}

bool UPhysicsControlComponent::ResetControlPoint(const FName Name) {
    return false;
}

bool UPhysicsControlComponent::ResetBodyModifierToCachedBoneTransform(const FName Name, const EResetToCachedTargetBehavior Behavior) {
    return false;
}

void UPhysicsControlComponent::ResetBodyModifiersToCachedBoneTransforms(const TArray<FName>& Names, const EResetToCachedTargetBehavior Behavior) {
}

void UPhysicsControlComponent::ResetBodyModifiersInSetToCachedBoneTransforms(const FName SetName, const EResetToCachedTargetBehavior Behavior) {
}

TArray<FName> UPhysicsControlComponent::GetSetsContainingControl(const FName Control) const {
    return TArray<FName>();
}

TArray<FName> UPhysicsControlComponent::GetSetsContainingBodyModifier(const FName Control) const {
    return TArray<FName>();
}

TMap<FName, FPhysicsControlLimbBones> UPhysicsControlComponent::GetLimbBonesFromSkeletalMesh(USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FPhysicsControlLimbSetupData>& LimbSetupData) const {
    return TMap<FName, FPhysicsControlLimbBones>();
}

bool UPhysicsControlComponent::GetControlTarget(const FName Name, FPhysicsControlTarget& ControlTarget) const {
    return false;
}

TArray<FName> UPhysicsControlComponent::GetControlNamesInSet(const FName Set) const {
    return TArray<FName>();
}

bool UPhysicsControlComponent::GetControlMultiplier(const FName Name, FPhysicsControlMultiplier& ControlMultiplier) const {
    return false;
}

bool UPhysicsControlComponent::GetControlEnabled(const FName Name) const {
    return false;
}

bool UPhysicsControlComponent::GetControlData(const FName Name, FPhysicsControlData& ControlData) const {
    return false;
}

bool UPhysicsControlComponent::GetControlAutoDisable(const FName Name) const {
    return false;
}

FVector UPhysicsControlComponent::GetCachedBoneVelocity(const USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName) {
    return FVector{};
}

TArray<FVector> UPhysicsControlComponent::GetCachedBoneVelocities(const USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FName>& BoneNames) {
    return TArray<FVector>();
}

TArray<FTransform> UPhysicsControlComponent::GetCachedBoneTransforms(const USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FName>& BoneNames) {
    return TArray<FTransform>();
}

FTransform UPhysicsControlComponent::GetCachedBoneTransform(const USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName) {
    return FTransform{};
}

TArray<FVector> UPhysicsControlComponent::GetCachedBonePositions(const USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FName>& BoneNames) {
    return TArray<FVector>();
}

FVector UPhysicsControlComponent::GetCachedBonePosition(const USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName) {
    return FVector{};
}

TArray<FRotator> UPhysicsControlComponent::GetCachedBoneOrientations(const USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FName>& BoneNames) {
    return TArray<FRotator>();
}

FRotator UPhysicsControlComponent::GetCachedBoneOrientation(const USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName) {
    return FRotator{};
}

FVector UPhysicsControlComponent::GetCachedBoneAngularVelocity(const USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName) {
    return FVector{};
}

TArray<FVector> UPhysicsControlComponent::GetCachedBoneAngularVelocities(const USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FName>& BoneNames) {
    return TArray<FVector>();
}

TArray<FName> UPhysicsControlComponent::GetBodyModifierNamesInSet(const FName Set) const {
    return TArray<FName>();
}

TArray<FName> UPhysicsControlComponent::GetAllControlNames() const {
    return TArray<FName>();
}

TArray<FName> UPhysicsControlComponent::GetAllBodyModifierNames() const {
    return TArray<FName>();
}

void UPhysicsControlComponent::DestroyControlsInSet(const FName Set) {
}

void UPhysicsControlComponent::DestroyControls(const TArray<FName>& Names) {
}

bool UPhysicsControlComponent::DestroyControl(const FName Name) {
    return false;
}

void UPhysicsControlComponent::DestroyBodyModifiersInSet(const FName Set) {
}

void UPhysicsControlComponent::DestroyBodyModifiers(const TArray<FName>& Names) {
}

bool UPhysicsControlComponent::DestroyBodyModifier(const FName Name) {
    return false;
}

bool UPhysicsControlComponent::CreateNamedControl(FName Name, UMeshComponent* ParentMeshComponent, const FName ParentBoneName, UMeshComponent* ChildMeshComponent, const FName ChildBoneName, const FPhysicsControlData ControlData, const FPhysicsControlTarget ControlTarget, const FPhysicsControlSettings ControlSettings, const FName Set, const bool bEnabled) {
    return false;
}

bool UPhysicsControlComponent::CreateNamedBodyModifier(const FName Name, UMeshComponent* MeshComponent, const FName BoneName, const FName Set, const EPhysicsMovementType MovementType, const TEnumAsByte<ECollisionEnabled::Type> CollisionType, const float GravityMultiplier, const float PhysicsBlendWeight, const bool bUseSkeletalAnimation, const bool bUpdateKinematicFromSimulation) {
    return false;
}

TArray<FName> UPhysicsControlComponent::CreateControlsFromSkeletalMeshBelow(USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName, const bool bIncludeSelf, const EPhysicsControlType ControlType, const FPhysicsControlData ControlData, const FPhysicsControlSettings ControlSettings, const FName Set, const bool bEnabled) {
    return TArray<FName>();
}

TArray<FName> UPhysicsControlComponent::CreateControlsFromSkeletalMeshAndConstraintProfileBelow(USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName, const bool bIncludeSelf, const FName ConstraintProfile, const FName Set, const bool bEnabled) {
    return TArray<FName>();
}

TArray<FName> UPhysicsControlComponent::CreateControlsFromSkeletalMeshAndConstraintProfile(USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FName>& BoneNames, const FName ConstraintProfile, const FName Set, const bool bEnabled) {
    return TArray<FName>();
}

TArray<FName> UPhysicsControlComponent::CreateControlsFromSkeletalMesh(USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FName>& BoneNames, const EPhysicsControlType ControlType, const FPhysicsControlData ControlData, const FPhysicsControlSettings ControlSettings, const FName Set, const bool bEnabled) {
    return TArray<FName>();
}

TMap<FName, FPhysicsControlNames> UPhysicsControlComponent::CreateControlsFromLimbBonesAndConstraintProfile(FPhysicsControlNames& AllControls, const TMap<FName, FPhysicsControlLimbBones>& LimbBones, const FName ConstraintProfile, const bool bEnabled) {
    return TMap<FName, FPhysicsControlNames>();
}

TMap<FName, FPhysicsControlNames> UPhysicsControlComponent::CreateControlsFromLimbBones(FPhysicsControlNames& AllControls, const TMap<FName, FPhysicsControlLimbBones>& LimbBones, const EPhysicsControlType ControlType, const FPhysicsControlData ControlData, const FPhysicsControlSettings ControlSettings, const bool bEnabled) {
    return TMap<FName, FPhysicsControlNames>();
}

void UPhysicsControlComponent::CreateControlsAndBodyModifiersFromLimbBones(FPhysicsControlNames& AllWorldSpaceControls, TMap<FName, FPhysicsControlNames>& LimbWorldSpaceControls, FPhysicsControlNames& AllParentSpaceControls, TMap<FName, FPhysicsControlNames>& LimbParentSpaceControls, FPhysicsControlNames& AllBodyModifiers, TMap<FName, FPhysicsControlNames>& LimbBodyModifiers, USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FPhysicsControlLimbSetupData>& LimbSetupData, const FPhysicsControlData WorldSpaceControlData, const FPhysicsControlSettings WorldSpaceControlSettings, const bool bEnableWorldSpaceControls, const FPhysicsControlData ParentSpaceControlData, const FPhysicsControlSettings ParentSpaceControlSettings, const bool bEnableParentSpaceControls, const EPhysicsMovementType PhysicsMovementType, const float GravityMultiplier, const float PhysicsBlendWeight) {
}

FName UPhysicsControlComponent::CreateControl(UMeshComponent* ParentMeshComponent, FName ParentBoneName, UMeshComponent* ChildMeshComponent, const FName ChildBoneName, const FPhysicsControlData ControlData, const FPhysicsControlTarget ControlTarget, const FPhysicsControlSettings ControlSettings, FName Set, const bool bEnabled) {
    return NAME_None;
}

TArray<FName> UPhysicsControlComponent::CreateBodyModifiersFromSkeletalMeshBelow(USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName, const bool bIncludeSelf, const FName Set, const EPhysicsMovementType MovementType, const TEnumAsByte<ECollisionEnabled::Type> CollisionType, const float GravityMultiplier, const float PhysicsBlendWeight, const bool bUseSkeletalAnimation, const bool bUpdateKinematicFromSimulation) {
    return TArray<FName>();
}

TMap<FName, FPhysicsControlNames> UPhysicsControlComponent::CreateBodyModifiersFromLimbBones(FPhysicsControlNames& AllBodyModifiers, const TMap<FName, FPhysicsControlLimbBones>& LimbBones, const EPhysicsMovementType MovementType, const TEnumAsByte<ECollisionEnabled::Type> CollisionType, const float GravityMultiplier, const float PhysicsBlendWeight, const bool bUseSkeletalAnimation, const bool bUpdateKinematicFromSimulation) {
    return TMap<FName, FPhysicsControlNames>();
}

FName UPhysicsControlComponent::CreateBodyModifier(UMeshComponent* MeshComponent, const FName BoneName, const FName Set, const EPhysicsMovementType MovementType, const TEnumAsByte<ECollisionEnabled::Type> CollisionType, const float GravityMultiplier, const float PhysicsBlendWeight, const bool bUseSkeletalAnimation, const bool bUpdateKinematicFromSimulation) {
    return NAME_None;
}

void UPhysicsControlComponent::AddControlToSet(FPhysicsControlNames& NewSet, const FName Control, const FName Set) {
}

void UPhysicsControlComponent::AddControlsToSet(FPhysicsControlNames& NewSet, const TArray<FName>& Controls, const FName Set) {
}

void UPhysicsControlComponent::AddBodyModifierToSet(FPhysicsControlNames& NewSet, const FName BodyModifier, const FName Set) {
}

void UPhysicsControlComponent::AddBodyModifiersToSet(FPhysicsControlNames& NewSet, const TArray<FName>& BodyModifiers, const FName Set) {
}


