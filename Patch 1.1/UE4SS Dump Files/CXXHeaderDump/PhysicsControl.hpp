#ifndef UE4SS_SDK_PhysicsControl_HPP
#define UE4SS_SDK_PhysicsControl_HPP

#include "PhysicsControl_enums.hpp"

struct FInitialBodyModifier
{
    class AActor* Actor;                                                              // 0x0000 (size: 0x8)
    FName MeshComponentName;                                                          // 0x0008 (size: 0x8)
    FName BoneName;                                                                   // 0x0010 (size: 0x8)
    EPhysicsMovementType MovementType;                                                // 0x0018 (size: 0x1)
    float GravityMultiplier;                                                          // 0x0020 (size: 0x4)
    FVector KinematicTargetPosition;                                                  // 0x0028 (size: 0x18)
    FQuat KinematicTargetOrientation;                                                 // 0x0040 (size: 0x20)
    bool bUseSkeletalAnimation;                                                       // 0x0060 (size: 0x1)

}; // Size: 0x70

struct FInitialCharacterControls
{
    class AActor* CharacterActor;                                                     // 0x0000 (size: 0x8)
    FName SkeletalMeshComponentName;                                                  // 0x0008 (size: 0x8)
    TArray<FPhysicsControlLimbSetupData> LimbSetupData;                               // 0x0010 (size: 0x10)
    FPhysicsControlData WorldSpaceControlData;                                        // 0x0020 (size: 0x20)
    FPhysicsControlSettings WorldSpaceControlSettings;                                // 0x0040 (size: 0x28)
    bool bEnableWorldSpaceControls;                                                   // 0x0068 (size: 0x1)
    FPhysicsControlData ParentSpaceControlData;                                       // 0x006C (size: 0x20)
    FPhysicsControlSettings ParentSpaceControlSettings;                               // 0x0090 (size: 0x28)
    bool bEnableParentSpaceControls;                                                  // 0x00B8 (size: 0x1)
    EPhysicsMovementType PhysicsMovementType;                                         // 0x00B9 (size: 0x1)

}; // Size: 0xC0

struct FInitialPhysicsControl
{
    class AActor* ParentActor;                                                        // 0x0000 (size: 0x8)
    FName ParentMeshComponentName;                                                    // 0x0008 (size: 0x8)
    FName ParentBoneName;                                                             // 0x0010 (size: 0x8)
    class AActor* ChildActor;                                                         // 0x0018 (size: 0x8)
    FName ChildMeshComponentName;                                                     // 0x0020 (size: 0x8)
    FName ChildBoneName;                                                              // 0x0028 (size: 0x8)
    FPhysicsControlData ControlData;                                                  // 0x0030 (size: 0x20)
    FPhysicsControlMultiplier ControlMultiplier;                                      // 0x0050 (size: 0x70)
    FPhysicsControlTarget ControlTarget;                                              // 0x00C0 (size: 0x68)
    FPhysicsControlSettings ControlSettings;                                          // 0x0128 (size: 0x28)

}; // Size: 0x150

struct FPhysicsControl
{
    class UMeshComponent* ParentMeshComponent;                                        // 0x0000 (size: 0x8)
    FName ParentBoneName;                                                             // 0x0008 (size: 0x8)
    class UMeshComponent* ChildMeshComponent;                                         // 0x0010 (size: 0x8)
    FName ChildBoneName;                                                              // 0x0018 (size: 0x8)
    FPhysicsControlData ControlData;                                                  // 0x0020 (size: 0x20)
    FPhysicsControlMultiplier ControlMultiplier;                                      // 0x0040 (size: 0x70)
    FPhysicsControlTarget ControlTarget;                                              // 0x00B0 (size: 0x68)
    FPhysicsControlSettings ControlSettings;                                          // 0x0118 (size: 0x28)

}; // Size: 0x140

struct FPhysicsControlData
{
    float LinearStrength;                                                             // 0x0000 (size: 0x4)
    float LinearDampingRatio;                                                         // 0x0004 (size: 0x4)
    float LinearExtraDamping;                                                         // 0x0008 (size: 0x4)
    float MaxForce;                                                                   // 0x000C (size: 0x4)
    float AngularStrength;                                                            // 0x0010 (size: 0x4)
    float AngularDampingRatio;                                                        // 0x0014 (size: 0x4)
    float AngularExtraDamping;                                                        // 0x0018 (size: 0x4)
    float MaxTorque;                                                                  // 0x001C (size: 0x4)

}; // Size: 0x20

struct FPhysicsControlLimbBones
{
}; // Size: 0x20

struct FPhysicsControlLimbSetupData
{
    FName LimbName;                                                                   // 0x0000 (size: 0x8)
    FName StartBone;                                                                  // 0x0008 (size: 0x8)
    bool bIncludeParentBone;                                                          // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FPhysicsControlMultiplier
{
    FVector LinearStrengthMultiplier;                                                 // 0x0000 (size: 0x18)
    FVector LinearDampingRatioMultiplier;                                             // 0x0018 (size: 0x18)
    FVector LinearExtraDampingMultiplier;                                             // 0x0030 (size: 0x18)
    FVector MaxForceMultiplier;                                                       // 0x0048 (size: 0x18)
    float AngularStrengthMultiplier;                                                  // 0x0060 (size: 0x4)
    float AngularDampingRatioMultiplier;                                              // 0x0064 (size: 0x4)
    float AngularExtraDampingMultiplier;                                              // 0x0068 (size: 0x4)
    float MaxTorqueMultiplier;                                                        // 0x006C (size: 0x4)

}; // Size: 0x70

struct FPhysicsControlNames
{
    TArray<FName> Names;                                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FPhysicsControlSettings
{
    FVector ControlPoint;                                                             // 0x0000 (size: 0x18)
    bool bUseSkeletalAnimation;                                                       // 0x0018 (size: 0x1)
    float SkeletalAnimationVelocityMultiplier;                                        // 0x001C (size: 0x4)
    bool bDisableCollision;                                                           // 0x0020 (size: 0x1)
    bool bAutoDisable;                                                                // 0x0021 (size: 0x1)

}; // Size: 0x28

struct FPhysicsControlTarget
{
    FVector TargetPosition;                                                           // 0x0000 (size: 0x18)
    FVector TargetVelocity;                                                           // 0x0018 (size: 0x18)
    FRotator TargetOrientation;                                                       // 0x0030 (size: 0x18)
    FVector TargetAngularVelocity;                                                    // 0x0048 (size: 0x18)
    bool bApplyControlPointToTarget;                                                  // 0x0060 (size: 0x1)

}; // Size: 0x68

class APhysicsControlActor : public AActor
{
    class UPhysicsControlComponent* ControlComponent;                                 // 0x0298 (size: 0x8)
    class UPhysicsControlInitializerComponent* ControlInitializerComponent;           // 0x02A0 (size: 0x8)

}; // Size: 0x2A8

class UPhysicsControlComponent : public USceneComponent
{
    float TeleportDistanceThreshold;                                                  // 0x02A0 (size: 0x4)
    float TeleportRotationThreshold;                                                  // 0x02A4 (size: 0x4)
    bool bShowDebugVisualization;                                                     // 0x02A8 (size: 0x1)
    float VisualizationSizeScale;                                                     // 0x02AC (size: 0x4)
    bool bShowDebugControlList;                                                       // 0x02B0 (size: 0x1)
    FString DebugControlDetailFilter;                                                 // 0x02B8 (size: 0x10)
    bool bShowDebugBodyModifierList;                                                  // 0x02C8 (size: 0x1)
    FString DebugBodyModifierDetailFilter;                                            // 0x02D0 (size: 0x10)
    float VelocityPredictionTime;                                                     // 0x02E0 (size: 0x4)
    int32 MaxNumControlsOrModifiersPerName;                                           // 0x02E4 (size: 0x4)

    void UpdateTargetCaches(float DeltaTime);
    void UpdateControls(float DeltaTime);
    bool SetControlUseSkeletalAnimation(const FName Name, const bool bUseSkeletalAnimation, const float SkeletalAnimationVelocityMultiplier);
    void SetControlTargetsInSet(const FName Set, const FPhysicsControlTarget ControlTarget, const bool bEnableControl);
    void SetControlTargets(const TArray<FName>& Names, const FPhysicsControlTarget ControlTarget, const bool bEnableControl);
    void SetControlTargetPositionsInSet(const FName SetName, const FVector position, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    bool SetControlTargetPositionsFromArray(const TArray<FName>& Names, const TArray<FVector>& Positions, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    void SetControlTargetPositionsAndOrientationsInSet(const FName SetName, const FVector position, const FRotator Orientation, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    bool SetControlTargetPositionsAndOrientationsFromArray(const TArray<FName>& Names, const TArray<FVector>& Positions, const TArray<FRotator>& Orientations, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    void SetControlTargetPositionsAndOrientations(const TArray<FName>& Names, const FVector position, const FRotator Orientation, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    void SetControlTargetPositions(const TArray<FName>& Names, const FVector position, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    bool SetControlTargetPositionAndOrientation(const FName Name, const FVector position, const FRotator Orientation, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    bool SetControlTargetPosition(const FName Name, const FVector position, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    bool SetControlTargetPoses(const FName Name, const FVector ParentPosition, const FRotator ParentOrientation, const FVector ChildPosition, const FRotator ChildOrientation, const float VelocityDeltaTime, const bool bEnableControl);
    void SetControlTargetOrientationsInSet(const FName SetName, const FRotator Orientation, const float AngularVelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    bool SetControlTargetOrientationsFromArray(const TArray<FName>& Names, const TArray<FRotator>& Orientations, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    void SetControlTargetOrientations(const TArray<FName>& Names, const FRotator Orientation, const float AngularVelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    bool SetControlTargetOrientation(const FName Name, const FRotator Orientation, const float AngularVelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    bool SetControlTarget(const FName Name, const FPhysicsControlTarget ControlTarget, const bool bEnableControl);
    void SetControlsUseSkeletalAnimation(const TArray<FName>& Names, const bool bUseSkeletalAnimation, const float SkeletalAnimationVelocityMultiplier);
    void SetControlsInSetUseSkeletalAnimation(const FName Set, const bool bUseSkeletalAnimation, const float SkeletalAnimationVelocityMultiplier);
    void SetControlsInSetEnabled(const FName Set, const bool bEnable);
    void SetControlsInSetDisableCollision(const FName Set, const bool bDisableCollision);
    void SetControlsInSetAutoDisable(const FName Set, const bool bAutoDisable);
    void SetControlsEnabled(const TArray<FName>& Names, const bool bEnable);
    void SetControlsDisableCollision(const TArray<FName>& Names, const bool bDisableCollision);
    void SetControlsAutoDisable(const TArray<FName>& Names, const bool bAutoDisable);
    bool SetControlPoint(const FName Name, const FVector position);
    void SetControlMultipliersInSet(const FName Set, const FPhysicsControlMultiplier ControlMultiplier, const bool bEnableControl);
    void SetControlMultipliers(const TArray<FName>& Names, const FPhysicsControlMultiplier ControlMultiplier, const bool bEnableControl);
    bool SetControlMultiplier(const FName Name, const FPhysicsControlMultiplier ControlMultiplier, const bool bEnableControl);
    bool SetControlLinearData(const FName Name, const float Strength, const float DampingRatio, const float ExtraDamping, const float MaxForce, const bool bEnableControl);
    bool SetControlEnabled(const FName Name, const bool bEnable);
    bool SetControlDisableCollision(const FName Name, const bool bDisableCollision);
    void SetControlDatasInSet(const FName Set, const FPhysicsControlData ControlData, const bool bEnableControl);
    void SetControlDatas(const TArray<FName>& Names, const FPhysicsControlData ControlData, const bool bEnableControl);
    bool SetControlData(const FName Name, const FPhysicsControlData ControlData, const bool bEnableControl);
    bool SetControlAutoDisable(const FName Name, const bool bAutoDisable);
    bool SetControlAngularData(const FName Name, const float Strength, const float DampingRatio, const float ExtraDamping, const float MaxTorque, const bool bEnableControl);
    bool SetCachedBoneData(const class USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName, const FTransform& TM, const FVector Velocity, const FVector AngularVelocity);
    bool SetBodyModifierUseSkeletalAnimation(const FName Name, const bool bUseSkeletalAnimation);
    bool SetBodyModifierUpdateKinematicFromSimulation(const FName Name, const bool bUpdateKinematicFromSimulation);
    void SetBodyModifiersUseSkeletalAnimation(const TArray<FName>& Names, const bool bUseSkeletalAnimation);
    void SetBodyModifiersUpdateKinematicFromSimulation(const TArray<FName>& Names, const bool bUpdateKinematicFromSimulation);
    void SetBodyModifiersPhysicsBlendWeight(const TArray<FName>& Names, const float PhysicsBlendWeight);
    void SetBodyModifiersMovementType(const TArray<FName>& Names, const EPhysicsMovementType MovementType);
    void SetBodyModifiersInSetUseSkeletalAnimation(const FName Set, const bool bUseSkeletalAnimation);
    void SetBodyModifiersInSetUpdateKinematicFromSimulation(const FName Set, const bool bUpdateKinematicFromSimulation);
    void SetBodyModifiersInSetPhysicsBlendWeight(const FName Set, const float PhysicsBlendWeight);
    void SetBodyModifiersInSetMovementType(const FName Set, const EPhysicsMovementType MovementType);
    void SetBodyModifiersInSetGravityMultiplier(const FName Set, const float GravityMultiplier);
    void SetBodyModifiersInSetCollisionType(const FName Set, const TEnumAsByte<ECollisionEnabled::Type> CollisionType);
    void SetBodyModifiersGravityMultiplier(const TArray<FName>& Names, const float GravityMultiplier);
    void SetBodyModifiersCollisionType(const TArray<FName>& Names, const TEnumAsByte<ECollisionEnabled::Type> CollisionType);
    bool SetBodyModifierPhysicsBlendWeight(const FName Name, const float PhysicsBlendWeight);
    bool SetBodyModifierMovementType(const FName Name, const EPhysicsMovementType MovementType);
    bool SetBodyModifierKinematicTarget(const FName Name, const FVector KinematicTargetPosition, const FRotator KinematicTargetOrienation, const bool bMakeKinematic);
    bool SetBodyModifierGravityMultiplier(const FName Name, const float GravityMultiplier);
    bool SetBodyModifierCollisionType(const FName Name, const TEnumAsByte<ECollisionEnabled::Type> CollisionType);
    bool ResetControlPoint(const FName Name);
    bool ResetBodyModifierToCachedBoneTransform(const FName Name, const EResetToCachedTargetBehavior Behavior);
    void ResetBodyModifiersToCachedBoneTransforms(const TArray<FName>& Names, const EResetToCachedTargetBehavior Behavior);
    void ResetBodyModifiersInSetToCachedBoneTransforms(const FName SetName, const EResetToCachedTargetBehavior Behavior);
    TArray<FName> GetSetsContainingControl(const FName Control);
    TArray<FName> GetSetsContainingBodyModifier(const FName Control);
    TMap<class FName, class FPhysicsControlLimbBones> GetLimbBonesFromSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FPhysicsControlLimbSetupData>& LimbSetupData);
    bool GetControlTarget(const FName Name, FPhysicsControlTarget& ControlTarget);
    TArray<FName> GetControlNamesInSet(const FName Set);
    bool GetControlMultiplier(const FName Name, FPhysicsControlMultiplier& ControlMultiplier);
    bool GetControlEnabled(const FName Name);
    bool GetControlData(const FName Name, FPhysicsControlData& ControlData);
    bool GetControlAutoDisable(const FName Name);
    FVector GetCachedBoneVelocity(const class USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName);
    TArray<FVector> GetCachedBoneVelocities(const class USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FName>& BoneNames);
    TArray<FTransform> GetCachedBoneTransforms(const class USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FName>& BoneNames);
    FTransform GetCachedBoneTransform(const class USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName);
    TArray<FVector> GetCachedBonePositions(const class USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FName>& BoneNames);
    FVector GetCachedBonePosition(const class USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName);
    TArray<FRotator> GetCachedBoneOrientations(const class USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FName>& BoneNames);
    FRotator GetCachedBoneOrientation(const class USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName);
    FVector GetCachedBoneAngularVelocity(const class USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName);
    TArray<FVector> GetCachedBoneAngularVelocities(const class USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FName>& BoneNames);
    TArray<FName> GetBodyModifierNamesInSet(const FName Set);
    TArray<FName> GetAllControlNames();
    TArray<FName> GetAllBodyModifierNames();
    void DestroyControlsInSet(const FName Set);
    void DestroyControls(const TArray<FName>& Names);
    bool DestroyControl(const FName Name);
    void DestroyBodyModifiersInSet(const FName Set);
    void DestroyBodyModifiers(const TArray<FName>& Names);
    bool DestroyBodyModifier(const FName Name);
    bool CreateNamedControl(FName Name, class UMeshComponent* ParentMeshComponent, const FName ParentBoneName, class UMeshComponent* ChildMeshComponent, const FName ChildBoneName, const FPhysicsControlData ControlData, const FPhysicsControlTarget ControlTarget, const FPhysicsControlSettings ControlSettings, const FName Set, const bool bEnabled);
    bool CreateNamedBodyModifier(const FName Name, class UMeshComponent* MeshComponent, const FName BoneName, const FName Set, const EPhysicsMovementType MovementType, const TEnumAsByte<ECollisionEnabled::Type> CollisionType, const float GravityMultiplier, const float PhysicsBlendWeight, const bool bUseSkeletalAnimation, const bool bUpdateKinematicFromSimulation);
    TArray<FName> CreateControlsFromSkeletalMeshBelow(class USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName, const bool bIncludeSelf, const EPhysicsControlType ControlType, const FPhysicsControlData ControlData, const FPhysicsControlSettings ControlSettings, const FName Set, const bool bEnabled);
    TArray<FName> CreateControlsFromSkeletalMeshAndConstraintProfileBelow(class USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName, const bool bIncludeSelf, const FName ConstraintProfile, const FName Set, const bool bEnabled);
    TArray<FName> CreateControlsFromSkeletalMeshAndConstraintProfile(class USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FName>& BoneNames, const FName ConstraintProfile, const FName Set, const bool bEnabled);
    TArray<FName> CreateControlsFromSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FName>& BoneNames, const EPhysicsControlType ControlType, const FPhysicsControlData ControlData, const FPhysicsControlSettings ControlSettings, const FName Set, const bool bEnabled);
    TMap<class FName, class FPhysicsControlNames> CreateControlsFromLimbBonesAndConstraintProfile(FPhysicsControlNames& AllControls, const TMap<class FName, class FPhysicsControlLimbBones>& LimbBones, const FName ConstraintProfile, const bool bEnabled);
    TMap<class FName, class FPhysicsControlNames> CreateControlsFromLimbBones(FPhysicsControlNames& AllControls, const TMap<class FName, class FPhysicsControlLimbBones>& LimbBones, const EPhysicsControlType ControlType, const FPhysicsControlData ControlData, const FPhysicsControlSettings ControlSettings, const bool bEnabled);
    void CreateControlsAndBodyModifiersFromLimbBones(FPhysicsControlNames& AllWorldSpaceControls, TMap<class FName, class FPhysicsControlNames>& LimbWorldSpaceControls, FPhysicsControlNames& AllParentSpaceControls, TMap<class FName, class FPhysicsControlNames>& LimbParentSpaceControls, FPhysicsControlNames& AllBodyModifiers, TMap<class FName, class FPhysicsControlNames>& LimbBodyModifiers, class USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FPhysicsControlLimbSetupData>& LimbSetupData, const FPhysicsControlData WorldSpaceControlData, const FPhysicsControlSettings WorldSpaceControlSettings, const bool bEnableWorldSpaceControls, const FPhysicsControlData ParentSpaceControlData, const FPhysicsControlSettings ParentSpaceControlSettings, const bool bEnableParentSpaceControls, const EPhysicsMovementType PhysicsMovementType, const float GravityMultiplier, const float PhysicsBlendWeight);
    FName CreateControl(class UMeshComponent* ParentMeshComponent, FName ParentBoneName, class UMeshComponent* ChildMeshComponent, const FName ChildBoneName, const FPhysicsControlData ControlData, const FPhysicsControlTarget ControlTarget, const FPhysicsControlSettings ControlSettings, FName Set, const bool bEnabled);
    TArray<FName> CreateBodyModifiersFromSkeletalMeshBelow(class USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName, const bool bIncludeSelf, const FName Set, const EPhysicsMovementType MovementType, const TEnumAsByte<ECollisionEnabled::Type> CollisionType, const float GravityMultiplier, const float PhysicsBlendWeight, const bool bUseSkeletalAnimation, const bool bUpdateKinematicFromSimulation);
    TMap<class FName, class FPhysicsControlNames> CreateBodyModifiersFromLimbBones(FPhysicsControlNames& AllBodyModifiers, const TMap<class FName, class FPhysicsControlLimbBones>& LimbBones, const EPhysicsMovementType MovementType, const TEnumAsByte<ECollisionEnabled::Type> CollisionType, const float GravityMultiplier, const float PhysicsBlendWeight, const bool bUseSkeletalAnimation, const bool bUpdateKinematicFromSimulation);
    FName CreateBodyModifier(class UMeshComponent* MeshComponent, const FName BoneName, const FName Set, const EPhysicsMovementType MovementType, const TEnumAsByte<ECollisionEnabled::Type> CollisionType, const float GravityMultiplier, const float PhysicsBlendWeight, const bool bUseSkeletalAnimation, const bool bUpdateKinematicFromSimulation);
    void AddControlToSet(FPhysicsControlNames& NewSet, const FName Control, const FName Set);
    void AddControlsToSet(FPhysicsControlNames& NewSet, const TArray<FName>& Controls, const FName Set);
    void AddBodyModifierToSet(FPhysicsControlNames& NewSet, const FName BodyModifier, const FName Set);
    void AddBodyModifiersToSet(FPhysicsControlNames& NewSet, const TArray<FName>& BodyModifiers, const FName Set);
}; // Size: 0x2F0

class UPhysicsControlInitializerComponent : public USceneComponent
{
    FInitialCharacterControls InitialCharacterControls;                               // 0x02A0 (size: 0xC0)
    TMap<class FName, class FInitialPhysicsControl> InitialControls;                  // 0x0360 (size: 0x50)
    TMap<class FName, class FInitialBodyModifier> InitialBodyModifiers;               // 0x03B0 (size: 0x50)
    bool bCreateControlsAtBeginPlay;                                                  // 0x0400 (size: 0x1)

    void CreateControls(class UPhysicsControlComponent* PhysicsControlComponent);
}; // Size: 0x410

class UPhysicsControlProfileAsset : public UObject
{
    TSoftObjectPtr<USkeletalMesh> PreviewSkeletalMesh;                                // 0x0030 (size: 0x30)
    float TestValue;                                                                  // 0x0060 (size: 0x4)

    void Log();
}; // Size: 0x68

#endif
