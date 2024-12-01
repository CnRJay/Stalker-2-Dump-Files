#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionEnabled -FallbackName=ECollisionEnabled
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "EPhysicsControlType.h"
#include "EPhysicsMovementType.h"
#include "EResetToCachedTargetBehavior.h"
#include "PhysicsControlData.h"
#include "PhysicsControlLimbBones.h"
#include "PhysicsControlLimbSetupData.h"
#include "PhysicsControlMultiplier.h"
#include "PhysicsControlNames.h"
#include "PhysicsControlSettings.h"
#include "PhysicsControlTarget.h"
#include "PhysicsControlComponent.generated.h"

class UMeshComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PHYSICSCONTROL_API UPhysicsControlComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportRotationThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDebugVisualization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisualizationSizeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDebugControlList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugControlDetailFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDebugBodyModifierList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugBodyModifierDetailFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityPredictionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumControlsOrModifiersPerName;
    
    UPhysicsControlComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateTargetCaches(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateControls(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    bool SetControlUseSkeletalAnimation(const FName Name, const bool bUseSkeletalAnimation, const float SkeletalAnimationVelocityMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetControlTargetsInSet(const FName Set, const FPhysicsControlTarget ControlTarget, const bool bEnableControl);
    
    UFUNCTION(BlueprintCallable)
    void SetControlTargets(const TArray<FName>& Names, const FPhysicsControlTarget ControlTarget, const bool bEnableControl);
    
    UFUNCTION(BlueprintCallable)
    void SetControlTargetPositionsInSet(const FName SetName, const FVector position, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    
    UFUNCTION(BlueprintCallable)
    bool SetControlTargetPositionsFromArray(const TArray<FName>& Names, const TArray<FVector>& Positions, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetControlTargetPositionsAndOrientationsInSet(const FName SetName, const FVector position, const FRotator Orientation, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    
    UFUNCTION(BlueprintCallable)
    bool SetControlTargetPositionsAndOrientationsFromArray(const TArray<FName>& Names, const TArray<FVector>& Positions, const TArray<FRotator>& Orientations, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetControlTargetPositionsAndOrientations(const TArray<FName>& Names, const FVector position, const FRotator Orientation, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetControlTargetPositions(const TArray<FName>& Names, const FVector position, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    
    UFUNCTION(BlueprintCallable)
    bool SetControlTargetPositionAndOrientation(const FName Name, const FVector position, const FRotator Orientation, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    
    UFUNCTION(BlueprintCallable)
    bool SetControlTargetPosition(const FName Name, const FVector position, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    
    UFUNCTION(BlueprintCallable)
    bool SetControlTargetPoses(const FName Name, const FVector ParentPosition, const FRotator ParentOrientation, const FVector ChildPosition, const FRotator ChildOrientation, const float VelocityDeltaTime, const bool bEnableControl);
    
    UFUNCTION(BlueprintCallable)
    void SetControlTargetOrientationsInSet(const FName SetName, const FRotator Orientation, const float AngularVelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    
    UFUNCTION(BlueprintCallable)
    bool SetControlTargetOrientationsFromArray(const TArray<FName>& Names, const TArray<FRotator>& Orientations, const float VelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetControlTargetOrientations(const TArray<FName>& Names, const FRotator Orientation, const float AngularVelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    
    UFUNCTION(BlueprintCallable)
    bool SetControlTargetOrientation(const FName Name, const FRotator Orientation, const float AngularVelocityDeltaTime, const bool bEnableControl, const bool bApplyControlPointToTarget);
    
    UFUNCTION(BlueprintCallable)
    bool SetControlTarget(const FName Name, const FPhysicsControlTarget ControlTarget, const bool bEnableControl);
    
    UFUNCTION(BlueprintCallable)
    void SetControlsUseSkeletalAnimation(const TArray<FName>& Names, const bool bUseSkeletalAnimation, const float SkeletalAnimationVelocityMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetControlsInSetUseSkeletalAnimation(const FName Set, const bool bUseSkeletalAnimation, const float SkeletalAnimationVelocityMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetControlsInSetEnabled(const FName Set, const bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetControlsInSetDisableCollision(const FName Set, const bool bDisableCollision);
    
    UFUNCTION(BlueprintCallable)
    void SetControlsInSetAutoDisable(const FName Set, const bool bAutoDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetControlsEnabled(const TArray<FName>& Names, const bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetControlsDisableCollision(const TArray<FName>& Names, const bool bDisableCollision);
    
    UFUNCTION(BlueprintCallable)
    void SetControlsAutoDisable(const TArray<FName>& Names, const bool bAutoDisable);
    
    UFUNCTION(BlueprintCallable)
    bool SetControlPoint(const FName Name, const FVector position);
    
    UFUNCTION(BlueprintCallable)
    void SetControlMultipliersInSet(const FName Set, const FPhysicsControlMultiplier ControlMultiplier, const bool bEnableControl);
    
    UFUNCTION(BlueprintCallable)
    void SetControlMultipliers(const TArray<FName>& Names, const FPhysicsControlMultiplier ControlMultiplier, const bool bEnableControl);
    
    UFUNCTION(BlueprintCallable)
    bool SetControlMultiplier(const FName Name, const FPhysicsControlMultiplier ControlMultiplier, const bool bEnableControl);
    
    UFUNCTION(BlueprintCallable)
    bool SetControlLinearData(const FName Name, const float Strength, const float DampingRatio, const float ExtraDamping, const float MaxForce, const bool bEnableControl);
    
    UFUNCTION(BlueprintCallable)
    bool SetControlEnabled(const FName Name, const bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    bool SetControlDisableCollision(const FName Name, const bool bDisableCollision);
    
    UFUNCTION(BlueprintCallable)
    void SetControlDatasInSet(const FName Set, const FPhysicsControlData ControlData, const bool bEnableControl);
    
    UFUNCTION(BlueprintCallable)
    void SetControlDatas(const TArray<FName>& Names, const FPhysicsControlData ControlData, const bool bEnableControl);
    
    UFUNCTION(BlueprintCallable)
    bool SetControlData(const FName Name, const FPhysicsControlData ControlData, const bool bEnableControl);
    
    UFUNCTION(BlueprintCallable)
    bool SetControlAutoDisable(const FName Name, const bool bAutoDisable);
    
    UFUNCTION(BlueprintCallable)
    bool SetControlAngularData(const FName Name, const float Strength, const float DampingRatio, const float ExtraDamping, const float MaxTorque, const bool bEnableControl);
    
    UFUNCTION(BlueprintCallable)
    bool SetCachedBoneData(const USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName, const FTransform& TM, const FVector Velocity, const FVector AngularVelocity);
    
    UFUNCTION(BlueprintCallable)
    bool SetBodyModifierUseSkeletalAnimation(const FName Name, const bool bUseSkeletalAnimation);
    
    UFUNCTION(BlueprintCallable)
    bool SetBodyModifierUpdateKinematicFromSimulation(const FName Name, const bool bUpdateKinematicFromSimulation);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyModifiersUseSkeletalAnimation(const TArray<FName>& Names, const bool bUseSkeletalAnimation);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyModifiersUpdateKinematicFromSimulation(const TArray<FName>& Names, const bool bUpdateKinematicFromSimulation);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyModifiersPhysicsBlendWeight(const TArray<FName>& Names, const float PhysicsBlendWeight);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyModifiersMovementType(const TArray<FName>& Names, const EPhysicsMovementType MovementType);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyModifiersInSetUseSkeletalAnimation(const FName Set, const bool bUseSkeletalAnimation);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyModifiersInSetUpdateKinematicFromSimulation(const FName Set, const bool bUpdateKinematicFromSimulation);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyModifiersInSetPhysicsBlendWeight(const FName Set, const float PhysicsBlendWeight);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyModifiersInSetMovementType(const FName Set, const EPhysicsMovementType MovementType);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyModifiersInSetGravityMultiplier(const FName Set, const float GravityMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyModifiersInSetCollisionType(const FName Set, const TEnumAsByte<ECollisionEnabled::Type> CollisionType);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyModifiersGravityMultiplier(const TArray<FName>& Names, const float GravityMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyModifiersCollisionType(const TArray<FName>& Names, const TEnumAsByte<ECollisionEnabled::Type> CollisionType);
    
    UFUNCTION(BlueprintCallable)
    bool SetBodyModifierPhysicsBlendWeight(const FName Name, const float PhysicsBlendWeight);
    
    UFUNCTION(BlueprintCallable)
    bool SetBodyModifierMovementType(const FName Name, const EPhysicsMovementType MovementType);
    
    UFUNCTION(BlueprintCallable)
    bool SetBodyModifierKinematicTarget(const FName Name, const FVector KinematicTargetPosition, const FRotator KinematicTargetOrienation, const bool bMakeKinematic);
    
    UFUNCTION(BlueprintCallable)
    bool SetBodyModifierGravityMultiplier(const FName Name, const float GravityMultiplier);
    
    UFUNCTION(BlueprintCallable)
    bool SetBodyModifierCollisionType(const FName Name, const TEnumAsByte<ECollisionEnabled::Type> CollisionType);
    
    UFUNCTION(BlueprintCallable)
    bool ResetControlPoint(const FName Name);
    
    UFUNCTION(BlueprintCallable)
    bool ResetBodyModifierToCachedBoneTransform(const FName Name, const EResetToCachedTargetBehavior Behavior);
    
    UFUNCTION(BlueprintCallable)
    void ResetBodyModifiersToCachedBoneTransforms(const TArray<FName>& Names, const EResetToCachedTargetBehavior Behavior);
    
    UFUNCTION(BlueprintCallable)
    void ResetBodyModifiersInSetToCachedBoneTransforms(const FName SetName, const EResetToCachedTargetBehavior Behavior);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetSetsContainingControl(const FName Control) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetSetsContainingBodyModifier(const FName Control) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FName, FPhysicsControlLimbBones> GetLimbBonesFromSkeletalMesh(USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FPhysicsControlLimbSetupData>& LimbSetupData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetControlTarget(const FName Name, FPhysicsControlTarget& ControlTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetControlNamesInSet(const FName Set) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetControlMultiplier(const FName Name, FPhysicsControlMultiplier& ControlMultiplier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetControlEnabled(const FName Name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetControlData(const FName Name, FPhysicsControlData& ControlData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetControlAutoDisable(const FName Name) const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetCachedBoneVelocity(const USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetCachedBoneVelocities(const USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FName>& BoneNames);
    
    UFUNCTION(BlueprintCallable)
    TArray<FTransform> GetCachedBoneTransforms(const USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FName>& BoneNames);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetCachedBoneTransform(const USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetCachedBonePositions(const USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FName>& BoneNames);
    
    UFUNCTION(BlueprintCallable)
    FVector GetCachedBonePosition(const USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    TArray<FRotator> GetCachedBoneOrientations(const USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FName>& BoneNames);
    
    UFUNCTION(BlueprintCallable)
    FRotator GetCachedBoneOrientation(const USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    FVector GetCachedBoneAngularVelocity(const USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetCachedBoneAngularVelocities(const USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FName>& BoneNames);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetBodyModifierNamesInSet(const FName Set) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetAllControlNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetAllBodyModifierNames() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyControlsInSet(const FName Set);
    
    UFUNCTION(BlueprintCallable)
    void DestroyControls(const TArray<FName>& Names);
    
    UFUNCTION(BlueprintCallable)
    bool DestroyControl(const FName Name);
    
    UFUNCTION(BlueprintCallable)
    void DestroyBodyModifiersInSet(const FName Set);
    
    UFUNCTION(BlueprintCallable)
    void DestroyBodyModifiers(const TArray<FName>& Names);
    
    UFUNCTION(BlueprintCallable)
    bool DestroyBodyModifier(const FName Name);
    
    UFUNCTION(BlueprintCallable)
    bool CreateNamedControl(FName Name, UMeshComponent* ParentMeshComponent, const FName ParentBoneName, UMeshComponent* ChildMeshComponent, const FName ChildBoneName, const FPhysicsControlData ControlData, const FPhysicsControlTarget ControlTarget, const FPhysicsControlSettings ControlSettings, const FName Set, const bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    bool CreateNamedBodyModifier(const FName Name, UMeshComponent* MeshComponent, const FName BoneName, const FName Set, const EPhysicsMovementType MovementType, const TEnumAsByte<ECollisionEnabled::Type> CollisionType, const float GravityMultiplier, const float PhysicsBlendWeight, const bool bUseSkeletalAnimation, const bool bUpdateKinematicFromSimulation);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> CreateControlsFromSkeletalMeshBelow(USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName, const bool bIncludeSelf, const EPhysicsControlType ControlType, const FPhysicsControlData ControlData, const FPhysicsControlSettings ControlSettings, const FName Set, const bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> CreateControlsFromSkeletalMeshAndConstraintProfileBelow(USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName, const bool bIncludeSelf, const FName ConstraintProfile, const FName Set, const bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> CreateControlsFromSkeletalMeshAndConstraintProfile(USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FName>& BoneNames, const FName ConstraintProfile, const FName Set, const bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> CreateControlsFromSkeletalMesh(USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FName>& BoneNames, const EPhysicsControlType ControlType, const FPhysicsControlData ControlData, const FPhysicsControlSettings ControlSettings, const FName Set, const bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    TMap<FName, FPhysicsControlNames> CreateControlsFromLimbBonesAndConstraintProfile(FPhysicsControlNames& AllControls, const TMap<FName, FPhysicsControlLimbBones>& LimbBones, const FName ConstraintProfile, const bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    TMap<FName, FPhysicsControlNames> CreateControlsFromLimbBones(FPhysicsControlNames& AllControls, const TMap<FName, FPhysicsControlLimbBones>& LimbBones, const EPhysicsControlType ControlType, const FPhysicsControlData ControlData, const FPhysicsControlSettings ControlSettings, const bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void CreateControlsAndBodyModifiersFromLimbBones(FPhysicsControlNames& AllWorldSpaceControls, TMap<FName, FPhysicsControlNames>& LimbWorldSpaceControls, FPhysicsControlNames& AllParentSpaceControls, TMap<FName, FPhysicsControlNames>& LimbParentSpaceControls, FPhysicsControlNames& AllBodyModifiers, TMap<FName, FPhysicsControlNames>& LimbBodyModifiers, USkeletalMeshComponent* SkeletalMeshComponent, const TArray<FPhysicsControlLimbSetupData>& LimbSetupData, const FPhysicsControlData WorldSpaceControlData, const FPhysicsControlSettings WorldSpaceControlSettings, const bool bEnableWorldSpaceControls, const FPhysicsControlData ParentSpaceControlData, const FPhysicsControlSettings ParentSpaceControlSettings, const bool bEnableParentSpaceControls, const EPhysicsMovementType PhysicsMovementType, const float GravityMultiplier, const float PhysicsBlendWeight);
    
    UFUNCTION(BlueprintCallable)
    FName CreateControl(UMeshComponent* ParentMeshComponent, FName ParentBoneName, UMeshComponent* ChildMeshComponent, const FName ChildBoneName, const FPhysicsControlData ControlData, const FPhysicsControlTarget ControlTarget, const FPhysicsControlSettings ControlSettings, FName Set, const bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> CreateBodyModifiersFromSkeletalMeshBelow(USkeletalMeshComponent* SkeletalMeshComponent, const FName BoneName, const bool bIncludeSelf, const FName Set, const EPhysicsMovementType MovementType, const TEnumAsByte<ECollisionEnabled::Type> CollisionType, const float GravityMultiplier, const float PhysicsBlendWeight, const bool bUseSkeletalAnimation, const bool bUpdateKinematicFromSimulation);
    
    UFUNCTION(BlueprintCallable)
    TMap<FName, FPhysicsControlNames> CreateBodyModifiersFromLimbBones(FPhysicsControlNames& AllBodyModifiers, const TMap<FName, FPhysicsControlLimbBones>& LimbBones, const EPhysicsMovementType MovementType, const TEnumAsByte<ECollisionEnabled::Type> CollisionType, const float GravityMultiplier, const float PhysicsBlendWeight, const bool bUseSkeletalAnimation, const bool bUpdateKinematicFromSimulation);
    
    UFUNCTION(BlueprintCallable)
    FName CreateBodyModifier(UMeshComponent* MeshComponent, const FName BoneName, const FName Set, const EPhysicsMovementType MovementType, const TEnumAsByte<ECollisionEnabled::Type> CollisionType, const float GravityMultiplier, const float PhysicsBlendWeight, const bool bUseSkeletalAnimation, const bool bUpdateKinematicFromSimulation);
    
    UFUNCTION(BlueprintCallable)
    void AddControlToSet(FPhysicsControlNames& NewSet, const FName Control, const FName Set);
    
    UFUNCTION(BlueprintCallable)
    void AddControlsToSet(FPhysicsControlNames& NewSet, const TArray<FName>& Controls, const FName Set);
    
    UFUNCTION(BlueprintCallable)
    void AddBodyModifierToSet(FPhysicsControlNames& NewSet, const FName BodyModifier, const FName Set);
    
    UFUNCTION(BlueprintCallable)
    void AddBodyModifiersToSet(FPhysicsControlNames& NewSet, const TArray<FName>& BodyModifiers, const FName Set);
    
};

