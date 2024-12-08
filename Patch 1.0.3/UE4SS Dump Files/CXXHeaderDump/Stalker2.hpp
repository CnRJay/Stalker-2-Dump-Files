#ifndef UE4SS_SDK_Stalker2_HPP
#define UE4SS_SDK_Stalker2_HPP

#include "Stalker2_enums.hpp"

struct FAIEntityCollection : public FBaseTickAggregationCollection
{
}; // Size: 0x68

struct FAITickComponentCollection : public FBaseTickAggregationCollection
{
    TArray<class UAITickComponent*> AITickComponents;                                 // 0x0068 (size: 0x10)

}; // Size: 0x78

struct FALifeScenarioGroupSIDSelector
{
    FString Value;                                                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FAbilityCamModifierStage
{
    float StageDuration;                                                              // 0x0000 (size: 0x4)
    float DistPercent;                                                                // 0x0004 (size: 0x4)
    float FOV;                                                                        // 0x0008 (size: 0x4)
    float PostProcessBlendWeight;                                                     // 0x000C (size: 0x4)
    FPostProcessSimplifiedSettings PostProcessSettings;                               // 0x0010 (size: 0x80)

}; // Size: 0x90

struct FAbilityParams
{
}; // Size: 0xC

struct FAbilityPrototypeSID
{
    FPrototypeSID AbilitySID;                                                         // 0x0000 (size: 0x40)
    FName ActivationTag;                                                              // 0x0040 (size: 0x8)

}; // Size: 0x48

struct FAchievementData
{
    class UAchievementTracker* Tracker;                                               // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FActionMimicSettings
{
    FName InputAction;                                                                // 0x0000 (size: 0x8)
    EMappingContext MappingContext;                                                   // 0x0008 (size: 0x4)
    int32 TriggerIndex;                                                               // 0x000C (size: 0x4)

}; // Size: 0x10

struct FActorInteractionData
{
    FString InteractableTextToolName;                                                 // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FAdvancedControllerSettings
{
    int32 MappingIndex;                                                               // 0x0000 (size: 0x4)
    int32 TriggerIndex;                                                               // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FAgentCollection : public FBaseTickAggregationCollection
{
}; // Size: 0xA0

struct FAgentDomainRestrictions
{
    EAgentDomain AgentDomain;                                                         // 0x0000 (size: 0x1)
    ESpaceRestrictionType RestrictionType;                                            // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FAgentModelCollection : public FBaseModelCollection
{
}; // Size: 0xB8

struct FAkComponentCollection : public FBaseTickAggregationCollection
{
    TArray<class UAkComponent*> AkComponents;                                         // 0x0068 (size: 0x10)

}; // Size: 0x78

struct FAkComponentRetargetRow : public FTableRowBase
{
    FName TargetSocketName;                                                           // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FAkLateReverbCollection : public FBaseTickAggregationCollection
{
    TArray<class UAkLateReverbComponent*> LateReverbComponents;                       // 0x0068 (size: 0x10)

}; // Size: 0x78

struct FAkRoomCollection : public FBaseTickAggregationCollection
{
    TArray<class UAkRoomComponent*> RoomComponents;                                   // 0x0068 (size: 0x10)

}; // Size: 0x78

struct FAkSurfaceReflectorSetCollection : public FBaseTickAggregationCollection
{
    TArray<class UAkSurfaceReflectorSetComponent*> SurfaceReflectorSetComponents;     // 0x0068 (size: 0x10)

}; // Size: 0x78

struct FAnimAbilityData
{
    float BlendAlpha;                                                                 // 0x0000 (size: 0x4)
    float AimOffsetAlphaYaw;                                                          // 0x0004 (size: 0x4)
    float AimOffsetAlphaPitch;                                                        // 0x0008 (size: 0x4)
    class UBlendSpace* Offset;                                                        // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FAnimBodyPartBonesConfig
{
    EAnimHitBodyPart HitBodyPart;                                                     // 0x0000 (size: 0x1)
    TSet<FName> Bones;                                                                // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FAnimBonesArray
{
}; // Size: 0x10

struct FAnimCutsceneData
{
    float BlendTime;                                                                  // 0x0000 (size: 0x4)
    bool CacheToggleFlag;                                                             // 0x0004 (size: 0x1)

}; // Size: 0x8

struct FAnimDamageData
{
}; // Size: 0x30

struct FAnimDialogContextualArray
{
    TMap<class ELookAtOwnerState, class FAnimSequenceArray> DialogContextualAnimations; // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FAnimDialogContextualWeightedArray
{
    TMap<class ELookAtOwnerState, class FAnimSequenceWeightedArray> DialogContextualAnimations; // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FAnimFaceBlendConfig
{
    FAlphaBlend BlendIn;                                                              // 0x0000 (size: 0x30)
    bool bIsDynamicBlendOut;                                                          // 0x0030 (size: 0x1)
    float FaceBlendOutTime;                                                           // 0x0034 (size: 0x4)
    float FaceBlendOutTriggerTime;                                                    // 0x0038 (size: 0x4)
    FFloatRange AnimationLengthRange;                                                 // 0x003C (size: 0x10)
    FFloatRange BlendOutTriggerTimeRange;                                             // 0x004C (size: 0x10)

}; // Size: 0x60

struct FAnimHandIKData
{
    float Alpha;                                                                      // 0x0000 (size: 0x4)
    FAlphaBlend BlendArgs;                                                            // 0x0008 (size: 0x30)

}; // Size: 0x38

struct FAnimHandItemData
{
    bool bHasItemInHands;                                                             // 0x0000 (size: 0x1)
    bool bHasEmptyHands;                                                              // 0x0001 (size: 0x1)
    class USkeletalMeshComponent* ItemSkeletal;                                       // 0x0008 (size: 0x8)
    class UInteractionComponent* ItemInteractable;                                    // 0x0010 (size: 0x8)
    bool bIsUsesLeftHand;                                                             // 0x0018 (size: 0x1)
    bool bIsUsesRightHand;                                                            // 0x0019 (size: 0x1)
    FAnimPlayerWeaponSwingData SwingData;                                             // 0x0020 (size: 0x80)
    FAnimPlayerWeaponInertiaData InertiaData;                                         // 0x00A0 (size: 0x98)

}; // Size: 0x138

struct FAnimHitBodyPart
{
    FAnimationSingleHit FirstHit;                                                     // 0x0000 (size: 0xC)
    FAnimationSingleHit SecondHit;                                                    // 0x000C (size: 0xC)
    float MinimalAngleBetweenHits;                                                    // 0x0018 (size: 0x4)
    FName NextHitAvailableCurveName;                                                  // 0x001C (size: 0x8)
    TArray<FName> AvailiableParentBoneNames;                                          // 0x0028 (size: 0x10)
    TArray<FName> ExcludedParentBoneNames;                                            // 0x0038 (size: 0x10)
    EAnimHitBodyPartType BodyType;                                                    // 0x0048 (size: 0x1)

}; // Size: 0x58

struct FAnimHitData
{
    bool bEnableAnimationHit;                                                         // 0x0000 (size: 0x1)
    TArray<FAnimHitBodyPart> Hits;                                                    // 0x0008 (size: 0x10)
    EAnimHitSourceType HitSourceType;                                                 // 0x0018 (size: 0x1)
    uint8 MaxCountOfSimultaneouslyPlayedHitAnimations;                                // 0x0019 (size: 0x1)
    uint8 NumberOfAnimationsWhenFirstWillBeStopped;                                   // 0x001A (size: 0x1)
    EAnimHitBodyPartType LastHittedBodyPart;                                          // 0x0080 (size: 0x1)
    float HitDirection;                                                               // 0x0084 (size: 0x4)
    float HitVerticalDirection;                                                       // 0x0088 (size: 0x4)
    EAnimDirections HitAnimDirection;                                                 // 0x008C (size: 0x1)
    EDeathAnimationType DeathAnimationType;                                           // 0x008D (size: 0x1)
    EHumanAnimDamageSource DeathDamageSource;                                         // 0x008E (size: 0x1)
    class UAnimSequence* DeadPose;                                                    // 0x0090 (size: 0x8)
    bool bDiedLyingDown;                                                              // 0x0098 (size: 0x1)
    bool bDiedFromAbove;                                                              // 0x0099 (size: 0x1)
    TMap<class FName, class FRotator> ForceWarpActorRotation;                         // 0x00A0 (size: 0x50)
    TArray<FAnimBodyPartBonesConfig> BodyPartBonesConfig;                             // 0x00F0 (size: 0x10)

}; // Size: 0x138

struct FAnimHitPhysCurves
{
    FPhysicsControlMultiplier WorldSpaceControlMultiplier;                            // 0x0000 (size: 0x70)
    class UCurveFloat* WorldSpaceStrengthMultiplier;                                  // 0x0070 (size: 0x8)
    class UCurveFloat* WorldSpaceBlendValue;                                          // 0x0078 (size: 0x8)
    FPhysicsControlMultiplier ParentSpaceControlMultiplier;                           // 0x0080 (size: 0x70)
    class UCurveFloat* ParentSpaceStrengthMultiplier;                                 // 0x00F0 (size: 0x8)

}; // Size: 0xF8

struct FAnimHitPhysics
{
    class UPhysicsControlComponent* Control;                                          // 0x0000 (size: 0x8)
    FPhysicsControlNames AllBodyModifiers;                                            // 0x0008 (size: 0x10)
    TMap<class FName, class FPhysicsControlNames> LimbBodyModifiers;                  // 0x0018 (size: 0x50)
    EAnimConstraintProfile HitConstraintProfile;                                      // 0x0068 (size: 0x1)
    FAnimPhysicSpaceControl WorldSpaceControls;                                       // 0x0070 (size: 0xA8)
    FAnimPhysicSpaceControl ParentSpaceControls;                                      // 0x0118 (size: 0xA8)
    TArray<FPhysicsControlLimbSetupData> LimbSetup;                                   // 0x01C0 (size: 0x10)
    TMap<class FName, class FAnimHitPhysCurves> HitCurvesForLimbs;                    // 0x01D0 (size: 0x50)
    float ImpulseDelay;                                                               // 0x0220 (size: 0x4)
    float HitStrength;                                                                // 0x0224 (size: 0x4)
    float DeadHitStrength;                                                            // 0x0228 (size: 0x4)
    TMap<EDamageSource, float> DeathDamageSourceImpulses;                             // 0x0230 (size: 0x50)
    TMap<class FName, class FAnimBonesArray> SetsOfBoneModifiersArray;                // 0x0280 (size: 0x50)
    TArray<FName> BodyModifierForKinematicMovement;                                   // 0x02D0 (size: 0x10)
    bool bEnableAllControlsOnHit;                                                     // 0x0380 (size: 0x1)

}; // Size: 0x388

struct FAnimHumanAimingData
{
    bool bIsAiming;                                                                   // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FAnimHumanCollectionsData
{
    class UHumanDefaultAnimCollection* DefaultAnimCollection;                         // 0x0000 (size: 0x8)
    class UHumanAnimCollection* AnimCollection;                                       // 0x0008 (size: 0x8)
    class UHumanFirearmAnimCollection* FirearmAnimCollection;                         // 0x0010 (size: 0x8)
    FHumanExternalAnimations ExternalAnimations;                                      // 0x0018 (size: 0xD0)
    FHumanWeaponExternalAnimations WeaponExternalAnimations;                          // 0x00E8 (size: 0x40)

}; // Size: 0x128

struct FAnimHumanDialogData
{
    TArray<FAnimSequenceWeighted> DialogIdleAnims;                                    // 0x0000 (size: 0x10)
    int32 LastIdleAnimsCount;                                                         // 0x0010 (size: 0x4)
    bool bDialogIdleChanged;                                                          // 0x0014 (size: 0x1)
    bool bInDialog;                                                                   // 0x0015 (size: 0x1)
    FFloatRange DialogIdleAnimCooldownRange;                                          // 0x0018 (size: 0x10)

}; // Size: 0x78

struct FAnimHumanFaceData
{
    TArray<class UAnimSequence*> DeathAnimations;                                     // 0x0000 (size: 0x10)
    class UAnimSequence* CurrentDeathAnimation;                                       // 0x0010 (size: 0x8)
    TArray<class UAnimMontage*> HitAnimations;                                        // 0x0018 (size: 0x10)
    class UAnimMontage* LastHitAnimation;                                             // 0x0028 (size: 0x8)
    TArray<class UAnimSequence*> WoundedAnimations;                                   // 0x0030 (size: 0x10)
    class UAnimSequence* CurrentWoundedAnimation;                                     // 0x0040 (size: 0x8)
    class UAnimSequence* LastWoundedAnimation;                                        // 0x0048 (size: 0x8)
    TMap<FName, float> BlendShapeCurves;                                              // 0x0050 (size: 0x50)
    EEmotionalFaceMasks CurrentFaceMask;                                              // 0x00A0 (size: 0x1)
    class USkeletalMeshComponent* FaceMeshComponent;                                  // 0x00A8 (size: 0x8)
    class USkeletalMeshComponent* CharacterSkeletalMeshComponent;                     // 0x00B0 (size: 0x8)
    FEyesLookAtData EyesLookAtData;                                                   // 0x00B8 (size: 0xC0)
    FAnimFaceBlendConfig FaceBlendConfig;                                             // 0x0178 (size: 0x60)
    EAnimationHeadTypes HeadType;                                                     // 0x01D8 (size: 0x1)
    TArray<float> BlockingMasks;                                                      // 0x01E0 (size: 0x10)
    TArray<FName> FastFaceBlendCurves;                                                // 0x01F0 (size: 0x10)
    TArray<FName> SlowFaceBlendCurves;                                                // 0x0200 (size: 0x10)
    bool bAlive;                                                                      // 0x0210 (size: 0x1)
    bool bIsThroatAnimationsEnabled;                                                  // 0x0211 (size: 0x1)
    bool bIsThroatAnimationPlaying;                                                   // 0x0212 (size: 0x1)
    bool bPlayingDummyDialogAnimation;                                                // 0x0213 (size: 0x1)
    bool bIsFaceAnimBlendingOut;                                                      // 0x0214 (size: 0x1)
    bool bIsFaceAnimPlaying;                                                          // 0x0215 (size: 0x1)
    bool bIsFaceTongueAnimPlaying;                                                    // 0x0216 (size: 0x1)
    float DisableIdleTongueCurveValue;                                                // 0x0218 (size: 0x4)

}; // Size: 0x220

struct FAnimHumanLookAtData
{
    class ULookAtRestrictionsDataAsset* RestrictionsConfigDA;                         // 0x0000 (size: 0x8)
    TArray<FRotationBodyPart> HorizontalBodyParts;                                    // 0x0008 (size: 0x10)
    TArray<FRotationBodyPart> VerticalBodyParts;                                      // 0x0018 (size: 0x10)
    FVector2D TargetRotation;                                                         // 0x0028 (size: 0x10)
    bool bIsRotating;                                                                 // 0x0130 (size: 0x1)
    bool bIsRotatingFullBody;                                                         // 0x0131 (size: 0x1)
    ELookAtOwnerState CurrentOwnerState;                                              // 0x0132 (size: 0x1)
    float FullBodyRotationRate;                                                       // 0x0134 (size: 0x4)
    float FullBodyRotationTimeGap;                                                    // 0x0138 (size: 0x4)
    bool bEnableCombatLookAt;                                                         // 0x013C (size: 0x1)
    float MaxLookAtAlphaChangeSpeed;                                                  // 0x0140 (size: 0x4)
    FVector LookAtLocation;                                                           // 0x0148 (size: 0x18)
    float LookAtAlpha;                                                                // 0x0160 (size: 0x4)
    bool bOnlyHeadRotateOnUpperBody;                                                  // 0x0164 (size: 0x1)
    float WeaponRotationInterpSpeed;                                                  // 0x0168 (size: 0x4)
    float WeaponRotationAngleOffset;                                                  // 0x016C (size: 0x4)
    FRotator TargetWeaponRotation;                                                    // 0x0170 (size: 0x18)
    float AdditionalWeaponTransformAlpha;                                             // 0x0188 (size: 0x4)
    FVector CloseToBodyWeaponShift;                                                   // 0x0190 (size: 0x18)
    float MaxWeaponShiftOnReload;                                                     // 0x01A8 (size: 0x4)
    bool bIsFullBodyRotatingBlockedOutside;                                           // 0x01AC (size: 0x1)

}; // Size: 0x1B0

struct FAnimHumanStateData : public FAnimStateData
{
    bool bInCombat;                                                                   // 0x0006 (size: 0x1)
    bool bWounded;                                                                    // 0x0007 (size: 0x1)
    bool bKnockedDown;                                                                // 0x0008 (size: 0x1)
    float KnockedDownPoseBlendTime;                                                   // 0x000C (size: 0x4)
    bool bCrouching;                                                                  // 0x0010 (size: 0x1)
    bool bSitting;                                                                    // 0x0011 (size: 0x1)
    bool bRotating;                                                                   // 0x0012 (size: 0x1)
    float CurveGaitValue;                                                             // 0x0014 (size: 0x4)
    float DynamicGaitValue;                                                           // 0x0018 (size: 0x4)
    float StateCurveValue;                                                            // 0x001C (size: 0x4)
    EAnimationStates CurveGaitState;                                                  // 0x0020 (size: 0x1)
    bool bHasMovementInput;                                                           // 0x0021 (size: 0x1)
    bool bHasContextualItemInHands;                                                   // 0x0022 (size: 0x1)
    bool bZombie;                                                                     // 0x0023 (size: 0x1)
    bool bSpawnedAsZombie;                                                            // 0x0024 (size: 0x1)
    bool bStandingUpAsZombie;                                                         // 0x0025 (size: 0x1)
    bool bShouldPlayLongBHIdle;                                                       // 0x0026 (size: 0x1)
    bool bDragDeadBody;                                                               // 0x0027 (size: 0x1)
    bool bShouldDisableLegIK;                                                         // 0x0028 (size: 0x1)
    bool bIsRenderRelevant;                                                           // 0x0029 (size: 0x1)
    float IsRotatingAngleThreshold;                                                   // 0x002C (size: 0x4)
    bool bShouldDisableInertialization;                                               // 0x0030 (size: 0x1)
    bool bMovementShouldDisableLookAt;                                                // 0x0031 (size: 0x1)
    bool bShouldCopyVirtualWeaponBone;                                                // 0x0032 (size: 0x1)
    bool bHasEmptyHandsInDialog;                                                      // 0x0033 (size: 0x1)
    bool bIsDeadAsNotZombie;                                                          // 0x0034 (size: 0x1)
    bool bIsDeadAsZombie;                                                             // 0x0035 (size: 0x1)
    bool bShouldTransitionToWeaponRelaxedIdle;                                        // 0x0036 (size: 0x1)
    bool bStandToRelaxIdle;                                                           // 0x0037 (size: 0x1)

}; // Size: 0x38

struct FAnimHumanWeaponConfig
{
    float CloseToBodyWeaponMinShift;                                                  // 0x0000 (size: 0x4)
    float CloseToBodyWeaponMaxShift;                                                  // 0x0004 (size: 0x4)
    FVector WeaponIKEffectorOffset;                                                   // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FAnimHumanWeaponData
{
    bool bHasWeaponInHands;                                                           // 0x0000 (size: 0x1)
    FAnimHumanAimingData AimingData;                                                  // 0x0001 (size: 0x1)
    bool bIsZombie;                                                                   // 0x0002 (size: 0x1)
    class USkeletalMeshComponent* WeaponMesh;                                         // 0x0008 (size: 0x8)
    class USkeletalMeshComponent* AttachMesh;                                         // 0x0010 (size: 0x8)
    FVector WeaponIKEffectorOffset;                                                   // 0x0018 (size: 0x18)
    bool bIsOneHanded;                                                                // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FAnimInteractableData
{
    FVector InteractionDirection;                                                     // 0x0000 (size: 0x18)
    float InteractionDistance;                                                        // 0x0018 (size: 0x4)
    bool bShouldLerpToInteractable;                                                   // 0x001C (size: 0x1)
    float LerpSpeedMultiplier;                                                        // 0x0020 (size: 0x4)
    bool bShouldLerpIn3D;                                                             // 0x0024 (size: 0x1)
    bool bShouldToggleFOV;                                                            // 0x0025 (size: 0x1)
    TEnumAsByte<ECollisionEnabled::Type> CollisionType;                               // 0x0026 (size: 0x1)

}; // Size: 0x28

struct FAnimKnockDownData
{
    EKnockedDownState KnockedDownState;                                               // 0x0000 (size: 0x1)
    bool bIsStillKnockedDown;                                                         // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FAnimLocomotionData
{
    float Velocity;                                                                   // 0x0000 (size: 0x4)
    float AngleDirection;                                                             // 0x0004 (size: 0x4)
    float ClampedDirection;                                                           // 0x0008 (size: 0x4)
    uint8 BPDirection;                                                                // 0x000C (size: 0x1)
    EDirections Direction;                                                            // 0x000D (size: 0x1)
    FDirectionBlendData DirectionBlendParams;                                         // 0x0010 (size: 0x24)
    FMovementRotationStructure MovementRotation;                                      // 0x0034 (size: 0x28)
    float LegIKAlpha;                                                                 // 0x005C (size: 0x4)
    bool bLegIKEnabled;                                                               // 0x0060 (size: 0x1)
    FMovementPlayRateStructure MovementPlayRate;                                      // 0x0064 (size: 0x14)
    bool bEnablePlayRateCurves;                                                       // 0x0078 (size: 0x1)
    TMap<class EStateTag, class UCurveFloat*> MovementPlayRateCurves;                 // 0x0080 (size: 0x50)
    FVector HeadEvasionOffset;                                                        // 0x0118 (size: 0x18)

}; // Size: 0x130

struct FAnimMutantCollectionsData
{
    class UMutantAnimCollection* AnimCollection;                                      // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FAnimMutantStateData : public FAnimStateData
{
    bool bRotating;                                                                   // 0x0006 (size: 0x1)
    bool bStandToSit;                                                                 // 0x0007 (size: 0x1)
    bool bIsLeftHanded;                                                               // 0x0008 (size: 0x1)
    float ChanceToBeLeftHanded;                                                       // 0x000C (size: 0x4)
    float IsRotatingAngleThreshold;                                                   // 0x0010 (size: 0x4)
    EAwareness Awareness;                                                             // 0x0014 (size: 0x1)
    bool bShouldDisableLegIK;                                                         // 0x0015 (size: 0x1)
    bool bShouldDisableInertialization;                                               // 0x0016 (size: 0x1)

}; // Size: 0x18

struct FAnimPhysicSpaceControl
{
    FPhysicsControlData Data;                                                         // 0x0000 (size: 0x20)
    FPhysicsControlSettings Settings;                                                 // 0x0020 (size: 0x28)
    TMap<class FName, class FPhysicsControlNames> LimbControls;                       // 0x0048 (size: 0x50)
    FPhysicsControlNames AllControls;                                                 // 0x0098 (size: 0x10)

}; // Size: 0xA8

struct FAnimPhysicalData
{
    bool bEnablePhysicalHit;                                                          // 0x0001 (size: 0x1)
    FAnimHitPhysics Hit;                                                              // 0x0008 (size: 0x388)
    bool bRagdollEnabled;                                                             // 0x0390 (size: 0x1)
    bool bRagdollStaticPose;                                                          // 0x0391 (size: 0x1)
    bool bWasInRagdoll;                                                               // 0x0392 (size: 0x1)
    bool bUpBodyDirection;                                                            // 0x0393 (size: 0x1)
    FPoseSnapshot RagdollSnapshotPose;                                                // 0x0398 (size: 0x38)

}; // Size: 0x3D8

struct FAnimPlayerAimingData
{
    bool bAiming;                                                                     // 0x0000 (size: 0x1)
    float AimInFrame;                                                                 // 0x0004 (size: 0x4)
    float AimOutFrame;                                                                // 0x0008 (size: 0x4)
    float AimAlpha;                                                                   // 0x000C (size: 0x4)
    float AimCameraShakeAlpha;                                                        // 0x0010 (size: 0x4)
    EAnimationAimState AimState;                                                      // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FAnimPlayerAutoCoverData
{
    bool bFrontTraceBlocked;                                                          // 0x0000 (size: 0x1)
    bool bRightTraceBlocked;                                                          // 0x0001 (size: 0x1)
    bool bLeftTraceBlocked;                                                           // 0x0002 (size: 0x1)
    bool bUpTraceBlocked;                                                             // 0x0003 (size: 0x1)
    FVector LastNonBlockedSideTraceStart;                                             // 0x0008 (size: 0x18)
    bool bInCover;                                                                    // 0x0020 (size: 0x1)
    bool bAutoCoverActionActive;                                                      // 0x0021 (size: 0x1)
    float AimLeanTime;                                                                // 0x0024 (size: 0x4)
    float ApproachTransitionPlayRate;                                                 // 0x0028 (size: 0x4)
    float LeaningAlpha;                                                               // 0x002C (size: 0x4)
    bool bCanChangeLeanSide;                                                          // 0x0030 (size: 0x1)
    bool bCoverlessLeaning;                                                           // 0x0031 (size: 0x1)
    bool bCoverlessLeaningRight;                                                      // 0x0032 (size: 0x1)
    float MinRangeDistanceToCover;                                                    // 0x0034 (size: 0x4)
    float MaxRangeDistanceToChangeLeanSide;                                           // 0x0038 (size: 0x4)
    float TraceCapsuleRadius;                                                         // 0x003C (size: 0x4)
    float CoverForwardTraceRange;                                                     // 0x0040 (size: 0x4)
    float CoverAimTraceRange;                                                         // 0x0044 (size: 0x4)
    float CoverUpperTraceRange;                                                       // 0x0048 (size: 0x4)
    float CoverSideTracesRange;                                                       // 0x004C (size: 0x4)
    float CoverLeanTracesRange;                                                       // 0x0050 (size: 0x4)
    int32 CoverLeanTracesIterations;                                                  // 0x0054 (size: 0x4)
    float CoverTraceHorizontalShift;                                                  // 0x0058 (size: 0x4)
    float CoverTraceVerticalShift;                                                    // 0x005C (size: 0x4)
    float MinCoverWidth;                                                              // 0x0060 (size: 0x4)
    float ApproachTransitionMinPlayRate;                                              // 0x0064 (size: 0x4)
    float ApproachTransitionMaxPlayRate;                                              // 0x0068 (size: 0x4)
    EAutoCoverState CoverState;                                                       // 0x006C (size: 0x1)
    float HeadHeightStand;                                                            // 0x0070 (size: 0x4)
    float HeadHeightCrouch;                                                           // 0x0074 (size: 0x4)
    float HeadHeightLowCrouch;                                                        // 0x0078 (size: 0x4)
    float TickInterval;                                                               // 0x007C (size: 0x4)
    float AccumulatedTime;                                                            // 0x0080 (size: 0x4)
    bool bTraceDirectionBindedToCamera;                                               // 0x0084 (size: 0x1)

}; // Size: 0x88

struct FAnimPlayerBaseWeaponData
{
    ELongIdleType LongIdleType;                                                       // 0x0000 (size: 0x1)
    FCharacterItemWeightedAnimations InactiveIdle;                                    // 0x0008 (size: 0x18)
    float InactiveIdleFrame;                                                          // 0x0020 (size: 0x4)
    bool bActionSlotActive;                                                           // 0x0024 (size: 0x1)

}; // Size: 0x28

struct FAnimPlayerCameraData
{
    FTransform TargetCameraTransform;                                                 // 0x0000 (size: 0x60)
    float CameraTransformAlpha;                                                       // 0x0060 (size: 0x4)
    float DetectorCameraShakeAlpha;                                                   // 0x0064 (size: 0x4)
    float ClampedControlPitch;                                                        // 0x0068 (size: 0x4)

}; // Size: 0x90

struct FAnimPlayerClimbingData
{
    bool bAnimClimbStarted;                                                           // 0x0000 (size: 0x1)
    EAnimClimbState AnimClimbState;                                                   // 0x0001 (size: 0x1)
    float ClimbUpSpeed;                                                               // 0x0004 (size: 0x4)
    float ClimbDownSpeed;                                                             // 0x0008 (size: 0x4)
    float EnterDownSpeed;                                                             // 0x000C (size: 0x4)
    float EnterUpSpeed;                                                               // 0x0010 (size: 0x4)
    float ExitUpSpeed;                                                                // 0x0014 (size: 0x4)
    float CameraYaw;                                                                  // 0x0018 (size: 0x4)
    float CameraPitch;                                                                // 0x001C (size: 0x4)
    bool bLongIdleEnable;                                                             // 0x0020 (size: 0x1)
    bool bJumpingOffLadderState;                                                      // 0x0021 (size: 0x1)
    bool bJumpingOffLadderBottomState;                                                // 0x0022 (size: 0x1)
    ELadderType LadderType;                                                           // 0x0023 (size: 0x1)
    float BottomOffset;                                                               // 0x0024 (size: 0x4)
    TMap<ELadderType, float> FrontOffset;                                             // 0x0028 (size: 0x50)
    float SingleStepHeight;                                                           // 0x0078 (size: 0x4)
    float CameraFocusOnExitTime;                                                      // 0x007C (size: 0x4)
    float CameraFocusOnExitInterpSpeed;                                               // 0x0080 (size: 0x4)
    class UCurveFloat* EnterTransitionCurve;                                          // 0x0088 (size: 0x8)
    float TimeToStartLongIdle;                                                        // 0x0090 (size: 0x4)

}; // Size: 0x130

struct FAnimPlayerCollectionsData
{
    class UPlayerDefaultAnimCollection* DefaultAnimCollection;                        // 0x0000 (size: 0x8)
    class UPlayerDefaultAnimCollection* DragDeadBodyAnimCollection;                   // 0x0008 (size: 0x8)
    class UPlayerAnimCollection* AnimCollection;                                      // 0x0010 (size: 0x8)
    class UPlayerFirearmAnimCollection* FirearmAnimCollection;                        // 0x0018 (size: 0x8)
    class UPlayerThrowableItemAnimCollection* ThrowableAnimCollection;                // 0x0020 (size: 0x8)
    class UPlayerKnifeAnimCollection* KnifeAnimCollection;                            // 0x0028 (size: 0x8)
    class UItemAnimCollection* ItemAnimCollection;                                    // 0x0030 (size: 0x8)
    class UInteractableAnimCollection* ItemInteractableAnimCollection;                // 0x0038 (size: 0x8)
    class UWeaponAttachAnimCollection* AttachAnimCollection;                          // 0x0040 (size: 0x8)
    class UPlayerDetectorAnimCollection* DetectorAnimCollection;                      // 0x0048 (size: 0x8)
    FPlayerExternalAnimations ExternalAnimations;                                     // 0x0050 (size: 0x278)
    bool bWeaponSubgraphToggle;                                                       // 0x02C8 (size: 0x1)
    float WeaponSubgraphBlend;                                                        // 0x02CC (size: 0x4)
    bool bAdditionalSubgraphToggle;                                                   // 0x02D0 (size: 0x1)
    float AdditionalSubgraphBlend;                                                    // 0x02D4 (size: 0x4)
    TMap<ESubgraphBlendTypes, float> SubgraphDefaultBlendTime;                        // 0x02D8 (size: 0x50)

}; // Size: 0x328

struct FAnimPlayerDetectorData
{
    bool bHasDetectorInHands;                                                         // 0x0000 (size: 0x1)
    class USkeletalMeshComponent* DetectorSkeletal;                                   // 0x0008 (size: 0x8)
    FAnimPlayerWeaponSwingData SwingData;                                             // 0x0010 (size: 0x80)
    FAnimPlayerWeaponInertiaData InertiaData;                                         // 0x0090 (size: 0x98)

}; // Size: 0x128

struct FAnimPlayerDialogData
{
    bool bInDialog;                                                                   // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FAnimPlayerDodgeData
{
    TSet<AObj*> CollidedObjects;                                                      // 0x0000 (size: 0x50)

}; // Size: 0x68

struct FAnimPlayerFirearmData
{
    EWeaponIdleType IdleType;                                                         // 0x0000 (size: 0x1)
    EShutterState ShutterState;                                                       // 0x0001 (size: 0x1)
    bool IsJammed;                                                                    // 0x0002 (size: 0x1)
    int32 JamIdleIndex;                                                               // 0x0004 (size: 0x4)
    bool bTwinMagazineShifted;                                                        // 0x0008 (size: 0x1)
    EWeaponCustomAdditionalIdle AdditionalIdle;                                       // 0x0009 (size: 0x1)
    EFireType FireTypes;                                                              // 0x000A (size: 0x1)
    float LeftHandCurveValueInverse;                                                  // 0x000C (size: 0x4)
    float WeaponLeftHandCurveValueInverse;                                            // 0x0010 (size: 0x4)
    float LeftHandMovementAlpha;                                                      // 0x0014 (size: 0x4)
    bool bIsLeftHandIdleUnlocked;                                                     // 0x0018 (size: 0x1)

}; // Size: 0x1C

struct FAnimPlayerGuitarData
{
    float CameraPitchLimit;                                                           // 0x0000 (size: 0x4)
    float CameraYawLimit;                                                             // 0x0004 (size: 0x4)
    float CameraResetInterpSpeed;                                                     // 0x0008 (size: 0x4)
    int32 CurrentChord;                                                               // 0x000C (size: 0x4)
    EAnimGuitarState AnimGuitarState;                                                 // 0x0010 (size: 0x1)
    EAnimGuitarRightHandState RightHandState;                                         // 0x0011 (size: 0x1)
    bool bPlayingGuitar;                                                              // 0x0012 (size: 0x1)
    bool bPlayFromContextual;                                                         // 0x0013 (size: 0x1)
    bool bIsMajorScale;                                                               // 0x0014 (size: 0x1)
    bool bShouldExitGuitar;                                                           // 0x0015 (size: 0x1)
    bool bAutoStrumMode;                                                              // 0x0016 (size: 0x1)
    float CameraYaw;                                                                  // 0x0018 (size: 0x4)
    float CameraPitch;                                                                // 0x001C (size: 0x4)

}; // Size: 0x24

struct FAnimPlayerHitData
{
    class UAnimSequence* DeathSequence;                                               // 0x0000 (size: 0x8)
    float DeathCameraDistance;                                                        // 0x0008 (size: 0x4)
    float HitDirection;                                                               // 0x000C (size: 0x4)
    FVector HitLocation;                                                              // 0x0010 (size: 0x18)
    EPlayerAnimDamageSource DeathDamageSource;                                        // 0x0028 (size: 0x1)
    EAnimDirections HitAnimDirection;                                                 // 0x0029 (size: 0x1)
    EDeathAnimationType DeathAnimationType;                                           // 0x002A (size: 0x1)
    bool bDiedLyingDown;                                                              // 0x002B (size: 0x1)
    bool bIsDeathAnimationEnded;                                                      // 0x002C (size: 0x1)
    bool bKnockedDown;                                                                // 0x002D (size: 0x1)
    FRotator KnockDownRotation;                                                       // 0x0030 (size: 0x18)
    class UCurveFloat* KnockDownRotateCurve;                                          // 0x0048 (size: 0x8)

}; // Size: 0x80

struct FAnimPlayerIdleSwayData
{
    class UCurveVector* BaseCurve;                                                    // 0x0000 (size: 0x8)
    class UCurveVector* StaminaAmplitudeCurve;                                        // 0x0008 (size: 0x8)
    class UCurveFloat* StaminaCycleTimeCurve;                                         // 0x0010 (size: 0x8)
    float InitialDelay;                                                               // 0x0018 (size: 0x4)
    float StandCycleTimeModifier;                                                     // 0x001C (size: 0x4)
    float StandAmplitudeXModifier;                                                    // 0x0020 (size: 0x4)
    float StandAmplitudeYModifier;                                                    // 0x0024 (size: 0x4)
    float CrouchCycleTimeModifier;                                                    // 0x0028 (size: 0x4)
    float CrouchAmplitudeXModifier;                                                   // 0x002C (size: 0x4)
    float CrouchAmplitudeYModifier;                                                   // 0x0030 (size: 0x4)
    float MoveCycleTimeModifier;                                                      // 0x0034 (size: 0x4)
    float MoveAmplitudeXModifier;                                                     // 0x0038 (size: 0x4)
    float MoveAmplitudeYModifier;                                                     // 0x003C (size: 0x4)
    FRotator Rotation;                                                                // 0x0040 (size: 0x18)
    float Alpha;                                                                      // 0x0058 (size: 0x4)
    class UCurveVector* ActiveCurve;                                                  // 0x0060 (size: 0x8)
    float InterpSpeed;                                                                // 0x0068 (size: 0x4)

}; // Size: 0xF0

struct FAnimPlayerLookAtData
{
    TMap<class FName, class FAnimPlayerLookAtPreset> Presets;                         // 0x0000 (size: 0x50)
    FAnimPlayerLookAtPreset ActivePreset;                                             // 0x0050 (size: 0xC)
    class UCurveFloat* EnteringSpeed;                                                 // 0x0060 (size: 0x8)
    class UCurveFloat* CenteringSpeed;                                                // 0x0068 (size: 0x8)
    class UCurveFloat* CursorFreemoveDistanceFactor;                                  // 0x0070 (size: 0x8)
    class UCurveFloat* CursorApproachDirectionFactor;                                 // 0x0078 (size: 0x8)
    float CenteringTime;                                                              // 0x00A8 (size: 0x4)
    float PlayerLookAtTimer;                                                          // 0x00AC (size: 0x4)
    float MaxFreemoveSpeed;                                                           // 0x00B0 (size: 0x4)
    float MinStopSpeed;                                                               // 0x00B4 (size: 0x4)
    float DialogEnteringTime;                                                         // 0x00B8 (size: 0x4)
    float SwitchTargertFactor;                                                        // 0x00BC (size: 0x4)

}; // Size: 0xD0

struct FAnimPlayerLookAtPreset
{
    float RotationFreemoveEdge;                                                       // 0x0000 (size: 0x4)
    float RotationStopEdge;                                                           // 0x0004 (size: 0x4)
    bool bShouldRepeatTargetMovement;                                                 // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FAnimPlayerMaterialData
{
    class UMaterialParameterCollection* FoliageCollectionAsset;                       // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FAnimPlayerShadowData
{
    TArray<FSnapshotMapping> SnapshotMapping;                                         // 0x0000 (size: 0x10)
    bool bHasWeaponInHands;                                                           // 0x0010 (size: 0x1)
    bool bAiming;                                                                     // 0x0011 (size: 0x1)
    bool bShouldUseBHLocomotion;                                                      // 0x0012 (size: 0x1)
    float AngleDirection;                                                             // 0x0014 (size: 0x4)
    float TurnTime;                                                                   // 0x0018 (size: 0x4)
    FMovementPlayRateStructure MovementPlayRate;                                      // 0x001C (size: 0x14)

}; // Size: 0x30

struct FAnimPlayerStateData : public FAnimStateData
{
    bool bWalkingOverride;                                                            // 0x0006 (size: 0x1)
    bool bCrouching;                                                                  // 0x0007 (size: 0x1)
    bool bLowCrouching;                                                               // 0x0008 (size: 0x1)
    bool bClimbing;                                                                   // 0x0009 (size: 0x1)
    bool bLimping;                                                                    // 0x000A (size: 0x1)
    bool bShootingUnfocusableTarget;                                                  // 0x000B (size: 0x1)
    bool bDragDeadBody;                                                               // 0x000C (size: 0x1)
    bool bActionSlotActive;                                                           // 0x000D (size: 0x1)
    bool bIsLeftHandBusy;                                                             // 0x000E (size: 0x1)
    bool bIsInspectingItem;                                                           // 0x000F (size: 0x1)
    bool bCrouchingOverride;                                                          // 0x0010 (size: 0x1)
    bool bLowCrouchingOverride;                                                       // 0x0011 (size: 0x1)
    bool bSprintingOverride;                                                          // 0x0012 (size: 0x1)
    bool bInAirOverride;                                                              // 0x0013 (size: 0x1)
    float CrouchingInWaterInterruptionTime;                                           // 0x0014 (size: 0x4)
    float SprintingInWaterInterruptionTime;                                           // 0x0018 (size: 0x4)
    float InAirInWaterInterruptionTime;                                               // 0x001C (size: 0x4)
    float CombatIdleDuration;                                                         // 0x0020 (size: 0x4)
    bool bCombatMoveIdle;                                                             // 0x0024 (size: 0x1)
    bool bCombatCrouchIdle;                                                           // 0x0025 (size: 0x1)
    bool bCombatActionActive;                                                         // 0x0026 (size: 0x1)
    float CombatIdleCooldown;                                                         // 0x0028 (size: 0x4)
    bool bForceBindedHandsLookVertical;                                               // 0x002C (size: 0x1)
    bool bHasExoskeleton;                                                             // 0x002D (size: 0x1)
    float CurveGaitValue;                                                             // 0x0030 (size: 0x4)
    float DynamicGaitValue;                                                           // 0x0034 (size: 0x4)
    EAnimationStates EnumGaitState;                                                   // 0x0038 (size: 0x1)

}; // Size: 0x3C

struct FAnimPlayerStealthData
{
    bool bStealth;                                                                    // 0x0000 (size: 0x1)
    float StealthInFrame;                                                             // 0x0004 (size: 0x4)
    float StealthOutFrame;                                                            // 0x0008 (size: 0x4)
    float StealthAlpha;                                                               // 0x000C (size: 0x4)
    EAnimationStealthState StealthState;                                              // 0x0010 (size: 0x1)
    class UCurveFloat* StealthKillSnapCurve;                                          // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FAnimPlayerTransitionData
{
    bool bHasVelocity;                                                                // 0x0000 (size: 0x1)
    bool bMovingUp;                                                                   // 0x0001 (size: 0x1)
    bool bMovingDown;                                                                 // 0x0002 (size: 0x1)
    bool bReadyForLanding;                                                            // 0x0003 (size: 0x1)
    bool bCanEnterSprint;                                                             // 0x0004 (size: 0x1)
    float LerpToTargetAlpha;                                                          // 0x0008 (size: 0x4)
    float LerpToTargetTime;                                                           // 0x000C (size: 0x4)

}; // Size: 0x70

struct FAnimPlayerUnfocusableTargetData
{
    bool bTargetingUnfocusable;                                                       // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FAnimPlayerVaultingData
{
    EVaultState State;                                                                // 0x0000 (size: 0x1)
    bool bIsVaulting;                                                                 // 0x0001 (size: 0x1)
    bool bIsAnimInProgress;                                                           // 0x0002 (size: 0x1)
    bool bIsVaultingOver;                                                             // 0x0003 (size: 0x1)
    bool bIsVaultingOnTop;                                                            // 0x0004 (size: 0x1)
    class UAnimSequence* Sequence;                                                    // 0x0008 (size: 0x8)
    float VaultAlpha;                                                                 // 0x0010 (size: 0x4)
    TMap<class EMainHandEquipmentType, class UAnimSequence*> VaultingSequences;       // 0x0018 (size: 0x50)
    TMap<class EMainHandEquipmentType, class UAnimSequence*> VaultOverSequences;      // 0x0068 (size: 0x50)

}; // Size: 0xB8

struct FAnimPlayerWeaponData
{
    bool bHasWeaponInHands;                                                           // 0x0000 (size: 0x1)
    class USkeletalMeshComponent* WeaponMesh;                                         // 0x0008 (size: 0x8)
    class USkeletalMeshComponent* AttachMesh;                                         // 0x0010 (size: 0x8)
    FAnimPlayerBaseWeaponData BaseWeaponData;                                         // 0x0018 (size: 0x28)
    FAnimPlayerAimingData AimingData;                                                 // 0x0040 (size: 0x18)
    FAnimPlayerFirearmData FirearmData;                                               // 0x0058 (size: 0x1C)

}; // Size: 0x78

struct FAnimPlayerWeaponInertiaData
{
    float AlphaInterpSpeed;                                                           // 0x0000 (size: 0x4)
    float TranslationInterpSpeed;                                                     // 0x0004 (size: 0x4)
    float RotationInterpSpeed;                                                        // 0x0008 (size: 0x4)
    float InertiaStartThreshold;                                                      // 0x000C (size: 0x4)
    class UCurveVector* RotationCurve;                                                // 0x0040 (size: 0x8)
    class UCurveVector* TranslationCurve;                                             // 0x0048 (size: 0x8)
    class UCurveFloat* TimeScaleCurve;                                                // 0x0050 (size: 0x8)
    class UCurveFloat* AmplitudeScaleCurve;                                           // 0x0058 (size: 0x8)
    FRotator AdditionalInertiaRotation;                                               // 0x0060 (size: 0x18)
    FVector AdditionalInertiaTranslation;                                             // 0x0078 (size: 0x18)
    float InertiaAlpha;                                                               // 0x0090 (size: 0x4)

}; // Size: 0x98

struct FAnimPlayerWeaponPushbackData
{
    float PushbackInteprolateTolerance;                                               // 0x0000 (size: 0x4)
    float PushbackInteprolateSpeed;                                                   // 0x0004 (size: 0x4)
    EAnimPushbackState State;                                                         // 0x0008 (size: 0x1)
    float Alpha;                                                                      // 0x000C (size: 0x4)
    FVector WeaponTranslation;                                                        // 0x0010 (size: 0x18)
    FRotator WeaponRotation;                                                          // 0x0028 (size: 0x18)
    FAlphaBlend Blend;                                                                // 0x0040 (size: 0x30)

}; // Size: 0x80

struct FAnimPlayerWeaponSwingData
{
    FRotator ItemTotalRotation;                                                       // 0x0020 (size: 0x18)
    FVector ItemTotalShift;                                                           // 0x0038 (size: 0x18)
    FVector ItemSocketTotalShift;                                                     // 0x0050 (size: 0x18)

}; // Size: 0x80

struct FAnimPoseSearchLocomotionData
{
    FTrajectorySampleRange Trajectory;                                                // 0x0000 (size: 0x18)
    FGameplayTagContainer Tags;                                                       // 0x0018 (size: 0x20)
    class UCurveFloat* StrafeRotateInterpSpeedCurve;                                  // 0x0038 (size: 0x8)
    bool bForcedIdling;                                                               // 0x0040 (size: 0x1)
    bool bShouldInterrupt;                                                            // 0x0041 (size: 0x1)
    float EnableLookAtAlpha;                                                          // 0x0044 (size: 0x4)
    FMotionMatchingSettings Settings;                                                 // 0x0048 (size: 0x30)
    FPoseSearchProceduralMovement ProceduralMovement;                                 // 0x0080 (size: 0x70)
    FWarpingVectorValue FloorNormal;                                                  // 0x00F0 (size: 0x20)
    class UPoseSearchSearchableAsset* Searchable;                                     // 0x0110 (size: 0x8)
    float StrideScale;                                                                // 0x0118 (size: 0x4)
    float LegIKAlpha;                                                                 // 0x011C (size: 0x4)
    bool bUseRelaxLocomotion;                                                         // 0x0120 (size: 0x1)
    float HistoryExpirationSeconds;                                                   // 0x012C (size: 0x4)
    TMap<EAnimPoseSearchMoveType, float> MoveTypeStayInIndexTime;                     // 0x0130 (size: 0x50)
    ESmartCoverType SmartCoverType;                                                   // 0x0180 (size: 0x1)
    bool bUsingSmartCoverAnimPose;                                                    // 0x0181 (size: 0x1)
    float MoveBehaviorOnlyTransitionUseTime;                                          // 0x0184 (size: 0x4)
    class UPoseSearchLocomotionCharacterMovementComponent* MovementComponent;         // 0x01C0 (size: 0x8)

}; // Size: 0x1D0

struct FAnimSequenceArray
{
    TArray<TSoftObjectPtr<UAnimSequenceBase>> Animations;                             // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FAnimSequenceWeighted
{
    float ChanceToPlay;                                                               // 0x0000 (size: 0x4)
    class UAnimSequenceBase* Animation;                                               // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FAnimSequenceWeightedArray
{
    TArray<FSoftAnimWeighted> Animations;                                             // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FAnimSleepData
{
    bool bSleep;                                                                      // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FAnimStateData
{
    bool bAlive;                                                                      // 0x0000 (size: 0x1)
    bool bMoving;                                                                     // 0x0001 (size: 0x1)
    bool bWalking;                                                                    // 0x0002 (size: 0x1)
    bool bRunning;                                                                    // 0x0003 (size: 0x1)
    bool bSprinting;                                                                  // 0x0004 (size: 0x1)
    bool bInAir;                                                                      // 0x0005 (size: 0x1)

}; // Size: 0x6

struct FAnimTwoHandsIKData
{
    FAnimHandIKData LeftHand;                                                         // 0x0008 (size: 0x38)
    FAnimHandIKData RightHand;                                                        // 0x0040 (size: 0x38)

}; // Size: 0x78

struct FAnimValveData
{
    EValveState ValveState;                                                           // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FAnimWeaponSwingContainer
{
    class UCurveFloat* ItemRotationCurve;                                             // 0x0000 (size: 0x8)
    class UCurveFloat* ItemHorizontalTranslationShiftCurve;                           // 0x0008 (size: 0x8)
    class UCurveFloat* ItemSocketHorizontalTranslationShiftCurve;                     // 0x0010 (size: 0x8)
    class UCurveFloat* ItemVerticalTranslationShiftCurve;                             // 0x0018 (size: 0x8)
    class UCurveFloat* ItemExtraVerticalTranslationShiftCurve;                        // 0x0020 (size: 0x8)
    float HorizontalItemTranslationInterpSpeed;                                       // 0x0028 (size: 0x4)
    float VerticalItemTranslationInterpSpeed;                                         // 0x002C (size: 0x4)
    float ItemRotationInterpSpeed;                                                    // 0x0030 (size: 0x4)

}; // Size: 0x38

struct FAnimWoundedData
{
    bool bWounded;                                                                    // 0x0000 (size: 0x1)
    EWoundedAnimState WoundedState;                                                   // 0x0001 (size: 0x1)
    FRotator SlopeCorrectionDelta;                                                    // 0x0008 (size: 0x18)
    float EnterRagdollTime;                                                           // 0x0020 (size: 0x4)
    float SlopeTestSweepUpOffset;                                                     // 0x0024 (size: 0x4)
    float SlopeTestSweepDownOffset;                                                   // 0x0028 (size: 0x4)
    float SlopeTestSweepSphereRadius;                                                 // 0x002C (size: 0x4)
    TEnumAsByte<ECollisionChannel> SlopeTestCollisionChannel;                         // 0x0030 (size: 0x1)

}; // Size: 0x48

struct FAnimationSingleHit
{
    bool bPlay;                                                                       // 0x0000 (size: 0x1)
    float PlayRate;                                                                   // 0x0004 (size: 0x4)
    float HitDirection;                                                               // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FAnomalyCollection : public FBaseTickAggregationCollection
{
}; // Size: 0x98

struct FAnomalyHitArgs
{
}; // Size: 0x1

struct FAnomalyModelCollection : public FBaseModelCollection
{
}; // Size: 0xA0

struct FArtifactCollection : public FBaseTickAggregationCollection
{
}; // Size: 0x98

struct FAttachDetachAnimations
{
    FCharacterWeaponAnimations AttachAnimation;                                       // 0x0000 (size: 0x20)
    FCharacterWeaponAnimations DetachAnimation;                                       // 0x0020 (size: 0x20)
    FCharacterWeaponAnimations DetachTwinMagazineShifted;                             // 0x0040 (size: 0x20)
    UClass* AttachAnimBlueprint;                                                      // 0x0060 (size: 0x8)

}; // Size: 0x68

struct FAttachMeshesData
{
    TArray<class UMeshComponent*> ArrayMeshes;                                        // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FAttachedMagazineStruct
{
    class UMeshComponent* MagazineMesh;                                               // 0x0000 (size: 0x8)

}; // Size: 0x10

struct FAttractionPoint
{
    TWeakObjectPtr<class AActor> LookAtActor;                                         // 0x0050 (size: 0x8)
    TWeakObjectPtr<class USkeletalMeshComponent> SkeletalMesh;                        // 0x0058 (size: 0x8)
    FName SID;                                                                        // 0x0060 (size: 0x8)

}; // Size: 0x68

struct FAutoInteractionData : public FInteractionData
{
}; // Size: 0x18

struct FBackgroundSettings
{
    class UTexture2D* Icon;                                                           // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FBaseLegIKData
{
}; // Size: 0x8

struct FBaseModelCollection : public FBaseTickAggregationCollection
{
}; // Size: 0xA0

struct FBaseTickAggregationCollection
{
}; // Size: 0x68

struct FBodyMeshSIDSelector
{
    FString Value;                                                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FBodyPartRestriction
{
    float RotationLimit;                                                              // 0x0000 (size: 0x4)
    float RotationSpeed;                                                              // 0x0004 (size: 0x4)
    bool RotationBlocked;                                                             // 0x0008 (size: 0x1)
    bool bShouldRotateIndependently;                                                  // 0x0009 (size: 0x1)

}; // Size: 0xC

struct FBoolOverridableProperty : public FOverridableProperty
{
    bool DefaultValue;                                                                // 0x0018 (size: 0x1)
    bool CurrentValue;                                                                // 0x0019 (size: 0x1)

}; // Size: 0x20

struct FBuckRecoilKeys
{
    TArray<FRecoilKeys> BuckRecoilKeys;                                               // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FBulletProjectileHitArgs
{
    EAmmoType Type;                                                                   // 0x0000 (size: 0x1)
    EAmmoCaliber Caliber;                                                             // 0x0001 (size: 0x1)

}; // Size: 0xC

struct FCaptureConfig
{
    float CaptureAngle;                                                               // 0x0000 (size: 0x4)
    float CaptureWarmup;                                                              // 0x0004 (size: 0x4)
    float TileLimitsForZCoords;                                                       // 0x0008 (size: 0x4)
    float LoadTileOverlapSize;                                                        // 0x000C (size: 0x4)
    float CaptureTileOverlap;                                                         // 0x0010 (size: 0x4)
    FVector CaptureStartLocation;                                                     // 0x0018 (size: 0x18)
    int32 WorldPartitionTiles;                                                        // 0x0030 (size: 0x4)
    int32 LargeImagesNum;                                                             // 0x0034 (size: 0x4)
    float IterativeCellSize;                                                          // 0x0038 (size: 0x4)
    uint32 SingleTileMinimapResolution;                                               // 0x003C (size: 0x4)
    float TargetGamma;                                                                // 0x0040 (size: 0x4)
    bool bCreateFoliage;                                                              // 0x0044 (size: 0x1)

}; // Size: 0x48

struct FChangeFireTypeAnimation
{
    EFireType FromFireType;                                                           // 0x0000 (size: 0x1)
    EFireType ToFireType;                                                             // 0x0001 (size: 0x1)
    FCharacterWeaponAnimations Animations;                                            // 0x0008 (size: 0x20)

}; // Size: 0x28

struct FChangeFireTypeAnimations
{
    TArray<FChangeFireTypeAnimation> AnimationsArray;                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FCharacterDetectorAnimations
{
    class UAnimMontage* Character;                                                    // 0x0000 (size: 0x8)
    TMap<int32, FCharacterWeaponAnimations> CharacterWithWeapon;                      // 0x0008 (size: 0x50)
    class UAnimMontage* Detector;                                                     // 0x0058 (size: 0x8)
    class UAnimMontage* Weapon;                                                       // 0x0060 (size: 0x8)

}; // Size: 0x68

struct FCharacterDetectorFailedLandingAnimations
{
    TMap<class EMainHandEquipmentType, class UAnimMontage*> FailedLanding;            // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FCharacterDetectorWeaponAnimations
{
    class UAnimMontage* CharacterLeftHand;                                            // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FCharacterItemWeightedAnimations
{
    class UAnimSequence* Character;                                                   // 0x0000 (size: 0x8)
    class UAnimSequence* Item;                                                        // 0x0008 (size: 0x8)
    float Weight;                                                                     // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FCharacterWeaponAnimations
{
    class UAnimMontage* Character;                                                    // 0x0000 (size: 0x8)
    class UAnimMontage* CharacterLeftHand;                                            // 0x0008 (size: 0x8)
    class UAnimMontage* Weapon;                                                       // 0x0010 (size: 0x8)
    float PlayRate;                                                                   // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FCodelockInteractionAnimations
{
    class UAnimMontage* CodelockMontage;                                              // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FCommonHitArgs
{
    float Damage;                                                                     // 0x0000 (size: 0x4)
    float ImpulseStr;                                                                 // 0x0004 (size: 0x4)
    float ArmorDamage;                                                                // 0x0008 (size: 0x4)
    float ArmorPiercing;                                                              // 0x000C (size: 0x4)
    float Bleeding;                                                                   // 0x0010 (size: 0x4)
    float BleedingChanceIncrement;                                                    // 0x0014 (size: 0x4)
    FVector ImpulseDir;                                                               // 0x0018 (size: 0x18)
    FUID DamageDealerUID;                                                             // 0x0030 (size: 0x4)
    FHitResult HitResult;                                                             // 0x0038 (size: 0xE8)
    EDamageType DamageType;                                                           // 0x0120 (size: 0x1)
    bool bDirectDamageSkipCalculations;                                               // 0x0121 (size: 0x1)
    bool bShouldIgnoreArmor;                                                          // 0x0122 (size: 0x1)
    TArray<FEffectValueOverridePair> ApplicableEffects;                               // 0x0128 (size: 0x10)
    EDamageSource DamageSource;                                                       // 0x0138 (size: 0x1)
    FWeapon Weapon;                                                                   // 0x013C (size: 0x8)
    bool bFlownThroughObject;                                                         // 0x0144 (size: 0x1)
    float LaunchTimestamp;                                                            // 0x0148 (size: 0x4)
    bool bIsFractionDamage;                                                           // 0x014C (size: 0x1)

}; // Size: 0x150

struct FCompassTypeSettings
{
    bool bIsCompassType;                                                              // 0x0000 (size: 0x1)
    bool bVisibleIfTrack;                                                             // 0x0001 (size: 0x1)
    ECompassPosition CompassPosition;                                                 // 0x0002 (size: 0x1)
    int32 ZOrder;                                                                     // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FComplexAttachAnimations
{
    EWeaponIdleType WeaponIdleType;                                                   // 0x0000 (size: 0x1)
    class UAnimMontage* AttachAttachingAnimation;                                     // 0x0008 (size: 0x8)
    class UAnimMontage* AttachDetachingAnimation;                                     // 0x0010 (size: 0x8)
    class UAnimMontage* CharacterAttachModeIn;                                        // 0x0018 (size: 0x8)
    class UAnimMontage* WeaponAttachModeIn;                                           // 0x0020 (size: 0x8)
    class UAnimMontage* AttachAttachModeIn;                                           // 0x0028 (size: 0x8)
    class UAnimMontage* CharacterAttachModeOut;                                       // 0x0030 (size: 0x8)
    class UAnimMontage* WeaponAttachModeOut;                                          // 0x0038 (size: 0x8)
    class UAnimMontage* AttachAttachModeOut;                                          // 0x0040 (size: 0x8)
    bool bIsBindedToWeaponBehaviour;                                                  // 0x0048 (size: 0x1)
    class UAnimMontage* CharacterAttachShoot;                                         // 0x0050 (size: 0x8)
    class UAnimMontage* WeaponAttachShoot;                                            // 0x0058 (size: 0x8)
    class UAnimMontage* AttachAttachShoot;                                            // 0x0060 (size: 0x8)
    class UAnimMontage* CharacterAttachReload;                                        // 0x0068 (size: 0x8)
    class UAnimMontage* WeaponAttachReload;                                           // 0x0070 (size: 0x8)
    class UAnimMontage* AttachAttachReload;                                           // 0x0078 (size: 0x8)
    class UAnimMontage* CharacterAttachReloadTactical;                                // 0x0080 (size: 0x8)
    class UAnimMontage* WeaponAttachReloadTactical;                                   // 0x0088 (size: 0x8)
    class UAnimMontage* AttachAttachReloadTactical;                                   // 0x0090 (size: 0x8)
    class UAnimMontage* AttachAttachShootEnd;                                         // 0x0098 (size: 0x8)
    TArray<class UAnimMontage*> AttachJamAnimations;                                  // 0x00A0 (size: 0x10)
    class UPlayerFirearmAnimCollection* WeaponAnimCollection;                         // 0x00B0 (size: 0x8)

}; // Size: 0xB8

struct FContextualActionGlobalVariablePrototypeSID
{
    FString Value;                                                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FContextualActionModelCollection : public FBaseModelCollection
{
}; // Size: 0xA0

struct FContextualActionNotifyWeaponEquipData
{
    FPrototypeSID ItemSID;                                                            // 0x0000 (size: 0x40)
    EMainHandEquipmentType SlotToEquip;                                               // 0x0040 (size: 0x1)

}; // Size: 0x48

struct FContextualActionsGameGraphInfo
{
    TArray<uint32> GameGraphVertices;                                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FContextualItemAttachment
{
    EContextualItemAttachType ContextualItemAttachType;                               // 0x0000 (size: 0x4)
    FName SocketName;                                                                 // 0x0004 (size: 0x8)
    FName AttachmentName;                                                             // 0x000C (size: 0x8)
    class UStaticMesh* MeshToBeAttached;                                              // 0x0018 (size: 0x8)
    class USkeletalMesh* SkeletalMeshToBeAttached;                                    // 0x0020 (size: 0x8)
    class UNiagaraSystem* NiagaraAsset;                                               // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FContextualItemDetachment
{
    FName AttachmentName;                                                             // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FCreatorTickFunction : public FTickFunction
{
}; // Size: 0x30

struct FCriticalHitAnimations
{
    TSet<FName> HitBones;                                                             // 0x0000 (size: 0x50)
    TArray<FDirectionalAnimation> DirectionalAnimations;                              // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FCutsceneBlinkConfig
{
    float MinTimeInterval;                                                            // 0x0000 (size: 0x4)
    float MaxTimeInterval;                                                            // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FDamageInteractVFXData
{
    class UNiagaraComponent* InteractDamageVFX;                                       // 0x0000 (size: 0x8)

}; // Size: 0x10

struct FDeadBodyInteractionData : public FActorInteractionData
{
    bool bOverweight;                                                                 // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FDebugRestrictionSettings
{
    TArray<class TSubclassOf<UNavArea>> InRestrictedAreas;                            // 0x0000 (size: 0x10)
    TArray<class TSubclassOf<UNavArea>> OutRestrictedAreas;                           // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FDefaultRestrictions
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)
    bool bIgnoreDuringEmission;                                                       // 0x0001 (size: 0x1)
    ESpaceRestrictionType GlobalRestriction;                                          // 0x0002 (size: 0x1)
    TArray<FAgentDomainRestrictions> AgentDomainRestrictions;                         // 0x0008 (size: 0x10)
    TArray<FFactionRestrictions> FactionRestrictions;                                 // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FDestructibleModelCollection : public FBaseModelCollection
{
}; // Size: 0xA0

struct FDestructibleObjectCollection : public FBaseTickAggregationCollection
{
}; // Size: 0x98

struct FDestructionAction
{
}; // Size: 0x18

struct FDetectorToggleFlashlightAnimations
{
    TMap<class EMainHandEquipmentType, class UAnimMontage*> ToggleFlashlight;         // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FDialogAnimationType
{
    EDialogAnimationType Value;                                                       // 0x0000 (size: 0x8)
    EDialogAnimationCategory DialogAnimationCategory;                                 // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FDialogAnswerInfo
{
    bool bAvailable;                                                                  // 0x0004 (size: 0x1)
    EDialogAnswerColor AnswerColor;                                                   // 0x0005 (size: 0x1)

}; // Size: 0x28

struct FDialogAnswersStyles
{
    FString AnswerDisabled;                                                           // 0x0000 (size: 0x10)
    FString AnswerDefault;                                                            // 0x0010 (size: 0x10)
    FString AnswerDefaultHovered;                                                     // 0x0020 (size: 0x10)
    FString AnswerDefaultRead;                                                        // 0x0030 (size: 0x10)
    FString AnswerDefaultHoveredRead;                                                 // 0x0040 (size: 0x10)
    FString AnswerQuest;                                                              // 0x0050 (size: 0x10)
    FString AnswerQuestHovered;                                                       // 0x0060 (size: 0x10)
    FString AnswerQuestRead;                                                          // 0x0070 (size: 0x10)
    FString AnswerQuestHoveredRead;                                                   // 0x0080 (size: 0x10)
    FString AnswerWithDangerAction;                                                   // 0x0090 (size: 0x10)
    FString AnswerWithDangerActionHovered;                                            // 0x00A0 (size: 0x10)
    FString AnswerWithGetAction;                                                      // 0x00B0 (size: 0x10)
    FString AnswerWithGetActionHovered;                                               // 0x00C0 (size: 0x10)
    FString AnswerWithGiveAction;                                                     // 0x00D0 (size: 0x10)
    FString AnswerWithGiveActionHovered;                                              // 0x00E0 (size: 0x10)
    FString ActionDisabled;                                                           // 0x00F0 (size: 0x10)
    FString ActionDefault;                                                            // 0x0100 (size: 0x10)
    FString ActionDefaultHovered;                                                     // 0x0110 (size: 0x10)
    FString ActionQuest;                                                              // 0x0120 (size: 0x10)
    FString ActionQuestHovered;                                                       // 0x0130 (size: 0x10)
    FString ActionDanger;                                                             // 0x0140 (size: 0x10)
    FString ActionDangerHovered;                                                      // 0x0150 (size: 0x10)
    FString ActionGet;                                                                // 0x0160 (size: 0x10)
    FString ActionGetHovered;                                                         // 0x0170 (size: 0x10)
    FString ActionGive;                                                               // 0x0180 (size: 0x10)
    FString ActionGiveHovered;                                                        // 0x0190 (size: 0x10)
    FString BackgroundDisabled;                                                       // 0x01A0 (size: 0x10)
    FString BackgroundDefault;                                                        // 0x01B0 (size: 0x10)
    FString BackgroundDefaultHovered;                                                 // 0x01C0 (size: 0x10)
    FString BackgroundDefaultRead;                                                    // 0x01D0 (size: 0x10)
    FString BackgroundDefaultHoveredRead;                                             // 0x01E0 (size: 0x10)
    FString BackgroundQuest;                                                          // 0x01F0 (size: 0x10)
    FString BackgroundQuestHovered;                                                   // 0x0200 (size: 0x10)
    FString BackgroundQuestRead;                                                      // 0x0210 (size: 0x10)
    FString BackgroundQuestHoveredRead;                                               // 0x0220 (size: 0x10)
    FString BackgroundDanger;                                                         // 0x0230 (size: 0x10)
    FString BackgroundDangerHovered;                                                  // 0x0240 (size: 0x10)
    FString BackgroundGet;                                                            // 0x0250 (size: 0x10)
    FString BackgroundGetHovered;                                                     // 0x0260 (size: 0x10)
    FString BackgroundGive;                                                           // 0x0270 (size: 0x10)
    FString BackgroundGiveHovered;                                                    // 0x0280 (size: 0x10)
    FString IconDisabled;                                                             // 0x0290 (size: 0x10)
    FString IconDefault;                                                              // 0x02A0 (size: 0x10)
    FString IconDefaultHovered;                                                       // 0x02B0 (size: 0x10)
    FString IconDefaultRead;                                                          // 0x02C0 (size: 0x10)
    FString IconDefaultHoveredRead;                                                   // 0x02D0 (size: 0x10)
    FString IconQuest;                                                                // 0x02E0 (size: 0x10)
    FString IconQuestHovered;                                                         // 0x02F0 (size: 0x10)
    FString IconQuestRead;                                                            // 0x0300 (size: 0x10)
    FString IconQuestHoveredRead;                                                     // 0x0310 (size: 0x10)
    FString IconDanger;                                                               // 0x0320 (size: 0x10)
    FString IconDangerHovered;                                                        // 0x0330 (size: 0x10)
    FString IconGet;                                                                  // 0x0340 (size: 0x10)
    FString IconGetHovered;                                                           // 0x0350 (size: 0x10)
    FString IconGive;                                                                 // 0x0360 (size: 0x10)
    FString IconGiveHovered;                                                          // 0x0370 (size: 0x10)

}; // Size: 0x380

struct FDialogFolderInfo
{
    FText FolderName;                                                                 // 0x0000 (size: 0x18)
    TArray<FDialogAnswerInfo> Answers;                                                // 0x0018 (size: 0x10)
    FUID MemberUID;                                                                   // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FDialogMemberData
{
    FString DialogMemberName;                                                         // 0x0000 (size: 0x10)
    bool bOptionalMember;                                                             // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FDialogUIInfo
{
}; // Size: 0x60

struct FDifficultyData
{
    class UTexture2D* DifficultyImage;                                                // 0x0000 (size: 0x8)
    class USetDifficulty* DifficultyButtonAction;                                     // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FDirectionBlendData
{
    float Forward;                                                                    // 0x0000 (size: 0x4)
    float Backward;                                                                   // 0x0004 (size: 0x4)
    float Left;                                                                       // 0x0008 (size: 0x4)
    float Right;                                                                      // 0x000C (size: 0x4)
    float ForwardLeft;                                                                // 0x0010 (size: 0x4)
    float ForwardRight;                                                               // 0x0014 (size: 0x4)
    float BackwardLeft;                                                               // 0x0018 (size: 0x4)
    float BackwardRight;                                                              // 0x001C (size: 0x4)
    float BlendInterpSpeed;                                                           // 0x0020 (size: 0x4)

}; // Size: 0x24

struct FDirectionalAnimation
{
    float MinAngle;                                                                   // 0x0000 (size: 0x4)
    float MaxAngle;                                                                   // 0x0004 (size: 0x4)
    float AnimationAngle;                                                             // 0x0008 (size: 0x4)
    class UAnimMontage* Animation;                                                    // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FDirectionalLightState
{
    FLightState Light;                                                                // 0x0000 (size: 0x300)
    FLightShaftsState LightShafts;                                                    // 0x0300 (size: 0x60)

}; // Size: 0x360

struct FDisplaySettings
{
    FName TitleBackgroundStyleId;                                                     // 0x0000 (size: 0x8)
    FName TitleBorderLineStyleId;                                                     // 0x0008 (size: 0x8)
    FName InsideMarkerStyleId;                                                        // 0x0010 (size: 0x8)
    FName MarkerBackgroundStyleId;                                                    // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FDoorMovableData
{
    FName ComponentName;                                                              // 0x0000 (size: 0x8)
    float OpenAngularSpeed;                                                           // 0x0008 (size: 0x4)
    float OpenAngle;                                                                  // 0x000C (size: 0x4)
    float StealthOpenAngularSpeed;                                                    // 0x0010 (size: 0x4)
    float StealthOpenAngle;                                                           // 0x0014 (size: 0x4)
    class UStaticMeshComponent* DoorMeshComponent;                                    // 0x0018 (size: 0x8)
    float InitialAngle;                                                               // 0x0020 (size: 0x4)
    EDoorMoveDirection CurrentDirection;                                              // 0x0025 (size: 0x1)

}; // Size: 0x28

struct FDoubleLineSettings
{
    FString FindTag;                                                                  // 0x0000 (size: 0x10)
    FString CorrectTag;                                                               // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FDragDeadBodyAnimations
{
    class UAnimMontage* PickUpBodyFaceUp;                                             // 0x0000 (size: 0x8)
    class UAnimMontage* DropBody;                                                     // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FDynamicEnvironmentParticleDataRow : public FTableRowBase
{
    EDynamicParticleType ParticleType;                                                // 0x0008 (size: 0x1)
    TSet<TSubclassOf<UNiagaraParameterProvider>> Providers;                           // 0x0010 (size: 0x50)
    bool bCanSpawnOnWater;                                                            // 0x0060 (size: 0x1)
    bool bStopOnCutscene;                                                             // 0x0061 (size: 0x1)
    FParticleIndoorSpawnPrototype IndoorSpawnPrototype;                               // 0x0068 (size: 0x30)
    FParticleBiomePrototype BiomeSpawnPrototype;                                      // 0x0098 (size: 0x38)
    FParticleDistancePrototype PlayerDistancePrototype;                               // 0x00D0 (size: 0x10)
    FParticleWindIntensityPrototype WindIntensityPrototype;                           // 0x00E0 (size: 0x10)
    TMap<class EWeather, class FParticleActorSpawnPrototype> ActorSpawnPrototypes;    // 0x00F0 (size: 0x50)
    TMap<class EWeather, class FParticlePlayerComponentSpawnPrototype> PlayerComponentSpawnPrototypes; // 0x0140 (size: 0x50)
    TMap<class EWeather, class FParticleActorComponentSpawnPrototype> ActorComponentSpawnPrototypes; // 0x0190 (size: 0x50)
    TArray<TSoftObjectPtr<UNiagaraSystem>> ActorParticleVFXes;                        // 0x01E0 (size: 0x10)
    TSoftObjectPtr<UNiagaraSystem> PlayerParticleVFX;                                 // 0x01F0 (size: 0x30)
    FLightningStrikeParticleVFXPrototype LightningStrikeVFX;                          // 0x0220 (size: 0xF8)
    FLightningStrikeDamagePrototype LightningStrikeDamagePrototype;                   // 0x0318 (size: 0x38)

}; // Size: 0x350

struct FDynamicObstacleAvoidanceAgentSettings
{
    float AgentAvoidanceRadiusMargin;                                                 // 0x0000 (size: 0x4)
    float MinMovementSpeed;                                                           // 0x0004 (size: 0x4)
    float AgentTimeOfImpactToConsiderWaiting;                                         // 0x0008 (size: 0x4)
    float SpeedRecoveryTimeout;                                                       // 0x000C (size: 0x4)
    float AgentPriorityTimeout;                                                       // 0x0010 (size: 0x4)
    float AgentRepathingTimeout;                                                      // 0x0014 (size: 0x4)
    float AgentFailMovementTimeout;                                                   // 0x0018 (size: 0x4)
    bool AllowPriorityAgent;                                                          // 0x001C (size: 0x1)
    bool bMergeObstacles;                                                             // 0x001D (size: 0x1)
    bool bCanFailMovement;                                                            // 0x001E (size: 0x1)

}; // Size: 0x20

struct FDynamicObstacleAvoidanceQuerrySettings
{
    float StartTrackingDistance;                                                      // 0x0000 (size: 0x4)
    float EndTrackingOffset;                                                          // 0x0004 (size: 0x4)
    float PreferredAvoidanceCorridorWidth;                                            // 0x0008 (size: 0x4)
    float MaxCorridorSectionLength;                                                   // 0x000C (size: 0x4)
    float ObstaclesQueryDistance;                                                     // 0x0010 (size: 0x4)
    float AgentMinAvoidanceSampleStep;                                                // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FDynamicObstacleAvoidanceSystemSettings
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)
    int32 MaxUpdateAgentsPerTick;                                                     // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FEffectPrototypeSID
{
    FPrototypeSID EffectSID;                                                          // 0x0000 (size: 0x40)

}; // Size: 0x40

struct FEffectValueOverridePair
{
}; // Size: 0xC

struct FElectroAnomalyBakedData
{
    int32 CirclePointsCount;                                                          // 0x0000 (size: 0x4)
    TArray<FVector> TraceStartPoints;                                                 // 0x0008 (size: 0x10)
    TArray<FVector> TraceEndPoints;                                                   // 0x0018 (size: 0x10)
    TArray<FVector> TraceUpVectors;                                                   // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FElectroAnomalyBakedDataFloat
{
    int32 CirclePointsCount;                                                          // 0x0000 (size: 0x4)
    TArray<FVector3f> TraceStartPoints;                                               // 0x0008 (size: 0x10)
    TArray<FVector3f> TraceEndPoints;                                                 // 0x0018 (size: 0x10)
    TArray<FVector3f> TraceUpVectors;                                                 // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FEncounterSpawnPointData
{
    FTransform SpawnTransform;                                                        // 0x0000 (size: 0x60)
    FObjPrototypeSID ObjPrototypeSID;                                                 // 0x0060 (size: 0x40)
    EPsyNPCType PsyNPCType;                                                           // 0x00A0 (size: 0x1)

}; // Size: 0xB0

struct FEnvironmentParticlePrototype
{
}; // Size: 0x8

struct FEquipUnequipAnimations
{
    class UAnimMontage* Equip;                                                        // 0x0000 (size: 0x8)
    class UAnimMontage* Unequip;                                                      // 0x0008 (size: 0x8)
    class UAnimMontage* FastUnequip;                                                  // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FEquipmentItemSlot
{
}; // Size: 0x18

struct FEquipmentNavigationPath
{
    double MinAngle;                                                                  // 0x0000 (size: 0x8)
    double MaxAngle;                                                                  // 0x0008 (size: 0x8)
    EInventoryEquipmentSlot TargetSlot;                                               // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FEquipmentNavigationPaths
{
    TArray<FEquipmentNavigationPath> NavigationPaths;                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FEventData
{
    TSoftObjectPtr<UAkAudioEvent> AkEvent;                                            // 0x0000 (size: 0x30)
    FVector RelativeTransform;                                                        // 0x0030 (size: 0x18)

}; // Size: 0x48

struct FExplosionHitArgs
{
    FVector ExplosionLocation;                                                        // 0x0000 (size: 0x18)
    float ExplosionRadius;                                                            // 0x0018 (size: 0x4)
    class AActor* ExplosiveActor;                                                     // 0x0020 (size: 0x8)
    FString ExplosiveActorPrototypeID;                                                // 0x0028 (size: 0x10)
    FUID ExplosionInstigatorUID;                                                      // 0x0038 (size: 0x4)

}; // Size: 0x40

struct FExponentialHeightFogState
{
    FFloatParameter FogDensity;                                                       // 0x0000 (size: 0x60)
    FFloatParameter FogHeightFalloff;                                                 // 0x0060 (size: 0x60)
    FFloatParameter SecondFogDensity;                                                 // 0x00C0 (size: 0x60)
    FFloatParameter SecondFogFalloff;                                                 // 0x0120 (size: 0x60)
    FFloatParameter SecondFogOffset;                                                  // 0x0180 (size: 0x60)
    FFloatParameter ScatteringDistribution;                                           // 0x01E0 (size: 0x60)
    FLinearColorParameter Albedo;                                                     // 0x0240 (size: 0x60)
    FLinearColorParameter Emissive;                                                   // 0x02A0 (size: 0x60)
    FFloatParameter ExtinctionScale;                                                  // 0x0300 (size: 0x60)
    FLinearColorParameter SkyAtmosphereAmbientContributionColorScale;                 // 0x0360 (size: 0x60)
    FLinearColorParameter DirectionalInscatteringColor;                               // 0x03C0 (size: 0x60)
    FFloatParameter DirectionalInscatteringExponent;                                  // 0x0420 (size: 0x60)

}; // Size: 0x480

struct FEyesLookAtData
{
    TMap<class ECutsceneBlinkProfile, class FCutsceneBlinkConfig> CutsceneBlinkConfigs; // 0x0000 (size: 0x50)
    class UAnimMontage* BlinkAnimation;                                               // 0x0050 (size: 0x8)
    float BlinkOnEyeMoveThreshold;                                                    // 0x0058 (size: 0x4)
    float BlinkOnEyeMoveInterval;                                                     // 0x005C (size: 0x4)
    float ControlRigEnableInterpSpeed;                                                // 0x0060 (size: 0x4)
    float ControlRigDisableInterpSpeed;                                               // 0x0064 (size: 0x4)
    float CutsceneProceduralEyesWeight;                                               // 0x0068 (size: 0x4)
    float CutsceneProceduralEyesAmplitude;                                            // 0x006C (size: 0x4)
    float CutsceneProceduralEyesIntensity;                                            // 0x0070 (size: 0x4)
    bool bShouldBeEnabled;                                                            // 0x0074 (size: 0x1)
    float ControlRigAlpha;                                                            // 0x0078 (size: 0x4)
    float CutsceneEyesLookAtWeight;                                                   // 0x007C (size: 0x4)
    FVector LookAtLocation;                                                           // 0x0080 (size: 0x18)
    class AActor* LookAtActor;                                                        // 0x0098 (size: 0x8)
    class USkeletalMeshComponent* LookAtSkeletalMesh;                                 // 0x00A0 (size: 0x8)
    ECutsceneBlinkProfile CutsceneBlinkProfile;                                       // 0x00A8 (size: 0x1)
    ECutsceneEyesIdleProfile CutsceneEyesIdleProfile;                                 // 0x00A9 (size: 0x1)
    float TimeToNextBlink;                                                            // 0x00AC (size: 0x4)
    float BlinkOnEyeMoveCooldown;                                                     // 0x00B0 (size: 0x4)
    float CutsceneHeadControlRigAlpha;                                                // 0x00B4 (size: 0x4)
    float CutsceneHeadLookAtWeight;                                                   // 0x00B8 (size: 0x4)
    bool bShouldOffOnEdges;                                                           // 0x00BC (size: 0x1)

}; // Size: 0xC0

struct FFactionOverridableProperty : public FOverridableProperty
{
    FFactionSelector DefaultValue;                                                    // 0x0018 (size: 0x60)
    FFactionSelector CurrentValue;                                                    // 0x0078 (size: 0x60)

}; // Size: 0xD8

struct FFactionRestrictions
{
    FFactionSelector Faction;                                                         // 0x0000 (size: 0x60)
    ESpaceRestrictionType RestrictionType;                                            // 0x0060 (size: 0x1)

}; // Size: 0x68

struct FFactionSelector
{
    FString Value;                                                                    // 0x0000 (size: 0x10)
    TSet<FString> AllowedFactionsFilter;                                              // 0x0010 (size: 0x50)

}; // Size: 0x60

struct FFactionSelectorArray
{
    TArray<FFactionSelector> Factions;                                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FFeedbackSettings
{
}; // Size: 0x1

struct FFireTypeDisplayInfo
{
    FString DisplayTextSid;                                                           // 0x0000 (size: 0x10)
    class UTexture2D* DisplayTexture;                                                 // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FFireTypeSlotSettings
{
    class UTexture* BackgroundTexture;                                                // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FFloatParameter : public FParameter
{
    class UCurveFloat* Curve;                                                         // 0x0058 (size: 0x8)

}; // Size: 0x60

struct FFloatValueLocalisationPair
{
    float PercentValue;                                                               // 0x0000 (size: 0x4)
    FText Loc10N;                                                                     // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FFogParams
{
    float Density;                                                                    // 0x0000 (size: 0x4)
    FFloatInterval Height;                                                            // 0x0004 (size: 0x8)

}; // Size: 0xC

struct FForceFeedbackArgs
{
}; // Size: 0x8

struct FForceFeedbackParams
{
    FName Tag;                                                                        // 0x0000 (size: 0x8)
    bool bLooping;                                                                    // 0x0008 (size: 0x1)
    bool bIgnoreTimeDilation;                                                         // 0x0009 (size: 0x1)
    bool bPlayWhilePaused;                                                            // 0x000A (size: 0x1)

}; // Size: 0xC

struct FFourLegIKData : public FBaseLegIKData
{
    FLegIKData FrontLeftFootIKData;                                                   // 0x0008 (size: 0x10)
    FLegIKData FrontRightFootIKData;                                                  // 0x0018 (size: 0x10)
    FLegIKData BackLeftFootIKData;                                                    // 0x0028 (size: 0x10)
    FLegIKData BackRightFootIKData;                                                   // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FGSCComponentReference
{
    TSoftObjectPtr<AActor> OtherActor;                                                // 0x0000 (size: 0x30)
    FName ComponentProperty;                                                          // 0x0030 (size: 0x8)
    FString PathToComponent;                                                          // 0x0038 (size: 0x10)

}; // Size: 0x50

struct FGSC_RelationColors : public FTableRowBase
{
    FName ColourStyleID;                                                              // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FGSC_WidgetProgressStyle : public FTableRowBase
{
    FProgressBarStyle ProgressBarStyle;                                               // 0x0010 (size: 0x2F0)

}; // Size: 0x300

struct FGSC_WidgetStyle : public FTableRowBase
{
    FLinearColor Colour;                                                              // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FGUIDIndex
{
}; // Size: 0x4

struct FGameGraphContextualAction
{
    FGuid QuestGuid;                                                                  // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FGameGraphContextualActions
{
    TArray<FGameGraphContextualAction> ContextualActions;                             // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FGameGraphSceneProxyDrawParams
{
    bool bEnableMinMaxPathColoring;                                                   // 0x0000 (size: 0x1)
    bool bEnableAgentSupportMaskColoring;                                             // 0x0001 (size: 0x1)
    bool bEnablePolyBindConnectivityColoring;                                         // 0x0002 (size: 0x1)
    bool bDebugContextualActions;                                                     // 0x0003 (size: 0x1)
    int32 PolyBindConnectivityNavDataIdx;                                             // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FGlobalVariable
{
}; // Size: 0x18

struct FGridInfo
{
    FName GridName;                                                                   // 0x0000 (size: 0x8)
    double OverrideStreamingDistance;                                                 // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FGroomCategory
{
}; // Size: 0x78

struct FGroomVariation
{
}; // Size: 0xE0

struct FGroupUID : public FUID
{
}; // Size: 0x4

struct FHeadFlashlightComponentCollection : public FBaseTickAggregationCollection
{
}; // Size: 0x98

struct FHintControllerSettings
{
    FName InputAction;                                                                // 0x0000 (size: 0x8)
    FName CustomInputIconName;                                                        // 0x0008 (size: 0x8)
    EMappingContext MappingContext;                                                   // 0x0010 (size: 0x4)
    FAdvancedControllerSettings GamepadAdvancedSettings;                              // 0x0014 (size: 0x8)
    FAdvancedControllerSettings KeyboardAdvancedSettings;                             // 0x001C (size: 0x8)

}; // Size: 0x24

struct FHintStyleSettings
{
    EHintDescriptionSettings DescriptionSettings;                                     // 0x0000 (size: 0x1)
    FName HintDescriptionFontStyleSID;                                                // 0x0004 (size: 0x8)
    FString HintDescriptionSID;                                                       // 0x0010 (size: 0x10)
    float HintAndDescriptionGap;                                                      // 0x0020 (size: 0x4)
    float HintHeight;                                                                 // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FHintViewSettings
{
    FName InputAction;                                                                // 0x0000 (size: 0x8)
    EMappingContext MappingContext;                                                   // 0x0008 (size: 0x4)
    int32 InputMappingIndex;                                                          // 0x000C (size: 0x4)
    EHintProgressType ProgressType;                                                   // 0x0010 (size: 0x1)
    float HintHeight;                                                                 // 0x0014 (size: 0x4)
    FName CustomInputAction;                                                          // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FHintsData : public FTableRowBase
{
    TMap<class EGSCInputDeviceType, class FSlateBrush> PlatformIcons;                 // 0x0008 (size: 0x50)
    FLinearColor BackgroundColor;                                                     // 0x0058 (size: 0x10)
    bool bOverrideBackgroundBrush;                                                    // 0x0068 (size: 0x1)
    FSlateBrush BackgroundBrush;                                                      // 0x0070 (size: 0xF0)
    FMargin BackgroundPadding;                                                        // 0x0160 (size: 0x10)

}; // Size: 0x170

struct FHintsDataTable : public FTableRowBase
{
    bool bCheckPlatform;                                                              // 0x0008 (size: 0x1)
    TMap<class EGSCInputDeviceType, class FSlateBrush> PlatformIcons;                 // 0x0010 (size: 0x50)
    TMap<class EGSCInputDeviceType, class FHintsData> PlatformData;                   // 0x0060 (size: 0x50)

}; // Size: 0xB0

struct FHintsInputDataTable : public FTableRowBase
{
    FSlateBrush PlatformIcons;                                                        // 0x0010 (size: 0xF0)

}; // Size: 0x100

struct FHitBlocker
{
    FName JointName;                                                                  // 0x0000 (size: 0x8)
    int32 ElementIndex;                                                               // 0x0008 (size: 0x4)
    float MaxPiercing;                                                                // 0x000C (size: 0x4)

}; // Size: 0x10

struct FHoldInteractionData : public FInteractionData
{
    float HoldTime;                                                                   // 0x0018 (size: 0x4)
    float DecreaseTime;                                                               // 0x001C (size: 0x4)
    bool bDoNotDecrease;                                                              // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FHoverAction
{
    EHintHoverActionType HoverAction;                                                 // 0x0000 (size: 0x1)
    class UUserWidget* ActionWidget;                                                  // 0x0008 (size: 0x8)
    FLinearColor HoverColorAndOpacity;                                                // 0x0010 (size: 0x10)
    FLinearColor UnHoverColorAndOpacity;                                              // 0x0020 (size: 0x10)
    ESlateVisibility HoverVisibility;                                                 // 0x0030 (size: 0x1)
    ESlateVisibility UnHoverVisibility;                                               // 0x0031 (size: 0x1)

}; // Size: 0x38

struct FHumanAnimLocomotionData
{
    float Velocity;                                                                   // 0x0000 (size: 0x4)
    float AngleDirection;                                                             // 0x0004 (size: 0x4)
    float ClampedDirection;                                                           // 0x0008 (size: 0x4)
    uint8 BPDirection;                                                                // 0x000C (size: 0x1)
    EDirections Direction;                                                            // 0x000D (size: 0x1)
    FDirectionBlendData DirectionBlendParams;                                         // 0x0010 (size: 0x24)

}; // Size: 0x88

struct FHumanDeathAnimArray
{
    TArray<class UAnimMontage*> Animations;                                           // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FHumanDeathAnimations
{
    TMap<class EAnimHitBodyPart, class FHumanDeathDirectionalAnimMap> BulletDeathAnimations; // 0x0000 (size: 0x50)
    TMap<class EAnimDirections, class FHumanDeathAnimArray> ExplosionDeathAnimations; // 0x0050 (size: 0x50)
    TMap<class EHumanAnimDamageSource, class FHumanDeathAnimArray> DeathAnimations;   // 0x00A0 (size: 0x50)

}; // Size: 0xF0

struct FHumanDeathDirectionalAnimMap
{
    TMap<class EAnimDirections, class FHumanDeathAnimArray> DirectionalAnimations;    // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FHumanExternalAnimations
{
    FHumanHitAnimations DefaultHits;                                                  // 0x0000 (size: 0x28)
    FHumanHitAnimations ShotgunHits;                                                  // 0x0028 (size: 0x28)
    FHumanKnockDownAnimations KnockdownAnimations;                                    // 0x0050 (size: 0x28)
    FHumanLookAtAnimations LookAt;                                                    // 0x0078 (size: 0x18)
    class UAnimSequence* IdleStand;                                                   // 0x0090 (size: 0x8)
    class UAnimSequence* IdleCrouch;                                                  // 0x0098 (size: 0x8)
    class UAnimSequence* IdleRelaxed;                                                 // 0x00A0 (size: 0x8)
    class UAnimSequence* IdleRelaxedAdditive;                                         // 0x00A8 (size: 0x8)
    class UAnimSequence* StandToCrouch;                                               // 0x00B0 (size: 0x8)
    class UAnimSequence* CrouchToStand;                                               // 0x00B8 (size: 0x8)
    class UAnimSequence* StandToRelax;                                                // 0x00C0 (size: 0x8)
    class UAnimSequence* RelaxToStand;                                                // 0x00C8 (size: 0x8)

}; // Size: 0xD0

struct FHumanFirearmInternalAnimations
{
    FCharacterWeaponAnimations ShootingInHip;                                         // 0x0000 (size: 0x20)
    TMap<class EAnimationStates, class FHumanStateReloadAnimations> Reloading;        // 0x0020 (size: 0x50)
    TMap<class EAnimationStates, class FHumanStateReloadAnimations> ReloadingInCover; // 0x0070 (size: 0x50)
    TArray<class UAnimMontage*> Melee;                                                // 0x00C0 (size: 0x10)

}; // Size: 0xD0

struct FHumanHitAnimations
{
    class UBlendSpace1D* Head;                                                        // 0x0000 (size: 0x8)
    class UBlendSpace1D* UpperBody;                                                   // 0x0008 (size: 0x8)
    class UBlendSpace1D* LowerBody;                                                   // 0x0010 (size: 0x8)
    class UBlendSpace1D* LeftLeg;                                                     // 0x0018 (size: 0x8)
    class UBlendSpace1D* RightLeg;                                                    // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FHumanHumanAttachAnimBlueprintsBySID
{
    UClass* AttachAnimBlueprint;                                                      // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FHumanKnockDownAnimations
{
    class UAnimSequence* KnockDownInForward;                                          // 0x0000 (size: 0x8)
    class UAnimSequence* KnockDownInBackward;                                         // 0x0008 (size: 0x8)
    class UAnimSequence* KnockDownInLeft;                                             // 0x0010 (size: 0x8)
    class UAnimSequence* KnockDownInRight;                                            // 0x0018 (size: 0x8)
    class UAnimSequence* KnockDownOut;                                                // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FHumanLookAtAnimations
{
    class UBlendSpace* CoverStandBlindLeft;                                           // 0x0000 (size: 0x8)
    class UBlendSpace* CoverCrouchBlindLeft;                                          // 0x0008 (size: 0x8)
    class UBlendSpace* CoverCrouchBlindTop;                                           // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FHumanStateReloadAnimations
{
    TMap<class FName, class FMagazineReloadAnimations> MagazineReload;                // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FHumanTransitionAnimations
{
    class UAnimMontage* TransitionTo;                                                 // 0x0000 (size: 0x8)
    class UAnimMontage* TransitionFrom;                                               // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FHumanWeaponAnimations
{
    class UHumanAnimCollection* AnimCollection;                                       // 0x0000 (size: 0x8)
    UClass* HumanAnimBlueprint;                                                       // 0x0008 (size: 0x8)
    TMap<class FString, class FHumanHumanAttachAnimBlueprintsBySID> AttachBlueprintbySID; // 0x0010 (size: 0x50)
    FCharacterWeaponAnimations EquipWeapon;                                           // 0x0060 (size: 0x20)
    FCharacterWeaponAnimations UnequipWeapon;                                         // 0x0080 (size: 0x20)
    FCharacterWeaponAnimations EquipWeaponFast;                                       // 0x00A0 (size: 0x20)
    FCharacterWeaponAnimations UnequipWeaponFast;                                     // 0x00C0 (size: 0x20)
    FCharacterWeaponAnimations EquipWeaponRelax;                                      // 0x00E0 (size: 0x20)
    FCharacterWeaponAnimations UnequipWeaponRelax;                                    // 0x0100 (size: 0x20)

}; // Size: 0x120

struct FHumanWeaponExternalAnimations
{
    class UAnimSequence* IdleCommon;                                                  // 0x0000 (size: 0x8)
    class UAnimSequence* IdleCrouchCommon;                                            // 0x0008 (size: 0x8)
    class UAnimSequence* Idle;                                                        // 0x0010 (size: 0x8)
    class UAnimSequence* IdleRelaxed;                                                 // 0x0018 (size: 0x8)
    class UAnimSequence* IdleAdd;                                                     // 0x0020 (size: 0x8)
    class UAnimSequence* IdleRelaxedAdd;                                              // 0x0028 (size: 0x8)
    class UAnimSequence* LowCoverIdleAdditive;                                        // 0x0030 (size: 0x8)
    class UAnimSequence* HighCoverIdleAdditive;                                       // 0x0038 (size: 0x8)

}; // Size: 0x40

struct FIconSettings
{
    StyleManagerActionType StyleAction;                                               // 0x0000 (size: 0x1)
    bool bIconCheckPlatform;                                                          // 0x0001 (size: 0x1)
    FSlateBrush Brush;                                                                // 0x0010 (size: 0xF0)
    bool bEnableResize;                                                               // 0x0100 (size: 0x1)
    FVector2D IconSize;                                                               // 0x0108 (size: 0x10)

}; // Size: 0x120

struct FInfoScreenSettings
{
    FText TitleText;                                                                  // 0x0000 (size: 0x18)
    FText DescriptionText;                                                            // 0x0018 (size: 0x18)
    FSoftObjectPath Image;                                                            // 0x0030 (size: 0x20)

}; // Size: 0x50

struct FInitialCollectionSize
{
    int32 AgentView;                                                                  // 0x0000 (size: 0x4)
    int32 AgentModel;                                                                 // 0x0004 (size: 0x4)
    int32 AnomalyView;                                                                // 0x0008 (size: 0x4)
    int32 AnomalyModel;                                                               // 0x000C (size: 0x4)
    int32 ArtifactView;                                                               // 0x0010 (size: 0x4)
    int32 ProjectileView;                                                             // 0x0014 (size: 0x4)
    int32 AIComponent;                                                                // 0x0018 (size: 0x4)
    int32 AkComponent;                                                                // 0x001C (size: 0x4)
    int32 AkLateReverbComponent;                                                      // 0x0020 (size: 0x4)
    int32 AkRoomComponent;                                                            // 0x0024 (size: 0x4)
    int32 AkSurfaceReflectorSetComponent;                                             // 0x0028 (size: 0x4)
    int32 ItemContainer;                                                              // 0x002C (size: 0x4)
    int32 DestructibleView;                                                           // 0x0030 (size: 0x4)
    int32 DestructibleModel;                                                          // 0x0034 (size: 0x4)
    int32 WetnessComponent;                                                           // 0x0038 (size: 0x4)
    int32 FlashlightComponent;                                                        // 0x003C (size: 0x4)
    int32 ContextualActionModel;                                                      // 0x0040 (size: 0x4)
    int32 QuestNode;                                                                  // 0x0044 (size: 0x4)

}; // Size: 0x48

struct FInjectorAnimations
{
    class UAnimMontage* PlayerHealAnimation;                                          // 0x0000 (size: 0x8)
    class UAnimMontage* HumanHealAnimation;                                           // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FInputBufferIPUStruct
{
}; // Size: 0x70

struct FInputMappingSettingsElementModels
{
    bool IsAnchor;                                                                    // 0x0000 (size: 0x1)
    FString AnchorLocalization;                                                       // 0x0008 (size: 0x10)
    bool SaveAnchor;                                                                  // 0x0018 (size: 0x1)
    class UInputAction* Action;                                                       // 0x0020 (size: 0x8)
    EMappingContext MappingContext;                                                   // 0x0028 (size: 0x4)
    bool IsMappable;                                                                  // 0x002C (size: 0x1)
    FName PlayerMappableOption;                                                       // 0x0030 (size: 0x8)
    FName AlternativePlayerMappableOption;                                            // 0x0038 (size: 0x8)
    bool IsActive;                                                                    // 0x0040 (size: 0x1)
    bool bHaveBindedActions;                                                          // 0x0041 (size: 0x1)
    FName BindedPlayerMappableOption;                                                 // 0x0044 (size: 0x8)
    FName BindedAltPlayerMappableOption;                                              // 0x004C (size: 0x8)
    FText DisplayCategory;                                                            // 0x0058 (size: 0x18)
    FString NameLocSID;                                                               // 0x0070 (size: 0x10)
    FString DescriptionLocSID;                                                        // 0x0080 (size: 0x10)

}; // Size: 0x90

struct FInputStoryDataEntry
{
}; // Size: 0x18

struct FInspectArtifactAnimations
{
    class UAnimMontage* InspectArtifact;                                              // 0x0000 (size: 0x8)
    class UAnimMontage* InspectArtifactWithBackpack;                                  // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FIntInterval
{
    int32 Min;                                                                        // 0x0000 (size: 0x4)
    int32 Max;                                                                        // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FInteractEffectData
{
    FPrototypeSID PrototypeSID;                                                       // 0x0000 (size: 0x40)

}; // Size: 0x40

struct FInteractObject
{
    FPrototypeSID PrototypeSID;                                                       // 0x0000 (size: 0x40)
    int32 Count;                                                                      // 0x0040 (size: 0x4)
    bool bConsumedOnUse;                                                              // 0x0044 (size: 0x1)

}; // Size: 0x48

struct FInteractObjectData
{
    FPrototypeSID PrototypeSID;                                                       // 0x0000 (size: 0x40)
    int32 Count;                                                                      // 0x0040 (size: 0x4)
    float MinDurability;                                                              // 0x0044 (size: 0x4)
    float MaxDurability;                                                              // 0x0048 (size: 0x4)

}; // Size: 0x50

struct FInteractableAnimations
{
    class UAnimMontage* Item;                                                         // 0x0000 (size: 0x8)
    class UAnimMontage* Character;                                                    // 0x0008 (size: 0x8)
    class UAnimMontage* CharacterWithDetector;                                        // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FInteractableDisplayInfo
{
    FText TitleText;                                                                  // 0x0000 (size: 0x18)
    FText InteractActionText;                                                         // 0x0018 (size: 0x18)
    FText InteractActionTextSmall;                                                    // 0x0030 (size: 0x18)
    EInteractionType InteractionType;                                                 // 0x0048 (size: 0x1)
    EDisplayPriority DisplayPriority;                                                 // 0x0049 (size: 0x1)
    bool bOverweight;                                                                 // 0x004A (size: 0x1)
    bool bShowDurability;                                                             // 0x004B (size: 0x1)
    bool bShowUpgrade;                                                                // 0x004C (size: 0x1)

}; // Size: 0x50

struct FInteractionData
{
    FString InteractableTextToolAction;                                               // 0x0000 (size: 0x10)

}; // Size: 0x18

struct FInteractionHitInfo
{
    class AActor* HitActor;                                                           // 0x0000 (size: 0x8)
    class UPrimitiveComponent* HitComponent;                                          // 0x0008 (size: 0x8)
    TArray<TWeakObjectPtr<UInteractionComponent>> Interactions;                       // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FItemContainerData : public FActorInteractionData
{
    bool bShowDurability;                                                             // 0x0018 (size: 0x1)
    bool bShowUpgrade;                                                                // 0x0019 (size: 0x1)

}; // Size: 0x20

struct FItemContainerModelCollection : public FBaseTickAggregationCollection
{
}; // Size: 0x98

struct FItemContainerUID : public FUID
{
}; // Size: 0x4

struct FItemLock
{
    int32 ItemCount;                                                                  // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FItemUID : public FUID
{
}; // Size: 0x4

struct FJournalQuest
{
}; // Size: 0x70

struct FJournalQuestStageData
{
}; // Size: 0xC

struct FLegIKData
{
    FName FootName;                                                                   // 0x0000 (size: 0x8)
    FName FootSocketName;                                                             // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FLightShaftsState
{
    FLinearColorParameter BloomTint;                                                  // 0x0000 (size: 0x60)

}; // Size: 0x60

struct FLightState
{
    FFloatParameter Intensity;                                                        // 0x0000 (size: 0x60)
    FLinearColorParameter LightColor;                                                 // 0x0060 (size: 0x60)
    FFloatParameter Temperature;                                                      // 0x00C0 (size: 0x60)
    FFloatParameter ShadowAmount;                                                     // 0x0120 (size: 0x60)
    FFloatParameter MoonOpacity;                                                      // 0x0180 (size: 0x60)
    FLinearColorParameter CloudScatteredLuminanceScale;                               // 0x01E0 (size: 0x60)
    FLinearColorParameter SunDiskColorScale;                                          // 0x0240 (size: 0x60)
    FFloatParameter VolumetricScatteringIntensity;                                    // 0x02A0 (size: 0x60)

}; // Size: 0x300

struct FLightningBallNavigationData
{
    bool bIsPatrolPoint;                                                              // 0x0000 (size: 0x1)
    FVector PointLocation;                                                            // 0x0008 (size: 0x18)
    TArray<int32> NeighborPoints;                                                     // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FLightningStrikeDamagePrototype : public FEnvironmentParticlePrototype
{
    float PlayerHitProbability;                                                       // 0x0008 (size: 0x4)
    float PlayerHitCheckTime;                                                         // 0x000C (size: 0x4)
    float HeightPriorityRadius;                                                       // 0x0010 (size: 0x4)
    float HeightPriorityUsageProbability;                                             // 0x0014 (size: 0x4)
    TArray<FEffectPrototypeSID> PlayerHitEffects;                                     // 0x0018 (size: 0x10)
    TArray<FEffectPrototypeSID> NPCHitEffects;                                        // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FLightningStrikeParticleVFXPrototype : public FEnvironmentParticlePrototype
{
    TSoftObjectPtr<UNiagaraSystem> LightningStrikeDefault;                            // 0x0008 (size: 0x30)
    FLightningStrikeVFXMaterialPrototype LightningStrikeMetal;                        // 0x0038 (size: 0x40)
    FLightningStrikeVFXMaterialPrototype LightningStrikeWater;                        // 0x0078 (size: 0x40)
    FLightningStrikeVFXMaterialPrototype LightningStrikeWood;                         // 0x00B8 (size: 0x40)

}; // Size: 0xF8

struct FLightningStrikeVFXMaterialPrototype
{
    TSoftObjectPtr<UNiagaraSystem> NiagaraSystem;                                     // 0x0000 (size: 0x30)
    TArray<EPhysicalMaterialType> PhysicalMaterialTypes;                              // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FLinearColorParameter : public FParameter
{
    class UCurveLinearColor* Curve;                                                   // 0x0058 (size: 0x8)

}; // Size: 0x60

struct FLoadingScreenBehaviourSettings
{
    float MinimumLoadingScreenDisplayTime;                                            // 0x0000 (size: 0x4)
    bool bAutoCompleteWhenLoadingComplete;                                            // 0x0004 (size: 0x1)
    bool bWaitForManualStop;                                                          // 0x0005 (size: 0x1)

}; // Size: 0x8

struct FLockStruct
{
    TArray<FItemLock> LockedByItems;                                                  // 0x0000 (size: 0x10)
    TMap<class FString, class FGlobalVariable> LockedByGlobalVariables;               // 0x0010 (size: 0x50)

}; // Size: 0x60

struct FLookAtAngleParams
{
    bool bAllowEyeRotate;                                                             // 0x0000 (size: 0x1)
    FRotator MaxAngleOfEyeRotate;                                                     // 0x0008 (size: 0x18)
    bool bAllowHeadRotate;                                                            // 0x0020 (size: 0x1)
    FRotator MaxAngleOfHeadRotate;                                                    // 0x0028 (size: 0x18)
    bool bAllowBodyRotate;                                                            // 0x0040 (size: 0x1)
    FRotator MaxAngleOfBodyRotate;                                                    // 0x0048 (size: 0x18)

}; // Size: 0x60

struct FLookAtMutantData
{
    double AimingYaw;                                                                 // 0x0000 (size: 0x8)
    double AimingPitch;                                                               // 0x0008 (size: 0x8)
    float MaxRotationAngleYaw;                                                        // 0x0010 (size: 0x4)
    float MaxRotationAnglePitch;                                                      // 0x0014 (size: 0x4)
    float RotationSpeed;                                                              // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FMagazineReloadAnimations
{
    TMap<class EAnimationReloadTypes, class FCharacterWeaponAnimations> MagazineReloadAnimations; // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FManagerTickFunction : public FTickFunction
{
}; // Size: 0x30

struct FMapTypeSettings
{
    bool bIsMapType;                                                                  // 0x0000 (size: 0x1)
    FZoomInterval ZoomInterval;                                                       // 0x0004 (size: 0x8)
    FZoomInterval TrackedZoomInterval;                                                // 0x000C (size: 0x8)
    int32 ZOrder;                                                                     // 0x0014 (size: 0x4)
    bool bSupportHubFolding;                                                          // 0x0018 (size: 0x1)

}; // Size: 0x1C

struct FMarkerIconData : public FTableRowBase
{
    TMap<class EMarkerState, class FMarkerStateIconsData> MarkerStateIcons;           // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FMarkerIconPair
{
    class UTexture2D* Active;                                                         // 0x0000 (size: 0x8)
    class UTexture2D* Innactive;                                                      // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FMarkerIconSettings
{
    class UTexture2D* Texture;                                                        // 0x0000 (size: 0x8)
    class UTexture2D* TextureTracked;                                                 // 0x0008 (size: 0x8)
    double RelativeScale;                                                             // 0x0010 (size: 0x8)
    FName ColorSID;                                                                   // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FMarkerStateIconsData
{
    FName ColorStyle;                                                                 // 0x0000 (size: 0x8)
    FMarkerIconPair Compass;                                                          // 0x0008 (size: 0x10)
    FMarkerIconPair Map;                                                              // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FMarkerTypeSettings
{
    FMarkerIconSettings IconSettings;                                                 // 0x0000 (size: 0x20)
    bool bTrackable;                                                                  // 0x0020 (size: 0x1)
    bool bHaveDiscoveredState;                                                        // 0x0021 (size: 0x1)
    FCompassTypeSettings CompassTypeSettings;                                         // 0x0024 (size: 0x8)
    FMapTypeSettings MapTypeSettings;                                                 // 0x002C (size: 0x1C)

}; // Size: 0x48

struct FMaterialScalarDrivingProperties
{
    class UMaterialParameterCollection* MaterialCollectionToUpdate;                   // 0x0000 (size: 0x8)
    FName ParameterName;                                                              // 0x0008 (size: 0x8)
    float InterpolationTime;                                                          // 0x0010 (size: 0x4)
    float TargetValue;                                                                // 0x0014 (size: 0x4)

}; // Size: 0x28

struct FMeleeHitArgs
{
}; // Size: 0x1

struct FMenuButtonData
{
    TSoftClassPtr<UMenuButtonBase> ButtonStyleClass;                                  // 0x0000 (size: 0x30)
    FString ButtonNameSID;                                                            // 0x0030 (size: 0x10)
    class UMenuButtonActionBase* ButtonAction;                                        // 0x0040 (size: 0x8)
    TArray<FShortcutData> ButtonShortcuts;                                            // 0x0048 (size: 0x10)
    TArray<class UMenuButtonStateDefiner*> ButtonDefiners;                            // 0x0058 (size: 0x10)

}; // Size: 0x68

struct FMenuHintSettings
{
    EMappingContext MappingContext;                                                   // 0x0000 (size: 0x4)
    int32 KeyboardAndMouseMappingIndex;                                               // 0x0004 (size: 0x4)
    int32 GamepadMappingIndex;                                                        // 0x0008 (size: 0x4)
    int32 TriggerIndex;                                                               // 0x000C (size: 0x4)

}; // Size: 0x10

struct FMeshCategory
{
    FName MeshCategory;                                                               // 0x0000 (size: 0x8)
    TArray<FMeshesData> MeshesData;                                                   // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMeshSoundPlacerDataRow : public FTableRowBase
{
    float RaycastSphereRadius;                                                        // 0x0008 (size: 0x4)
    float RubberBandDistanceAtWalk;                                                   // 0x000C (size: 0x4)
    float RubberBandDistanceAtRun;                                                    // 0x0010 (size: 0x4)
    float RubberBandDistanceAtSprint;                                                 // 0x0014 (size: 0x4)
    float RubberBandSpeed;                                                            // 0x0018 (size: 0x4)
    TSoftObjectPtr<UAkAudioEvent> StopAkEvent;                                        // 0x0020 (size: 0x30)
    TArray<FMeshCategory> MeshCategories;                                             // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FMeshesData
{
    TSoftObjectPtr<UStaticMesh> StaticMesh;                                           // 0x0000 (size: 0x30)
    TArray<FEventData> EventsData;                                                    // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FModelSpawnerParams
{
}; // Size: 0x10

struct FModifyVFXValue
{
    FName AttachmentName;                                                             // 0x0000 (size: 0x8)
    FName ValueToBeModified;                                                          // 0x0008 (size: 0x8)
    float ValueModifierPerSec;                                                        // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FModioLegendData
{
    class UModioLegendModel* BrowseShortcutsModel;                                    // 0x0000 (size: 0x8)
    class UModioLegendModel* DetailsShortcutsModel;                                   // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FMontageSection
{
    FString Value;                                                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMoveSettings
{
    float SpeedMapZoom;                                                               // 0x0000 (size: 0x4)
    float Speed;                                                                      // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FMovementParams
{
    float WalkSpeed;                                                                  // 0x0000 (size: 0x4)
    float RunSpeed;                                                                   // 0x0004 (size: 0x4)
    float CrouchSpeed;                                                                // 0x0008 (size: 0x4)
    float LowCrouchSpeed;                                                             // 0x000C (size: 0x4)
    float SprintSpeed;                                                                // 0x0010 (size: 0x4)
    float ClimbSpeedCoef;                                                             // 0x0014 (size: 0x4)
    float JumpSpeedCoef;                                                              // 0x0018 (size: 0x4)
    float LimpSpeedCoef;                                                              // 0x001C (size: 0x4)
    float WalkDiagonalBackCoef;                                                       // 0x0020 (size: 0x4)
    float RunDiagonalBackCoef;                                                        // 0x0024 (size: 0x4)
    float WalkBackCoef;                                                               // 0x0028 (size: 0x4)
    float RunBackCoef;                                                                // 0x002C (size: 0x4)
    float MoveBackCrouchCoef;                                                         // 0x0030 (size: 0x4)
    float MoveBackLowCrouchCoef;                                                      // 0x0034 (size: 0x4)
    float AirControlCoef;                                                             // 0x0038 (size: 0x4)
    float WalkTransitionCoef;                                                         // 0x003C (size: 0x4)
    float BaseTurnRate;                                                               // 0x0040 (size: 0x4)
    float BaseLookUpRate;                                                             // 0x0044 (size: 0x4)
    float MaxSlowdownValue;                                                           // 0x0048 (size: 0x4)
    float StaggerAngle;                                                               // 0x004C (size: 0x4)
    bool bCanDash;                                                                    // 0x0050 (size: 0x1)

}; // Size: 0x58

struct FMovementPlayRateStructure
{
    float ForwardValue;                                                               // 0x0000 (size: 0x4)
    float RightValue;                                                                 // 0x0004 (size: 0x4)
    float PlayRate;                                                                   // 0x0008 (size: 0x4)
    float LastForwardValue;                                                           // 0x000C (size: 0x4)
    float LastRightValue;                                                             // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FMovementRotationStructure
{
    float TurnTime;                                                                   // 0x0000 (size: 0x4)
    float TurnAngle;                                                                  // 0x0004 (size: 0x4)
    bool bEnableTurnInterp;                                                           // 0x0008 (size: 0x1)
    float TurnInterpSpeed;                                                            // 0x000C (size: 0x4)
    float TurnInterpThreshold;                                                        // 0x0010 (size: 0x4)

}; // Size: 0x28

struct FMultiClickInteractionData : public FInteractionData
{
    float ClickPercentageIncrease;                                                    // 0x0018 (size: 0x4)
    float PercentageDecrease;                                                         // 0x001C (size: 0x4)
    bool bDoNotDecrease;                                                              // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FNameDisplaySettings
{
    FMargin Margin;                                                                   // 0x0000 (size: 0x10)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;                            // 0x0010 (size: 0x1)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;                                // 0x0011 (size: 0x1)

}; // Size: 0x14

struct FNamesWidgetDisplaySettings
{
    FMargin Margin;                                                                   // 0x0000 (size: 0x10)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;                            // 0x0010 (size: 0x1)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;                                // 0x0011 (size: 0x1)
    FSlateChildSize SlateChildSize;                                                   // 0x0014 (size: 0x8)

}; // Size: 0x1C

struct FNavModifierBodyConfig
{
    FName PhysicalBodyName;                                                           // 0x0000 (size: 0x8)
    TArray<int32> ShapeIndexesToProcess;                                              // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FNavModifierHolder
{
}; // Size: 0x30

struct FNiagaraValueCopyFromTo
{
    FName AttachmentName;                                                             // 0x0000 (size: 0x8)
    FName CopyFrom;                                                                   // 0x0008 (size: 0x8)
    FName CopyTo;                                                                     // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FNoteFilterSettings
{
    bool bIsEnableFilter;                                                             // 0x0000 (size: 0x1)
    ENoteType Filter;                                                                 // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FNotificationModel
{
    FText Title;                                                                      // 0x0000 (size: 0x18)
    FText Description;                                                                // 0x0018 (size: 0x18)
    int32 Count;                                                                      // 0x0030 (size: 0x4)
    EHintType HintType;                                                               // 0x0034 (size: 0x1)
    bool bItemsRemoved;                                                               // 0x0035 (size: 0x1)
    EInteractionSystemNotificationsType Type;                                         // 0x0036 (size: 0x1)
    FVector Location;                                                                 // 0x0038 (size: 0x18)
    FString AudiologChainPrototypeID;                                                 // 0x0050 (size: 0x10)
    float AudiologDuration;                                                           // 0x0060 (size: 0x4)

}; // Size: 0x78

struct FObjPrototypeSID
{
    FPrototypeSID ObjSID;                                                             // 0x0000 (size: 0x40)

}; // Size: 0x40

struct FObjectPhaseSettings
{
}; // Size: 0x28

struct FOverlapVolumeEffect
{
    FPrototypeSID EffectPrototype;                                                    // 0x0008 (size: 0x40)
    uint8 AddOnBeginOverlap;                                                          // 0x0048 (size: 0x1)
    uint8 RemoveOnEndOverlap;                                                         // 0x0048 (size: 0x1)
    uint8 IgnorePlayer;                                                               // 0x0048 (size: 0x1)
    uint8 IgnoreAI;                                                                   // 0x0048 (size: 0x1)

}; // Size: 0x50

struct FOverridableProperty
{
}; // Size: 0x18

struct FPDAUsageAnimations
{
    class UAnimSequenceBase* EquipPDA;                                                // 0x0000 (size: 0x8)
    class UAnimSequenceBase* InteractWithPDA;                                         // 0x0008 (size: 0x8)
    class UAnimSequenceBase* UnequipPDA;                                              // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FParameter
{
    TMap<class EWeather, class FParameterTransition> TransitionOverrides;             // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FParameterTransition
{
    float StartOffset;                                                                // 0x0000 (size: 0x4)
    float Duration;                                                                   // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FParticleActorComponentSpawnPrototype : public FEnvironmentParticlePrototype
{
    FParticleActorSpawnPrototype ActorSpawnPrototype;                                 // 0x0008 (size: 0x30)
    FParticlePlayerComponentSpawnPrototype PlayerComponentSpawnPrototype;             // 0x0038 (size: 0x30)

}; // Size: 0x68

struct FParticleActorSpawnPrototype : public FEnvironmentParticlePrototype
{
    float BaseSpawnProbability;                                                       // 0x0008 (size: 0x4)
    float SpawnProbabilityIncrement;                                                  // 0x000C (size: 0x4)
    float SpawnProbabilityCheckTime;                                                  // 0x0010 (size: 0x4)
    float MinSpawnDistance;                                                           // 0x0014 (size: 0x4)
    float MaxSpawnDistance;                                                           // 0x0018 (size: 0x4)
    float SurfaceHeightOffset;                                                        // 0x001C (size: 0x4)
    float LocationCheckTime;                                                          // 0x0020 (size: 0x4)
    int32 MaxParticleCount;                                                           // 0x0024 (size: 0x4)
    bool bSpawnInPlayerViewport;                                                      // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FParticleBiomePrototype : public FParticleConditionPrototype
{
    TArray<FString> AllowedBiomeNames;                                                // 0x0008 (size: 0x10)
    TArray<FString> CountableBiomeNames;                                              // 0x0018 (size: 0x10)
    float BiomeCheckRadius;                                                           // 0x0028 (size: 0x4)
    float MinBiomeCompatabilityPercent;                                               // 0x002C (size: 0x4)

}; // Size: 0x38

struct FParticleConditionPrototype : public FEnvironmentParticlePrototype
{
}; // Size: 0x8

struct FParticleDaytimePrototype : public FParticleConditionPrototype
{
    float SpawnTime;                                                                  // 0x0008 (size: 0x4)
    float DespawnTime;                                                                // 0x000C (size: 0x4)

}; // Size: 0x10

struct FParticleDistancePrototype : public FParticleConditionPrototype
{
    float MaxDistance;                                                                // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FParticleExplosionPrototype : public FEnvironmentParticlePrototype
{
    float ExplosionDistance;                                                          // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FParticleGunshotPrototype : public FEnvironmentParticlePrototype
{
    float GunshotDistance;                                                            // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FParticleIndoorSpawnPrototype : public FEnvironmentParticlePrototype
{
    TArray<EAudioRoomPresetBase> IgnoredAudioRoomPresets;                             // 0x0008 (size: 0x10)
    TArray<EAudioRoomPresetBandwidth> ForbiddenBandwidthTypes;                        // 0x0018 (size: 0x10)
    float MinDistanceToAudioVolume;                                                   // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FParticleLairPrototype : public FParticleConditionPrototype
{
    float LairCheckDistance;                                                          // 0x0008 (size: 0x4)
    TArray<EAgentType> AllowedNPCTypes;                                               // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FParticlePlayerComponentSpawnPrototype : public FEnvironmentParticlePrototype
{
    float BaseSpawnProbability;                                                       // 0x0008 (size: 0x4)
    float SpawnProbabilityIncrement;                                                  // 0x000C (size: 0x4)
    float SpawnProbabilityCheckTime;                                                  // 0x0010 (size: 0x4)
    float LocationCheckTime;                                                          // 0x0014 (size: 0x4)
    FVector PlayerHeadOffset;                                                         // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FParticleRainIntensityPrototype : public FParticleConditionPrototype
{
    FFloatInterval AllowedRainIntensityInterval;                                      // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FParticleWeatherPrototype : public FParticleConditionPrototype
{
    TArray<EWeather> AllowedWeatherTypes;                                             // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FParticleWindIntensityPrototype : public FParticleConditionPrototype
{
    FFloatInterval AllowedWindIntensityInterval;                                      // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FPhysicalManagerCollection : public FBaseTickAggregationCollection
{
}; // Size: 0x78

struct FPhysicsHitArgs
{
    class AActor* StimulusActor;                                                      // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FPhysicsObjectCollection : public FBaseTickAggregationCollection
{
}; // Size: 0x98

struct FPlayAnimationOnAttachedItemData
{
    FName AttachmentName;                                                             // 0x0000 (size: 0x8)
    class UAnimationAsset* AnimationAsset;                                            // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FPlayerAutoCoverAnimations
{
    class UAnimSequence* StandInCoverPose;                                            // 0x0000 (size: 0x8)
    class UAnimSequence* ApproachCover;                                               // 0x0008 (size: 0x8)
    class UAnimSequence* ApproachCoverLeft;                                           // 0x0010 (size: 0x8)
    class UAnimSequence* ApproachCoverRight;                                          // 0x0018 (size: 0x8)
    class UAnimSequence* ExitCover;                                                   // 0x0020 (size: 0x8)
    class UAnimSequence* CanLeanLeftPose;                                             // 0x0028 (size: 0x8)
    class UAnimSequence* CanLeanRightPose;                                            // 0x0030 (size: 0x8)
    class UAnimSequence* AimLeftPose;                                                 // 0x0038 (size: 0x8)
    class UAnimSequence* AimRightPose;                                                // 0x0040 (size: 0x8)
    class UBlendSpace* AimLeftPoseBlendSpace;                                         // 0x0048 (size: 0x8)
    class UBlendSpace* AimRightPoseBlendSpace;                                        // 0x0050 (size: 0x8)
    class UAnimSequence* AimUpPose;                                                   // 0x0058 (size: 0x8)
    class UAnimSequence* AimlessShootLeftPose;                                        // 0x0060 (size: 0x8)
    class UAnimSequence* AimlessShootRightPose;                                       // 0x0068 (size: 0x8)
    class UAnimSequence* AimlessShootUpPose;                                          // 0x0070 (size: 0x8)

}; // Size: 0x78

struct FPlayerDeathAnimArray
{
    TArray<class UAnimMontage*> Animations;                                           // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FPlayerDeathAnimations
{
    TMap<class EAnimDirections, class FPlayerDeathAnimArray> BulletDeathAnimations;   // 0x0000 (size: 0x50)
    TMap<class EAnimDirections, class FPlayerDeathAnimArray> ExplosionDeathAnimations; // 0x0050 (size: 0x50)
    TMap<class EPlayerAnimDamageSource, class FPlayerDeathAnimArray> DeathAnimations; // 0x00A0 (size: 0x50)

}; // Size: 0xF0

struct FPlayerDialogAnimations
{
    TMap<class EDialogAnimationType, class UAnimSequenceBase*> DialogAnimations;      // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FPlayerExternalAnimations
{
    FPlayerLocomotionAnimations UpperBody;                                            // 0x0000 (size: 0x128)
    FPlayerLocomotionAnimations LowerBody;                                            // 0x0128 (size: 0x128)
    class UAnimSequence* LookVertical;                                                // 0x0250 (size: 0x8)
    FPlayerLeansAnimations Leans;                                                     // 0x0258 (size: 0x20)

}; // Size: 0x278

struct FPlayerFirearmInternalAnimations
{
    FCharacterWeaponAnimations ShootingInHip;                                         // 0x0000 (size: 0x20)
    FCharacterWeaponAnimations ShootingInAim;                                         // 0x0020 (size: 0x20)
    TMap<class EAnimationShootingTypes, class FCharacterWeaponAnimations> Shooting;   // 0x0040 (size: 0x50)
    TMap<class FName, class FCharacterWeaponAnimations> ShootingWithScope;            // 0x0090 (size: 0x50)
    TMap<class FString, class FAttachDetachAnimations> AttachingBySID;                // 0x00E0 (size: 0x50)
    TArray<FCharacterWeaponAnimations> Jamming;                                       // 0x0130 (size: 0x10)
    TMap<class FName, class FCharacterWeaponAnimations> UniqueAttachJamming;          // 0x0140 (size: 0x50)
    TMap<class FName, class FMagazineReloadAnimations> Reloading;                     // 0x0190 (size: 0x50)
    TMap<class FName, class FMagazineReloadAnimations> OneHandReloading;              // 0x01E0 (size: 0x50)
    FCharacterWeaponAnimations MeleeAnimation;                                        // 0x0230 (size: 0x20)
    TMap<class EAnimSwitchFireTypeMode, class FChangeFireTypeAnimations> SwitchFireType; // 0x0250 (size: 0x50)
    class UAnimMontage* PickUpItem;                                                   // 0x02A0 (size: 0x8)
    class UAnimSequence* CharacterHipIdleSequence;                                    // 0x02A8 (size: 0x8)
    class UAnimSequence* WeaponHipIdleSequence;                                       // 0x02B0 (size: 0x8)

}; // Size: 0x2B8

struct FPlayerGuitarAnimations
{
    class UAnimMontage* ChordTransition;                                              // 0x0000 (size: 0x8)
    class UAnimSequence* GuitarItemEnterAnimation;                                    // 0x0008 (size: 0x8)
    class UAnimSequence* GuitarItemExitAnimation;                                     // 0x0010 (size: 0x8)
    TMap<class EAnimGuitarState, class UAkAudioEvent*> StrumUpSounds;                 // 0x0018 (size: 0x50)
    TMap<class EAnimGuitarState, class UAkAudioEvent*> StrumDownSounds;               // 0x0068 (size: 0x50)
    TMap<class EAnimGuitarState, class UAkAudioEvent*> GlissSounds;                   // 0x00B8 (size: 0x50)

}; // Size: 0x108

struct FPlayerInternalAnimations
{
    class UAnimMontage* PickingUpItem;                                                // 0x0000 (size: 0x8)
    class UAnimMontage* JumpLand;                                                     // 0x0008 (size: 0x8)
    class UAnimMontage* JumpLandLowCrouch;                                            // 0x0010 (size: 0x8)
    class UAnimMontage* FailedLanding;                                                // 0x0018 (size: 0x8)
    class UAnimMontage* ToggleFlashlightStand;                                        // 0x0020 (size: 0x8)
    class UAnimMontage* ToggleFlashlightLowCrouch;                                    // 0x0028 (size: 0x8)
    class UCurveFloat* EnterRagdollCurve;                                             // 0x0030 (size: 0x8)
    FEquipUnequipAnimations EquipUnequip;                                             // 0x0038 (size: 0x18)
    FEquipUnequipAnimations RemoveReturnLeftHand;                                     // 0x0050 (size: 0x18)
    TMap<class EAgentType, class UAnimMontage*> DragWeaponByNPC;                      // 0x0068 (size: 0x50)

}; // Size: 0xB8

struct FPlayerKnifeInternalAnimations
{
    FCharacterWeaponAnimations Hit;                                                   // 0x0000 (size: 0x20)
    FCharacterWeaponAnimations OneHandHit;                                            // 0x0020 (size: 0x20)
    TMap<class EAnimStealthKillPose, class FCharacterWeaponAnimations> StealthKills;  // 0x0040 (size: 0x50)
    FCharacterWeaponAnimations PlayingWithKnife;                                      // 0x0090 (size: 0x20)

}; // Size: 0xB0

struct FPlayerLeansAnimations
{
    class UAnimSequence* LeanLeftIn;                                                  // 0x0000 (size: 0x8)
    class UAnimSequence* LeanLeftOut;                                                 // 0x0008 (size: 0x8)
    class UAnimSequence* LeanRightIn;                                                 // 0x0010 (size: 0x8)
    class UAnimSequence* LeanRightOut;                                                // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FPlayerLocomotionAnimations
{
    class UAnimSequence* StandIdleInHip;                                              // 0x0000 (size: 0x8)
    class UAnimSequence* CrouchIdleInHip;                                             // 0x0008 (size: 0x8)
    class UAnimSequence* LowCrouchIdleInHip;                                          // 0x0010 (size: 0x8)
    FTransitionAnimations StandToCrouch;                                              // 0x0018 (size: 0x10)
    FTransitionAnimations CrouchToLowCrouch;                                          // 0x0028 (size: 0x10)
    FTransitionAnimations StandToLowCrouch;                                           // 0x0038 (size: 0x10)
    class UBlendSpace* Sprint;                                                        // 0x0048 (size: 0x8)
    class UBlendSpace* SprintWithDetector;                                            // 0x0050 (size: 0x8)
    class UBlendSpace* Run;                                                           // 0x0058 (size: 0x8)
    class UBlendSpace* RunWithDetector;                                               // 0x0060 (size: 0x8)
    class UBlendSpace* RunCombat;                                                     // 0x0068 (size: 0x8)
    class UBlendSpace* Walk;                                                          // 0x0070 (size: 0x8)
    class UBlendSpace* WalkWithDetector;                                              // 0x0078 (size: 0x8)
    class UBlendSpace* WalkAim;                                                       // 0x0080 (size: 0x8)
    class UBlendSpace* WalkLimp;                                                      // 0x0088 (size: 0x8)
    class UBlendSpace* Crouch;                                                        // 0x0090 (size: 0x8)
    class UBlendSpace* CrouchAim;                                                     // 0x0098 (size: 0x8)
    class UBlendSpace* LowCrouch;                                                     // 0x00A0 (size: 0x8)
    class UBlendSpace* LowCrouchAim;                                                  // 0x00A8 (size: 0x8)
    class UBlendSpace* WalkStart;                                                     // 0x00B0 (size: 0x8)
    class UBlendSpace* WalkStop;                                                      // 0x00B8 (size: 0x8)
    class UBlendSpace* RunStart;                                                      // 0x00C0 (size: 0x8)
    class UBlendSpace* RunStop;                                                       // 0x00C8 (size: 0x8)
    class UBlendSpace* RunToSprint;                                                   // 0x00D0 (size: 0x8)
    class UBlendSpace* SprintStop;                                                    // 0x00D8 (size: 0x8)
    class UAnimSequence* SprintToRun;                                                 // 0x00E0 (size: 0x8)
    class UAnimSequence* StandTurnInPlace;                                            // 0x00E8 (size: 0x8)
    class UAnimSequence* CrouchTurnInPlace;                                           // 0x00F0 (size: 0x8)
    class UAnimSequence* JumpStart;                                                   // 0x00F8 (size: 0x8)
    class UAnimSequence* JumpLoop;                                                    // 0x0100 (size: 0x8)
    class UAnimSequence* JumpEnd;                                                     // 0x0108 (size: 0x8)
    class UAnimSequence* JumpStartLowCrouch;                                          // 0x0110 (size: 0x8)
    class UAnimSequence* JumpLoopLowCrouch;                                           // 0x0118 (size: 0x8)
    class UAnimSequence* JumpEndLowCrouch;                                            // 0x0120 (size: 0x8)

}; // Size: 0x128

struct FPlayerThrowableItemInternalAnimations
{
    TMap<class EAnimationThrowingType, class FCharacterWeaponAnimations> Throw;       // 0x0000 (size: 0x50)
    TMap<class EAnimationThrowingType, class FCharacterWeaponAnimations> CancelThrow; // 0x0050 (size: 0x50)
    class UCurveFloat* StrongThrowForceCurve;                                         // 0x00A0 (size: 0x8)
    class UCurveFloat* LightThrowForceCurve;                                          // 0x00A8 (size: 0x8)
    class UCurveVector* StrongThrowDirectionOffsetCurve;                              // 0x00B0 (size: 0x8)
    class UCurveVector* LightThrowDirectionOffsetCurve;                               // 0x00B8 (size: 0x8)

}; // Size: 0xC0

struct FPlayerWeaponAnimations
{
    class UPlayerAnimCollection* AnimCollection;                                      // 0x0000 (size: 0x8)
    TMap<class FName, class UPlayerFirearmAnimCollection*> AttachWeaponAnimCollections; // 0x0008 (size: 0x50)
    UClass* PlayerAnimBlueprint;                                                      // 0x0058 (size: 0x8)
    FCharacterWeaponAnimations EquipWeapon;                                           // 0x0060 (size: 0x20)
    FCharacterWeaponAnimations UnequipWeapon;                                         // 0x0080 (size: 0x20)
    class UAnimMontage* AttachSelectorUnequip;                                        // 0x00A0 (size: 0x8)
    FEquipUnequipAnimations RemoveReturnLeftHand;                                     // 0x00A8 (size: 0x18)
    FAnimWeaponSwingContainer WeaponSwingConfigInHip;                                 // 0x00C0 (size: 0x38)
    FAnimWeaponSwingContainer WeaponSwingConfigInAim;                                 // 0x00F8 (size: 0x38)
    FWeaponInertiaContainer StopHipSwingInertia;                                      // 0x0130 (size: 0x20)
    FWeaponInertiaContainer StopAimSwingInertia;                                      // 0x0150 (size: 0x20)
    FWeaponInertiaContainer SprintStopInertia;                                        // 0x0170 (size: 0x20)
    FWeaponPushbackContainer HipPushback;                                             // 0x0190 (size: 0x38)
    TMap<class FName, class FWeaponPushbackContainer> AimPushback;                    // 0x01C8 (size: 0x50)
    FPlayerWeaponIdlingAnimations InactiveLongIdles;                                  // 0x0218 (size: 0x18)

}; // Size: 0x230

struct FPlayerWeaponIdlingAnimations
{
    float TimeToLaunchInactiveIdle;                                                   // 0x0000 (size: 0x4)
    TArray<FCharacterItemWeightedAnimations> Idles;                                   // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FPoseSearchForceRunInsteadSprintConfigs
{
    float DistanceFromPathStart;                                                      // 0x0000 (size: 0x4)
    float DistanceToPathEnd;                                                          // 0x0004 (size: 0x4)
    float DistanceToNextPortal;                                                       // 0x0008 (size: 0x4)
    float PortalRotationAngleThreshold;                                               // 0x000C (size: 0x4)

}; // Size: 0x10

struct FPoseSearchLocomotionAnimCollectionData
{
    class UPoseSearchSearchableAsset* Searchable;                                     // 0x0000 (size: 0x8)
    class UPoseSearchSearchableAsset* SearchableRelaxState;                           // 0x0008 (size: 0x8)
    class UPoseSearchLocomotionDescriptor* Descriptor;                                // 0x0010 (size: 0x8)
    class UPoseSearchLocomotionDescriptor* DescriptorRelaxState;                      // 0x0018 (size: 0x8)
    FPoseSearchMovementTagConfigs MovementTagConfigs;                                 // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FPoseSearchMovementTagConfigs
{
    FPoseSearchForceRunInsteadSprintConfigs ForceRunInsteadSprintConfigs;             // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FPossibleInhabitantFaction
{
    FFactionSelector Faction;                                                         // 0x0000 (size: 0x60)
    FSpawnSettingsPerPlayerRank SpawnSettingsPerPlayerRanks;                          // 0x0060 (size: 0xA0)

}; // Size: 0x100

struct FPossibleInhabitantFactionsOverridableProperty : public FOverridableProperty
{
    TArray<FPossibleInhabitantFaction> DefaultValue;                                  // 0x0018 (size: 0x10)
    TArray<FPossibleInhabitantFaction> CurrentValue;                                  // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FPostProcessSimplifiedSettings
{
    FVector4 ColorSaturation;                                                         // 0x0000 (size: 0x20)
    FVector4 ColorContrast;                                                           // 0x0020 (size: 0x20)
    FVector4 ColorGamma;                                                              // 0x0040 (size: 0x20)
    uint8 bOverride_ColorSaturation;                                                  // 0x0060 (size: 0x1)
    uint8 bOverride_ColorContrast;                                                    // 0x0060 (size: 0x1)
    uint8 bOverride_ColorGamma;                                                       // 0x0060 (size: 0x1)
    float FilmToe;                                                                    // 0x0064 (size: 0x4)
    uint8 bOverride_FilmToe;                                                          // 0x0068 (size: 0x1)
    FWeightedBlendables WeightedBlendables;                                           // 0x0070 (size: 0x10)

}; // Size: 0x80

struct FPostProcessState
{
    FFloatParameter DiffuseColorBoost;                                                // 0x0000 (size: 0x60)
    FFloatParameter SkylightLeaking;                                                  // 0x0060 (size: 0x60)

}; // Size: 0xC0

struct FProcessorsArray
{
    TArray<class UForceFeedbackProcessorBase*> ListOfProcessors;                      // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FProgressMaterialData
{
    FSlateBrush ProgressMaterialBrush;                                                // 0x0000 (size: 0xF0)
    FName MaterialParameterName;                                                      // 0x00F0 (size: 0x8)

}; // Size: 0x100

struct FProjectileCollection : public FBaseTickAggregationCollection
{
    TArray<class AProjectile*> Projectiles;                                           // 0x0068 (size: 0x10)

}; // Size: 0x78

struct FProjectileHitArgs
{
}; // Size: 0x1

struct FProjectileImpactFXData
{
    class AAgent* HitAgent;                                                           // 0x0000 (size: 0x8)

}; // Size: 0x228

struct FPrototypeFeedbackArgs : public FForceFeedbackArgs
{
    FString PrototypeSID;                                                             // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FPrototypeSID
{
    FString Value;                                                                    // 0x0000 (size: 0x10)
    EPrototypeClass PrototypeClass;                                                   // 0x0020 (size: 0x4)
    FName Subtype;                                                                    // 0x0024 (size: 0x8)

}; // Size: 0x40

struct FPsySpawnStruct
{
    uint32 GameGraphMinComponentVerticesCount;                                        // 0x002C (size: 0x4)
    TSoftClassPtr<AAgent> CurrentPsyPrototypeClass;                                   // 0x0030 (size: 0x30)

}; // Size: 0x130

struct FQuestNodeCollection : public FBaseTickAggregationCollection
{
}; // Size: 0x98

struct FQuestStageSelectSettings
{
    FLinearColor CollorMein;                                                          // 0x0000 (size: 0x10)
    FLinearColor CollorSecondary;                                                     // 0x0010 (size: 0x10)
    class UTexture2D* Icon;                                                           // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FQuestStatusSettings
{
    FLinearColor Collor;                                                              // 0x0000 (size: 0x10)
    FString LocalisationSid;                                                          // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FRainState
{
    FFloatParameter Intensity;                                                        // 0x0000 (size: 0x60)
    FFloatParameter WeatherLightningSpawnRate;                                        // 0x0060 (size: 0x60)
    FFloatParameter Wetness;                                                          // 0x00C0 (size: 0x60)
    FFloatParameter Drying;                                                           // 0x0120 (size: 0x60)
    FFloatParameter MaxWetnessValue;                                                  // 0x0180 (size: 0x60)
    FLinearColorParameter LightningColor;                                             // 0x01E0 (size: 0x60)

}; // Size: 0x240

struct FRazerChromaDamageSettings
{
    FRazerChromaEvent Event;                                                          // 0x0000 (size: 0x18)
    float DamageThreshold;                                                            // 0x0018 (size: 0x4)
    TArray<EDamageSource> DamageSources;                                              // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRazerChromaEvent
{
    FString AnimationName;                                                            // 0x0000 (size: 0x10)
    int32 Priority;                                                                   // 0x0010 (size: 0x4)
    bool bLoopAnimation;                                                              // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FRazerChromaVitalsSettings
{
    FRazerChromaEvent Event;                                                          // 0x0000 (size: 0x18)
    float Threshold;                                                                  // 0x0018 (size: 0x4)
    bool bEnableIfHigher;                                                             // 0x001C (size: 0x1)

}; // Size: 0x20

struct FReactionDesc
{
    ERelationLevel RelationToProvoker;                                                // 0x0000 (size: 0x1)
    ERelationLevel RelationToRequester;                                               // 0x0001 (size: 0x1)
    int32 ReactionValue;                                                              // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FRebuildData
{
    FName SocketName;                                                                 // 0x0000 (size: 0x8)
    FName ParentSocketName;                                                           // 0x0008 (size: 0x8)
    bool bIsFlipped;                                                                  // 0x0010 (size: 0x1)
    class UStaticMesh* Mesh;                                                          // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FRecoilKeys
{
    float X;                                                                          // 0x0000 (size: 0x4)
    float Y;                                                                          // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FRelationLevelRange
{
    int32 Start;                                                                      // 0x0000 (size: 0x4)
    int32 End;                                                                        // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FRelationRequestDesc
{
    TArray<FReactionDesc> Reactions;                                                  // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRengeSettings
{
    int32 Min;                                                                        // 0x0000 (size: 0x4)
    int32 Max;                                                                        // 0x0004 (size: 0x4)
    FLinearColor WarningColor;                                                        // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FRestrictionsMap
{
    bool bIsFullBodyRotationBlocked;                                                  // 0x0000 (size: 0x1)
    float UpperBodyHorizontalLimit;                                                   // 0x0004 (size: 0x4)
    float UpperBodyVerticalLimit;                                                     // 0x0008 (size: 0x4)
    bool bRotateFullBodyDespiteUpperBody;                                             // 0x000C (size: 0x1)
    float InteractLimit;                                                              // 0x0010 (size: 0x4)
    bool bOnlyHeadRotateOnUpperBody;                                                  // 0x0014 (size: 0x1)
    float bFullBodyRotateSatisfyAngle;                                                // 0x0018 (size: 0x4)
    FRotator PoseRotationOffset;                                                      // 0x0020 (size: 0x18)

}; // Size: 0x38

struct FRichWidgetRow : public FTableRowBase
{
    TSubclassOf<class UUserWidget> WidgetToDisplay;                                   // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FRightClickMenuData
{
    class UItemSlotBaseWidget* ClickedItemSlot;                                       // 0x0008 (size: 0x8)

}; // Size: 0x6D8

struct FRightClickMenuItemData
{
}; // Size: 0x40

struct FRoleDisplaySettings
{
    FMargin Margin;                                                                   // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRotationBodyPart
{
    ERotationPartType BodyType;                                                       // 0x0000 (size: 0x1)
    float Rotation;                                                                   // 0x0004 (size: 0x4)
    float FinalRotation;                                                              // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FScarPhaseData
{
    TArray<FEffectPrototypeSID> EffectsToApply;                                       // 0x0000 (size: 0x10)
    TArray<FEffectPrototypeSID> EffectsToRemove;                                      // 0x0010 (size: 0x10)
    TArray<FAbilityPrototypeSID> AbilitiesToGive;                                     // 0x0020 (size: 0x10)
    float PhaseHPThreshold;                                                           // 0x0050 (size: 0x4)

}; // Size: 0x58

struct FSectionTitleDisplaySettings
{
    FMargin Margin;                                                                   // 0x0000 (size: 0x10)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;                            // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FShootingPatternKey
{
}; // Size: 0xC

struct FShortcutData
{
    bool bShowLegend;                                                                 // 0x0000 (size: 0x1)
    FHintStyleSettings LegendButtonStyle;                                             // 0x0008 (size: 0x28)
    FMenuHintSettings MenuHintSettings;                                               // 0x0030 (size: 0x10)
    FString InputAction;                                                              // 0x0040 (size: 0x10)
    class UMenuButtonActionBase* ExecuteAction;                                       // 0x0050 (size: 0x8)
    ETriggerEvent InputEventType;                                                     // 0x0058 (size: 0x1)

}; // Size: 0x60

struct FSignalToReceive
{
    FGSCComponentReference SenderComponentRef;                                        // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FSignalToSend
{
    FGSCComponentReference ReceiverComponentRef;                                      // 0x0000 (size: 0x50)
    FGuid ReceiverGuid;                                                               // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FSimpleMovingAnimations
{
    class UAnimSequence* Forward;                                                     // 0x0000 (size: 0x8)
    class UAnimSequence* Backward;                                                    // 0x0008 (size: 0x8)
    class UAnimSequence* Left;                                                        // 0x0010 (size: 0x8)
    class UAnimSequence* Right;                                                       // 0x0018 (size: 0x8)
    class UAnimSequence* ForwardLeft;                                                 // 0x0020 (size: 0x8)
    class UAnimSequence* ForwardRight;                                                // 0x0028 (size: 0x8)
    class UAnimSequence* BackwardLeft;                                                // 0x0030 (size: 0x8)
    class UAnimSequence* BackwardRight;                                               // 0x0038 (size: 0x8)

}; // Size: 0x40

struct FSingleClickInteractionData : public FInteractionData
{
}; // Size: 0x18

struct FSkyAtmosphereBaseState
{
    FFloatParameter MultiScattering;                                                  // 0x0000 (size: 0x60)
    FFloatParameter AbsorptionScale;                                                  // 0x0060 (size: 0x60)
    FLinearColorParameter Absorption;                                                 // 0x00C0 (size: 0x60)
    FLinearColorParameter SkyLuminanceFactor;                                         // 0x0120 (size: 0x60)
    FFloatParameter AerialPerspectiveDistanceScale;                                   // 0x0180 (size: 0x60)
    FFloatParameter HeightFogContribution;                                            // 0x01E0 (size: 0x60)
    FFloatParameter ColorPower;                                                       // 0x0240 (size: 0x60)

}; // Size: 0x2A0

struct FSkyAtmosphereRayleighMieState
{
    FFloatParameter RayleighScatteringScale;                                          // 0x0000 (size: 0x60)
    FLinearColorParameter RayleighScattering;                                         // 0x0060 (size: 0x60)
    FFloatParameter RayleighExponentialDistribution;                                  // 0x00C0 (size: 0x60)
    FFloatParameter MieScatteringScale;                                               // 0x0120 (size: 0x60)
    FLinearColorParameter MieScattering;                                              // 0x0180 (size: 0x60)
    FFloatParameter MieScatteringAbsorption;                                          // 0x01E0 (size: 0x60)
    FLinearColorParameter MieAbsorption;                                              // 0x0240 (size: 0x60)
    FFloatParameter MieAnisotropy;                                                    // 0x02A0 (size: 0x60)
    FFloatParameter MieExponentialDistribution;                                       // 0x0300 (size: 0x60)

}; // Size: 0x360

struct FSkyAtmosphereState
{
    FSkyAtmosphereBaseState Base;                                                     // 0x0000 (size: 0x2A0)
    FSkyAtmosphereRayleighMieState RayleighMie;                                       // 0x02A0 (size: 0x360)

}; // Size: 0x600

struct FSkyLightState
{
    FFloatParameter Intensity;                                                        // 0x0000 (size: 0x60)
    FLinearColorParameter SkyLightColor;                                              // 0x0060 (size: 0x60)

}; // Size: 0xC0

struct FSkySphereState
{
    FFloatParameter AtmosphereBrightness;                                             // 0x0000 (size: 0x60)
    FFloatParameter EmissiveBrightness;                                               // 0x0060 (size: 0x60)
    FLinearColorParameter ZenithColor;                                                // 0x00C0 (size: 0x60)
    FLinearColorParameter HorizonColor;                                               // 0x0120 (size: 0x60)

}; // Size: 0x180

struct FSlotFilterSettings
{
    FName FilterIconStyleIdEnable;                                                    // 0x0000 (size: 0x8)
    FName FilterIconStyleIdDisable;                                                   // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FSlotScaleSettings
{
    FMargin Padding;                                                                  // 0x0000 (size: 0x10)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;                            // 0x0010 (size: 0x1)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;                                // 0x0011 (size: 0x1)

}; // Size: 0x14

struct FSmartCoverActionSide
{
    EAvailableCoverActionsSide Side;                                                  // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FSmartCoverActionWithSide
{
    EAvailableCoverActionsSide Side;                                                  // 0x0000 (size: 0x1)
    class UAnimMontage* Montage;                                                      // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FSmartCoverAnimCollectionData
{
    TMap<class EWeaponType, class FSmartCoverWeaponTypeData> WeaponTypeAnimationsData; // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FSmartCoverAnimationMainLoopData
{
    ESmartCoverActionType ActionType;                                                 // 0x0000 (size: 0x1)
    ELookAtOwnerState LookAtOwnerState;                                               // 0x0001 (size: 0x1)
    EAvailableCoverActionsSide TargetActionSide;                                      // 0x0002 (size: 0x1)
    TArray<FSmartCoverActionWithSide> LookFromCoverMontages;                          // 0x0008 (size: 0x10)
    TArray<FSmartCoverActionWithSide> HideBehindCoverMontages;                        // 0x0018 (size: 0x10)
    class UAnimMontage* IdleMontage;                                                  // 0x0028 (size: 0x8)
    class UAnimMontage* ThrowGrenadeMontage;                                          // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FSmartCoverEnterTypes
{
    EAvailableCoverActionsSide Side;                                                  // 0x0000 (size: 0x1)
    EAvailableCoverEnterTypes EnterType;                                              // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FSmartCoverExitTypes
{
    EAvailableCoverActionsSide Side;                                                  // 0x0000 (size: 0x1)
    EAvailableCoverExitTypes ExitType;                                                // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FSmartCoverPerCoverTypeData
{
    TArray<FSmartCoverEnterTypes> EnterData;                                          // 0x0000 (size: 0x10)
    TArray<FSmartCoverExitTypes> ExitData;                                            // 0x0010 (size: 0x10)
    TArray<FSmartCoverActionSide> IdlesData;                                          // 0x0020 (size: 0x10)
    TArray<FSmartCoverTransitionSides> TransitionsData;                               // 0x0030 (size: 0x10)
    class UAnimMontage* TransitionMontage;                                            // 0x0040 (size: 0x8)
    TArray<FSmartCoverAnimationMainLoopData> ActionAnimationsData;                    // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FSmartCoverTransitionSides
{
    EAvailableCoverActionsSide Side;                                                  // 0x0000 (size: 0x1)
    EAvailableCoverActionsSide ResultSide;                                            // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FSmartCoverWeaponTypeData
{
    TMap<class ESmartCoverType, class FSmartCoverPerCoverTypeData> AnimationsData;    // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FSnapshotMapping
{
    FName SourceNodeTag;                                                              // 0x0000 (size: 0x8)
    FName TargetNodeTag;                                                              // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FSoftAnimWeighted
{
    float ChanceToPlay;                                                               // 0x0000 (size: 0x4)
    TSoftObjectPtr<UAnimSequenceBase> Animation;                                      // 0x0008 (size: 0x30)

}; // Size: 0x38

struct FSpawnNiagaraSystemAtLocation
{
    FName AttachmentName;                                                             // 0x0000 (size: 0x8)
    ESpawnNiagaraAtLocation SpawnNiagaraAtLocation;                                   // 0x0008 (size: 0x4)
    class UNiagaraSystem* NiagaraAsset;                                               // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FSpawnPhantomParams
{
}; // Size: 0x58

struct FSpawnSettingsPerArchetype
{
    FPrototypeSID PrototypeSID;                                                       // 0x0000 (size: 0x40)
    int32 MinQuantity;                                                                // 0x0040 (size: 0x4)
    float SpawnWeight;                                                                // 0x0044 (size: 0x4)

}; // Size: 0x48

struct FSpawnSettingsPerPlayerRank
{
    ERank PlayerRank;                                                                 // 0x0000 (size: 0x1)
    int32 MaxSpawnQuantity;                                                           // 0x0004 (size: 0x4)
    float InitialSpawnQuantityPercent;                                                // 0x0008 (size: 0x4)
    float InitialSpawnQuantityRespawnTimeSeconds;                                     // 0x000C (size: 0x4)
    float MaxSpawnQuantityRespawnTimeSeconds;                                         // 0x0010 (size: 0x4)
    float WipeRespawnTimeoutSeconds;                                                  // 0x0014 (size: 0x4)
    TArray<FSpawnSettingsPerArchetype> SpawnSettingsPerArchetypes;                    // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FSpawnedItem
{
    FString PrototypeSID;                                                             // 0x0000 (size: 0x10)
    float Weight;                                                                     // 0x0010 (size: 0x4)
    float MinDurability;                                                              // 0x0014 (size: 0x4)
    float MaxDurability;                                                              // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FSplinePointMeshData
{
    class UStaticMesh* StrandStaticMesh;                                              // 0x0000 (size: 0x8)
    class UStaticMesh* SeparatorStaticMesh;                                           // 0x0008 (size: 0x8)
    class UPrefabAsset* PrefabStrandMesh;                                             // 0x0010 (size: 0x8)
    class UPrefabAsset* PrefabSeparatorMesh;                                          // 0x0018 (size: 0x8)

}; // Size: 0x68

struct FStashPrototypeSID : public FPrototypeSID
{
}; // Size: 0x40

struct FStatStates
{
    float Weak;                                                                       // 0x0000 (size: 0x4)
    float Medium;                                                                     // 0x0004 (size: 0x4)
    float Strong;                                                                     // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FStaticEnvironmentParticleDataRow : public FTableRowBase
{
    EStaticParticleType ParticleType;                                                 // 0x0008 (size: 0x1)
    TSet<TSubclassOf<UNiagaraParameterProvider>> Providers;                           // 0x0010 (size: 0x50)
    FParticleIndoorSpawnPrototype IndoorSpawnPrototype;                               // 0x0060 (size: 0x30)
    FParticleWeatherPrototype WeatherTypePrototype;                                   // 0x0090 (size: 0x18)
    FParticleLairPrototype LairPrototype;                                             // 0x00A8 (size: 0x20)
    FParticleDistancePrototype PlayerDistancePrototype;                               // 0x00C8 (size: 0x10)
    FParticleDaytimePrototype DaytimePrototype;                                       // 0x00D8 (size: 0x10)
    FParticleRainIntensityPrototype RainIntensityPrototype;                           // 0x00E8 (size: 0x10)
    FParticleWindIntensityPrototype WindIntensityPrototype;                           // 0x00F8 (size: 0x10)
    TArray<TSoftObjectPtr<UNiagaraSystem>> NiagaraSystems;                            // 0x0108 (size: 0x10)

}; // Size: 0x118

struct FStealthParams
{
    float FlashLightCoef;                                                             // 0x0000 (size: 0x4)
    float VisibilitySizeFactor;                                                       // 0x0004 (size: 0x4)
    float VisibilityCrouchCoef;                                                       // 0x0008 (size: 0x4)
    float VisibilityJumpCoef;                                                         // 0x000C (size: 0x4)
    float VisibilityObstacleHeadCoef;                                                 // 0x0010 (size: 0x4)
    float VisibilityObstacleBodyCoef;                                                 // 0x0014 (size: 0x4)
    float NoiseObstacleCoef;                                                          // 0x0018 (size: 0x4)
    float NoiseCrouchCoef;                                                            // 0x001C (size: 0x4)
    float NoiseJumpCoef;                                                              // 0x0020 (size: 0x4)

}; // Size: 0x24

struct FStrandFinalData
{
    TArray<FStrandSplineComponent> SplineComponentsData;                              // 0x0000 (size: 0x10)
    TArray<FStrandStaticMeshComponent> StaticMeshComponentsData;                      // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FStrandSplineComponent
{
    FVector WorldPos;                                                                 // 0x0000 (size: 0x18)
    class UStaticMesh* StaticMesh;                                                    // 0x0018 (size: 0x8)
    FVector StartPos;                                                                 // 0x0020 (size: 0x18)
    FVector StartTangent;                                                             // 0x0038 (size: 0x18)
    FVector EndPos;                                                                   // 0x0050 (size: 0x18)
    FVector EndTangent;                                                               // 0x0068 (size: 0x18)
    FRotator Rotation;                                                                // 0x0080 (size: 0x18)
    FVector RelativeScale;                                                            // 0x0098 (size: 0x18)

}; // Size: 0xB0

struct FStrandStaticMeshComponent
{
    FVector WorldPos;                                                                 // 0x0000 (size: 0x18)
    class UStaticMesh* StaticMesh;                                                    // 0x0018 (size: 0x8)
    FRotator RelativeRotation;                                                        // 0x0020 (size: 0x18)
    FRotator WorldRotation;                                                           // 0x0038 (size: 0x18)
    FVector RelativeScale;                                                            // 0x0050 (size: 0x18)

}; // Size: 0x68

struct FStreamingDistanceOverrideTickFunction : public FTickFunction
{
}; // Size: 0x30

struct FStreamingDistanceOverrideVolumeState
{
    class AStreamingDistanceOverridingVolume* Volume;                                 // 0x0000 (size: 0x8)

}; // Size: 0x50

struct FStringOverridableProperty : public FOverridableProperty
{
    FString DefaultValue;                                                             // 0x0018 (size: 0x10)
    FString CurrentValue;                                                             // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FStructConditionalGeneration
{
    double RefreshGameTime;                                                           // 0x0000 (size: 0x8)
    TArray<ERank> PlayerRanks;                                                        // 0x0008 (size: 0x10)
    TArray<EGameDifficulty> Difficulties;                                             // 0x0018 (size: 0x10)
    int32 ReputationThreshold;                                                        // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FStructItemGenerationCategory
{
    EItemGenerationCategory Category;                                                 // 0x0000 (size: 0x4)
    TArray<FStructItemGeneratorSingleElement> PossibleItems;                          // 0x0008 (size: 0x10)
    bool bAllowSameCategoryGeneration;                                                // 0x0018 (size: 0x1)

}; // Size: 0x58

struct FStructItemGeneratorElementCountedPart
{
    int32 MinCount;                                                                   // 0x0000 (size: 0x4)
    int32 MaxCount;                                                                   // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FStructItemGeneratorSingleElement : public FStructItemGeneratorElementCountedPart
{
    float Chance;                                                                     // 0x000C (size: 0x4)
    float Weight;                                                                     // 0x0010 (size: 0x4)
    float MinDurability;                                                              // 0x0014 (size: 0x4)
    float MaxDurability;                                                              // 0x0018 (size: 0x4)
    EWeaponGenerationFlags WeaponGenerationFlags;                                     // 0x001C (size: 0x1)

}; // Size: 0x70

struct FSwarmDamageHandleImpact
{
    bool bSpawnCorpseOnDestroy;                                                       // 0x0000 (size: 0x1)
    bool bApplyImpulseToCorpse;                                                       // 0x0001 (size: 0x1)
    bool bAttachImpactEffectToCorpse;                                                 // 0x0002 (size: 0x1)
    bool bSetMaterialParametersToCorpse;                                              // 0x0003 (size: 0x1)
    float ImpulseScale;                                                               // 0x0004 (size: 0x4)
    float AngularImpulseScale;                                                        // 0x0008 (size: 0x4)
    TSubclassOf<class AActor> SpawnCorpseTemplate;                                    // 0x0010 (size: 0x8)
    class UNiagaraSystem* ImpactEffect;                                               // 0x0018 (size: 0x8)
    class UNiagaraSystem* EnvironmentEffect;                                          // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FSwarmInstanceSimulationConfig
{
    float AvoidenceRadius;                                                            // 0x0000 (size: 0x4)
    float AlignmentRadius;                                                            // 0x0004 (size: 0x4)
    float CohesionRadius;                                                             // 0x0008 (size: 0x4)
    float MaxForce;                                                                   // 0x000C (size: 0x4)
    float SeparationWeight;                                                           // 0x0010 (size: 0x4)
    float AlignmentWeight;                                                            // 0x0014 (size: 0x4)
    float CohesionWeight;                                                             // 0x0018 (size: 0x4)
    float AttractionPointWeight;                                                      // 0x001C (size: 0x4)
    float FlowWeight;                                                                 // 0x0020 (size: 0x4)
    float MaxSpeed;                                                                   // 0x0024 (size: 0x4)
    float LinearDrag;                                                                 // 0x0028 (size: 0x4)
    float HeightDisplacementRadius;                                                   // 0x002C (size: 0x4)
    float HeightDisplacementAmmount;                                                  // 0x0030 (size: 0x4)
    float MaxHeightDisplacement;                                                      // 0x0034 (size: 0x4)
    float ImpulseFriction;                                                            // 0x0038 (size: 0x4)
    FName VATAnimation;                                                               // 0x003C (size: 0x8)

}; // Size: 0x60

struct FSwarmVATAnimation
{
    FName StateName;                                                                  // 0x0000 (size: 0x8)
    float FrameStart;                                                                 // 0x0008 (size: 0x4)
    float FrameEnd;                                                                   // 0x000C (size: 0x4)
    float FrameRate;                                                                  // 0x0010 (size: 0x4)
    float PlaybackRate;                                                               // 0x0014 (size: 0x4)
    float BlendOutDuration;                                                           // 0x0018 (size: 0x4)
    bool bIsLooped;                                                                   // 0x0024 (size: 0x1)

}; // Size: 0x28

struct FTaskStatusSettings
{
    FLinearColor Collor;                                                              // 0x0000 (size: 0x10)
    class UTexture2D* Icon;                                                           // 0x0010 (size: 0x8)

}; // Size: 0x20

struct FTeleportData
{
}; // Size: 0x80

struct FTeleportParams
{
}; // Size: 0x3

struct FTextProperties
{
    TEnumAsByte<EHorizontalAlignment> TextAlignment;                                  // 0x0000 (size: 0x1)
    FMargin TextMargin;                                                               // 0x0004 (size: 0x10)

}; // Size: 0x14

struct FTextSettings
{
    FName FontStyleId;                                                                // 0x0000 (size: 0x8)
    bool bUseFontColor;                                                               // 0x0008 (size: 0x1)
    FTextBlockStyle FontStyle;                                                        // 0x0010 (size: 0x3A0)
    TEnumAsByte<ETextJustify::Type> Justification;                                    // 0x03B0 (size: 0x1)
    bool bAutoWrap;                                                                   // 0x03B1 (size: 0x1)
    float WrappingTextAt;                                                             // 0x03B4 (size: 0x4)
    ETextTransformPolicy TextTransformPolicy;                                         // 0x03B8 (size: 0x1)
    float LineHeightPercentage;                                                       // 0x03BC (size: 0x4)

}; // Size: 0x3C0

struct FThreatPointerSettings
{
    float ThreatIndicatorMoveRadius;                                                  // 0x0000 (size: 0x4)
    float OpacityChangingSpeed;                                                       // 0x0004 (size: 0x4)
    float ThreatLevelChangingSpeed;                                                   // 0x0008 (size: 0x4)
    float ThreatIndicatorLevelMin;                                                    // 0x000C (size: 0x4)
    float ThreatIndicatorLevelMax;                                                    // 0x0010 (size: 0x4)
    float ThreatThreatPointerRotationSpeed;                                           // 0x0014 (size: 0x4)
    float AlertAnimationSpeed;                                                        // 0x0018 (size: 0x4)
    int32 AlertAnimationNumberLoops;                                                  // 0x001C (size: 0x4)

}; // Size: 0x20

struct FTimeBudget
{
    int32 AgentView;                                                                  // 0x0000 (size: 0x4)
    int32 AgentModel;                                                                 // 0x0004 (size: 0x4)
    int32 AnomalyView;                                                                // 0x0008 (size: 0x4)
    int32 AnomalyModel;                                                               // 0x000C (size: 0x4)
    int32 ArtifactView;                                                               // 0x0010 (size: 0x4)
    int32 ItemContainer;                                                              // 0x0014 (size: 0x4)
    int32 DestructibleView;                                                           // 0x0018 (size: 0x4)
    int32 DestructibleModel;                                                          // 0x001C (size: 0x4)
    int32 WetnessComponent;                                                           // 0x0020 (size: 0x4)
    int32 FlashlightComponent;                                                        // 0x0024 (size: 0x4)
    int32 ContextualActionModel;                                                      // 0x0028 (size: 0x4)
    int32 QuestNode;                                                                  // 0x002C (size: 0x4)

}; // Size: 0x30

struct FTipPositionArgs
{
    int32 Row;                                                                        // 0x0000 (size: 0x4)
    int32 Column;                                                                     // 0x0004 (size: 0x4)
    double size;                                                                      // 0x0008 (size: 0x8)
    ESlotDirection Direction;                                                         // 0x0010 (size: 0x1)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;                            // 0x0011 (size: 0x1)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;                                // 0x0012 (size: 0x1)
    FVector2D Translation;                                                            // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FTopazScannerVFX
{
    class UNiagaraSystem* NiagaraSystem;                                              // 0x0000 (size: 0x8)
    FTransform SpawnTransform;                                                        // 0x0010 (size: 0x60)
    float EnableTime;                                                                 // 0x0070 (size: 0x4)
    float DisableTime;                                                                // 0x0074 (size: 0x4)
    TWeakObjectPtr<class UNiagaraComponent> NiagaraComponent;                         // 0x0078 (size: 0x8)
    TWeakObjectPtr<class ATopazScanner> OwnerScanner;                                 // 0x0080 (size: 0x8)

}; // Size: 0xA0

struct FTransitionAnimations
{
    class UAnimSequence* To;                                                          // 0x0000 (size: 0x8)
    class UAnimSequence* From;                                                        // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FTutorialFilterSettings
{
    bool bIsEnableFilter;                                                             // 0x0000 (size: 0x1)
    EPDATutorialCategory Filter;                                                      // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FTwoBlendedAnimationData
{
    class UAnimSequence* FirstAnimation;                                              // 0x0000 (size: 0x8)
    class UAnimSequence* SecondAnimation;                                             // 0x0008 (size: 0x8)
    float FirstBlendIn;                                                               // 0x0010 (size: 0x4)
    float SecondBlendIn;                                                              // 0x0014 (size: 0x4)
    bool bUseFirstAnimation;                                                          // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FTwoLegIKData : public FBaseLegIKData
{
    FLegIKData LeftFootIKData;                                                        // 0x0008 (size: 0x10)
    FLegIKData RightFootIKData;                                                       // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FUID
{
    int32 UID;                                                                        // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FUIWarningSettings : public FTableRowBase
{
    bool IsGlobalEnable;                                                              // 0x0008 (size: 0x1)
    UIWorningType WorningType;                                                        // 0x0009 (size: 0x1)
    int32 PerfectTextSize;                                                            // 0x000C (size: 0x4)
    bool bShouldIgnoreTag;                                                            // 0x0010 (size: 0x1)
    float RowSize;                                                                    // 0x0014 (size: 0x4)
    int32 PerfectRow;                                                                 // 0x0018 (size: 0x4)
    FWarningSettings DefoultRengeSettings;                                            // 0x0020 (size: 0x20)
    TArray<FWarningSettings> RengeSettings;                                           // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FUpgrade
{
}; // Size: 0x58

struct FUpgradeFilterSettings
{
    bool bEnableFilter;                                                               // 0x0000 (size: 0x1)
    EInventoryEquipmentSlot Filter;                                                   // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FUpgradeSlotData
{
}; // Size: 0x58

struct FUserAchievements
{
    TMap<class FString, class FAchievementData> Achievements;                         // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FVATAnimation
{
    FName StateName;                                                                  // 0x0000 (size: 0x8)
    float FrameStart;                                                                 // 0x0008 (size: 0x4)
    float FrameEnd;                                                                   // 0x000C (size: 0x4)
    float FrameRate;                                                                  // 0x0010 (size: 0x4)
    float PlaybackRate;                                                               // 0x0014 (size: 0x4)
    float BlendOutDuration;                                                           // 0x0018 (size: 0x4)
    bool bIsLooped;                                                                   // 0x001C (size: 0x1)

}; // Size: 0x20

struct FValueLocalisationPair
{
    int32 Value;                                                                      // 0x0000 (size: 0x4)
    FText Loc10N;                                                                     // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FVelocityDebug
{
    double LinearVelocity;                                                            // 0x0000 (size: 0x8)
    double AngularVelocity;                                                           // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FVictoryInput
{
    FString ActionName;                                                               // 0x0000 (size: 0x10)
    FKey Key;                                                                         // 0x0010 (size: 0x18)
    FString KeyAsString;                                                              // 0x0028 (size: 0x10)
    bool bShift;                                                                      // 0x0038 (size: 0x1)
    bool bCtrl;                                                                       // 0x0039 (size: 0x1)
    bool bAlt;                                                                        // 0x003A (size: 0x1)
    bool bCmd;                                                                        // 0x003B (size: 0x1)
    bool bGamepad;                                                                    // 0x003C (size: 0x1)
    EKeyCategory Category;                                                            // 0x003D (size: 0x1)

}; // Size: 0x40

struct FVictoryInputAxis
{
    FString AxisName;                                                                 // 0x0000 (size: 0x10)
    FString KeyAsString;                                                              // 0x0010 (size: 0x10)
    FKey Key;                                                                         // 0x0020 (size: 0x18)
    float Scale;                                                                      // 0x0038 (size: 0x4)
    EKeyCategory Category;                                                            // 0x003C (size: 0x1)

}; // Size: 0x40

struct FViewOpenSettings
{
    bool bShouldEffectCursorOnShow;                                                   // 0x0000 (size: 0x1)
    bool bShoudShowMouseCursor;                                                       // 0x0001 (size: 0x1)
    bool bShoudIdleAnimation;                                                         // 0x0002 (size: 0x1)
    bool bShoudIgnoreInputOnPause;                                                    // 0x0003 (size: 0x1)
    bool bShoudClearInputOnClose;                                                     // 0x0004 (size: 0x1)
    bool bShoudSendOpenUpdateEvent;                                                   // 0x0005 (size: 0x1)
    bool bShoudCheckOpenView;                                                         // 0x0006 (size: 0x1)
    bool bShoudIgnoreCheckOpenView;                                                   // 0x0007 (size: 0x1)
    bool bShoudIgnoreLowPriority;                                                     // 0x0008 (size: 0x1)
    bool bNewerCloseOtherViews;                                                       // 0x0009 (size: 0x1)
    ECloseType CloseType;                                                             // 0x000A (size: 0x1)
    TArray<EWidgetNameEx> WidgetsToHideThisWhenOpen;                                  // 0x0010 (size: 0x10)
    TArray<EWidgetNameEx> CloseWidgetNames;                                           // 0x0020 (size: 0x10)
    int32 PriorityZOrder;                                                             // 0x0030 (size: 0x4)
    bool bCanBeRestoredAfterPause;                                                    // 0x0034 (size: 0x1)

}; // Size: 0x38

struct FVolumetricCloudState
{
    FFloatParameter CloudMapBias;                                                     // 0x0000 (size: 0x60)
    FFloatParameter CloudMapDensity;                                                  // 0x0060 (size: 0x60)
    FFloatParameter NoiseFlowMapAMultiplier;                                          // 0x00C0 (size: 0x60)
    FFloatParameter NoiseFlowMapABias;                                                // 0x0120 (size: 0x60)
    FFloatParameter NoiseFlowMapADetail;                                              // 0x0180 (size: 0x60)
    FFloatParameter NoiseFlowMapABottomNoise;                                         // 0x01E0 (size: 0x60)
    FFloatParameter NoiseFlowMapBBias;                                                // 0x0240 (size: 0x60)
    FFloatParameter NoiseFlowMapBDetail;                                              // 0x02A0 (size: 0x60)
    FFloatParameter NoiseFlowMapBScale;                                               // 0x0300 (size: 0x60)
    FFloatParameter BillowyStormyCloudsHeight;                                        // 0x0360 (size: 0x60)
    FFloatParameter DensityVariationScale;                                            // 0x03C0 (size: 0x60)
    FFloatParameter DensityVariationPower;                                            // 0x0420 (size: 0x60)
    FFloatParameter DensityVariationOutFirst;                                         // 0x0480 (size: 0x60)
    FFloatParameter DensityVariationOutSecond;                                        // 0x04E0 (size: 0x60)
    FFloatParameter DensityVariationDarkMinDensity;                                   // 0x0540 (size: 0x60)
    FFloatParameter CloudBaseCapMaskRadius;                                           // 0x05A0 (size: 0x60)
    FFloatParameter CloudBaseSpeedMultiplier;                                         // 0x0600 (size: 0x60)
    FLinearColorParameter CloudBaseECX;                                               // 0x0660 (size: 0x60)
    FFloatParameter CloudBasePreExponentialDensity;                                   // 0x06C0 (size: 0x60)
    FLinearColorParameter CloudBaseAlbedo;                                            // 0x0720 (size: 0x60)
    FLinearColorParameter CloudBaseSecondAlbedo;                                      // 0x0780 (size: 0x60)
    FLinearColorParameter EmissionParamPositionIntensity;                             // 0x07E0 (size: 0x60)
    FLinearColorParameter EmissionParamColor;                                         // 0x0840 (size: 0x60)
    FFloatParameter PhaseBlend;                                                       // 0x08A0 (size: 0x60)
    FFloatParameter PhaseG;                                                           // 0x0900 (size: 0x60)
    FFloatParameter PhaseGSecond;                                                     // 0x0960 (size: 0x60)
    FFloatParameter MultiScatteringContribution;                                      // 0x09C0 (size: 0x60)
    FFloatParameter MultiScatteringOcclusion;                                         // 0x0A20 (size: 0x60)
    FFloatParameter MultiScatteringOcclusionPower;                                    // 0x0A80 (size: 0x60)
    FFloatParameter MultiScatteringEccentricity;                                      // 0x0AE0 (size: 0x60)
    FFloatParameter LayerHeight;                                                      // 0x0B40 (size: 0x60)
    FFloatParameter LayerBottomAltitude;                                              // 0x0BA0 (size: 0x60)

}; // Size: 0xC00

struct FVortexSplineDataPoint
{
    float TargetSpeed;                                                                // 0x0000 (size: 0x4)
    float DistanceFromStart;                                                          // 0x0004 (size: 0x4)
    int32 PointIndex;                                                                 // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FWLCylinderShapeParams
{
    FVector Location;                                                                 // 0x0000 (size: 0x18)
    float Radius;                                                                     // 0x0018 (size: 0x4)
    float ZMin;                                                                       // 0x001C (size: 0x4)
    float ZMax;                                                                       // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FWLParticlesPropertyState
{
    FName PropertyName;                                                               // 0x0000 (size: 0x8)
    float TargetValue;                                                                // 0x0008 (size: 0x4)
    float InterpolationSpeed;                                                         // 0x000C (size: 0x4)

}; // Size: 0x10

struct FWLSplinePointTiming
{
}; // Size: 0x1

struct FWanderingLightInstanceData
{
    FVector BaseLocation;                                                             // 0x0000 (size: 0x18)
    FInterpCurveVector HorizontalMovementCurve;                                       // 0x0018 (size: 0x18)
    float HorizontalMovementDuration;                                                 // 0x0030 (size: 0x4)
    float HorizontalMovementDenom;                                                    // 0x0034 (size: 0x4)
    float BaseVerticalOffset;                                                         // 0x0038 (size: 0x4)
    bool bCircularMovement;                                                           // 0x003C (size: 0x1)

}; // Size: 0x40

struct FWarningSettings
{
    TArray<ELocalizationLanguage> Localization;                                       // 0x0000 (size: 0x10)
    TArray<FRengeSettings> RengeSettings;                                             // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FWaterHitArgs
{
}; // Size: 0x1

struct FWaterSurfaceObstructionResult
{
    bool bObstructed;                                                                 // 0x0000 (size: 0x1)
    double DistanceToWater;                                                           // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FWeapon
{
}; // Size: 0x8

struct FWeaponAttachMeshesData
{
    TMap<class EAttachType, class FAttachMeshesData> AttachMeshesMap;                 // 0x0000 (size: 0x50)
    TArray<class UMeshComponent*> BulletMeshes;                                       // 0x0050 (size: 0x10)
    TArray<FAttachedMagazineStruct> MagazineMeshes;                                   // 0x0060 (size: 0x10)
    TArray<class UMeshComponent*> WeaponStaticMeshParts;                              // 0x0070 (size: 0x10)

}; // Size: 0x80

struct FWeaponFireEvents
{
    class UAkAudioEvent* FireEventOneShot;                                            // 0x0000 (size: 0x8)
    class UAkAudioEvent* FireEventLoop;                                               // 0x0008 (size: 0x8)
    class UAkAudioEvent* FireEventBreak;                                              // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FWeaponInertiaContainer
{
    class UCurveVector* InertiaRotationCurve;                                         // 0x0000 (size: 0x8)
    class UCurveVector* InertiaTranslationCurve;                                      // 0x0008 (size: 0x8)
    class UCurveFloat* InertiaTimeScaleCurve;                                         // 0x0010 (size: 0x8)
    class UCurveFloat* AmplitudeScaleCurve;                                           // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FWeaponPushbackContainer
{
    float DelayBeforeBlendStarting;                                                   // 0x0000 (size: 0x4)
    FAlphaBlendArgs BlendInArgs;                                                      // 0x0008 (size: 0x10)
    FAlphaBlendArgs BlendOutArgs;                                                     // 0x0018 (size: 0x10)
    class UCurveVector* PushbackRotationCurve;                                        // 0x0028 (size: 0x8)
    class UCurveVector* PushbackTranslationCurve;                                     // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FWeatherHistoryData
{
    EWeather WeatherType;                                                             // 0x0000 (size: 0x1)
    float BlendWeight;                                                                // 0x0004 (size: 0x4)
    float BlendWeightIncrease;                                                        // 0x0008 (size: 0x4)
    int32 Cooldown;                                                                   // 0x000C (size: 0x4)
    int32 MaxRepeatAmount;                                                            // 0x0010 (size: 0x4)
    int32 RepeatAmount;                                                               // 0x0014 (size: 0x4)
    bool bPaused;                                                                     // 0x0018 (size: 0x1)
    bool bAllowInDialogueTransition;                                                  // 0x0019 (size: 0x1)

}; // Size: 0x24

struct FWeatherState
{
    FSkySphereState SkySphere;                                                        // 0x0000 (size: 0x180)
    FDirectionalLightState DirLight;                                                  // 0x0180 (size: 0x360)
    FSkyLightState SkyLight;                                                          // 0x04E0 (size: 0xC0)
    FSkyAtmosphereState SkyAtmosphere;                                                // 0x05A0 (size: 0x600)
    FVolumetricCloudState VolumetricCloud;                                            // 0x0BA0 (size: 0xC00)
    FExponentialHeightFogState ExponentialHeightFog;                                  // 0x17A0 (size: 0x480)
    FFloatParameter GlobalVolumetricValue;                                            // 0x1C20 (size: 0x60)
    FFloatParameter LocalVolumetricValue;                                             // 0x1C80 (size: 0x60)
    FRainState Rain;                                                                  // 0x1CE0 (size: 0x240)
    FPostProcessState PostProcess;                                                    // 0x1F20 (size: 0xC0)
    FFloatParameter WindIntensity;                                                    // 0x1FE0 (size: 0x60)
    FFloatParameter WaterWindNormalMultiplier;                                        // 0x2040 (size: 0x60)
    FFloatParameter WaterWindBaseSpeedMultiplier;                                     // 0x20A0 (size: 0x60)
    FFloatParameter FoliageAnimationSpeed;                                            // 0x2100 (size: 0x60)
    FFloatParameter FoliageWindIntensityAmplitude;                                    // 0x2160 (size: 0x60)
    FFloatParameter FoliageRotationAmount;                                            // 0x21C0 (size: 0x60)
    FFloatParameter FoliageRotationSpeedFraction;                                     // 0x2220 (size: 0x60)
    FFloatParameter FoliageVariationSpeedFraction;                                    // 0x2280 (size: 0x60)
    FFloatParameter FoliageVariationAmount;                                           // 0x22E0 (size: 0x60)
    TMap<EWeather, float> TransitionDurations;                                        // 0x2340 (size: 0x50)

}; // Size: 0x2390

struct FWeightedFacialAnimation
{
    float Weight;                                                                     // 0x0000 (size: 0x4)
    class UAnimSequenceBase* FaceAnimation;                                           // 0x0008 (size: 0x8)
    float StartTime;                                                                  // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FWetnessComponentCollection : public FBaseTickAggregationCollection
{
}; // Size: 0x98

struct FWind
{
    FVector2D FoliageWindDirection;                                                   // 0x0000 (size: 0x10)
    float FoliageWindIntensity;                                                       // 0x0010 (size: 0x4)
    FVector2D PreviousFoliageWindDirection;                                           // 0x0018 (size: 0x10)
    float PreviousFoliageWindIntensity;                                               // 0x0028 (size: 0x4)
    float Intensity;                                                                  // 0x002C (size: 0x4)
    float WindDirectionChangeIntensity;                                               // 0x0030 (size: 0x4)
    bool bLockedDirection;                                                            // 0x0034 (size: 0x1)
    FVector2D Direction;                                                              // 0x0038 (size: 0x10)
    FVector2D TargetDirection;                                                        // 0x0048 (size: 0x10)
    FVector2D PreviousDirection;                                                      // 0x0058 (size: 0x10)

}; // Size: 0x70

struct FZoomInterval
{
    int32 MinZoomLevel;                                                               // 0x0000 (size: 0x4)
    int32 MaxZoomLevel;                                                               // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FZoomLevelSettings
{
    float MapZoom;                                                                    // 0x0000 (size: 0x4)
    FMoveSettings MoveSettings;                                                       // 0x0004 (size: 0x8)

}; // Size: 0xC

struct FZoomMarkerSettings
{
    int32 MaxZoomLevelToShow;                                                         // 0x0000 (size: 0x4)
    int32 MinZoomLevelToShow;                                                         // 0x0004 (size: 0x4)
    int32 MaxZoomLevelToShowHab;                                                      // 0x0008 (size: 0x4)
    int32 MinZoomLevelToShowHub;                                                      // 0x000C (size: 0x4)

}; // Size: 0x10

class AAchievementTrigger : public AActor
{
    class UBoxComponent* TriggerArea;                                                 // 0x0298 (size: 0x8)
    FString AchievementSID;                                                           // 0x02A0 (size: 0x10)

    void OnBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0x2B0

class AActorEyesCameraActor : public ACameraActor
{
}; // Size: 0xA00

class AAgent : public AObj
{
    class UPhysicsSoundsComponent* PhysicsSoundsComponent;                            // 0x0938 (size: 0x8)
    class UNPCComponent* NPCComponent;                                                // 0x0980 (size: 0x8)
    class UPhysicsInteractionComponent* PhysicsInteractionComponent;                  // 0x0988 (size: 0x8)
    class UWoundedHoldComponent* WoundedHoldComponent;                                // 0x0990 (size: 0x8)
    class UTouchComponent* TouchComponent;                                            // 0x0998 (size: 0x8)
    class UMotionWarpingComponent* MotionWarpingComponent;                            // 0x09A0 (size: 0x8)
    class UAITickComponent* AITickComponent;                                          // 0x09A8 (size: 0x8)
    class UPhysicsControlComponent* PhysicsControlComponent;                          // 0x09B0 (size: 0x8)
    class ULODSyncComponent* LODSyncComponent;                                        // 0x09B8 (size: 0x8)
    class UDataLayerPhysicsComponent* DataLayerPhysicsComponent;                      // 0x09C0 (size: 0x8)
    class UDeadBody* DeadBodyComponent;                                               // 0x09C8 (size: 0x8)
    FDamageInteractVFXData DamageInteractVFXData;                                     // 0x09D0 (size: 0x10)
    FName AttachDamageInteractVFXBoneName;                                            // 0x09E0 (size: 0x8)
    class AActor* CutsceneLookAtActor;                                                // 0x09E8 (size: 0x8)
    float CutsceneEyesLookAtWeight;                                                   // 0x09F0 (size: 0x4)
    float CutsceneHeadLookAtWeight;                                                   // 0x09F4 (size: 0x4)
    ECutsceneBlinkProfile CutsceneBlinkProfile;                                       // 0x09F8 (size: 0x1)
    ECutsceneEyesIdleProfile CutsceneEyesIdleProfile;                                 // 0x09F9 (size: 0x1)
    float CutsceneProceduralEyesWeight;                                               // 0x09FC (size: 0x4)
    float CutsceneProceduralEyesAmplitude;                                            // 0x0A00 (size: 0x4)
    float CutsceneProceduralEyesIntensity;                                            // 0x0A04 (size: 0x4)
    float GuaranteedRelevancyUpdateTime;                                              // 0x0A08 (size: 0x4)
    FName RagdollProfileName;                                                         // 0x0A0C (size: 0x8)
    TArray<FName> RagdollBonesToOverlap;                                              // 0x0A18 (size: 0x10)

    void SetCutsceneProceduralEyesWeight(float Value);
    void SetCutsceneProceduralEyesIntensity(float Value);
    void SetCutsceneProceduralEyesAmplitude(float Value);
    void SetCutsceneLookAtActor(const class AActor* Value);
    void SetCutsceneHeadLookAtWeight(float Weight);
    void SetCutsceneEyesLookAtWeight(float Weight);
    void SetCutsceneEyesIdleProfile(ECutsceneEyesIdleProfile NewCutsceneEyesIdleProfile);
    void SetCutsceneBlinkProfile(ECutsceneBlinkProfile NewCutsceneBlinkProfile);
    void PsyNPCInteractionStarted(class AObj* InteractActor);
    ESpawnSource GetSpawnSource();
    void DestroyDamageInteractParticle(class UNiagaraComponent* ParticleSystem);
    void Blink();
}; // Size: 0xAB0

class AAnomaly : public AUIDActor_Anomaly
{
    class UAkComponent* AnomalyAkComponent;                                           // 0x0308 (size: 0x8)
    class UAkAudioEvent* SoundEvent;                                                  // 0x0310 (size: 0x8)
    class UAkAudioEvent* DieSound;                                                    // 0x0318 (size: 0x8)
    class UAkSwitchValue* IdleSwitch;                                                 // 0x0320 (size: 0x8)
    class UAkSwitchValue* FadeSwitch;                                                 // 0x0328 (size: 0x8)
    class UAkSwitchValue* ActiveSwitch;                                               // 0x0330 (size: 0x8)
    class UAkSwitchValue* TriggerSwitch;                                              // 0x0338 (size: 0x8)
    class UAkSwitchValue* FirstPersonSwitch;                                          // 0x0340 (size: 0x8)
    class UAkSwitchValue* ThirdPersonSwitch;                                          // 0x0348 (size: 0x8)
    class UGSCNavModifierComponent* SpaceRestrictorComponent;                         // 0x0350 (size: 0x8)
    class UBoxComponent* SpaceRestrictorShape;                                        // 0x0358 (size: 0x8)
    class UWaterContactController* WaterContactController;                            // 0x0360 (size: 0x8)

    void OnRechargeStateStarted();
    void OnNiagaraFinished(class UNiagaraComponent* FinishedNiagara);
    void OnIdleStateStarted();
    void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex);
    void OnDieSoundFinished(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
    void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
    void OnActiveStateStarted();
    void OnActivationStateStarted();
    void ForceDeactivate();
    void ForceActivateOnce();
    void ForceActivateEndless();
}; // Size: 0x398

class AAnomalyModelSpawner : public AActor
{
    class USceneComponent* SceneComponent;                                            // 0x02A0 (size: 0x8)
    FPrototypeSID PrototypeSID;                                                       // 0x02C0 (size: 0x40)
    bool bSpawnOnBeginPlay;                                                           // 0x0300 (size: 0x1)

}; // Size: 0x308

class AArtifact : public AUIDActor_ItemContainer
{
    class USphereComponent* SphereComponent;                                          // 0x02C0 (size: 0x8)
    class UNiagaraComponent* StrafeParticle;                                          // 0x02C8 (size: 0x8)
    class UArtifactInteractableComponent* ArtifactInteractableComponent;              // 0x02D0 (size: 0x8)
    class UPhysicsInteractionComponent* PhysicsInteractionComponent;                  // 0x02D8 (size: 0x8)
    class UPhysicsSoundsComponent* PhysicsSoundsComponent;                            // 0x02E0 (size: 0x8)
    bool bDetectorRequired;                                                           // 0x02E8 (size: 0x1)
    class UAkAudioEvent* ChargingEvent;                                               // 0x0300 (size: 0x8)
    class UAkAudioEvent* JumpEvent;                                                   // 0x0308 (size: 0x8)
    class UAkAudioEvent* Sound;                                                       // 0x0310 (size: 0x8)
    class UAkAudioEvent* SoundStop;                                                   // 0x0318 (size: 0x8)
    class UAkAudioEvent* SoundStateTransitionOnHide;                                  // 0x0320 (size: 0x8)
    class UAkAudioEvent* SoundStateTransitionOnShow;                                  // 0x0328 (size: 0x8)
    class UAkSwitchValue* ArtifactTypeSwitchValue;                                    // 0x0330 (size: 0x8)
    class UFXSystemAsset* ParticleOnShow;                                             // 0x0338 (size: 0x8)
    class UAkAudioEvent* FakeArtifactDistortionSound;                                 // 0x0340 (size: 0x8)
    class UFXSystemAsset* FakeArtifactDistortionVFX;                                  // 0x0348 (size: 0x8)
    class UFXSystemAsset* FakeArtifactDissolveVFX;                                    // 0x0350 (size: 0x8)
    class UNiagaraSystem* ParticleStateTransitionFadeIn;                              // 0x0358 (size: 0x8)
    class UNiagaraSystem* ParticleStateTransitionFadeOut;                             // 0x0360 (size: 0x8)
    class UNiagaraSystem* ParticleOnImpact;                                           // 0x0368 (size: 0x8)
    class UFXSystemComponent* ActiveParticleOnShow;                                   // 0x03B8 (size: 0x8)

}; // Size: 0x3D8

class ABedView : public AUIDActor_Bed
{
    FGuid Guid;                                                                       // 0x02B0 (size: 0x10)
    class UBedHoldComponent* SleepComponent;                                          // 0x02C0 (size: 0x8)
    FPrototypeSID HappyHoursSID;                                                      // 0x02C8 (size: 0x40)
    class UStaticMeshComponent* BedMeshComponent;                                     // 0x0308 (size: 0x8)
    bool bIgnoreSleepinessValue;                                                      // 0x0320 (size: 0x1)
    bool bIgnoreEmission;                                                             // 0x0321 (size: 0x1)

    void OnSleepStarted();
    void OnSleepEnded();
    void Interact();
}; // Size: 0x330

class ABloodsucker : public AAgent
{
    class UNiagaraComponent* InvisibilityTransferParticles;                           // 0x0AA8 (size: 0x8)

}; // Size: 0xAB0

class ABolt : public AActor
{
    class UHittableComponent* HittableComponent;                                      // 0x0298 (size: 0x8)
    class UPhysicsInteractionComponent* PhysicsInteractionComponent;                  // 0x02A0 (size: 0x8)
    class UPhysicsSoundsComponent* PhysicsSoundsComponent;                            // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* BoltComponent;                                        // 0x02B0 (size: 0x8)
    FString PrototypeID;                                                              // 0x02E0 (size: 0x10)

    void OnComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
}; // Size: 0x2F8

class ABulbAnomaly : public AActor
{
    class UAkAudioEvent* PullSound;                                                   // 0x02A0 (size: 0x8)
    class UAkAudioEvent* ReleaseSound;                                                // 0x02A8 (size: 0x8)
    class UAkAudioEvent* IdleSound;                                                   // 0x02B0 (size: 0x8)
    class USphereComponent* SphereComponent;                                          // 0x02B8 (size: 0x8)
    TArray<class UVehicleSoundPlacement*> VehicleSoundLocations;                      // 0x02C0 (size: 0x10)
    class UCurveFloat* DamageCurve;                                                   // 0x02D0 (size: 0x8)
    class UCurveFloat* GravityCurve;                                                  // 0x02D8 (size: 0x8)
    class ULevelSequence* AnomalySequence;                                            // 0x02E0 (size: 0x8)
    FMovieSceneSequencePlaybackSettings SequencePlaybackSettings;                     // 0x02E8 (size: 0x20)
    class ALevelSequenceActor* LevelSequenceActor;                                    // 0x0308 (size: 0x8)
    class UMaterialParameterCollection* EnvironmentMPC;                               // 0x0310 (size: 0x8)
    FName FoliageParameterName;                                                       // 0x0318 (size: 0x8)
    TArray<FString> InteractionEffectsSIDs;                                           // 0x0320 (size: 0x10)
    float EnduranceDamagePerSecond;                                                   // 0x0330 (size: 0x4)
    float GravityPower;                                                               // 0x0334 (size: 0x4)
    float GravityFree;                                                                // 0x0338 (size: 0x4)
    float CoveredMultiplier;                                                          // 0x033C (size: 0x4)
    float UncoveredMultiplier;                                                        // 0x0340 (size: 0x4)
    float CoverTraceDistance;                                                         // 0x0344 (size: 0x4)
    FName CarsTag;                                                                    // 0x0348 (size: 0x8)
    float Duration;                                                                   // 0x0354 (size: 0x4)
    float Cooldown;                                                                   // 0x0358 (size: 0x4)

    void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex);
    void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0x3C0

class ACarouselAnomaly : public AAnomaly
{
    class UStaticMeshComponent* CollisionMeshPtr;                                     // 0x0398 (size: 0x8)
    class UNiagaraComponent* IdleParticle;                                            // 0x03A0 (size: 0x8)
    class UNiagaraComponent* ActivateParticle;                                        // 0x03A8 (size: 0x8)
    class UFXSystemAsset* InteractionParticle;                                        // 0x03B0 (size: 0x8)
    class UFXSystemAsset* ActionDamagePlayerParticle;                                 // 0x03B8 (size: 0x8)
    class UFXSystemAsset* ActionDamageNPCParticle;                                    // 0x03C0 (size: 0x8)
    class UFXSystemAsset* WaterContactParticle;                                       // 0x03C8 (size: 0x8)
    TSoftObjectPtr<UNiagaraSystem> BodyExplodeParticle;                               // 0x03D0 (size: 0x30)
    FPrototypeSID BodyExplodeStashSID;                                                // 0x0400 (size: 0x40)
    TSoftObjectPtr<UAkAudioEvent> InteractionSoundEvent;                              // 0x0440 (size: 0x30)

}; // Size: 0x490

class AChemicalAnomaly : public AAnomaly
{
    class UStaticMeshComponent* CollisionMeshPtr;                                     // 0x03A0 (size: 0x8)
    class UFXSystemAsset* SplashImpact;                                               // 0x03A8 (size: 0x8)
    class UFXSystemAsset* GrenadeExplosion;                                           // 0x03B0 (size: 0x8)

    void OnDecalSpawn();
}; // Size: 0x3B8

class AClassicFireAnomaly : public AAnomaly
{
    class UStaticMeshComponent* CollisionMeshPtr;                                     // 0x0398 (size: 0x8)
    class UCapsuleComponent* FlamePillarCapsule;                                      // 0x03A0 (size: 0x8)
    class UNiagaraComponent* IdleVFX;                                                 // 0x03A8 (size: 0x8)
    class UDecalComponent* DecalComponent;                                            // 0x03B0 (size: 0x8)

    void OnStateChanged();
}; // Size: 0x3B8

class AClickerAnomaly : public AAnomaly
{
    class UStaticMeshComponent* RootComponentPtr;                                     // 0x0398 (size: 0x8)
    class UStaticMeshComponent* CollisionMeshPtr;                                     // 0x03A0 (size: 0x8)
    class UNiagaraSystem* ChargeParticle;                                             // 0x03A8 (size: 0x8)
    class UNiagaraSystem* ExplosionParticle;                                          // 0x03B0 (size: 0x8)
    class UAkAudioEvent* ChargeSoundEvent;                                            // 0x03B8 (size: 0x8)
    class UAkAudioEvent* ExplosionSoundEvent;                                         // 0x03C0 (size: 0x8)
    class UCurveFloat* DamageCurve;                                                   // 0x03C8 (size: 0x8)

    void OnBeginParticleOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0x420

class ACodelock : public AInteractableObject
{
    class USkeletalMeshComponent* Mesh;                                               // 0x02E8 (size: 0x8)
    class UCodelockSingleClickComponent* InteractComponent;                           // 0x02F0 (size: 0x8)
    class UCodeComponent* CodeComponent;                                              // 0x02F8 (size: 0x8)
    float CodeLockDistance;                                                           // 0x0300 (size: 0x4)
    float CodeLockZoomInTime;                                                         // 0x0304 (size: 0x4)
    float CodeLockZoomOutTime;                                                        // 0x0308 (size: 0x4)
    float CodeLockForceZoomOutTime;                                                   // 0x030C (size: 0x4)
    float FailDisplayTimerRate;                                                       // 0x0310 (size: 0x4)
    bool bOverrideKeyMap;                                                             // 0x0314 (size: 0x1)
    TMap<class FName, class ECodelockKeyType> KeyMap;                                 // 0x0318 (size: 0x50)

    void OnKeyPressed();
    void OnInputCodePassed();
    void OnInputCodeFailed();
}; // Size: 0x500

class ACollar : public AActor
{
    FString CollarSID;                                                                // 0x0298 (size: 0x10)
    class UAkComponent* HissingComp;                                                  // 0x02A8 (size: 0x8)
    class USkeletalMeshComponent* CollarSK;                                           // 0x02B0 (size: 0x8)

}; // Size: 0x2B8

class ACombatMusicOverrideVolume : public AVolume
{
    TArray<TSoftObjectPtr<UAkSwitchValue>> CombatTracks;                              // 0x02D8 (size: 0x10)

}; // Size: 0x2E8

class AContextualAction : public AUIDActor_ContextualAction
{
}; // Size: 0x2D8

class AContextualNavLinkProxy : public ANavLinkProxy
{

    void OnStartUsingCustomLink(class AActor* MovingActor, const FVector& DestinationPoint);
}; // Size: 0x2E8

class ACooldownZone : public AGSCNavModifierVolume
{
    TSubclassOf<class UNavArea> RestrictionArea;                                      // 0x0308 (size: 0x8)
    float CooldownTime;                                                               // 0x0310 (size: 0x4)

}; // Size: 0x320

class ACooldownZonesController : public AActor
{
    class UBoxComponent* ControllerVolume;                                            // 0x0298 (size: 0x8)
    TArray<TSoftObjectPtr<ACooldownZone>> CooldownZones;                              // 0x02A0 (size: 0x10)

}; // Size: 0x2B8

class ACoverGenerator : public AActor
{
    class USmartCoverRenderingComponent* DebugRenderingComp;                          // 0x0298 (size: 0x8)

}; // Size: 0x2A0

class ADestructibleObject : public AUIDActor_DestructibleObject
{
    class UPhysicsInteractionComponent* PhysicsInteractionComponent;                  // 0x02F0 (size: 0x8)
    class UPhysicsSoundsComponent* PhysicsSoundsComponent;                            // 0x02F8 (size: 0x8)
    class UStaticMeshComponent* StaticMeshComponent;                                  // 0x0300 (size: 0x8)
    class UExplosionComponent* ExplosionComponent;                                    // 0x0308 (size: 0x8)
    class UHittableComponent* HittableComponent;                                      // 0x0310 (size: 0x8)
    class UDataLayerPhysicsComponent* DataLayerPhysicsComponent;                      // 0x0318 (size: 0x8)
    TMap<class FName, class EDataLayerRuntimeState> NeededLayers;                     // 0x0360 (size: 0x50)

    void TryAdjustPosition();
    void StartDestructActions();
    void OnHit(class AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    void OnDataLayersUpdated(const class UDataLayerInstance* DataLayer, EDataLayerRuntimeState State);
    void GSCFramework_OnPreTransition(const FHitResult& HitResult);
    void GSCFramework_OnPostTransition();
    TArray<FObjectPhaseSettings> GSCFramework_GetObjectPhases();
    FObjectPhaseSettings GSCFramework_GetCurrentPhase();
    int32 GetCurrentPhaseIndex();
}; // Size: 0x3B0

class ADestructibleWindow : public AActor
{
    FGuid Guid;                                                                       // 0x02A8 (size: 0x10)
    class UStaticMeshComponent* WindowMesh;                                           // 0x02B8 (size: 0x8)
    class UHittableComponent* HittableComponent;                                      // 0x02C0 (size: 0x8)
    TSoftObjectPtr<UNiagaraSystem> DestructionFX;                                     // 0x02C8 (size: 0x30)
    TSoftObjectPtr<UAkAudioEvent> DestructSound;                                      // 0x02F8 (size: 0x30)

}; // Size: 0x330

class ADeveloperSpectator : public ACharacter
{
    float BaseTurnRate;                                                               // 0x0628 (size: 0x4)
    float BaseLookUpRate;                                                             // 0x062C (size: 0x4)
    float SpeedMultiplier;                                                            // 0x0630 (size: 0x4)
    class UCameraComponent* CameraComponent;                                          // 0x0638 (size: 0x8)

}; // Size: 0x660

class ADialogProtector : public AActor
{
    class UGSCNavModifierComponent* SpaceRestrictor;                                  // 0x0298 (size: 0x8)
    class UBoxComponent* SpaceRestrictorShape;                                        // 0x02A0 (size: 0x8)

}; // Size: 0x2A8

class ADiamondAnomaly : public AAnomaly
{
    class UStaticMeshComponent* CollisionMesh;                                        // 0x0398 (size: 0x8)

}; // Size: 0x3A0

class ADoorView : public AUIDActor_Door
{
    FGuid Guid;                                                                       // 0x02D0 (size: 0x10)
    class USingleClickComponent* OpenDoorSingleClick;                                 // 0x02E0 (size: 0x8)
    class USingleClickComponent* CloseDoorSingleClick;                                // 0x02E8 (size: 0x8)
    class USingleClickComponent* LockedSingleClick;                                   // 0x02F0 (size: 0x8)
    class UHoldComponent* PeekDoorHold;                                               // 0x02F8 (size: 0x8)
    class UHoldComponent* ClosePeekDoorHold;                                          // 0x0300 (size: 0x8)
    TArray<class UAkComponent*> DoorAkComponents;                                     // 0x0440 (size: 0x10)
    TArray<FRebuildData> ViewRebuildMap;                                              // 0x0450 (size: 0x10)
    FVector OverrideInteractHintLocation;                                             // 0x0460 (size: 0x18)
    bool bIsHubDoor;                                                                  // 0x0478 (size: 0x1)
    bool bIsLocked;                                                                   // 0x0479 (size: 0x1)
    bool bIsDoubleDoor;                                                               // 0x047A (size: 0x1)
    float OpenAngleThreshold;                                                         // 0x047C (size: 0x4)
    float OpenAngle;                                                                  // 0x0480 (size: 0x4)
    float DecreaseImpulseAfterOpenTime;                                               // 0x0484 (size: 0x4)
    float OpenAngularSpeed;                                                           // 0x0488 (size: 0x4)
    float CloseAngularSpeed;                                                          // 0x048C (size: 0x4)
    float AngularSpeedNormalizer;                                                     // 0x0490 (size: 0x4)
    float DoorCloseTime;                                                              // 0x0494 (size: 0x4)
    float SilentOpenAngle;                                                            // 0x0498 (size: 0x4)
    float SilentOpenAngularSpeed;                                                     // 0x049C (size: 0x4)
    float FirstLeafAngleOnStart;                                                      // 0x04A0 (size: 0x4)
    float SecondLeafAngleOnStart;                                                     // 0x04A4 (size: 0x4)
    float KnockOutAngularSpeed;                                                       // 0x04A8 (size: 0x4)
    float AutomaticDoorCloseTimeout;                                                  // 0x04AC (size: 0x4)
    float CloseDoorSpeedMultiplier;                                                   // 0x04B0 (size: 0x4)
    float DoorConstraintSFXCooldown;                                                  // 0x04B4 (size: 0x4)
    class USceneComponent* DefaultRoot;                                               // 0x04B8 (size: 0x8)
    class UStaticMeshComponent* FrameMeshComponent;                                   // 0x04C0 (size: 0x8)
    class UStaticMeshComponent* FirstLeafMeshComponent;                               // 0x04C8 (size: 0x8)
    class UStaticMeshComponent* SecondLeafMeshComponent;                              // 0x04D0 (size: 0x8)
    class UPhysicsConstraintComponent* FirstLeafPhysicsConstraintComponent;           // 0x04D8 (size: 0x8)
    class UPhysicsConstraintComponent* SecondLeafPhysicsConstraintComponent;          // 0x04E0 (size: 0x8)
    class UHittableComponent* HittableComponent;                                      // 0x04E8 (size: 0x8)
    class UGSCNavModifierComponent* SpaceRestrictorComponent;                         // 0x04F0 (size: 0x8)
    class UBoxComponent* BlockVolume;                                                 // 0x04F8 (size: 0x8)
    class USignalReceiverComponent* InvertDoorStateReceiver;                          // 0x0500 (size: 0x8)
    class USignalReceiverComponent* InvertDoorLockReceiver;                           // 0x0508 (size: 0x8)
    class USignalReceiverComponent* OpenDoorReceiver;                                 // 0x0510 (size: 0x8)
    class USignalReceiverComponent* CloseDoorReceiver;                                // 0x0518 (size: 0x8)
    class USignalReceiverComponent* LockDoorReceiver;                                 // 0x0520 (size: 0x8)
    class USignalReceiverComponent* UnlockDoorReceiver;                               // 0x0528 (size: 0x8)
    class USignalReceiverComponent* PeekDoorReceiver;                                 // 0x0530 (size: 0x8)
    class USignalReceiverComponent* ForceOpenDoorReceiver;                            // 0x0538 (size: 0x8)
    class USignalReceiverComponent* ForceCloseDoorReceiver;                           // 0x0540 (size: 0x8)
    class USignalSenderComponent* OpenDoorSender;                                     // 0x0548 (size: 0x8)
    class USignalSenderComponent* CloseDoorSender;                                    // 0x0550 (size: 0x8)
    class USignalSenderComponent* LockDoorSender;                                     // 0x0558 (size: 0x8)
    class USignalSenderComponent* UnlockDoorSender;                                   // 0x0560 (size: 0x8)
    class USignalSenderComponent* ForceOpenDoorSender;                                // 0x0568 (size: 0x8)
    class USignalSenderComponent* ForceCloseDoorSender;                               // 0x0570 (size: 0x8)
    class USignalSenderComponent* PeekDoorSender;                                     // 0x0578 (size: 0x8)
    class UItemUsageComponent* ItemUsageComponent;                                    // 0x0580 (size: 0x8)
    TSoftObjectPtr<UAkAudioEvent> DoorMovementSFX;                                    // 0x0588 (size: 0x30)
    TSoftObjectPtr<UAkAudioEvent> DoorConstraintSFX;                                  // 0x05B8 (size: 0x30)
    TSoftObjectPtr<UAkAudioEvent> DoorOpenSFX;                                        // 0x05E8 (size: 0x30)
    TSoftObjectPtr<UAkAudioEvent> DoorCloseSFX;                                       // 0x0618 (size: 0x30)
    TSoftObjectPtr<UAkAudioEvent> UnlockDoorSFX;                                      // 0x0648 (size: 0x30)
    TSoftObjectPtr<UAkAudioEvent> LockedDoorSFX;                                      // 0x0678 (size: 0x30)
    TSoftObjectPtr<UAkAudioEvent> SilentDoorOpenSFX;                                  // 0x06A8 (size: 0x30)
    TSoftObjectPtr<UAkAudioEvent> KnockDoorOpenSFX;                                   // 0x06D8 (size: 0x30)
    TSoftObjectPtr<UAkRtpc> DoorMovementRTPC;                                         // 0x0708 (size: 0x30)

    void UnlockDoor();
    void RebuildDoorView();
    void PlayLockedDoorSound();
    void PeekDoor();
    void PeekCloseDoor();
    void OpenDoor();
    void OnDoorClosedCompletely();
    void OnComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void LockDoor();
    void InvertDoorState();
    void InvertDoorLock();
    void ForceOpenDoor();
    void ForceCloseDoor();
    void CloseDoor(const bool bCloseFast);
    void ActualizeNavigationProperties();
}; // Size: 0x770

class ADynamicEnvironmentParticleActor : public AActor
{
    class UDynamicEnvironmentNiagaraComponent* EnvironmentParticleComponent;          // 0x0298 (size: 0x8)

}; // Size: 0x2A0

class AEditorItemContainer : public AActor
{
    FString ConfigSID;                                                                // 0x0298 (size: 0x10)
    FString BaseItemContainerPrototypeSID;                                            // 0x02A8 (size: 0x10)
    FString MeshPath;                                                                 // 0x02B8 (size: 0x10)
    TArray<FSpawnedItem> SimpleItems;                                                 // 0x02C8 (size: 0x10)
    EMeshSubType ItemContainerType;                                                   // 0x02D8 (size: 0x4)

}; // Size: 0x2E0

class AEditorTools : public AActor
{
    bool bEmptyGroupsOutputToMessageLog;                                              // 0x02A0 (size: 0x1)
    bool bEmptyGroupsOutputToConsole;                                                 // 0x02A1 (size: 0x1)
    bool bRemoveEmptyGroupActors;                                                     // 0x02A2 (size: 0x1)
    EZeroBoundsFilter ZeroBoundsFilter;                                               // 0x02A3 (size: 0x1)
    bool bZeroBoundsOutputToConsole;                                                  // 0x02A4 (size: 0x1)
    bool bZeroBoundsOutputToMessageLog;                                               // 0x02A5 (size: 0x1)
    bool bBigClustersOutputToConsole;                                                 // 0x02A6 (size: 0x1)
    bool bBigClustersOutputToMessageLog;                                              // 0x02A7 (size: 0x1)
    bool bBigClustersExcludeEmptyGroupActors;                                         // 0x02A8 (size: 0x1)
    FName GridNameForDebug;                                                           // 0x02AC (size: 0x8)

    void XVerifyAllActorsForBrokenReference();
    void XRemoveRestoredLabelFromActors();
    void UpdateVoiceSounds();
    void RemoveEditorContainers();
    bool IsGameWorld(class UWorld* GameWorld);
    bool IsActorInGameWorld(class AActor* ActorToCheck);
    float GetSkyLightUpdateDeltaTime();
    void FixAttachMeshes();
    void CheckAllPrototypes();
    void ChangeNotesToTeleportPoints();
}; // Size: 0x2B8

class AEjectedMagazine : public AActor
{
    class UStaticMeshComponent* MeshComponent;                                        // 0x0298 (size: 0x8)
    class UPhysicsSoundsComponent* PhysicsSoundsComponent;                            // 0x02A0 (size: 0x8)
    class UHittableComponent* HittableComponent;                                      // 0x02A8 (size: 0x8)
    TWeakObjectPtr<class AActor> OwnerActor;                                          // 0x02B0 (size: 0x8)

    void OnHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
}; // Size: 0x2B8

class AElectroAnomaly : public AAnomaly
{
    class UStaticMeshComponent* RootComponentPtr;                                     // 0x0398 (size: 0x8)
    class UStaticMeshComponent* CollisionMeshPtr;                                     // 0x03A0 (size: 0x8)

    float GetRadius();
    FVector GetParticleSpawnLocation();
    FElectroAnomalyBakedDataFloat GetElectroBakedData();
    void BPSetActiveIdleVFX(const bool bNewActive);
    void BPDoLightningStrikeAfterPauseTime();
}; // Size: 0x3A8

class AEmptyObject : public AActor
{
    class USceneComponent* SceneComponent;                                            // 0x0298 (size: 0x8)
    class UBoxComponent* BoxCollision;                                                // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02A8 (size: 0x8)

}; // Size: 0x2B0

class AEncounterNPCSpawner : public AActor
{
    class USignalSenderComponent* AllNPCKilledSender;                                 // 0x02F0 (size: 0x8)
    TArray<FEncounterSpawnPointData> SpawnPoints;                                     // 0x02F8 (size: 0x10)
    float PlayerFieldOfViewAngle;                                                     // 0x0308 (size: 0x4)
    FFloatInterval SpawnDelay;                                                        // 0x030C (size: 0x8)
    int32 NPCTotalCount;                                                              // 0x0314 (size: 0x4)
    int32 NPCMaxCount;                                                                // 0x0318 (size: 0x4)
    int32 NPCMinCount;                                                                // 0x031C (size: 0x4)
    ESpawnSource SpawnSource;                                                         // 0x0320 (size: 0x1)

    void OnAllNPCKilled();
    void Enable();
    void Disable();
    void Despawn();
}; // Size: 0x3B0

class AExpulsionAnomaly : public AAnomaly
{
    class USphereComponent* ActivationSphere;                                         // 0x0398 (size: 0x8)
    class UGeometryCacheComponent* ShapeGeometryCache;                                // 0x03A0 (size: 0x8)
    class UMaterialInterface* ShapeGeometryMaterial;                                  // 0x03A8 (size: 0x8)
    FSoftObjectPath GeometryCachePath;                                                // 0x03B0 (size: 0x20)
    class UCurveFloat* PushDistanceDelayCurve;                                        // 0x03D0 (size: 0x8)

    void OnBoltCollided(const FVector& LocalPoint);
}; // Size: 0x3E8

class AFaustBossfightController : public AActor
{
    class USphereComponent* ControllerVolume;                                         // 0x02F0 (size: 0x8)
    class UNiagaraSystem* CloneSpawnEffect;                                           // 0x02F8 (size: 0x8)
    class USignalSenderComponent* CloneKilledSender;                                  // 0x0300 (size: 0x8)
    TArray<FTransform> CloneSpawnPoints;                                              // 0x0308 (size: 0x10)
    TArray<FObjPrototypeSID> ClonePrototypes;                                         // 0x0318 (size: 0x10)
    FObjPrototypeSID BossPrototype;                                                   // 0x0328 (size: 0x40)
    float PlayerFieldOfViewAngle;                                                     // 0x0368 (size: 0x4)
    float MinSpawnDistance;                                                           // 0x036C (size: 0x4)

    void TryTeleportBossToHiddenLocation();
    void SetCloneSpawnEnabled(const bool bEnabled);
    void OnCloneSwitch(const class AActor* CloneActor);
    void OnCloneSpawned(const class AActor* CloneActor);
    void OnCloneKilled(const class AActor* CloneActor);
}; // Size: 0x3F0

class AFaustInductor : public AActor
{
    float DamageThreshold;                                                            // 0x02F8 (size: 0x4)
    int32 NumberOfInductorPhases;                                                     // 0x02FC (size: 0x4)
    float InductorCooldownTime;                                                       // 0x0300 (size: 0x4)

    void OnInvulnerableHit();
    void OnInductorEnabled();
    void OnInductorDisabled();
    void OnInductorCooldown();
}; // Size: 0x328

class AFireBreathArchiAnomaly : public AUIDActor_FireBreathAnomaly
{
    class UStaticMeshComponent* ScalableRoot;                                         // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* CollisionMesh;                                        // 0x02B0 (size: 0x8)
    float MinRadius;                                                                  // 0x02B8 (size: 0x4)
    float MaxRadius;                                                                  // 0x02BC (size: 0x4)
    float MinHeight;                                                                  // 0x02C0 (size: 0x4)
    float MaxHeight;                                                                  // 0x02C4 (size: 0x4)
    FPrototypeSID EffectPrototypeSID;                                                 // 0x02C8 (size: 0x40)
    FGuid Guid;                                                                       // 0x0320 (size: 0x10)

    void SetTimeAlpha(const float InTimeAlpha);
    void SetScaleAlpha(const float InScaleAlpha);
    void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex);
    void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
    float GetTimeAlpha();
    float GetScaleAlpha();
}; // Size: 0x340

class AFlycatcherAnomaly : public AAnomaly
{
    class USphereComponent* OverlapSphereComponent;                                   // 0x0398 (size: 0x8)
    class UStaticMeshComponent* VFXEffectSphere;                                      // 0x03A0 (size: 0x8)
    class UAkAuxBus* FlycatcherAuxBus;                                                // 0x03A8 (size: 0x8)
    class UAkLateReverbComponent* FlycatcherAuxComponent;                             // 0x03B0 (size: 0x8)
    class UAkRtpc* InfluenceLevelRTPC;                                                // 0x03B8 (size: 0x8)
    class UAkStateValue* DefaultStateValue;                                           // 0x03C0 (size: 0x8)
    class UAkStateValue* FlycatcherStateValue;                                        // 0x03C8 (size: 0x8)

}; // Size: 0x3E0

class AFogActor : public AActor
{
    class UStaticMeshComponent* FogMesh;                                              // 0x02A0 (size: 0x8)
    TArray<FFogParams> FogPresets;                                                    // 0x02A8 (size: 0x10)
    FName DensityParamName;                                                           // 0x02B8 (size: 0x8)
    FName HeightMinParamName;                                                         // 0x02C0 (size: 0x8)
    FName HeightMaxParamName;                                                         // 0x02C8 (size: 0x8)
    class UMaterialInstanceDynamic* DynamicMaterial;                                  // 0x02D0 (size: 0x8)

    FFogParams GetFogParamsForCurrentWeather();
}; // Size: 0x2E0

class AGSCAIController : public AAIController
{
}; // Size: 0x3C0

class AGSCAudioVolume : public AAkSpatialAudioVolume
{
    class UAudioRoomBakedReflectionComponent* BakedReflection;                        // 0x02F0 (size: 0x8)
    class UAudioRoomBandwidthComponent* Bandwidth;                                    // 0x02F8 (size: 0x8)
    int32 FadeTransitionDuration;                                                     // 0x0300 (size: 0x4)
    EAkCurveInterpolation FadeCurveType;                                              // 0x0304 (size: 0x1)
    bool bEnableCrowdedAmbient;                                                       // 0x0305 (size: 0x1)
    class UAkAudioEvent* CrowdedAmbientAudioEvent;                                    // 0x0308 (size: 0x8)
    EAudioRoomPresetBase AudioRoomPresetBase;                                         // 0x0310 (size: 0x1)
    EAudioRoomPresetBandwidth AudioRoomPresetBandwidth;                               // 0x0311 (size: 0x1)
    TEnumAsByte<ECollisionChannel> AudioVolumeCollisionChannel;                       // 0x0312 (size: 0x1)
    class UTextRenderComponent* InfoTextRenderComponent;                              // 0x0318 (size: 0x8)
    float BlendRadius;                                                                // 0x0320 (size: 0x4)
    float BlendWeight;                                                                // 0x0324 (size: 0x4)
    float Priority;                                                                   // 0x0328 (size: 0x4)
    bool bOverride_LumenSkylightLeaking;                                              // 0x032C (size: 0x1)
    float SkyLightLeakingAmount;                                                      // 0x0330 (size: 0x4)

}; // Size: 0xA80

class AGSCDebugDrawer : public AActor
{
    class UDrawGSCDebug* DrawComponent;                                               // 0x0298 (size: 0x8)

}; // Size: 0x2A0

class AGSCNavData : public ARecastNavMesh
{
}; // Size: 0x628

class AGSCNavModifierVolume : public ANavModifierVolume
{
    class UGuidActorComponent* GuidComponent;                                         // 0x02F8 (size: 0x8)
    bool bIsActive;                                                                   // 0x0300 (size: 0x1)

}; // Size: 0x308

class AGameGraphData : public AActor
{
    TMap<uint32, FGameGraphContextualActions> VertexContextualActions;                // 0x02B8 (size: 0x50)
    TMap<class FGuid, class FContextualActionsGameGraphInfo> ContextualActionsVerticesInfo; // 0x0308 (size: 0x50)
    class UGameGraphRenderingComponent* DebugRenderingComp;                           // 0x0360 (size: 0x8)

}; // Size: 0x368

class AGaussDisplay : public AActor
{
    float DischargeAnimationTime;                                                     // 0x02A0 (size: 0x4)
    float ChargeAnimationTime;                                                        // 0x02A4 (size: 0x4)
    class UNiagaraSystem* ReloadVFX;                                                  // 0x02A8 (size: 0x8)
    class UNiagaraComponent* ReloadVFXComponent;                                      // 0x02B0 (size: 0x8)
    TWeakObjectPtr<class UPlayerOpticScopeComponent> OpticScopeComponent;             // 0x02B8 (size: 0x8)

}; // Size: 0x2E8

class AGrenade : public AUIDActor_Grenade
{
    class UGrenadeExplosionComponent* ExplosionComponent;                             // 0x02B0 (size: 0x8)
    class UAkComponent* ExplosionAudioComponent;                                      // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* StaticMeshComponent;                                  // 0x02C0 (size: 0x8)
    class UHittableComponent* HittableComponent;                                      // 0x02C8 (size: 0x8)
    class UPhysicsInteractionComponent* PhysicsInteractionComponent;                  // 0x02D0 (size: 0x8)
    class UPhysicsSoundsComponent* PhysicsSoundsComponent;                            // 0x02D8 (size: 0x8)
    class UWaterContactController* WaterContactController;                            // 0x02E0 (size: 0x8)
    FString SID;                                                                      // 0x02F8 (size: 0x10)
    float TimeToExplosion;                                                            // 0x0314 (size: 0x4)
    class UMaterialInterface* ExplosionDecalMaterial;                                 // 0x0368 (size: 0x8)

    void OnHit(class AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    void Explode();
}; // Size: 0x3B0

class AInitLevelGameMode : public AStalker2BaseGameMode
{
}; // Size: 0x340

class AInteractableItemContainer : public AUIDActor_ItemContainer
{
    class UPhysicsSoundsComponent* PhysicsSoundsComponent;                            // 0x02C8 (size: 0x8)
    class UPhysicsInteractionComponent* PhysicsInteractionComponent;                  // 0x02D0 (size: 0x8)
    class UHittableComponent* HittableComponent;                                      // 0x02D8 (size: 0x8)
    class ULaserSightComponent* LaserSightComponent;                                  // 0x02E0 (size: 0x8)
    class UDataLayerPhysicsComponent* DataLayerPhysicsComponent;                      // 0x02E8 (size: 0x8)
    class UItemContainerInteractionComponent* InteractionComponent;                   // 0x02F0 (size: 0x8)
    FWeaponAttachMeshesData WeaponAttachesData;                                       // 0x02F8 (size: 0x80)

    void OnHit(class AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
}; // Size: 0x3E0

class AInteractableMonitorSection : public AInteractableObject
{
    class UStaticMeshComponent* MonitorMesh;                                          // 0x02E8 (size: 0x8)
    class USignalReceiverComponent* ActivationSignalReceiver;                         // 0x02F0 (size: 0x8)
    class USignalReceiverComponent* DeactivationSignalReceiver;                       // 0x02F8 (size: 0x8)
    class USignalReceiverComponent* DestructionSignalReceiver;                        // 0x0300 (size: 0x8)
    class UNiagaraSystem* DestructionVFX;                                             // 0x0308 (size: 0x8)

    void OnDestructionSignalReceived(class UObject* InObject);
    void OnDeactivationSignalReceived(class UObject* InObject);
    void OnActivationSignalReceived(class UObject* InObject);
}; // Size: 0x310

class AInteractableObject : public AUIDActor_InteractableObject
{
    bool bEnabled;                                                                    // 0x02B0 (size: 0x1)
    bool bUnbreakable;                                                                // 0x02B1 (size: 0x1)
    bool bBroken;                                                                     // 0x02B2 (size: 0x1)
    bool bSelfSufficient;                                                             // 0x02B3 (size: 0x1)
    bool bPrerequisiteRequired;                                                       // 0x02B4 (size: 0x1)
    bool bInteractionActive;                                                          // 0x02B5 (size: 0x1)
    bool bFirstPlay;                                                                  // 0x02B6 (size: 0x1)
    FGuid Guid;                                                                       // 0x02B8 (size: 0x10)

    bool Toggle();
    void SetUnbreakable(const bool bInUnbreakable);
    void SetSelfSufficient(const bool bInSelfSufficient);
    void SetPrerequisiteRequired(const bool bInPrerequisiteRequired);
    void SetInteractionActive(const bool bInInteractionActive);
    void SetEnabled(const bool bInEnabled);
    void SetBroken(const bool bInBroken);
    void PauseSkeletalComponent(const bool bPause);
    void OnNightStart();
    void OnFirstPlay();
    void OnEmissionStart();
    void OnEmissionFinish();
    void OnDayStart();
    void OnAnimationEventTriggered();
    bool IsUnbreakable();
    bool IsSelfSufficient();
    bool IsPrerequisiteRequired();
    bool IsInteractionActive();
    bool IsEnabled();
    bool IsBroken();
}; // Size: 0x2E8

class AInteractableStunVolume : public AInteractableObject
{
    class UStaticMeshComponent* RootMesh;                                             // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* CollisionMesh;                                        // 0x02F0 (size: 0x8)
    class UGSCNavModifierComponent* SpaceRestrictorComponent;                         // 0x02F8 (size: 0x8)
    class USignalSenderComponent* MonitorActivationSignalSender;                      // 0x0300 (size: 0x8)
    class USignalSenderComponent* ObjectActivationSignalSender;                       // 0x0308 (size: 0x8)
    class USignalSenderComponent* MonitorDeactivationSignalSender;                    // 0x0310 (size: 0x8)
    class USignalSenderComponent* ObjectDeactivationSignalSender;                     // 0x0318 (size: 0x8)
    class USignalSenderComponent* MonitorDestructionSignalSender;                     // 0x0320 (size: 0x8)
    class USignalReceiverComponent* VolumeActivationSignalReceiver;                   // 0x0328 (size: 0x8)
    TArray<FVector> TargetPoints;                                                     // 0x0330 (size: 0x10)
    float CollisionRadius;                                                            // 0x0340 (size: 0x4)
    float CollisionHeight;                                                            // 0x0344 (size: 0x4)
    float StunDuration;                                                               // 0x0348 (size: 0x4)
    float CooldownDuration;                                                           // 0x034C (size: 0x4)

    void OnVolumeForceDeactivated(class UObject* InObject);
    void OnVolumeDeactivated(class UObject* InObject);
    void OnVolumeActivated(class UObject* InObject);
    void OnCooldownEnded(class UObject* InObject);
    void ActivateVolume(class UObject* InObject);
}; // Size: 0x360

class AKorshunovFightVolumeForEffects : public AVolumeForEffects
{
    float ActiveTime;                                                                 // 0x0360 (size: 0x4)
    TSoftObjectPtr<UAkAudioEvent> VolumeSFX;                                          // 0x0368 (size: 0x30)
    class UNiagaraComponent* VolumeVFX;                                               // 0x0398 (size: 0x8)

}; // Size: 0x3A8

class ALairNavModifierVolume : public ASystemicNavModifierVolume
{
}; // Size: 0x308

class ALavaLampAnomaly : public AAnomaly
{
    class UAkAudioEvent* CollisionPlayEvent;                                          // 0x0398 (size: 0x8)
    class UAkAudioEvent* CollisionStopEvent;                                          // 0x03A0 (size: 0x8)
    class UAkAudioEvent* ClotEvent;                                                   // 0x03A8 (size: 0x8)
    float ParticleLifetimeAfterCollision;                                             // 0x03B0 (size: 0x4)
    float ClotEventDelay;                                                             // 0x03B4 (size: 0x4)
    class USphereComponent* OverlapSphereComponent;                                   // 0x03B8 (size: 0x8)
    class UNiagaraComponent* ActivationParticle;                                      // 0x03C0 (size: 0x8)
    class UMaterialInterface* ClotDecalMaterial;                                      // 0x03C8 (size: 0x8)

    void OnLavaStaticObjectCollision(FVector Location, FVector NormalDirection, float Radius);
    void OnLavaCollision(const FBasicParticleData& BasicParticleData);
    void OnFollowPositionChanged(FVector FollowPosition);
}; // Size: 0x688

class ALightningBallAnomaly : public AAnomaly
{
    class USphereComponent* OverlapDamageComponent;                                   // 0x0398 (size: 0x8)
    class UNiagaraComponent* IdleParticle;                                            // 0x03A0 (size: 0x8)
    class UFXSystemAsset* ExplosionParticle;                                          // 0x03A8 (size: 0x8)
    class UNiagaraSystem* AnomalyEatingParticle;                                      // 0x03B0 (size: 0x8)
    class UAkAudioEvent* FeastAudioEvent;                                             // 0x03B8 (size: 0x8)
    class UAkSwitchValue* FeastIdleSwitch;                                            // 0x03C0 (size: 0x8)
    class UAkSwitchValue* FeastEndSwitch;                                             // 0x03C8 (size: 0x8)
    class UAkAudioEvent* AnomalyExplosionAudioEvent;                                  // 0x03D0 (size: 0x8)
    class ULightningBallNavigationComponent* AnomalyNavigationComponent;              // 0x03D8 (size: 0x8)

}; // Size: 0x458

class AMainMenuGameMode : public AStalker2BaseGameMode
{
}; // Size: 0x340

class AMapCapture : public ASceneCapture2D
{
    FIntVector2 StartCaptureLocation;                                                 // 0x02B0 (size: 0x8)
    FIntVector2 EyeAdaptationTile;                                                    // 0x02B8 (size: 0x8)
    FIntVector2 DebugCaptureLocation;                                                 // 0x02C0 (size: 0x8)
    FCaptureConfig CaptureConfig;                                                     // 0x02C8 (size: 0x48)
    class UTextureRenderTarget2D* RenderTarget;                                       // 0x0310 (size: 0x8)

}; // Size: 0x340

class AMapSetupParams : public AActor
{
    bool bDisableLightingManager;                                                     // 0x0298 (size: 0x1)
    bool bDisableReflectionManager;                                                   // 0x0299 (size: 0x1)

}; // Size: 0x2A0

class AMistAnomaly : public AUIDActor_MistAnomaly
{
    TArray<FEffectPrototypeSID> PlayerEffectSIDs;                                     // 0x02A8 (size: 0x10)
    float WeatherSpeedFactor;                                                         // 0x02B8 (size: 0x4)
    FGuid Guid;                                                                       // 0x02BC (size: 0x10)
    class UCapsuleComponent* CapsuleComponent;                                        // 0x02D0 (size: 0x8)
    class UCapsuleComponent* SaveCapsuleComponent;                                    // 0x02D8 (size: 0x8)

    void SetTeleportationEnabled(const bool InbTeleportationEnabled);
    void OnSaveBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
    void OnPlayerTeleport();
    void OnPlayerExit();
    void OnPlayerEnter();
    void OnAnomalyEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex);
    void OnAnomalyBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0x2F8

class AModelCharacter : public ACharacter
{
}; // Size: 0x640

class AMovementPathBuilderTestingActor : public ANavigationTestingActor
{
    EPathBuilderPathType PathType;                                                    // 0x03B8 (size: 0x4)
    float MaxPathLength;                                                              // 0x03BC (size: 0x4)
    TArray<FVelocityDebug> Velocities;                                                // 0x03C0 (size: 0x10)
    uint64 DesirableVelocitiesMask;                                                   // 0x03D0 (size: 0x8)
    bool bDetailedDrawing;                                                            // 0x03D8 (size: 0x1)
    bool bShowCircles;                                                                // 0x03D9 (size: 0x1)
    bool bShowKeyPoints;                                                              // 0x03DA (size: 0x1)
    bool bShowPathSectors;                                                            // 0x03DB (size: 0x1)
    bool bShowPathFilteredSectors;                                                    // 0x03DC (size: 0x1)
    float CircleRadius;                                                               // 0x03E0 (size: 0x4)
    float RotationAngle;                                                              // 0x03E4 (size: 0x4)
    bool bClockwise;                                                                  // 0x03E8 (size: 0x1)
    bool bSmoothPath;                                                                 // 0x03E9 (size: 0x1)
    bool bCorridor;                                                                   // 0x03EA (size: 0x1)
    bool bShowNavmeshSegmentTest;                                                     // 0x03EB (size: 0x1)
    FDebugRestrictionSettings RestrictionSettings;                                    // 0x03F0 (size: 0x20)
    class AActor* ExpensiveActor;                                                     // 0x0410 (size: 0x8)
    uint32 DrawPathIndex;                                                             // 0x0418 (size: 0x4)
    bool bShowSampled;                                                                // 0x041C (size: 0x1)
    float AdvancedPathfindingTime;                                                    // 0x0500 (size: 0x4)

}; // Size: 0x508

class AMusicVolume : public AVolume
{
    EMusicState MusicState;                                                           // 0x02D8 (size: 0x1)
    FName RegionSIDGlobalVariable;                                                    // 0x02DC (size: 0x8)
    TSoftObjectPtr<UAkSwitchValue> AmbientStateMusicSwitch;                           // 0x02E8 (size: 0x30)

}; // Size: 0x318

class ANavRebuildVolume : public AVolume
{
}; // Size: 0x2D8

class AObj : public AModelCharacter
{
    class UItemAppearanceComponent* ItemAppearanceComponent;                          // 0x0798 (size: 0x8)
    TArray<class UPhysicalAnimationComponent*> PhysicalAnimationComponents;           // 0x07A0 (size: 0x10)
    class UWetnessComponent* WetnessComponent;                                        // 0x07B0 (size: 0x8)
    class US2TargetMeleeSectorComponent* MeleeSectorComponent;                        // 0x07B8 (size: 0x8)
    TArray<FHitBlocker> HitBlockers;                                                  // 0x07C8 (size: 0x10)
    class UMovementComponentExt* MovementComponentExt;                                // 0x07D8 (size: 0x8)
    class UPhysicalAnimationComponent* PhysicalAnimationComponent;                    // 0x07E0 (size: 0x8)
    class UObjWaterContactController* WaterContactController;                         // 0x07E8 (size: 0x8)
    class ULaserSightComponent* LaserSightComponent;                                  // 0x07F0 (size: 0x8)
    class UCurveVector* FallingDamageCurve;                                           // 0x07F8 (size: 0x8)
    class UAkAudioEvent* FallingDamageSound;                                          // 0x0800 (size: 0x8)
    class UAkSwitchValue* FallingDamageEasySoundSwitch;                               // 0x0808 (size: 0x8)
    class UAkSwitchValue* FallingDamageMediumSoundSwitch;                             // 0x0810 (size: 0x8)
    class UAkSwitchValue* FallingDamageHighSoundSwitch;                               // 0x0818 (size: 0x8)
    FCollisionProfileName CutsceneCollisionProfile;                                   // 0x0820 (size: 0x8)
    class UDataTable* AkComponentRetargetTable;                                       // 0x0840 (size: 0x8)
    class UAttackComponent* AttackComponent;                                          // 0x0898 (size: 0x8)
    class UHeadFlashlightComponent* FlashlightComponent;                              // 0x08A0 (size: 0x8)
    class UAkComponent* AkAudioRootComponent;                                         // 0x08A8 (size: 0x8)
    class UAkComponent* AkAudioHeadComponent;                                         // 0x08B0 (size: 0x8)
    class UAkComponent* AkAudioPelvisComponent;                                       // 0x08B8 (size: 0x8)
    class UAkComponent* AkAudioLeftHandComponent;                                     // 0x08C0 (size: 0x8)
    class UAkComponent* AkAudioRightHandComponent;                                    // 0x08C8 (size: 0x8)
    class UAkComponent* AkAudioComponent;                                             // 0x08D0 (size: 0x8)
    class UNiagaraComponent* ShootingParticle;                                        // 0x08D8 (size: 0x8)
    class UNiagaraComponent* PostShootingParticle;                                    // 0x08E0 (size: 0x8)

    void StartCutsceneSequence(const class AActor* SynchronizationPoint, const FRotator OverrideRotation);
    void OnObjTurnedToTarget__DelegateSignature(bool bSuccess);
    void OnHit(class AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    void EndCutsceneSequence();
}; // Size: 0x920

class AOldSchoolTrigger : public AActor
{
    class UBoxComponent* Trigger;                                                     // 0x0298 (size: 0x8)
    float DistanceToHinge;                                                            // 0x02A0 (size: 0x4)
    float HalfAngleToHinge;                                                           // 0x02A4 (size: 0x4)
    class ADoorView* Door;                                                            // 0x02A8 (size: 0x8)

    void OnTriggerEndOverlap(const class UPrimitiveComponent* OverlappedComponent, const class AActor* OtherActor, const class UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex);
    void OnTriggerBeginOverlap(const class UPrimitiveComponent* Comp, const class AActor* OtherActor, const class UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0x2B0

class APC : public AObj
{
    TSoftObjectPtr<UPlayerItemsSounds> PlayerItemSounds;                              // 0x0938 (size: 0x30)
    class UMouthComponent* Mouth;                                                     // 0x0980 (size: 0x8)
    class UDamageVoiceoverComponent* DamageVoiceover;                                 // 0x0988 (size: 0x8)
    class UAimAssistComponent* AimAssistComponent;                                    // 0x0990 (size: 0x8)
    class UAimProcessorComponent* AimProcessor;                                       // 0x0998 (size: 0x8)
    class USkeletalMeshComponent* ShadowMeshComponent;                                // 0x09A0 (size: 0x8)
    class UGeigerCounterComponent* GeigerCounterComponent;                            // 0x09A8 (size: 0x8)
    class UPsyNoiseSFXComponent* PsyNoiseSFXComponent;                                // 0x09B0 (size: 0x8)
    class UAnomalyDetectorComponent* AnomalyDetectorComponent;                        // 0x09B8 (size: 0x8)
    class UPlayerOpticScopeComponent* PlayerOpticScopeComponent;                      // 0x09C0 (size: 0x8)
    class UPlayerInteractionComponent* PlayerInteractionComponent;                    // 0x09C8 (size: 0x8)
    class UStealthKillComponent* StealthKillComponent;                                // 0x09D0 (size: 0x8)
    class AActor* StealthKillTarget;                                                  // 0x09D8 (size: 0x8)
    class USearchpointDetectorComponent* SearchpointDetectorComponent;                // 0x09E0 (size: 0x8)
    class UGAPlayerComponent* GAComponent;                                            // 0x09E8 (size: 0x8)
    bool InteractionFromBluerint;                                                     // 0x0F20 (size: 0x1)
    double MinObjectInteractImpulse;                                                  // 0x0F28 (size: 0x8)
    double MaxObjectInteractImpulse;                                                  // 0x0F30 (size: 0x8)
    double ObjectInteractDelay;                                                       // 0x0F38 (size: 0x8)
    double MinSpeedToObjectResponse;                                                  // 0x0F40 (size: 0x8)
    float NormalReapeatFPS;                                                           // 0x0F48 (size: 0x4)
    float VelocityMultimplier;                                                        // 0x0F4C (size: 0x4)
    class UCurveFloat* ObjectPenetrationToImpulseCurve;                               // 0x0F50 (size: 0x8)
    class UCurveFloat* ObjectMassToImpulseCurve;                                      // 0x0F58 (size: 0x8)
    class UCurveFloat* ObjectMassToMaxImpulseCurve;                                   // 0x0F60 (size: 0x8)
    class UCurveFloat* ReduceDamageFromNPCCurve;                                      // 0x0F68 (size: 0x8)
    EPlayerMovementType AllowedMovementActions;                                       // 0x0F78 (size: 0x1)
    class UAkRtpc* PoppyFieldSleepinessParameter;                                     // 0x1038 (size: 0x8)

    void SetLegsIKEnabled(const bool bEnabled);
    void SetInteractionTarget(const class UInteractionComponent* Target);
    void PlayInteractionOutAnimation();
    void PlayInteractionInAnimation();
    class UInteractionComponent* GetInteractionTarget();
}; // Size: 0x10F0

class APSYAnomaly : public AAnomaly
{
    class USphereComponent* CollisionComponent;                                       // 0x0398 (size: 0x8)
    class UNiagaraComponent* PSYParticle;                                             // 0x03A0 (size: 0x8)

}; // Size: 0x3B0

class APSYControllerAnomaly : public APSYAnomaly
{
}; // Size: 0x3B0

class APSYEmitterAnomaly : public APSYAnomaly
{
}; // Size: 0x3B0

class APillowAnomaly : public AAnomaly
{
    class UStaticMeshComponent* CollisionMesh;                                        // 0x0398 (size: 0x8)
    class UNiagaraComponent* IdleParticle;                                            // 0x03A0 (size: 0x8)
    class UNiagaraSystem* InteractParticle;                                           // 0x03A8 (size: 0x8)
    TMap<class EPillowAnomalyBiomeType, class TSoftObjectPtr<UNiagaraSystem>> BiomeParticles; // 0x03B0 (size: 0x50)

}; // Size: 0x410

class APlayerContextualAction : public AActor
{
    class USingleClickComponent* SingleClickComponent;                                // 0x0298 (size: 0x8)
    float CameraPitchMin;                                                             // 0x02A0 (size: 0x4)
    float CameraPitchMax;                                                             // 0x02A4 (size: 0x4)
    float CameraYawMin;                                                               // 0x02A8 (size: 0x4)
    float CameraYawMax;                                                               // 0x02AC (size: 0x4)

    void ActionStart();
    void ActionEnd();
}; // Size: 0x2B8

class APlayerStash : public AInteractableObject
{
    class USkeletalMeshComponent* SkeletalMeshComponent;                              // 0x02E8 (size: 0x8)
    class UAnimatedItemContainerInteractionComponent* InteractionComponent;           // 0x02F0 (size: 0x8)

}; // Size: 0x2F8

class APoltergeist : public AAgent
{
    class UNiagaraComponent* BodyParticles;                                           // 0x0AA8 (size: 0x8)
    class USphereComponent* BodyCollision;                                            // 0x0AB0 (size: 0x8)
    class UNiagaraComponent* DeathParticles;                                          // 0x0AB8 (size: 0x8)
    FVector MeshSpawnOffset;                                                          // 0x0AC0 (size: 0x18)
    TMap<EDamageType, float> DeathImpulseScaleMap;                                    // 0x0AD8 (size: 0x50)
    float DeathBodyVisibilityDelay;                                                   // 0x0B28 (size: 0x4)

}; // Size: 0xB50

class APoppyField : public AUIDActor_PoppyFieldAnomaly
{
}; // Size: 0x2A8

class AProjectile : public AActor
{
    class USphereComponent* CollisionComp;                                            // 0x02A0 (size: 0x8)
    class UAkAudioEvent* FlybySound;                                                  // 0x0478 (size: 0x8)

    void OnOverlap(const FHitResult& Hit);
}; // Size: 0x4A0

class APsyBeaconView : public AInteractableObject
{
}; // Size: 0x2F0

class AQuestVFXActor : public AActor
{
    FGuid Guid;                                                                       // 0x02A0 (size: 0x10)

}; // Size: 0x2B0

class ARadiationNavModifierVolume : public ASystemicNavModifierVolume
{
    ERadiationPreset RadiationPreset;                                                 // 0x0308 (size: 0x1)

}; // Size: 0x310

class ARatSwarm : public AAgent
{
    class UAkRtpc* RatUnitsAmount;                                                    // 0x0AA8 (size: 0x8)
    class UAkRtpc* LocomotionUnitsAmount;                                             // 0x0AB0 (size: 0x8)
    class UAkRtpc* DiedUnitsAmount;                                                   // 0x0AB8 (size: 0x8)
    class UAkAudioEvent* RatVoice;                                                    // 0x0AC0 (size: 0x8)
    class UAkAudioEvent* RatLocomotionVoice;                                          // 0x0AC8 (size: 0x8)
    class UAkSwitchValue* AlertState;                                                 // 0x0AD0 (size: 0x8)
    class UAkSwitchValue* AttackState;                                                // 0x0AD8 (size: 0x8)
    class UAkSwitchValue* EatingState;                                                // 0x0AE0 (size: 0x8)
    class UAkSwitchValue* IdleState;                                                  // 0x0AE8 (size: 0x8)
    class UAISwarmComponent* RatsMeshComponent;                                       // 0x0AF0 (size: 0x8)

}; // Size: 0xB00

class ARazorAnomaly : public AAnomaly
{
    class UStaticMeshComponent* RootComponentPtr;                                     // 0x0398 (size: 0x8)
    TSoftObjectPtr<UAkRtpc> RazorIntensityRTPCPtr;                                    // 0x03A0 (size: 0x30)
    class UStaticMeshComponent* CollisionMeshPtr;                                     // 0x03D0 (size: 0x8)
    class UFXSystemAsset* DamageVFX;                                                  // 0x03D8 (size: 0x8)
    class UFXSystemAsset* AIDamageVFX;                                                // 0x03E0 (size: 0x8)
    class UFXSystemAsset* ProjectileDestructionVFX;                                   // 0x03E8 (size: 0x8)
    class UFXSystemAsset* ThrowableDestructionVFX;                                    // 0x03F0 (size: 0x8)
    class UNiagaraComponent* RazorActiveVFX;                                          // 0x03F8 (size: 0x8)
    class UAkRtpc* RazorIntensityRTPC;                                                // 0x0400 (size: 0x8)

}; // Size: 0x420

class AReferenceHolderBase : public AActor
{
    TMap<class FSoftObjectPath, class UClass*> ObjectsReferences;                     // 0x0298 (size: 0x50)
    FSoftObjectPath AssetPath;                                                        // 0x02E8 (size: 0x20)

    void ValidateGatheredReferences();
    void UpdateObjectReferences();
    void CheckAssetReferences();
}; // Size: 0x310

class ASafeZoneNavModifierVolume : public ASystemicNavModifierVolume
{
}; // Size: 0x308

class AScriptedNavModifierVolume : public AGSCNavModifierVolume
{
    TSubclassOf<class UNavArea_Scripted> TargetNavArea;                               // 0x0308 (size: 0x8)

    void Deactivate();
    void Activate();
}; // Size: 0x310

class ASelectionVolumeBase : public AActor
{
    class UShapeComponent* CollisionComponent;                                        // 0x0298 (size: 0x8)

}; // Size: 0x2A0

class ASelectionVolumeBox : public ASelectionVolumeBase
{
}; // Size: 0x2A0

class ASelectionVolumeSphere : public ASelectionVolumeBase
{
}; // Size: 0x2A0

class AShelterNavModifierVolume : public ASystemicNavModifierVolume
{
}; // Size: 0x308

class ASimpleVolumeForEffects : public AVolume
{
    class UApplyEffectComponent* EffectComponent;                                     // 0x02D8 (size: 0x8)
    bool bRemoveEffectOnEndOverlap;                                                   // 0x02E0 (size: 0x1)

}; // Size: 0x2E8

class ASoapBubbleAnomaly : public AAnomaly
{
    class UAkAudioEvent* SoapBubbleDamage;                                            // 0x03A0 (size: 0x8)
    class UAkAudioEvent* SoapBubbleDestroy;                                           // 0x03A8 (size: 0x8)
    class UAkAudioEvent* SoapBubbleParticleDestroy;                                   // 0x03B0 (size: 0x8)
    class UFXSystemAsset* SoapBubbleParticleExplosion;                                // 0x03B8 (size: 0x8)
    class UMaterialInterface* SoapBubbleParticleMaterial;                             // 0x03C0 (size: 0x8)
    class UStaticMesh* SoapBubbleParticleMesh;                                        // 0x03C8 (size: 0x8)
    class UStaticMeshComponent* SoapBubble;                                           // 0x03D0 (size: 0x8)
    class USphereComponent* SoapBubbleBoundSphere;                                    // 0x03D8 (size: 0x8)
    class UNiagaraComponent* SoapBubbleExplosionParticle;                             // 0x03E0 (size: 0x8)
    class UCurveFloat* InterpolationCurve;                                            // 0x03E8 (size: 0x8)

    void OnActorCollided(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0x400

class AStalker2BaseGameMode : public AGameModeBase
{
}; // Size: 0x340

class AStalker2GameMode : public AStalker2BaseGameMode
{
}; // Size: 0x350

class AStalker2HUD : public AHUD
{
}; // Size: 0x388

class AStalker2MoviePipelineGameMode : public AStalker2GameMode
{
}; // Size: 0x350

class AStalker2PlayerController : public APlayerController
{
    float RelevanceFOVADD;                                                            // 0x0C70 (size: 0x4)
    float GuaranteedRelevanceDistance;                                                // 0x0C74 (size: 0x4)

}; // Size: 0xC80

class AStalker2Spectator : public ASpectatorPawn
{
}; // Size: 0x348

class AStaticEnvironmentParticleActor : public AActor
{
    class UStaticEnvironmentNiagaraComponent* EnvironmentParticleComponent;           // 0x0298 (size: 0x8)

}; // Size: 0x2A0

class AStaticMeshBatcher : public AActor
{
    TArray<class UInstancedStaticMeshComponent*> BatchedISM;                          // 0x0298 (size: 0x10)

}; // Size: 0x2C8

class AStrandGenerator : public AActor
{
    class USplineComponent* Spline;                                                   // 0x0298 (size: 0x8)
    FSplinePointMeshData MeshData;                                                    // 0x02A0 (size: 0x68)
    TMap<int32, FSplinePointMeshData> MeshOverrides;                                  // 0x0308 (size: 0x50)
    bool bUseStartSeparator;                                                          // 0x0358 (size: 0x1)
    bool bUseStopSeparator;                                                           // 0x0359 (size: 0x1)
    bool bUseAutoAdjusting;                                                           // 0x035A (size: 0x1)
    bool bOnlyRightAngle;                                                             // 0x035B (size: 0x1)

    FStrandFinalData GetFinalStrandData();
}; // Size: 0x360

class AStreamingDistanceOverridingVolume : public AVolume
{
    class AStreamingDistanceOverridingVolume* MainVolume;                             // 0x02D8 (size: 0x8)
    EOverrideLifeGridVisionRadius OverrideLifeGridVisionRadiusPC;                     // 0x02E0 (size: 0x1)
    EOverrideLifeGridVisionRadius OverrideLifeGridVisionRadiusXBox;                   // 0x02E1 (size: 0x1)
    TSet<FGridInfo> OverridingStreamingGridsInfosPC;                                  // 0x02E8 (size: 0x50)
    TSet<FGridInfo> OverridingStreamingGridsInfosXBox;                                // 0x0338 (size: 0x50)
    TSet<FName> EnabledDataLayers;                                                    // 0x0388 (size: 0x50)
    TSet<FName> DisabledDataLayers;                                                   // 0x03D8 (size: 0x50)
    TSet<FActorDataLayer> EnabledDynamicDataLayers;                                   // 0x0428 (size: 0x50)
    TSet<FActorDataLayer> DisabledDynamicDataLayers;                                  // 0x0478 (size: 0x50)
    TSet<AStreamingGatewayVolume*> EntryTriggers;                                     // 0x04C8 (size: 0x50)
    TSet<AStreamingGatewayVolume*> ExitTriggers;                                      // 0x0518 (size: 0x50)
    double OverridingTime;                                                            // 0x0568 (size: 0x8)
    int32 VolumePriority;                                                             // 0x0570 (size: 0x4)
    TSet<UDataLayerInstance*> OverridedDataLayerInstances;                            // 0x0578 (size: 0x50)
    float FallbackStreamingBlockRestoreRate;                                          // 0x05C8 (size: 0x4)
    float OverridingDistantTreeCullDistanceScale;                                     // 0x05E8 (size: 0x4)

    void UpdateStreamingConfiguration();
    void OnTriggerOverlapped(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0x5F0

class AStreamingGatewayVolume : public AVolume
{
}; // Size: 0x2D8

class AStrelokBossfightController : public AActor
{
    class UBoxComponent* ControllerVolume;                                            // 0x0298 (size: 0x8)
    class USignalReceiverComponent* SignalReceiverComponent;                          // 0x02A0 (size: 0x8)
    int32 AnomalySpawnNum;                                                            // 0x02A8 (size: 0x4)
    float AnomalySpawnDelay;                                                          // 0x02AC (size: 0x4)
    TMap<class EAnomalyElementType, class UNiagaraSystem*> AnomalyElementVFXMap;      // 0x02B0 (size: 0x50)
    TArray<TLazyObjectPtr<AActor>> AnomalySpawners;                                   // 0x0300 (size: 0x10)
    TSet<FString> AnomalyFieldsSIDs;                                                  // 0x0310 (size: 0x50)

    void SpawnAnomalyField();
}; // Size: 0x388

class ASystemicNavModifierVolume : public AGSCNavModifierVolume
{
}; // Size: 0x308

class ATacticalPathfindingTest : public AActor
{
    double CoversExploreDistance;                                                     // 0x0298 (size: 0x8)
    double ExposedLengthBias;                                                         // 0x02A0 (size: 0x8)
    double ExposedLengthPower;                                                        // 0x02A8 (size: 0x8)
    double ConcealedLengthBias;                                                       // 0x02B0 (size: 0x8)
    double ConcealedLengthPower;                                                      // 0x02B8 (size: 0x8)
    bool bUseTacticalNavigation;                                                      // 0x02C0 (size: 0x1)
    EAgentType TestingAgentType;                                                      // 0x02C4 (size: 0x4)
    bool bUseSimplifiedCovers;                                                        // 0x02D8 (size: 0x1)

}; // Size: 0x2E0

class ATelekineticShield : public AActor
{
    class UStaticMeshComponent* MeshComponent;                                        // 0x02B8 (size: 0x8)
    class UNiagaraComponent* Particle;                                                // 0x02C0 (size: 0x8)
    class UNiagaraSystem* ShieldDestroyedParticle;                                    // 0x02C8 (size: 0x8)
    class UNiagaraSystem* HitImpactParticle;                                          // 0x02D0 (size: 0x8)
    class UAkComponent* AkAudioComponent;                                             // 0x02D8 (size: 0x8)
    class UAkAudioEvent* ShieldDestroyedSound;                                        // 0x02E0 (size: 0x8)
    class UAkAudioEvent* ShieldSpawnedSound;                                          // 0x02E8 (size: 0x8)
    class UAkAudioEvent* ShieldImpactSound;                                           // 0x02F0 (size: 0x8)
    float Health;                                                                     // 0x02F8 (size: 0x4)
    float MovementSpeed;                                                              // 0x02FC (size: 0x4)
    float DistanceFromOwner;                                                          // 0x0300 (size: 0x4)
    float OwnerHeightOffset;                                                          // 0x0304 (size: 0x4)
    float ParticleIntensityChangeSpeed;                                               // 0x0308 (size: 0x4)
    float MaxLifetime;                                                                // 0x030C (size: 0x4)
    float SpawnShiftFraction;                                                         // 0x0310 (size: 0x4)

    void OnShieldDestroyedBP();
    void OnHitReceivedBP(FCommonHitArgs HitArgs);
    void OnDeathParticleFinished(class UNiagaraComponent* DeathVFXComponent);
    class AObj* GetOwnerActor();
}; // Size: 0x388

class ATeleport : public AActor
{
    class USceneComponent* DefaultRoot;                                               // 0x0298 (size: 0x8)
    class UBoxComponent* EnterPoint;                                                  // 0x02A0 (size: 0x8)
    class UNiagaraComponent* TeleportVFX;                                             // 0x02A8 (size: 0x8)
    class UNiagaraComponent* TeleportActivationVFX;                                   // 0x02B0 (size: 0x8)
    class UAkComponent* TeleportAudioComponent;                                       // 0x02B8 (size: 0x8)
    class USignalSenderComponent* PostTeleportSignalSender;                           // 0x02C0 (size: 0x8)
    TSoftObjectPtr<UAkAudioEvent> TeleportIdleEvent;                                  // 0x02C8 (size: 0x30)
    TSoftObjectPtr<UAkAudioEvent> TeleportInEvent;                                    // 0x02F8 (size: 0x30)
    TSoftObjectPtr<UAkAudioEvent> TeleportOutEvent;                                   // 0x0328 (size: 0x30)
    FPrototypeSID TeleportPrototypeSID;                                               // 0x0358 (size: 0x40)
    FTransform EndPoint;                                                              // 0x03A0 (size: 0x60)
    bool bSafeTeleport;                                                               // 0x0400 (size: 0x1)
    float ActiveParticleDuration;                                                     // 0x0404 (size: 0x4)

    void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0x480

class ATeleportPoint : public AActor
{
    FString Name;                                                                     // 0x0298 (size: 0x10)
    class UBillboardComponent* SpriteComponent;                                       // 0x02A8 (size: 0x8)
    class UArrowComponent* ArrowComponent;                                            // 0x02B0 (size: 0x8)

}; // Size: 0x2B8

class ATopazScanner : public AInteractableObject
{
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x02E8 (size: 0x8)
    class UPrimitiveComponent* InvisibleScannerCollision;                             // 0x02F0 (size: 0x8)
    class UTopazSingleClickComponent* SingleClickComponent;                           // 0x02F8 (size: 0x8)
    class UTopazScannerComponent* ScannerComponent;                                   // 0x0300 (size: 0x8)
    FPrototypeSID RewardItemSID;                                                      // 0x0308 (size: 0x40)
    bool bStationary;                                                                 // 0x0348 (size: 0x1)
    FTopazScannerVFX InactiveVFX;                                                     // 0x0350 (size: 0xA0)
    FTopazScannerVFX ActiveVFX;                                                       // 0x03F0 (size: 0xA0)
    float SievertsCenterValue;                                                        // 0x0490 (size: 0x4)
    float SievertsDeviation;                                                          // 0x0494 (size: 0x4)
    float SievertsChangeFrequency;                                                    // 0x0498 (size: 0x4)
    bool bSuccessfulScanner;                                                          // 0x049C (size: 0x1)

    void OnStateChanged(const ETopazScannerState NewState);
    bool IsStationary();
}; // Size: 0x4C0

class AToxicCloudAnomaly : public AAnomaly
{
    class UStaticMeshComponent* CollisionMesh;                                        // 0x03D0 (size: 0x8)
    class UNiagaraComponent* CloudParticle;                                           // 0x03D8 (size: 0x8)
    class UNiagaraSystem* ImpactParticle;                                             // 0x03E0 (size: 0x8)
    class UHittableComponent* HittableComponent;                                      // 0x03E8 (size: 0x8)
    class UAkAudioEvent* ToxicCloudSoundEvent;                                        // 0x03F0 (size: 0x8)
    class UAkAudioEvent* AppearSoundEvent;                                            // 0x03F8 (size: 0x8)
    class UAkAudioEvent* DisappearSoundEvent;                                         // 0x0400 (size: 0x8)

}; // Size: 0x418

class AUIDActorOwnsModel : public AActor
{
}; // Size: 0x2A0

class AUIDActor_Anomaly : public AActor
{
}; // Size: 0x2A8

class AUIDActor_Bed : public AActor
{
}; // Size: 0x2A8

class AUIDActor_ContextualAction : public AUIDActorOwnsModel
{
}; // Size: 0x2A8

class AUIDActor_DestructibleObject : public AActor
{
}; // Size: 0x2A8

class AUIDActor_Door : public AActor
{
}; // Size: 0x2A8

class AUIDActor_FireBreathAnomaly : public AActor
{
}; // Size: 0x2A8

class AUIDActor_Grenade : public AUIDActorOwnsModel
{
}; // Size: 0x2A8

class AUIDActor_InteractableObject : public AActor
{
}; // Size: 0x2A8

class AUIDActor_ItemContainer : public AActor
{
}; // Size: 0x2A8

class AUIDActor_MistAnomaly : public AActor
{
}; // Size: 0x2A8

class AUIDActor_PoppyFieldAnomaly : public AActor
{
}; // Size: 0x2A8

class AUIDActor_VortexArchAnomaly : public AActor
{
}; // Size: 0x2A8

class AVerticalLadder : public AInteractableObject
{
    class UBoxComponent* ClimbZone;                                                   // 0x02F0 (size: 0x8)
    class UArrowComponent* ClimbStart;                                                // 0x02F8 (size: 0x8)
    class USceneComponent* FoldedLadderRoot;                                          // 0x0300 (size: 0x8)
    class UBoxComponent* FoldedLadderCollisionComponent;                              // 0x0308 (size: 0x8)
    class USingleClickComponent* SingleClickComponent;                                // 0x0310 (size: 0x8)
    class ULadderComponent* LadderComponent;                                          // 0x0318 (size: 0x8)
    class UImpulseComponent* ImpulseComponent;                                        // 0x0320 (size: 0x8)
    FVector2D CollisionExtend;                                                        // 0x0328 (size: 0x10)
    float CollisionHeightUpperExtend;                                                 // 0x0338 (size: 0x4)
    float LadderAccessAngle;                                                          // 0x033C (size: 0x4)
    int32 LadderHeight;                                                               // 0x0340 (size: 0x4)
    bool bAutoInteractTop;                                                            // 0x0344 (size: 0x1)
    bool bAutoInteractBottom;                                                         // 0x0345 (size: 0x1)
    bool bClimbingCollisionEnabled;                                                   // 0x0346 (size: 0x1)
    bool bMeshVisible;                                                                // 0x0347 (size: 0x1)
    ELadderType LadderType;                                                           // 0x0348 (size: 0x1)
    bool bFoldedLadder;                                                               // 0x0349 (size: 0x1)
    int32 FoldedLadderHeight;                                                         // 0x034C (size: 0x4)
    float FoldedLadderZLocation;                                                      // 0x0350 (size: 0x4)
    float FoldedLadderHorizontalOffset;                                               // 0x0354 (size: 0x4)
    float FoldedLadderPushImpulse;                                                    // 0x0358 (size: 0x4)
    FVector BottomSupportMeshOffset;                                                  // 0x0360 (size: 0x18)
    FVector TopSupportMeshOffset;                                                     // 0x0378 (size: 0x18)

    void ProtectMeshLock(const TEnumAsByte<ECollisionEnabled::Type> CollisionType);
    void OnUnfoldingStarted();
    void OnUnfoldingEnded();
    void OnLadderEnabled();
    void OnHiddenStateChanged();
    void OnClimbZoneEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex);
    void OnClimbZoneBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
    float GetClimbZoneHalfHeight();
}; // Size: 0x3D0

class AVolumeForEffects : public AVolume
{
    FGuid Guid;                                                                       // 0x0300 (size: 0x10)
    bool bSpawnDisabled;                                                              // 0x0310 (size: 0x1)
    TArray<FOverlapVolumeEffect> EffectsToApply;                                      // 0x0318 (size: 0x10)
    class USignalReceiverComponent* ActivateVolumeSignal;                             // 0x0348 (size: 0x8)
    class USignalReceiverComponent* DeactivateVolumeSignal;                           // 0x0350 (size: 0x8)

    void SetDisabled(const bool bDisabled);
    void DeactivateDelegateHandle(class UObject* DataObject);
    void ActivateDelegateHandle(class UObject* DataObject);
}; // Size: 0x360

class AVortexAnomaly : public AUIDActor_VortexArchAnomaly
{
    class UAkComponent* AudioComponent;                                               // 0x02B0 (size: 0x8)
    class UAkRtpc* VortexDistanceRTPC;                                                // 0x02B8 (size: 0x8)
    float MinPlayerDistanceToUpdateSound;                                             // 0x02C0 (size: 0x4)
    class USplineComponent* SplineComponent;                                          // 0x02C8 (size: 0x8)
    TArray<FVortexSplineDataPoint> VortexMovementData;                                // 0x02D0 (size: 0x10)
    class UStaticMeshComponent* RootMeshComponent;                                    // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* VortexCollisionComponent;                             // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* VortexSafeZoneComponent;                              // 0x02F0 (size: 0x8)
    float VortexHalfHeight;                                                           // 0x02F8 (size: 0x4)
    float VortexCollisionRadius;                                                      // 0x02FC (size: 0x4)
    float VortexSafeZoneRadius;                                                       // 0x0300 (size: 0x4)
    TArray<FEffectPrototypeSID> ObjectCollisionEffects;                               // 0x0308 (size: 0x10)
    FFloatInterval AllowedThrowAngleInterval;                                         // 0x0318 (size: 0x8)
    float ThrowInvulnerabilityDuration;                                               // 0x0320 (size: 0x4)
    float VortexOuterImpulse;                                                         // 0x0324 (size: 0x4)
    float VortexOuterLiftHeight;                                                      // 0x0328 (size: 0x4)
    float VortexOuterLiftHorizontalSpeed;                                             // 0x032C (size: 0x4)
    float VortexOuterLiftVerticalSpeed;                                               // 0x0330 (size: 0x4)
    float VortexOuterLiftMaxDuration;                                                 // 0x0334 (size: 0x4)
    float VortexInnerImpulse;                                                         // 0x0338 (size: 0x4)
    float VortexInnerLiftHeight;                                                      // 0x033C (size: 0x4)
    float VortexInnerLiftHorizontalSpeed;                                             // 0x0340 (size: 0x4)
    float VortexInnerLiftVerticalSpeed;                                               // 0x0344 (size: 0x4)
    float VortexInnerLiftMaxDuration;                                                 // 0x0348 (size: 0x4)
    float VortexSafeZoneLeaveTime;                                                    // 0x034C (size: 0x4)
    TArray<FEffectPrototypeSID> SafeZoneLeaveEffects;                                 // 0x0350 (size: 0x10)
    FPrototypeSID ArtifactSID;                                                        // 0x0360 (size: 0x40)
    float ArtifactHeight;                                                             // 0x03A0 (size: 0x4)
    bool bSpawnArtifactOnEmissionOnly;                                                // 0x03A4 (size: 0x1)
    float DudeSpawnDistance;                                                          // 0x03A8 (size: 0x4)
    float DudeSpawnHeight;                                                            // 0x03AC (size: 0x4)
    float DudeTimeToReachPlayer;                                                      // 0x03B0 (size: 0x4)
    float DudeTargetDistance;                                                         // 0x03B4 (size: 0x4)
    float VortexToPlayerDistForDudeSpawn;                                             // 0x03B8 (size: 0x4)
    float VortexToPlayerDistCheckFrequency;                                           // 0x03BC (size: 0x4)
    FPrototypeSID SpawnedObjSID;                                                      // 0x03C0 (size: 0x40)
    FPrototypeSID SpawnedCorpseSID;                                                   // 0x0400 (size: 0x40)
    class UAkAudioEvent* DudeAudioEvent;                                              // 0x0440 (size: 0x8)
    FGuid WeatherSelectionVolumeGuid;                                                 // 0x0448 (size: 0x10)
    class UMaterialParameterCollection* IndoorMPC;                                    // 0x0458 (size: 0x8)
    FGuid Guid;                                                                       // 0x0460 (size: 0x10)

    void OnVortexSafeZoneEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex);
    void OnVortexSafeZoneBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
    void OnVortexEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex);
    void OnVortexBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0x528

class AVortexMPCVolume : public AVolume
{
}; // Size: 0x2D8

class AWanderingLightInstance : public AActor
{
}; // Size: 0x298

class AWanderingLightsArchiAnomaly : public AActor
{
    FString ArtifactModelSID;                                                         // 0x02A0 (size: 0x10)
    float PlayerMaxVisibilityDistance;                                                // 0x02B0 (size: 0x4)
    bool bPlayerViewFOVOverride;                                                      // 0x02B4 (size: 0x1)
    float PlayerViewFOVDeg;                                                           // 0x02B8 (size: 0x4)
    TArray<FRuntimeFloatCurve> PlayerFlashlightIntensityScaleCurves;                  // 0x02C0 (size: 0x10)
    float AnomalyStartTime;                                                           // 0x02D0 (size: 0x4)
    float AnomalyEndTime;                                                             // 0x02D4 (size: 0x4)
    float InstanceVisibilityRadius;                                                   // 0x02D8 (size: 0x4)
    float InstanceVisibilityChangeDelay;                                              // 0x02DC (size: 0x4)
    float InstanceChemicalDamageRadius;                                               // 0x02E0 (size: 0x4)
    float InstanceChemicalDamagePerSecond;                                            // 0x02E4 (size: 0x4)
    bool bScaleChemicalDamageFromPenetration;                                         // 0x02E8 (size: 0x1)
    float InstanceOpacityChangeSpeed;                                                 // 0x02EC (size: 0x4)
    bool bRandomizeInstanceSpawnTime;                                                 // 0x02F0 (size: 0x1)
    float RandomizedSpawnTimeOffsetMax;                                               // 0x02F4 (size: 0x4)
    FRuntimeFloatCurve InstanceVerticalMovementCurve;                                 // 0x02F8 (size: 0x88)
    bool bSkipMovementDuringWakeUp;                                                   // 0x0380 (size: 0x1)
    bool bSkipMovementDuringShutDown;                                                 // 0x0381 (size: 0x1)
    float InstanceSpawnTime;                                                          // 0x0384 (size: 0x4)
    float InstanceBlendTime;                                                          // 0x0388 (size: 0x4)
    bool AutoUpdateInstanceData;                                                      // 0x038C (size: 0x1)
    bool StretchBoundsWithInstanceData;                                               // 0x038D (size: 0x1)
    bool ShowVFXInEditMode;                                                           // 0x038E (size: 0x1)
    FVector AnomalyBounds;                                                            // 0x0390 (size: 0x18)
    FVector BoundsMargin;                                                             // 0x03A8 (size: 0x18)
    TSoftObjectPtr<UNiagaraSystem> IdleEffect;                                        // 0x03C0 (size: 0x30)
    TSoftObjectPtr<UNiagaraSystem> InteractEffect;                                    // 0x03F0 (size: 0x30)
    TArray<FWLParticlesPropertyState> IdleStateVFXParameters;                         // 0x0420 (size: 0x10)
    TArray<FWLParticlesPropertyState> TargetedStateVFXParameters;                     // 0x0430 (size: 0x10)
    float TargetedStateVFXParametersDelay;                                            // 0x0440 (size: 0x4)
    TArray<FMaterialScalarDrivingProperties> MaterialCollectionsToDrive;              // 0x0448 (size: 0x10)
    float PostProcessBlendRadius;                                                     // 0x0458 (size: 0x4)
    float PostProcessPriority;                                                        // 0x045C (size: 0x4)
    FPostProcessSettings PostProcessSettings;                                         // 0x0460 (size: 0x720)
    TMap<class EWanderingLightsSimulationState, class UAkAudioEvent*> StateSFXEvents; // 0x0B80 (size: 0x50)
    TMap<class EWanderingLightsSimulationState, class UAkSwitchValue*> StateSFXSwitches; // 0x0BD0 (size: 0x50)
    TArray<FWanderingLightInstanceData> AnomalyInstances;                             // 0x0C20 (size: 0x10)
    FPrototypeSID PlayerPSYEffectInsideAnomalyBounds;                                 // 0x0C30 (size: 0x40)
    class UBoxComponent* BoxComponent;                                                // 0x0C70 (size: 0x8)
    FWLCylinderShapeParams CylinderShapeParams;                                       // 0x0F08 (size: 0x28)
    TArray<FVector> ArtifactSpawnLocations;                                           // 0x0F30 (size: 0x10)

    void CreateVFX(bool bEnable);
}; // Size: 0xFD0

class AWeatherController : public AActor
{
    float CurrentRainIntensity;                                                       // 0x02B0 (size: 0x4)
    float CurrentWetnessState;                                                        // 0x02B4 (size: 0x4)
    class USceneComponent* DefaultRoot;                                               // 0x0308 (size: 0x8)
    class UStaticMeshComponent* SkySphere;                                            // 0x0310 (size: 0x8)
    class UMaterialInstanceDynamic* SkySphereMID;                                     // 0x0318 (size: 0x8)
    class UDirectionalLightComponent* Sun;                                            // 0x0320 (size: 0x8)
    class USkyLightComponent* SkyLight;                                               // 0x0328 (size: 0x8)
    class USkyAtmosphereComponent* SkyAtmosphere;                                     // 0x0330 (size: 0x8)
    class UVolumetricCloudComponent* VolumetricCloud;                                 // 0x0338 (size: 0x8)
    class UMaterialInstanceDynamic* CloudsMID;                                        // 0x0340 (size: 0x8)
    class UExponentialHeightFogComponent* ExponentialHeightFog;                       // 0x0348 (size: 0x8)
    class UCurveLinearColor* SunPositionCurve;                                        // 0x0350 (size: 0x8)
    float GlobalVolumetricValue;                                                      // 0x0358 (size: 0x4)
    float LocalVolumetricValue;                                                       // 0x035C (size: 0x4)
    class UNiagaraComponent* Rain;                                                    // 0x0360 (size: 0x8)
    class UPostProcessComponent* PostProcess;                                         // 0x0368 (size: 0x8)
    class UMaterialParameterCollection* EnvironmentMPC;                               // 0x0370 (size: 0x8)
    class UMaterialParameterCollectionInstance* EnvironmentMPCInstance;               // 0x0378 (size: 0x8)
    class UAkRtpc* WetnessSoundParameter;                                             // 0x0380 (size: 0x8)
    class UAkRtpc* WindIntensitySoundParameter;                                       // 0x0388 (size: 0x8)
    class UAkAudioEvent* WeatherSound;                                                // 0x0390 (size: 0x8)
    class UAkRtpc* RainIntensitySoundParameter;                                       // 0x0398 (size: 0x8)
    class UAkRtpc* DaytimeSoundParameter;                                             // 0x03A0 (size: 0x8)
    class UAkRtpc* RazorWeatherFeedbackRTPC;                                          // 0x03A8 (size: 0x8)
    class UWeatherParameterNamesDataAsset* WeatherParameterNamesDataAsset;            // 0x03B0 (size: 0x8)
    TArray<TSoftObjectPtr<UWeatherPresetDataAsset>> WeatherPresets;                   // 0x03B8 (size: 0x10)
    class UMaterialInterface* VolumetricCloudMaterial;                                // 0x03C8 (size: 0x8)
    class UMaterialInterface* SkySphereMaterial;                                      // 0x03D0 (size: 0x8)
    float RemoveKeyTolerance;                                                         // 0x03D8 (size: 0x4)
    float SolarTime;                                                                  // 0x03DC (size: 0x4)
    float CurrentWeatherDuration;                                                     // 0x03E0 (size: 0x4)
    float RequestedWeatherDuration;                                                   // 0x03E4 (size: 0x4)
    float TransitionDuration;                                                         // 0x03E8 (size: 0x4)
    float WeatherTransitionTimeMultiplier;                                            // 0x03EC (size: 0x4)
    float WeatherChangeSpeed;                                                         // 0x03F0 (size: 0x4)
    EWeather SourceWeather;                                                           // 0x03F4 (size: 0x1)
    EWeather TargetWeather;                                                           // 0x03F5 (size: 0x1)
    TArray<FWeatherHistoryData> WeatherHistory;                                       // 0x03F8 (size: 0x10)
    float SkySphereEmissive;                                                          // 0x0434 (size: 0x4)
    FLinearColor SkySphereZenithColor;                                                // 0x0438 (size: 0x10)
    FLinearColor SkySphereHorizonColor;                                               // 0x0448 (size: 0x10)
    float StartSunRiseTime;                                                           // 0x0458 (size: 0x4)
    float EndSunRiseTime;                                                             // 0x045C (size: 0x4)
    float StartSunSetTime;                                                            // 0x0460 (size: 0x4)
    float EndSunSetTime;                                                              // 0x0464 (size: 0x4)
    float ShadowStepDaylight;                                                         // 0x0478 (size: 0x4)
    float ShadowStepMoonlight;                                                        // 0x047C (size: 0x4)
    float SimulationSpeed;                                                            // 0x0490 (size: 0x4)
    float SimulationDuration;                                                         // 0x0494 (size: 0x4)
    float CurrentSimulationDuration;                                                  // 0x0498 (size: 0x4)
    FPrototypeSID SelectionPrototypeSID;                                              // 0x04A0 (size: 0x40)
    float WindIntensity;                                                              // 0x04E0 (size: 0x4)
    float WaterWindNormalMultiplier;                                                  // 0x04E4 (size: 0x4)
    FVector2D CloudShift;                                                             // 0x04E8 (size: 0x10)
    float WaterShift;                                                                 // 0x04F8 (size: 0x4)
    float CloudShiftStep;                                                             // 0x04FC (size: 0x4)
    float WindDirectionChangeDelay;                                                   // 0x0500 (size: 0x4)
    float EmissionWindDirectionChangeDelay;                                           // 0x0504 (size: 0x4)
    float WindDirectionChangeMinAngle;                                                // 0x0508 (size: 0x4)
    float WindDirectionChangeMaxAngle;                                                // 0x050C (size: 0x4)
    float ShadowAmount;                                                               // 0x0514 (size: 0x4)
    float MoonOpacity;                                                                // 0x0518 (size: 0x4)
    float ColorPower;                                                                 // 0x051C (size: 0x4)
    class UWeatherPresetDataAsset* SourcePreset;                                      // 0x0520 (size: 0x8)
    class UWeatherPresetDataAsset* TargetPreset;                                      // 0x0528 (size: 0x8)
    FWind Wind;                                                                       // 0x0540 (size: 0x70)

}; // Size: 0x660

class AWorldMapScene : public AActor
{

    void SetScale(float InScale);
    void SetOffset(FVector2D InOffset);
    void SetNotSelectedAreaBrightness(float InBrightness);
    void SetMouseUV(FVector InUV);
    void SetCaptureEveryFrame(bool bIsEnabled);
}; // Size: 0x298

class IActorInteractionDataInterface : public IInterface
{
}; // Size: 0x28

class IBossInterface : public IInterface
{

    void OnStunEnd();
    void OnStunBegin();
    void OnDashAbilityEnd();
    void OnDashAbilityBegin();
}; // Size: 0x28

class IBusVolumeDataReceiver : public IInterface
{
}; // Size: 0x28

class ICustomDamageHandleComponent : public IInterface
{
}; // Size: 0x28

class IGameplayEventListener : public IInterface
{

    void OnGameplayEvent(const FGameplayTag& EventTag, const class UGameplayEventData* EventData);
}; // Size: 0x28

class IGuidInterface : public IInterface
{

    FGuid GetGUID();
}; // Size: 0x28

class IHitReceiver : public IInterface
{
}; // Size: 0x28

class IInteractPaintInterface : public IInterface
{

    void OnPaintSettingsChanged(const bool bInteractPaint);
}; // Size: 0x28

class INavigationSlotInterface : public IInterface
{
}; // Size: 0x28

class IObjBase : public IInterface
{
}; // Size: 0x28

class IPhysible : public IInterface
{
}; // Size: 0x28

class IPlayerWeaponAnimCollectionInterface : public IInterface
{
}; // Size: 0x28

class IRestorableComponent : public IInterface
{
}; // Size: 0x28

class ISaveableComponent : public IInterface
{
}; // Size: 0x28

class IUpscalingSettingElementInterface : public IInterface
{
}; // Size: 0x28

class IVideoWidget : public IInterface
{
}; // Size: 0x28

class IWeaponDisplayInterface : public IInterface
{
}; // Size: 0x28

class IWildlifeBehaviourInterface : public IInterface
{

    void OnEmissionWeatherStarted();
}; // Size: 0x28

class UAIConstraintSubsystem : public UWorldSubsystem
{
}; // Size: 0x40

class UAICoreSubsystem : public UWorldSubsystem
{
}; // Size: 0x618

class UAIDebugSubsystem : public UGameInstanceSubsystem
{
}; // Size: 0x30

class UAIFeatureManager : public UBaseManager
{
}; // Size: 0x80

class UAIFlashlightUseManager : public UBaseManager
{
}; // Size: 0x100

class UAILuminanceManager : public UBaseManager
{
}; // Size: 0x90

class UAISwarmComponent : public USceneComponent
{
    FVector SoundLocation;                                                            // 0x02B8 (size: 0x18)
    float LocomotionSoundRadius;                                                      // 0x02D0 (size: 0x4)
    float VoiceSoundRadius;                                                           // 0x02D4 (size: 0x4)
    int32 MaxInstancesInSwarm;                                                        // 0x0318 (size: 0x4)
    float FlockRadius;                                                                // 0x031C (size: 0x4)
    float CellSize;                                                                   // 0x0320 (size: 0x4)
    float WallPadding;                                                                // 0x0324 (size: 0x4)
    float SimulationGridPadding;                                                      // 0x0328 (size: 0x4)
    float MovementVariationRange;                                                     // 0x032C (size: 0x4)
    int32 SwarmBoundsCellCountClamp;                                                  // 0x0330 (size: 0x4)
    int32 MaxAttackingInstances;                                                      // 0x0334 (size: 0x4)
    float AttackTimeout;                                                              // 0x0338 (size: 0x4)
    float InstanceCollisionRadius;                                                    // 0x033C (size: 0x4)
    float HeavyProjectileDamageThreashold;                                            // 0x0340 (size: 0x4)
    FName MaterialVariantPropertyName;                                                // 0x0344 (size: 0x8)
    int32 MaxTextureVariants;                                                         // 0x034C (size: 0x4)
    int32 VisualsSeed;                                                                // 0x0350 (size: 0x4)
    FVector2D InstanceScaleRange;                                                     // 0x0358 (size: 0x10)
    class UMaterialInterface* MeshMaterial;                                           // 0x0368 (size: 0x8)
    class UStaticMesh* StaticMesh;                                                    // 0x0370 (size: 0x8)
    class UInstancedStaticMeshComponent* SwarmInstancedMesh;                          // 0x0378 (size: 0x8)
    class UVATAnimationsConfig* VATAnimationsConfig;                                  // 0x0380 (size: 0x8)
    TMap<class EDamageAffectorType, class FSwarmDamageHandleImpact> DamageImpactConfig; // 0x0388 (size: 0x50)
    TMap<class ESwarmInstanceStates, class FSwarmInstanceSimulationConfig> SwarmConfigurations; // 0x03D8 (size: 0x50)

    void Simulate(const float DeltaTime);
    void SetDamageTarget(const class AActor* Target, const float OffsetToGroundLevel, const float EngageRadius);
    void OnConstruction(const FTransform& Transform, const float SwarmHealth);
    TArray<FName> GetVATAnimationNames();
}; // Size: 0x1150

class UAITickComponent : public UActorComponent
{
}; // Size: 0xA0

class UAITickManager : public UBaseTickableManager
{
}; // Size: 0xA8

class UAIUpdateDecisionAsyncManager : public UBaseTickableManager
{
}; // Size: 0x1E8

class UAIVisionUpdateSubsystem : public UBaseManager
{
}; // Size: 0x178

class UALifeDirector : public UBaseTickableManager
{
}; // Size: 0x168

class UALifePOISubsystem : public UTickableWorldSubsystem
{
}; // Size: 0x100

class UALifePopulationManager : public UBaseTickableManager
{
}; // Size: 0x110

class UAbilityEventData : public UGameplayEventData
{

    FName GetActivationTag();
    EAbility GetAbilityType();
}; // Size: 0x38

class UAbstractProgressBar : public UWidgetBase
{
    bool bEnableStyleManager;                                                         // 0x0278 (size: 0x1)
    float ProgressValue;                                                              // 0x027C (size: 0x4)
    FName ProgressStyleId;                                                            // 0x0280 (size: 0x8)

    void SetProgressValue(float InProgress);
}; // Size: 0x288

class UAccessibilitySettingsWidget : public USettingsPage
{
    class USettingElementSwitcher* ColorBlindness;                                    // 0x0290 (size: 0x8)

}; // Size: 0x298

class UAchievementManager : public UBaseManager
{
    TMap<class FString, class FUserAchievements> UsersToProgress;                     // 0x0080 (size: 0x50)
    FUserAchievements DefaultUserAchievements;                                        // 0x00D0 (size: 0x50)

}; // Size: 0x138

class UAchievementTracker : public UObject
{
}; // Size: 0x38

class UAchievementTracker_ArchiHoarder : public UAchievementTracker_ArtifactBaseHoarder
{
}; // Size: 0x90

class UAchievementTracker_ArtiHoarder : public UAchievementTracker_ArtifactBaseHoarder
{
}; // Size: 0x90

class UAchievementTracker_ArtifactBaseHoarder : public UAchievementTracker_HoarderBase
{
}; // Size: 0x90

class UAchievementTracker_BlueHoarder : public UAchievementTracker_HoarderBase
{
}; // Size: 0x90

class UAchievementTracker_Bouncy : public UAchievementTracker
{
}; // Size: 0x48

class UAchievementTracker_BreakEquipment : public UAchievementTracker
{
}; // Size: 0x40

class UAchievementTracker_CanOpener : public UAchievementTracker
{
}; // Size: 0x50

class UAchievementTracker_CatchingUp : public UAchievementTracker
{
}; // Size: 0x40

class UAchievementTracker_ChimeraRun : public UAchievementTracker
{
}; // Size: 0x98

class UAchievementTracker_CouponsToBurn : public UAchievementTracker
{
}; // Size: 0x40

class UAchievementTracker_Debug : public UAchievementTracker
{
}; // Size: 0x40

class UAchievementTracker_Demoman : public UAchievementTracker
{
}; // Size: 0x40

class UAchievementTracker_Discovery : public UAchievementTracker
{
}; // Size: 0x90

class UAchievementTracker_DoHeadshots : public UAchievementTracker
{
}; // Size: 0x40

class UAchievementTracker_DoStealthKills : public UAchievementTracker
{
}; // Size: 0x40

class UAchievementTracker_DrunkMaster : public UAchievementTracker
{
}; // Size: 0x48

class UAchievementTracker_EatFoodSet : public UAchievementTracker
{
}; // Size: 0xF0

class UAchievementTracker_FinishSquad : public UAchievementTracker
{
}; // Size: 0x48

class UAchievementTracker_Gunsmith : public UAchievementTracker
{
}; // Size: 0x40

class UAchievementTracker_HeadshotStreak : public UAchievementTracker
{
}; // Size: 0x70

class UAchievementTracker_HoarderBase : public UAchievementTracker
{
}; // Size: 0x90

class UAchievementTracker_Lockpick : public UAchievementTracker
{
}; // Size: 0x40

class UAchievementTracker_LonerShooter : public UAchievementTracker
{
}; // Size: 0x48

class UAchievementTracker_MerryGoRound : public UAchievementTracker
{
}; // Size: 0x40

class UAchievementTracker_MutantHunter : public UAchievementTracker
{
}; // Size: 0x90

class UAchievementTracker_NoObstacleTooBig : public UAchievementTracker
{
}; // Size: 0x40

class UAchievementTracker_PerfectBarter : public UAchievementTracker
{
}; // Size: 0x50

class UAchievementTracker_PurchaseUpgrade : public UAchievementTracker
{
}; // Size: 0x40

class UAchievementTracker_RoyalFlush : public UAchievementTracker
{
}; // Size: 0x60

class UAchievementTracker_SitNearBonfire : public UAchievementTracker
{
}; // Size: 0x40

class UAchievementTracker_SneakyClearLair : public UAchievementTracker
{
}; // Size: 0x40

class UAchievementTracker_UseDifferentWeapons : public UAchievementTracker
{
}; // Size: 0x98

class UAchievementTracker_WipedOut : public UAchievementTracker
{
}; // Size: 0x58

class UActionBlockerConditionBase : public UObject
{

    bool CanTrigger();
}; // Size: 0x28

class UActionMimicButton : public UWidgetBase
{
    bool bInitializeAutomatically;                                                    // 0x0278 (size: 0x1)
    FActionMimicSettings MimicSettings;                                               // 0x027C (size: 0x10)
    class UButton* ButtonElement;                                                     // 0x0290 (size: 0x8)
    class UInputAction* InputAction;                                                  // 0x0298 (size: 0x8)
    class UInputTrigger* InputTrigger;                                                // 0x02A0 (size: 0x8)

    void OnMouseButtonReleased();
    void OnMouseButtonPressed();
}; // Size: 0x2B0

class UAddNeedEffect : public UContextualActionEffect
{
    EContextualActionNeeds ContextualActionNeedForAdd;                                // 0x0028 (size: 0x4)

}; // Size: 0x30

class UAgentBehaviourEventData : public UGameplayEventData
{

    EGoalType GetGoalType();
}; // Size: 0x30

class UAimAssistComponent : public UActorComponent
{
    class UCurveFloat* SnappingTimeCurve;                                             // 0x0160 (size: 0x8)

}; // Size: 0x1C0

class UAimIPU : public UBehaviorBasedIPU
{
}; // Size: 0x58

class UAimProcessorComponent : public UActorComponent
{
}; // Size: 0xB0

class UAmmoWidget : public UChildViewBase
{
    class UTextBlock* AmmoCount;                                                      // 0x0278 (size: 0x8)
    class UTextBlock* AmmoCountMax;                                                   // 0x0280 (size: 0x8)
    class UTextBlock* Divider;                                                        // 0x0288 (size: 0x8)
    class UTextBlock* CaliberText;                                                    // 0x0290 (size: 0x8)
    class UImageWidget* AmmoIcon;                                                     // 0x0298 (size: 0x8)
    class UHorizontalBox* AmmoCounter;                                                // 0x02A0 (size: 0x8)
    class UHorizontalBox* FireTypeCounter;                                            // 0x02A8 (size: 0x8)
    class UVerticalBox* AmmoTypeList;                                                 // 0x02B0 (size: 0x8)
    class UFireTypeWidget* GrenadeLauncherIcon;                                       // 0x02B8 (size: 0x8)
    class UImage* GrenadeLauncherDivider;                                             // 0x02C0 (size: 0x8)
    class UWidgetAnimation* AnimAmmoHide;                                             // 0x02C8 (size: 0x8)
    class UWidgetAnimation* AnimAmmoShow;                                             // 0x02D0 (size: 0x8)
    class UAmmoWidgetSettingsAsset* AmmoWidgetSettings;                               // 0x02D8 (size: 0x8)
    class UInventoryNew* InventoryNew;                                                // 0x02E8 (size: 0x8)
    class UTradeView* TradeView;                                                      // 0x02F0 (size: 0x8)
    TArray<class UFireTypeWidget*> FireTypeWidgets;                                   // 0x0318 (size: 0x10)

}; // Size: 0x3A0

class UAmmoWidgetSettingsAsset : public UDataAsset
{
    float MinAmmoCount;                                                               // 0x0030 (size: 0x4)
    TMap<class EFireType, class UTexture*> FireIcons;                                 // 0x0038 (size: 0x50)
    FLinearColor AmmoTypeDotsActiveColor;                                             // 0x0088 (size: 0x10)
    FLinearColor AmmoTypeDotsUnactiveColor;                                           // 0x0098 (size: 0x10)
    float AnimAmmoHideSpeed;                                                          // 0x00A8 (size: 0x4)
    float AnimAmmoShowSpeed;                                                          // 0x00AC (size: 0x4)
    FLinearColor AnimAmmoColor;                                                       // 0x00B0 (size: 0x10)

}; // Size: 0xC0

class UAnalyticsManager : public UBaseManager
{
}; // Size: 0x278

class UAnimInstanceBase : public UAnimInstance
{
    TWeakObjectPtr<class AObj> Owner;                                                 // 0x0398 (size: 0x8)
    TWeakObjectPtr<class USkeletalMeshComponent> SkeletalMeshComponent;               // 0x03A0 (size: 0x8)
    class UAnimSequence* DummyAnimation;                                              // 0x03A8 (size: 0x8)
    UClass* DummyBlueprint;                                                           // 0x03B0 (size: 0x8)

}; // Size: 0x400

class UAnimInstanceCodelock : public UAnimInstanceBase
{
    class UPlayerCodelockAnimCollection* CodelockAnimCollection;                      // 0x0400 (size: 0x8)

}; // Size: 0x410

class UAnimInstanceContextualFace : public UAnimInstanceBase
{
    class USkeletalMeshComponent* HumanBody;                                          // 0x0400 (size: 0x8)

}; // Size: 0x410

class UAnimInstanceFace : public UAnimInstanceBase
{
    FAnimHumanStateData StateData;                                                    // 0x0400 (size: 0x38)
    FAnimHumanFaceData FaceData;                                                      // 0x0438 (size: 0x220)
    FAnimWoundedData WoundedData;                                                     // 0x0658 (size: 0x48)
    FAnimSleepData SleepData;                                                         // 0x06A0 (size: 0x1)
    FAnimCutsceneData CutsceneData;                                                   // 0x06A4 (size: 0x8)

}; // Size: 0x6B0

class UAnimInstanceHuman : public UAnimInstanceBase
{
    FAnimHumanWeaponData WeaponData;                                                  // 0x0400 (size: 0x38)
    FAnimHitData HitData;                                                             // 0x0438 (size: 0x138)
    FAnimWoundedData WoundedData;                                                     // 0x0570 (size: 0x48)
    FAnimKnockDownData KnockDownData;                                                 // 0x05B8 (size: 0x2)
    FAnimHumanCollectionsData CollectionsData;                                        // 0x05C0 (size: 0x128)
    FAnimHumanStateData StateData;                                                    // 0x06E8 (size: 0x38)
    FAnimTwoHandsIKData HandsIKData;                                                  // 0x0720 (size: 0x78)
    FAnimHumanFaceData FaceData;                                                      // 0x0798 (size: 0x220)
    FAnimHumanLookAtData LookAtData;                                                  // 0x09B8 (size: 0x1B0)
    FAnimHumanDialogData DialogData;                                                  // 0x0B68 (size: 0x78)
    FAnimPoseSearchLocomotionData PoseSearchLocomotionData;                           // 0x0BE0 (size: 0x1D0)
    FAnimPhysicalData PhysicalData;                                                   // 0x0DB0 (size: 0x3D8)
    FTwoLegIKData LegsData;                                                           // 0x1188 (size: 0x28)
    FAnimCutsceneData CutsceneData;                                                   // 0x11B0 (size: 0x8)
    class UAnimSequenceBase* LastGestureAnimation;                                    // 0x11B8 (size: 0x8)
    FAnimAbilityData AbilityData;                                                     // 0x11C0 (size: 0x18)

}; // Size: 0x11E0

class UAnimInstanceHumanFirearm : public UAnimInstanceBase
{
    class UHumanFirearmAnimCollection* WeaponAnimCollection;                          // 0x0400 (size: 0x8)
    FSoftObjectPath WeaponAnimCollectionAsset;                                        // 0x0408 (size: 0x20)
    class UHumanFirearmAnimCollection* ZombieWeaponAnimCollection;                    // 0x0428 (size: 0x8)
    FSoftObjectPath ZombieWeaponAnimCollectionAsset;                                  // 0x0430 (size: 0x20)
    FAnimHumanWeaponConfig WeaponConfig;                                              // 0x0450 (size: 0x20)
    FAnimHumanWeaponConfig RelaxedWeaponConfig;                                       // 0x0470 (size: 0x20)
    FAnimHumanAimingData AimingData;                                                  // 0x0490 (size: 0x1)
    FAnimPoseSearchLocomotionData PoseSearchLocomotionData;                           // 0x04A0 (size: 0x1D0)
    bool bIsZombie;                                                                   // 0x0670 (size: 0x1)
    bool bUsingSmartCoverAnimPose;                                                    // 0x0671 (size: 0x1)
    ESmartCoverType SmartCoverType;                                                   // 0x0672 (size: 0x1)

}; // Size: 0x690

class UAnimInstanceItem : public UAnimInstanceBase
{
    class UItemAnimCollection* ItemAnimCollection;                                    // 0x0400 (size: 0x8)

}; // Size: 0x410

class UAnimInstanceMutant : public UAnimInstanceBase
{
    FAnimHitData HitData;                                                             // 0x0400 (size: 0x138)
    FAnimMutantStateData StateData;                                                   // 0x0538 (size: 0x18)
    FAnimMutantCollectionsData CollectionData;                                        // 0x0550 (size: 0x8)
    FAnimPoseSearchLocomotionData PoseSearchLocomotionData;                           // 0x0560 (size: 0x1D0)
    FAnimPhysicalData PhysicalData;                                                   // 0x0730 (size: 0x3D8)
    FTwoLegIKData LegsData;                                                           // 0x0B08 (size: 0x28)
    FAnimAbilityData AbilityData;                                                     // 0x0B30 (size: 0x18)
    FLookAtMutantData LookAtData;                                                     // 0x0B48 (size: 0x20)

}; // Size: 0xB70

class UAnimInstancePlayer : public UAnimInstanceBase
{
    FAnimLocomotionData LocomotionData;                                               // 0x0400 (size: 0x130)
    FAnimPlayerWeaponData WeaponData;                                                 // 0x0530 (size: 0x78)
    FAnimPlayerCameraData CameraData;                                                 // 0x05B0 (size: 0x90)
    FAnimPlayerTransitionData TransitionData;                                         // 0x0640 (size: 0x70)
    FAnimPlayerStateData StateData;                                                   // 0x06B0 (size: 0x3C)
    FAnimPlayerCollectionsData CollectionData;                                        // 0x06F0 (size: 0x328)
    FAnimTwoHandsIKData HandsIKData;                                                  // 0x0A18 (size: 0x78)
    FTwoLegIKData LegsIKData;                                                         // 0x0A90 (size: 0x28)
    FAnimPlayerIdleSwayData IdleSwayData;                                             // 0x0AB8 (size: 0xF0)
    FAnimPlayerClimbingData ClimbingData;                                             // 0x0BA8 (size: 0x130)
    FAnimPlayerWeaponSwingData WeaponSwingData;                                       // 0x0CD8 (size: 0x80)
    FAnimPlayerWeaponInertiaData WeaponInertiaData;                                   // 0x0D58 (size: 0x98)
    FAnimPlayerWeaponPushbackData WeaponPushbackData;                                 // 0x0DF0 (size: 0x80)
    FAnimPlayerDetectorData DetectorData;                                             // 0x0E70 (size: 0x128)
    FAnimHandItemData HandItemData;                                                   // 0x0F98 (size: 0x138)
    FAnimPlayerMaterialData MaterialData;                                             // 0x10D0 (size: 0x8)
    FAnimPlayerLookAtData LookAtData;                                                 // 0x10D8 (size: 0xD0)
    FAnimPlayerAutoCoverData AutoCoverData;                                           // 0x11A8 (size: 0x88)
    FAnimPlayerHitData HitData;                                                       // 0x1230 (size: 0x80)
    FAnimPlayerGuitarData GuitarData;                                                 // 0x12B0 (size: 0x24)
    FAnimPlayerDodgeData DodgeData;                                                   // 0x12D8 (size: 0x68)
    FAnimPlayerDialogData DialogData;                                                 // 0x1340 (size: 0x1)
    FAnimPlayerUnfocusableTargetData AnimPlayerUnfocusableTargetData;                 // 0x1341 (size: 0x1)
    FAnimPlayerVaultingData VaultingData;                                             // 0x1348 (size: 0xB8)
    FAnimPlayerShadowData ShadowData;                                                 // 0x1400 (size: 0x30)
    FAnimPlayerStealthData StealthData;                                               // 0x1430 (size: 0x20)
    FAnimCutsceneData CutsceneData;                                                   // 0x1450 (size: 0x8)

    void AnimNotify_InteractionEvent();
}; // Size: 0x1470

class UAnimInstancePlayerDetector : public UAnimInstanceBase
{
    class UPlayerDetectorAnimCollection* DetectorAnimCollection;                      // 0x0400 (size: 0x8)

}; // Size: 0x410

class UAnimInstancePlayerFirearm : public UAnimInstancePlayerWeaponBase
{
    class UPlayerFirearmAnimCollection* WeaponAnimCollection;                         // 0x0428 (size: 0x8)
    FAnimPlayerAimingData AimingData;                                                 // 0x0430 (size: 0x18)
    FAnimPlayerFirearmData FirearmData;                                               // 0x0448 (size: 0x1C)

}; // Size: 0x470

class UAnimInstancePlayerInjector : public UAnimInstanceBase
{
    FInjectorAnimations InjectorAnimations;                                           // 0x0400 (size: 0x10)

}; // Size: 0x410

class UAnimInstancePlayerKnife : public UAnimInstancePlayerWeaponBase
{
    class UPlayerKnifeAnimCollection* WeaponAnimCollection;                           // 0x0428 (size: 0x8)
    FAnimPlayerStealthData StealthData;                                               // 0x0430 (size: 0x20)

}; // Size: 0x450

class UAnimInstancePlayerShadow : public UAnimInstanceBase
{
    FAnimPlayerShadowData ShadowData;                                                 // 0x0400 (size: 0x30)
    FAnimPlayerStateData StateData;                                                   // 0x0430 (size: 0x3C)

}; // Size: 0x470

class UAnimInstancePlayerThrowable : public UAnimInstancePlayerWeaponBase
{
    class UPlayerThrowableItemAnimCollection* WeaponAnimCollection;                   // 0x0428 (size: 0x8)
    FAnimPlayerAimingData AimingData;                                                 // 0x0430 (size: 0x18)

}; // Size: 0x450

class UAnimInstancePlayerWeaponAttach : public UAnimInstanceBase
{
    class UWeaponAttachAnimCollection* AttachAnimCollection;                          // 0x0400 (size: 0x8)
    FAnimPlayerFirearmData FirearmData;                                               // 0x0408 (size: 0x1C)
    FAnimPlayerAimingData AimingData;                                                 // 0x0424 (size: 0x18)

}; // Size: 0x440

class UAnimInstancePlayerWeaponBase : public UAnimInstanceBase
{
    FAnimPlayerBaseWeaponData BaseData;                                               // 0x0400 (size: 0x28)

}; // Size: 0x430

class UAnimInstanceReplicateMesh : public UAnimInstance
{
    class USkeletalMeshComponent* SkeletalMeshComponent;                              // 0x0368 (size: 0x8)

}; // Size: 0x370

class UAnimInstanceSyncPoint : public UAnimInstance
{
}; // Size: 0x440

class UAnimInstanceTestFace : public UAnimInstanceFace
{
    bool bUseBlendShapeAnimations;                                                    // 0x06B0 (size: 0x1)

}; // Size: 0x6C0

class UAnimInstanceValve : public UAnimInstanceBase
{
    FAnimValveData ValveData;                                                         // 0x0400 (size: 0x1)

    void SetValveState(const EValveState ValveState);
}; // Size: 0x410

class UAnimNotifyBase : public UAnimNotify
{
    ENotifyTriggerType NotifyTriggerType;                                             // 0x0038 (size: 0x1)

}; // Size: 0x40

class UAnimNotifyState_ApplyDurationalEffectContextualAction : public UAnimNotifyState
{
    TArray<FModifyVFXValue> ModifyVFXAttachmentsValue;                                // 0x0030 (size: 0x10)

}; // Size: 0x40

class UAnimNotifyState_AttachItemInteractAction : public UAnimNotifyState
{
    EAttachItemType AttachItemType;                                                   // 0x0030 (size: 0x1)
    FBoneReference BoneReference;                                                     // 0x0034 (size: 0x10)
    int32 RequiredItemIndex;                                                          // 0x0044 (size: 0x4)
    class UStreamableRenderAsset* MeshToAttach;                                       // 0x0048 (size: 0x8)
    class UMeshComponent* AttachedMesh;                                               // 0x0050 (size: 0x8)

}; // Size: 0x68

class UAnimNotifyState_Attack : public UAnimNotifyState
{
}; // Size: 0x30

class UAnimNotifyState_BoundsScale : public UAnimNotifyState
{
    float BoundsScale;                                                                // 0x0030 (size: 0x4)

}; // Size: 0x38

class UAnimNotifyState_DisableDialogContextualAction : public UAnimNotifyState
{
}; // Size: 0x30

class UAnimNotifyState_FOVBlend : public UAnimNotifyState
{
    bool bIsBlendIn;                                                                  // 0x0030 (size: 0x1)
    EAlphaBlendOption BlendOption;                                                    // 0x0031 (size: 0x1)
    class UCurveFloat* CustomCurve;                                                   // 0x0038 (size: 0x8)
    bool bShouldBlendWeaponInHands;                                                   // 0x0040 (size: 0x1)

}; // Size: 0x50

class UAnimNotifyState_ForceReloadingEnd : public UAnimNotifyState
{
    bool IsUnloading;                                                                 // 0x0030 (size: 0x1)

}; // Size: 0x38

class UAnimNotifyState_ForceWarpActorRotation : public UAnimNotifyState
{
    FName WarpTargetName;                                                             // 0x0038 (size: 0x8)
    bool bShouldExcludeWarpTargetAfterComplete;                                       // 0x0040 (size: 0x1)

}; // Size: 0x48

class UAnimNotifyState_LookAt : public UAnimNotifyState
{
    EAttractionPointType AttractionPointType;                                         // 0x0030 (size: 0x1)
    bool bLookAtPlayer;                                                               // 0x0031 (size: 0x1)
    FName LookAtPlaceholderQuestGuid;                                                 // 0x0034 (size: 0x8)
    FName LookAtActorFName;                                                           // 0x003C (size: 0x8)
    FVector TargetLocation;                                                           // 0x0048 (size: 0x18)
    FName BoneName;                                                                   // 0x0060 (size: 0x8)
    float ReactionTime;                                                               // 0x0068 (size: 0x4)
    int32 Priority;                                                                   // 0x006C (size: 0x4)
    TEnumAsByte<ECollisionChannel> CollisionChannel;                                  // 0x0070 (size: 0x1)
    EApplyRestrictionType ApplyRestrictionType;                                       // 0x0071 (size: 0x1)
    TMap<class ERotationPartType, class FBodyPartRestriction> HorizontalRestrictions; // 0x0078 (size: 0x50)
    TMap<class ERotationPartType, class FBodyPartRestriction> VerticalRestrictions;   // 0x00C8 (size: 0x50)

}; // Size: 0x118

class UAnimNotifyState_MotionAudioEnveloper : public UAnimNotifyState
{
    class UAkAudioEvent* PlayAkEvent;                                                 // 0x0030 (size: 0x8)
    class UAkAudioEvent* StopAkEvent;                                                 // 0x0038 (size: 0x8)
    class UAkRtpc* MotionSpeedRTPC;                                                   // 0x0040 (size: 0x8)
    FName BoneName;                                                                   // 0x0048 (size: 0x8)
    float MinBoneVelocity;                                                            // 0x0050 (size: 0x4)
    float MaxBoneVelocity;                                                            // 0x0054 (size: 0x4)
    int32 InterpolationTime;                                                          // 0x0058 (size: 0x4)
    bool bShowBoneVelocityInfo;                                                       // 0x005C (size: 0x1)
    class UAkComponent* AttachedAudioComponent;                                       // 0x0060 (size: 0x8)

}; // Size: 0x90

class UAnimNotifyState_PreciseRootMotion : public UAnimNotifyState
{
    float LoopTimeCompareTolerance;                                                   // 0x0070 (size: 0x4)

}; // Size: 0x78

class UAnimNotifyState_SpawnParticleTimeline : public UAnimNotifyState
{
    class UFXSystemAsset* ParticlePFX;                                                // 0x0030 (size: 0x8)
    FName BoneToSpawnOnName;                                                          // 0x0038 (size: 0x8)
    bool bIsAttachToBone;                                                             // 0x0040 (size: 0x1)

}; // Size: 0x48

class UAnimNotifyState_StandToRelaxIdle : public UAnimNotifyState
{
}; // Size: 0x30

class UAnimNotifyState_ThrowGrenade : public UAnimNotify_GSCPlayMontageNotifyWindow
{
    FName BoneName;                                                                   // 0x0038 (size: 0x8)

}; // Size: 0x40

class UAnimNotify_AIAnimationAction : public UAnimNotifyBase
{
    EAIAnimationAction AnimationAction;                                               // 0x0040 (size: 0x1)

}; // Size: 0x48

class UAnimNotify_AnyFootOnGround : public UAnimNotify
{
    EFootType Foot;                                                                   // 0x0038 (size: 0x1)
    FName SocketName;                                                                 // 0x003C (size: 0x8)
    FName ToeSocketName;                                                              // 0x0044 (size: 0x8)
    bool bAttachedParticle;                                                           // 0x004C (size: 0x1)
    FVector LocationOffset;                                                           // 0x0050 (size: 0x18)
    FRotator RotationOffset;                                                          // 0x0068 (size: 0x18)
    FVector Scale;                                                                    // 0x0080 (size: 0x18)

}; // Size: 0x98

class UAnimNotify_AttachItem : public UAnimNotifyBase
{
    EAttachAction AttachAction;                                                       // 0x0040 (size: 0x1)
    bool bForceBindedHandsLookVertical;                                               // 0x0041 (size: 0x1)
    bool bShouldOverwritePitch;                                                       // 0x0042 (size: 0x1)
    float PitchRotation;                                                              // 0x0044 (size: 0x4)
    FName SocketName;                                                                 // 0x0048 (size: 0x8)
    EAttachType AttachedItem;                                                         // 0x0050 (size: 0x1)
    FString BindedAttachSid;                                                          // 0x0058 (size: 0x10)
    class USkeletalMesh* AttachMesh;                                                  // 0x0068 (size: 0x8)

}; // Size: 0x70

class UAnimNotify_AttachItemContextualAction : public UAnimNotifyBase
{
    TArray<FContextualItemAttachment> ContextualItemAttachments;                      // 0x0040 (size: 0x10)

}; // Size: 0x50

class UAnimNotify_AttachNiagaraSystem : public UAnimNotify_PlayNiagaraEffect
{
    EParticleAction AttachAction;                                                     // 0x00D0 (size: 0x1)

}; // Size: 0xE0

class UAnimNotify_AttackHitDetection : public UAnimNotifyState
{
}; // Size: 0x30

class UAnimNotify_BedInteract : public UAnimNotifyBase
{
}; // Size: 0x40

class UAnimNotify_BlendToSection : public UAnimNotifyBase
{
    FName SectionName;                                                                // 0x0040 (size: 0x8)
    FAlphaBlend BlendOption;                                                          // 0x0048 (size: 0x30)

}; // Size: 0x78

class UAnimNotify_ChangeFaceMask : public UAnimNotifyBase
{
    EEmotionalFaceMasks FaceMask;                                                     // 0x0040 (size: 0x1)

}; // Size: 0x48

class UAnimNotify_ChangeWeaponIdle : public UAnimNotifyBase
{
    EWeaponIdleState WeaponIdle;                                                      // 0x0040 (size: 0x1)
    EShutterState NewShutterState;                                                    // 0x0041 (size: 0x1)
    int32 NewJamIndex;                                                                // 0x0044 (size: 0x4)
    EWeaponIdleType NewUnderbarrelState;                                              // 0x0048 (size: 0x1)
    EAnimationAimState NewAimState;                                                   // 0x0049 (size: 0x1)
    EWeaponCustomAdditionalIdle AdditionalType;                                       // 0x004A (size: 0x1)

}; // Size: 0x50

class UAnimNotify_ClimbingActions : public UAnimNotifyBase
{
    EAnimationType AnimationType;                                                     // 0x0040 (size: 0x1)

}; // Size: 0x48

class UAnimNotify_CodelockKeyPress : public UAnimNotifyBase
{
    ECodelockKeyType KeyType;                                                         // 0x0040 (size: 0x4)
    int32 CodeDigit;                                                                  // 0x0044 (size: 0x4)

}; // Size: 0x48

class UAnimNotify_ContextualSectionEnding : public UAnimNotifyBase
{
}; // Size: 0x40

class UAnimNotify_CopyNiagaraValueFromAnotherContextualAction : public UAnimNotifyBase
{
    FNiagaraValueCopyFromTo CopyFromTo;                                               // 0x0040 (size: 0x18)

}; // Size: 0x58

class UAnimNotify_DeathEnded : public UAnimNotifyBase
{
}; // Size: 0x40

class UAnimNotify_DetachItemContextualAction : public UAnimNotifyBase
{
    TArray<FContextualItemDetachment> ContextualItemAttachments;                      // 0x0040 (size: 0x10)

}; // Size: 0x50

class UAnimNotify_DialogAction : public UAnimNotifyBase
{
    ENotifyDialogAction NotifyDialogAction;                                           // 0x0040 (size: 0x1)

}; // Size: 0x48

class UAnimNotify_DragDeadBody : public UAnimNotifyBase
{
    EDragDeadBodyState DragDeadBodyState;                                             // 0x0040 (size: 0x1)

}; // Size: 0x48

class UAnimNotify_DragWeapon : public UAnimNotifyBase
{
    FInputRange DragImpulseRange;                                                     // 0x0040 (size: 0x8)

}; // Size: 0x48

class UAnimNotify_EjectMagazine : public UAnimNotifyBase
{
    float Lifetime;                                                                   // 0x0040 (size: 0x4)
    FVector InitialImpulse;                                                           // 0x0048 (size: 0x18)
    FName MagazineSocketName;                                                         // 0x0060 (size: 0x8)

}; // Size: 0x68

class UAnimNotify_EnableStateTagForDuration : public UAnimNotifyState
{
    EStateTag StateTag;                                                               // 0x0030 (size: 0x4)
    bool bDisableIfDied;                                                              // 0x0034 (size: 0x1)

}; // Size: 0x38

class UAnimNotify_EquipItemContextualAction : public UAnimNotifyBase
{
    FPrototypeSID ItemSID;                                                            // 0x0040 (size: 0x40)
    FBoneReference BoneToEquip;                                                       // 0x0080 (size: 0x10)
    bool bForceChangeItemInHand;                                                      // 0x0090 (size: 0x1)

}; // Size: 0xC0

class UAnimNotify_EquipWeaponContextualAction : public UAnimNotifyBase
{
    TArray<FContextualActionNotifyWeaponEquipData> ItemsToEquip;                      // 0x0040 (size: 0x10)
    bool bForceChangeItemInHand;                                                      // 0x0050 (size: 0x1)

}; // Size: 0x58

class UAnimNotify_FootIKState : public UAnimNotifyState
{
    bool bShouldAffectAllBones;                                                       // 0x0030 (size: 0x1)
    TArray<FBoneReference> AffectedBones;                                             // 0x0038 (size: 0x10)

}; // Size: 0x48

class UAnimNotify_ForceFeedback : public UAnimNotifyBase
{
    FGameplayTag FeedbackTag;                                                         // 0x0040 (size: 0x8)

}; // Size: 0x48

class UAnimNotify_GSCPlayMontageNotify : public UAnimNotify
{
    FGameplayTag NotifyTag;                                                           // 0x0038 (size: 0x8)

}; // Size: 0x40

class UAnimNotify_GSCPlayMontageNotifyWindow : public UAnimNotifyState
{
    FGameplayTag NotifyTag;                                                           // 0x0030 (size: 0x8)

}; // Size: 0x38

class UAnimNotify_GSCPoseSearchBlockTransition : public UAnimNotifyState_PoseSearchBlockTransition
{
}; // Size: 0x30

class UAnimNotify_GuitarAction : public UAnimNotifyBase
{
    ENotifyGuitarAction GuitarAction;                                                 // 0x0040 (size: 0x1)

}; // Size: 0x48

class UAnimNotify_HandIK : public UAnimNotifyBase
{
    EAnimationHands HandToApply;                                                      // 0x0040 (size: 0x1)
    bool bForceSetStartValue;                                                         // 0x0041 (size: 0x1)
    float StartValue;                                                                 // 0x0044 (size: 0x4)
    float EndValue;                                                                   // 0x0048 (size: 0x4)
    float BlendTime;                                                                  // 0x004C (size: 0x4)
    EAlphaBlendOption BlendOption;                                                    // 0x0050 (size: 0x1)

}; // Size: 0x58

class UAnimNotify_HandIKState : public UAnimNotifyState
{
    EAnimationHands HandToApply;                                                      // 0x0030 (size: 0x1)
    float StartValue;                                                                 // 0x0034 (size: 0x4)
    float EndValue;                                                                   // 0x0038 (size: 0x4)
    float BlendTime;                                                                  // 0x003C (size: 0x4)
    EAlphaBlendOption BlendOption;                                                    // 0x0040 (size: 0x1)

}; // Size: 0x48

class UAnimNotify_HealReceived : public UAnimNotifyBase
{
}; // Size: 0x40

class UAnimNotify_HideBones : public UAnimNotifyBase
{
    EBoneInteractionType BoneInteractionType;                                         // 0x0040 (size: 0x1)
    FName ParentBoneName;                                                             // 0x0044 (size: 0x8)
    FName ChildAttachName;                                                            // 0x004C (size: 0x8)
    bool bPropagateToChildren;                                                        // 0x0054 (size: 0x1)
    bool bHideBone;                                                                   // 0x0055 (size: 0x1)
    int32 AmmoCount;                                                                  // 0x0058 (size: 0x4)

}; // Size: 0x60

class UAnimNotify_InteractAction : public UAnimNotifyBase
{
    EAnimInteractAction InteractAction;                                               // 0x0040 (size: 0x1)

}; // Size: 0x48

class UAnimNotify_Jump : public UAnimNotifyBase
{
    EJumpState JumpState;                                                             // 0x0040 (size: 0x1)

}; // Size: 0x48

class UAnimNotify_LaunchDialogAnimation : public UAnimNotifyBase
{
    EDialogAnimationType DialogAnimationType;                                         // 0x0040 (size: 0x8)

}; // Size: 0x48

class UAnimNotify_LaunchVoiceOver : public UAnimNotifyBase
{
    FString VoiceOverSID;                                                             // 0x0040 (size: 0x10)
    bool bQuest;                                                                      // 0x0050 (size: 0x1)

    TArray<FString> GetVoiceoverSIDOptions();
}; // Size: 0x58

class UAnimNotify_LookAt : public UAnimNotifyBase
{
    ELookAtAction LookAtAction;                                                       // 0x0040 (size: 0x1)
    ELookAtOwnerState LookAtOwnerState;                                               // 0x0041 (size: 0x1)
    EAttractionPointType AttractionPointType;                                         // 0x0042 (size: 0x1)
    bool bLookAtPlayer;                                                               // 0x0043 (size: 0x1)
    FName LookAtPlaceholderQuestGuid;                                                 // 0x0044 (size: 0x8)
    FName LookAtActorFName;                                                           // 0x004C (size: 0x8)
    FVector TargetLocation;                                                           // 0x0058 (size: 0x18)
    FName BoneName;                                                                   // 0x0070 (size: 0x8)
    float ReactionTime;                                                               // 0x0078 (size: 0x4)
    int32 Priority;                                                                   // 0x007C (size: 0x4)
    TEnumAsByte<ECollisionChannel> CollisionChannel;                                  // 0x0080 (size: 0x1)
    EApplyRestrictionType ApplyRestrictionType;                                       // 0x0081 (size: 0x1)
    TMap<class ERotationPartType, class FBodyPartRestriction> HorizontalRestrictions; // 0x0088 (size: 0x50)
    TMap<class ERotationPartType, class FBodyPartRestriction> VerticalRestrictions;   // 0x00D8 (size: 0x50)

}; // Size: 0x128

class UAnimNotify_MakeAttack : public UAnimNotifyBase
{
    bool bInstantAttack;                                                              // 0x0040 (size: 0x1)

}; // Size: 0x48

class UAnimNotify_ParkourCameraRelease : public UAnimNotifyBase
{
}; // Size: 0x40

class UAnimNotify_ParkourFinalPosition : public UAnimNotifyBase
{
}; // Size: 0x40

class UAnimNotify_PlayAnimationOnAttachedItemContextualAction : public UAnimNotifyBase
{
    TArray<FPlayAnimationOnAttachedItemData> PlayAnimationOnAttachedItemData;         // 0x0040 (size: 0x10)

}; // Size: 0x50

class UAnimNotify_PlayFacialAnimationContextualAction : public UAnimNotifyBase
{
    TArray<FWeightedFacialAnimation> FacialAnimations;                                // 0x0040 (size: 0x10)

}; // Size: 0x50

class UAnimNotify_PlayInteractablesFX : public UAnimNotifyBase
{
    FName BoneName;                                                                   // 0x0040 (size: 0x8)
    FName CustomBoneName;                                                             // 0x0048 (size: 0x8)
    EInteractFXType InteractFXType;                                                   // 0x0050 (size: 0x4)

    TArray<FString> GetAvailableBones();
}; // Size: 0x58

class UAnimNotify_PlaySoundDependOnMaterialContextualAction : public UAnimNotifyBase
{
    class UAkAudioEvent* ImpactSound;                                                 // 0x0040 (size: 0x8)
    FBoneReference BoneReference;                                                     // 0x0048 (size: 0x10)
    FRotator TraceDirection;                                                          // 0x0058 (size: 0x18)
    float TraceLength;                                                                // 0x0070 (size: 0x4)

}; // Size: 0x78

class UAnimNotify_PlayerAction : public UAnimNotifyBase
{
    EPlayerActionResult PlayerActionResult;                                           // 0x0040 (size: 0x1)
    EActionType PlayerActionType;                                                     // 0x0041 (size: 0x1)
    EPlayerTriggerState PlayerTriggerToOverride;                                      // 0x0048 (size: 0x8)
    EActionType PlayerActionTypeToOverride;                                           // 0x0050 (size: 0x1)

}; // Size: 0x58

class UAnimNotify_PlayerActionTrigger : public UAnimNotifyBase
{
    EPlayerActionTriggerState TriggerNewState;                                        // 0x0040 (size: 0x1)
    EPlayerTriggerState ActionTrigger;                                                // 0x0048 (size: 0x8)

}; // Size: 0x50

class UAnimNotify_PlayerUIEvent : public UAnimNotifyBase
{
    EPlayerUIEvent EventType;                                                         // 0x0040 (size: 0x1)

}; // Size: 0x48

class UAnimNotify_RagdollAction : public UAnimNotifyBase
{
    ERagdollAction RagdollAction;                                                     // 0x0040 (size: 0x1)

}; // Size: 0x48

class UAnimNotify_ResetControlRotation : public UAnimNotifyBase
{
}; // Size: 0x40

class UAnimNotify_RetargetedAkEvent : public UAnimNotify
{

    class UAkComponent* GetAkComponentForSocket(class USkeletalMeshComponent* Mesh, const FName& Socket, const class UAnimSequenceBase* AnimSequenceBase);
}; // Size: 0x38

class UAnimNotify_SetStateTag : public UAnimNotifyBase
{
    EStateTag StateTag;                                                               // 0x0040 (size: 0x4)
    bool bEnabled;                                                                    // 0x0044 (size: 0x1)

}; // Size: 0x48

class UAnimNotify_SetWeaponEnabled : public UAnimNotifyBase
{
    bool bEnabled;                                                                    // 0x0040 (size: 0x1)

}; // Size: 0x48

class UAnimNotify_SpawnNiagaraSystemAtLocationContextualAction : public UAnimNotifyBase
{
    FSpawnNiagaraSystemAtLocation SpawnNiagaraSystemAtLocation;                       // 0x0040 (size: 0x18)

}; // Size: 0x58

class UAnimNotify_SpawnParticle : public UAnimNotifyBase
{
    class UFXSystemAsset* ParticlePFX;                                                // 0x0040 (size: 0x8)
    FName BoneToSpawnOnName;                                                          // 0x0048 (size: 0x8)
    bool bIsAttachToBone;                                                             // 0x0050 (size: 0x1)
    bool bListenCollision;                                                            // 0x0051 (size: 0x1)

}; // Size: 0x58

class UAnimNotify_StashSound : public UAnimNotifyBase
{
    EStashActionType StashActionType;                                                 // 0x0040 (size: 0x1)

}; // Size: 0x48

class UAnimNotify_ThroatAnimationEnded : public UAnimNotifyBase
{
}; // Size: 0x40

class UAnimNotify_ToggleEyesLookAt : public UAnimNotifyBase
{
    bool bIsEnabled;                                                                  // 0x0040 (size: 0x1)
    bool bShouldChangeEyesIdle;                                                       // 0x0041 (size: 0x1)
    ECutsceneEyesIdleProfile NewEyesIdleProfile;                                      // 0x0042 (size: 0x1)

}; // Size: 0x48

class UAnimNotify_ToggleFlashlight : public UAnimNotifyBase
{
}; // Size: 0x40

class UAnimNotify_TopazActions : public UAnimNotifyBase
{
    EAnimTopazAction TopazAction;                                                     // 0x0040 (size: 0x1)

}; // Size: 0x48

class UAnimNotify_UnequipItemContextualAction : public UAnimNotifyBase
{
    EMainHandEquipmentType SlotToUnequip;                                             // 0x0040 (size: 0x1)

}; // Size: 0x48

class UAnimNotify_UpdateMagazineVisibililty : public UAnimNotifyBase
{
    bool bShowMagazine;                                                               // 0x0040 (size: 0x1)
    EAttachedMagazineType TargetAttachedMagazineType;                                 // 0x0041 (size: 0x1)
    EUpdateSource UpdateSource;                                                       // 0x0042 (size: 0x1)

}; // Size: 0x48

class UAnimNotify_UseConsumable : public UAnimNotifyBase
{
}; // Size: 0x40

class UAnimNotify_UseHandItem : public UAnimNotifyBase
{
    EHandItem HandItem;                                                               // 0x0040 (size: 0x1)

}; // Size: 0x48

class UAnimNotify_WeaponAction : public UAnimNotifyBase
{
    EWeaponAction WeaponAction;                                                       // 0x0040 (size: 0x1)
    bool bEnableTwinMagazineShift;                                                    // 0x0041 (size: 0x1)
    EShutterState ForcedIdle;                                                         // 0x0042 (size: 0x1)
    EAttackActionType AttachIdleType;                                                 // 0x0043 (size: 0x1)
    bool ShowBulletMeshes;                                                            // 0x0044 (size: 0x1)
    bool IsUnlocked;                                                                  // 0x0045 (size: 0x1)

}; // Size: 0x48

class UAnimNotify_ZombieWeaponEquipState : public UAnimNotifyBase
{
    bool bEquipped;                                                                   // 0x0040 (size: 0x1)

}; // Size: 0x48

class UAnimatedItemContainerInteractionComponent : public UItemContainerInteractionComponent
{
}; // Size: 0x2E0

class UAnimationBudgetSubsystem : public UWorldSubsystem
{
    class UCurveFloat* SignificanceMultiplierCurve;                                   // 0x0040 (size: 0x8)
    class UCurveFloat* ScreenDistanceToCenterMultiplierCurve;                         // 0x0048 (size: 0x8)

}; // Size: 0x60

class UAnimationUtilitiesBPFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetPlayerLockState(class APC* PC, const bool bLock, const FAnimInteractableData& InteractionData);
    void SetMontageSectionNextSection(class UAnimMontage* Montage, const FName& Section, const FName& NextSection);
    void RefreshLodSyncComponents(class UObject* Object, class ULODSyncComponent* LODSyncComponent);
    bool MoveAnimNotifiesFromInvalidPoints(class UAnimSequenceBase* Montage, TSubclassOf<class UAnimNotify> NotifyClass, bool bShouldNotifiesBeChangedToBranchingPoint);
    void LerpPlayerToInteractable(class APC* PC, class UInteractionComponent* InteractionComponent, const FAnimInteractableData& InteractionData);
    class UAnimInstance* GetCharacterAnimInstance(class AObj* Obj);
}; // Size: 0x28

class UAnomalyDetectorComponent : public UPassiveDetectorComponent
{
}; // Size: 0xE0

class UApplyEffectComponent : public UActorComponent
{
    bool bCanUseStackableEffects;                                                     // 0x00A0 (size: 0x1)
    TArray<FInteractEffectData> EffectsToApply;                                       // 0x00A8 (size: 0x10)

    void RemoveEffects();
    void ApplyEffects();
}; // Size: 0xB8

class UApplyFirstTimeSettingsAction : public UMenuButtonActionBase
{
}; // Size: 0x30

class UApplySettings : public UStartGameAction
{
}; // Size: 0x30

class UApplySettingsAction : public UMenuButtonActionBase
{
}; // Size: 0x30

class UArtifactInteractableComponent : public USingleClickComponent
{
}; // Size: 0x1F8

class UArtifactSpawnerActivationComponent : public UActorComponent
{
}; // Size: 0xA0

class UArtifactStrafeBehaviourComponent : public UActorComponent
{
    bool bHasScheduledJump;                                                           // 0x00A0 (size: 0x1)
    float TimeTillJump;                                                               // 0x00A4 (size: 0x4)
    float OuterRadiusJumpChance;                                                      // 0x0124 (size: 0x4)
    float AnotherAnomalyJumpChance;                                                   // 0x0128 (size: 0x4)

}; // Size: 0x130

class UAttachSelectorIPU : public UBehaviorBasedIPU
{
}; // Size: 0x58

class UAttachSelectorSelectUnselectIPU : public UInputProcessingUnit
{
    class UInputTrigger* TriggerWithBiggestTime;                                      // 0x0040 (size: 0x8)

}; // Size: 0x48

class UAttachSelectorSlot : public UWidgetBase
{
    FVector2D SlotSize;                                                               // 0x02A8 (size: 0x10)
    ESlotDirection SlotDirection;                                                     // 0x02B8 (size: 0x1)
    class UImageWidget* AttachIcon;                                                   // 0x02D0 (size: 0x8)
    class UButton* AttachButton;                                                      // 0x02D8 (size: 0x8)
    class UImage* AttachBackground;                                                   // 0x02E0 (size: 0x8)
    class UImage* DeactivateBackground;                                               // 0x02E8 (size: 0x8)
    class UImage* AttachBackgroundHighlighted;                                        // 0x02F0 (size: 0x8)
    class UImage* AttachBackgroundSelected;                                           // 0x02F8 (size: 0x8)
    class UWidgetSwitcher* AttachWidgetSwitcher;                                      // 0x0300 (size: 0x8)
    class UImageWidget* DefaultAttachIcon;                                            // 0x0308 (size: 0x8)
    class UImageWidget* SelectedAttachIcon;                                           // 0x0310 (size: 0x8)
    int32 AttachSlotIndex;                                                            // 0x0318 (size: 0x4)
    int32 DetachSlotIndex;                                                            // 0x031C (size: 0x4)
    int32 DefaultSlotIndex;                                                           // 0x0320 (size: 0x4)
    class UAttachSelectorTip* SelectorTip;                                            // 0x0330 (size: 0x8)
    EAttachSlotState AttachSlotState;                                                 // 0x0338 (size: 0x1)
    uint8 SlotStateFlagEditorOnly;                                                    // 0x0339 (size: 0x1)
    float DisabledOpacity;                                                            // 0x033C (size: 0x4)
    float SelectedHighlightedOpacity;                                                 // 0x0340 (size: 0x4)
    float FilledOpacity;                                                              // 0x0344 (size: 0x4)
    float EmptyOpacity;                                                               // 0x0348 (size: 0x4)
    FVector2D DetachHighlightIconScale;                                               // 0x0350 (size: 0x10)
    class UWidgetAnimation* Shake;                                                    // 0x0360 (size: 0x8)
    class UWidgetAnimation* MoveRight;                                                // 0x0368 (size: 0x8)
    class UWidgetAnimation* MoveLeft;                                                 // 0x0370 (size: 0x8)
    class UWidgetAnimation* MoveUp;                                                   // 0x0378 (size: 0x8)
    class UWidgetAnimation* MoveDown;                                                 // 0x0380 (size: 0x8)
    class UWidgetAnimation* MoveDownLeft;                                             // 0x0388 (size: 0x8)
    class UWidgetAnimation* MoveDownRight;                                            // 0x0390 (size: 0x8)
    class UWidgetAnimation* MoveUpRight;                                              // 0x0398 (size: 0x8)
    class UWidgetAnimation* MoveUpLeft;                                               // 0x03A0 (size: 0x8)
    class UWidgetAnimation* Select;                                                   // 0x03A8 (size: 0x8)

    void SelectAndEquipAttach();
    void OnUnhoverSlot();
    void OnButtonHover();
}; // Size: 0x3C0

class UAttachSelectorTip : public UWidgetBase
{
    class UTextWidget* Text;                                                          // 0x0278 (size: 0x8)
    float TipPadding;                                                                 // 0x0280 (size: 0x4)
    class UUniformGridSlot* ParentGridSlot;                                           // 0x0288 (size: 0x8)
    class UPanelWidget* ParentPanelWidget;                                            // 0x0290 (size: 0x8)

    void Show();
    void Hide();
}; // Size: 0x298

class UAttachSelectorView : public UViewBaseExtended
{
    class UUniformGridPanel* SlotGridPanel;                                           // 0x02C8 (size: 0x8)
    class UAttachSelectorTip* AttachSelectorTip;                                      // 0x02D0 (size: 0x8)
    TArray<class UAttachSelectorSlot*> LeftSlots;                                     // 0x02D8 (size: 0x10)
    TArray<class UAttachSelectorSlot*> RightSlots;                                    // 0x02E8 (size: 0x10)
    TArray<class UAttachSelectorSlot*> UpSlots;                                       // 0x02F8 (size: 0x10)
    TArray<class UAttachSelectorSlot*> DownSlots;                                     // 0x0308 (size: 0x10)
    TArray<class UAttachSelectorSlot*> AllSlots;                                      // 0x0318 (size: 0x10)
    float FastChangeSlotTime;                                                         // 0x0368 (size: 0x4)
    class UAttachSelectorSlot* DetachSlot;                                            // 0x0370 (size: 0x8)
    ESlotDirection CurrentChooseLine;                                                 // 0x0378 (size: 0x1)
    int32 IndexCurrentSelectedSlot;                                                   // 0x037C (size: 0x4)
    class UAttachSelectorSlot* SelectedSlot;                                          // 0x0380 (size: 0x8)
    class UAttachSelectorSlot* LastHoveredAttach;                                     // 0x03A0 (size: 0x8)
    ESlotDirection LastTriggeredDirection;                                            // 0x03A8 (size: 0x1)

    void UIIterateUpSlots();
    void UIIterateRightSlots();
    void UIIterateLeftSlots();
    void UIIterateDownSlots();
    void SetCurrentChooseLine(const ESlotDirection InCurrentChooseLine);
    void DetachAllAttachByDirection();
    void AttachSelectorSlotUp();
    void AttachSelectorSlotSelect();
    void AttachSelectorSlotRight();
    void AttachSelectorSlotLeft();
    void AttachSelectorSlotDown();
    void AttachSelectorDetachAll();
}; // Size: 0x3B8

class UAttackComponent : public UActorComponent
{
    EAttackActionType ActiveState;                                                    // 0x00A0 (size: 0x1)

}; // Size: 0x110

class UAudioRoomBakedReflectionComponent : public UActorComponent
{
    class UAkSwitchValue* AudioRoomBakedReflection;                                   // 0x00A0 (size: 0x8)

}; // Size: 0xA8

class UAudioRoomBandwidthComponent : public UActorComponent
{
    class UAkStateValue* AudioRoomBandwidth;                                          // 0x00A0 (size: 0x8)

}; // Size: 0xA8

class UAudioScattererDataAsset : public UDataAsset
{
    class UTileBitmapAdapter* TileBitmap;                                             // 0x0030 (size: 0x8)
    FVector WorldTopLeftCoords;                                                       // 0x0038 (size: 0x18)
    float WorldWidth;                                                                 // 0x0050 (size: 0x4)
    float WorldHeight;                                                                // 0x0054 (size: 0x4)

}; // Size: 0x58

class UAudioSettingsWidget : public USettingsPage
{
    class USettingsElementPercent* MainVolume;                                        // 0x0290 (size: 0x8)
    class USettingElementOnOff* MuteAllVolume;                                        // 0x0298 (size: 0x8)
    class USettingsElementPercent* MusicVolume;                                       // 0x02A0 (size: 0x8)
    class USettingElementOnOff* PlayMusicInCombat;                                    // 0x02A8 (size: 0x8)
    class USettingsElementPercent* DialogueVolume;                                    // 0x02B0 (size: 0x8)
    class USettingsElementPercent* EffectsVolume;                                     // 0x02B8 (size: 0x8)
    class USettingElementSwitcher* AudioOutputDeviceId;                               // 0x02C0 (size: 0x8)
    class USettingElementSwitcher* TypeOfSoundDevice;                                 // 0x02C8 (size: 0x8)
    class USettingElementOnOff* ForceMono;                                            // 0x02D0 (size: 0x8)
    class USettingElementSwitcher* DynamicRange;                                      // 0x02D8 (size: 0x8)
    class USettingElementOnOff* HelmetEffects;                                        // 0x02E0 (size: 0x8)
    FString DefaultAudioDeviceLocalizedSID;                                           // 0x02E8 (size: 0x10)

}; // Size: 0x2F8

class UAutoInteractionComponent : public UInteractionComponent
{
    FAutoInteractionData InteractionData;                                             // 0x01C8 (size: 0x18)

}; // Size: 0x1E0

class UAutoSaveManager : public UBaseManager
{
}; // Size: 0xA0

class UBackToSettings : public UMenuButtonActionBase
{
}; // Size: 0x30

class UBarbedWireComponent : public UUIDActorComponent
{
    FString BarbedWirePrototypeSID;                                                   // 0x00C8 (size: 0x10)

    void OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnOverlapBegin(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnCompHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
}; // Size: 0xE0

class UBarkManager : public UBaseTickableManager
{
}; // Size: 0xE38

class UBaseConsoleManager : public UBaseTickableManager
{
}; // Size: 0xA8

class UBaseDLCInstanceSubsystem : public UGameInstanceSubsystem
{
}; // Size: 0x40

class UBaseInteractableAction : public UObject
{

    void RunAlternativeAction();
    void RunAction();
    bool CanInteract();
}; // Size: 0x28

class UBaseLoadingScreenWidget : public UUserWidget
{
}; // Size: 0x2A8

class UBaseManager : public UObject
{
}; // Size: 0x78

class UBaseTickableManager : public UBaseManager
{
}; // Size: 0xA8

class UBaseVolumeComponent : public UStaticMeshComponent
{
    ECollisionFormType MeshType;                                                      // 0x0630 (size: 0x1)
    bool bBlockNegativeScale;                                                         // 0x0631 (size: 0x1)
    bool bForceRoundCylinderBase;                                                     // 0x0632 (size: 0x1)
    bool bForceUniformSphereScale;                                                    // 0x0633 (size: 0x1)

}; // Size: 0x690

class UBedHoldComponent : public UHoldComponent
{
}; // Size: 0x230

class UBehaviorBasedIPU : public UInputProcessingUnit
{
}; // Size: 0x58

class UBestiaryIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UBloodsuckerInvisibilityComponent : public UActorComponent
{
    class UCurveFloat* InvisibilityChangeCurve;                                       // 0x00B0 (size: 0x8)
    TArray<class UMaterialInstanceDynamic*> DynamicMaterials;                         // 0x00C0 (size: 0x10)

}; // Size: 0xD0

class UBookViewBase : public UViewBaseExtended
{
    int32 DefaultPageIndex;                                                           // 0x02C8 (size: 0x4)
    bool bShouldOpenDefaultPage;                                                      // 0x02CC (size: 0x1)
    bool bShouldEnableNavigation;                                                     // 0x02CD (size: 0x1)
    bool bShouldEnableClick;                                                          // 0x02CE (size: 0x1)
    class UWidgetSwitcher* Switcher;                                                  // 0x02D0 (size: 0x8)
    class UNavigationPanel* NavigationPanel;                                          // 0x02D8 (size: 0x8)

    void ClickMenuButton(int32 InButtonIndex);
    void ChangeSelectButton();
}; // Size: 0x2E0

class UBusVolumeInterpolatorComponent : public UActorComponent
{
}; // Size: 0xB8

class UButtonBase : public UWidgetBase
{
    FButtonBaseOnButtonClicked OnButtonClicked;                                       // 0x0278 (size: 0x10)
    void OnS2ButtonClicked(const FName InButtonId);
    class UButton* Button;                                                            // 0x02A8 (size: 0x8)
    bool bShouldEnableClick;                                                          // 0x02B0 (size: 0x1)
    bool bShouldEnableHover;                                                          // 0x02B1 (size: 0x1)
    FName ButtonId;                                                                   // 0x02B4 (size: 0x8)

    void ButtonReleased();
    void ButtonPressed();
    void ButtonClicked();
}; // Size: 0x2C0

class UCameraManager : public UBaseTickableManager
{
    class UCameraComponent* CameraComponent;                                          // 0x00F8 (size: 0x8)
    class APlayerCameraManager* PlayerCameraManager;                                  // 0x0100 (size: 0x8)
    class UCameraModifier_LookAt* CachedCameraLookAtMod;                              // 0x01E0 (size: 0x8)
    class UMaterialParameterCollectionInstance* FovMPC;                               // 0x0218 (size: 0x8)
    class UMaterialParameterCollectionInstance* EnvironmentMPC;                       // 0x0238 (size: 0x8)

}; // Size: 0x240

class UCameraModifier_AbilityCamModifier : public UCameraModifier
{
    FCameraModifier_AbilityCamModifierOnStageChanged OnStageChanged;                  // 0x0060 (size: 0x10)
    void OnStageChanged(int32 NewTargetStageIndex);
    TArray<FAbilityCamModifierStage> Stages;                                          // 0x00F0 (size: 0x10)

    void UpdateCameraTargetLocation(const FVector& NewLocation);
    void ResetCameraTargetLocation();
}; // Size: 0x100

class UCameraModifier_LookAt : public UCameraModifier
{
    class APlayerController* PlayerController;                                        // 0x0108 (size: 0x8)

}; // Size: 0x158

class UCameraModifier_PsyAttackFocusTarget : public UCameraModifier
{
}; // Size: 0xA0

class UCameraModifier_ResetRelativeRotation : public UCameraModifier
{
}; // Size: 0x50

class UCampaignManager : public UBaseManager
{
    class USaveLoadIO* SaveLoadIO;                                                    // 0x0108 (size: 0x8)

}; // Size: 0x118

class UCampaignSlotButton : public UMenuButtonBase
{
    class UTextWidget* SlotIndex;                                                     // 0x0300 (size: 0x8)
    class UTextWidget* LastSaveName;                                                  // 0x0308 (size: 0x8)
    class UTextWidget* LastSaveDateTime;                                              // 0x0310 (size: 0x8)
    class UTextWidget* LastSaveLocationName;                                          // 0x0318 (size: 0x8)
    class UTextWidget* LastSaveDifficulty;                                            // 0x0320 (size: 0x8)
    class UImage* LastSaveThumbnail;                                                  // 0x0328 (size: 0x8)
    class UImage* Background;                                                         // 0x0330 (size: 0x8)
    class UTextWidget* DifficultyPrefix;                                              // 0x0338 (size: 0x8)
    class UTextWidget* DifficultyDots;                                                // 0x0340 (size: 0x8)
    class UTextWidget* RegionPrefix;                                                  // 0x0348 (size: 0x8)
    class UTextWidget* RegionDots;                                                    // 0x0350 (size: 0x8)
    FString DateTimeFormat;                                                           // 0x0358 (size: 0x10)
    FString EmptySlotNameSID;                                                         // 0x0368 (size: 0x10)
    TArray<TSoftObjectPtr<UTexture2D>> SaveIcons;                                     // 0x0378 (size: 0x10)

}; // Size: 0x388

class UCampaignSlotsSubView : public UMenuSubViewBase
{
    TSubclassOf<class UCampaignSlotButton> CampaignSlotButtonClass;                   // 0x02D0 (size: 0x8)
    TSubclassOf<class UCampaignSlotButton> EmptyCampaignSlotButtonClass;              // 0x02D8 (size: 0x8)
    class UMenuButtonActionBase* EmptyCampaignSlotButtonAction;                       // 0x02E0 (size: 0x8)
    class UMenuButtonActionBase* CampaignSlotButtonAction;                            // 0x02E8 (size: 0x8)
    TArray<FShortcutData> CampaignSlotButtonShortcuts;                                // 0x02F0 (size: 0x10)
    TArray<FShortcutData> EmptyCampaignSlotButtonShortcuts;                           // 0x0300 (size: 0x10)

}; // Size: 0x310

class UChangeMagazineToRoundIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UChangeMagazineToTwinIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UChangeScopeZoomIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UChangeWidgetSwitcher : public UWidgetSwitcher
{
    FName SwitcherId;                                                                 // 0x0180 (size: 0x8)

    void PreDestructUpdate();
    void PreConstructUpdate();
}; // Size: 0x190

class UCharacterStatSlot : public UWidgetBase
{
    class UImage* StatImage;                                                          // 0x0278 (size: 0x8)
    class UImage* ProgressImage;                                                      // 0x0280 (size: 0x8)
    class UImage* ProgressBeckground;                                                 // 0x0288 (size: 0x8)
    bool bShouldShowProgress;                                                         // 0x0290 (size: 0x1)
    class UTexture2D* StatIcon;                                                       // 0x0298 (size: 0x8)

}; // Size: 0x2A0

class UCheckBoxWidget : public UWidgetBase
{
    class UImageWidget* ImageObj;                                                     // 0x0278 (size: 0x8)
    bool bShouldStartChecked;                                                         // 0x0280 (size: 0x1)
    bool bEnableMouseEvent;                                                           // 0x0281 (size: 0x1)
    bool bEnableHoverRecolor;                                                         // 0x0282 (size: 0x1)
    FLinearColor HoverTint;                                                           // 0x0284 (size: 0x10)
    FLinearColor NormalTint;                                                          // 0x0294 (size: 0x10)
    bool bEnableStyleManager;                                                         // 0x02A4 (size: 0x1)
    FName CheckedStyleId;                                                             // 0x02A8 (size: 0x8)
    FName UnCheckedStyleId;                                                           // 0x02B0 (size: 0x8)
    FCheckBoxWidgetOnChangeCheck OnChangeCheck;                                       // 0x02B8 (size: 0x10)
    void OnChangeCheck(bool bOutChecked);
    FCheckBoxWidgetOnCheckBoxClick OnCheckBoxClick;                                   // 0x02C8 (size: 0x10)
    void OnCheckBoxClick(bool bOutChecked);

    void SetChecked(const bool bInChecked, const bool bBrodcastOnChangeCheck);
    bool GetChecked();
}; // Size: 0x2E0

class UChildViewBase : public UWidgetBase
{
}; // Size: 0x278

class UCinematicManager : public UBaseManager
{
    FCinematicSectionParams CinematicSectionParams;                                   // 0x0078 (size: 0x34)
    class UMaterialParameterCollectionInstance* PlayerParametersMPC;                  // 0x0138 (size: 0x8)

    void OnSubtitleSectionStart(FString NPCSID, FString DialogSID);
    void OnSubtitleSectionEnd();
    void OnKeyFrameSectionStart(const FCinematicSectionParams& InCinematicSectionParams);
    void OnKeyFrameSectionEnd(FName SectionName);
    void OnHapticFeedbackStart(FGameplayTag ForceFeeedbackEffectTag);
    void OnHapticFeedbackEnd(FGameplayTag ForceFeeedbackEffectTag);
    void OnFadeScreenEnd(bool bFadeOut, FLinearColor FadeTargetColor, float FadeAmount, float FadeTime);
    void OnCinematicStopped();
    void OnCinematicStarted();
}; // Size: 0x1C8

class UClothSimulationManager : public UBaseTickableManager
{
}; // Size: 0xC0

class UCodeComponent : public UGuidActorComponent
{
    FString CorrectCode;                                                              // 0x00C0 (size: 0x10)
    int32 MaximumCodeLength;                                                          // 0x00D0 (size: 0x4)

    void ResetCode();
}; // Size: 0xF0

class UCodelockClearAllIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UCodelockClearOneIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UCodelockConfirmIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UCodelockDirectionBaseIPU : public UInputProcessingUnit
{
}; // Size: 0x48

class UCodelockDownIPU : public UCodelockDirectionBaseIPU
{
}; // Size: 0x48

class UCodelockExitIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UCodelockLeftIPU : public UCodelockDirectionBaseIPU
{
}; // Size: 0x48

class UCodelockMousePressIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UCodelockNumBaseIPU : public UInputProcessingUnit
{
}; // Size: 0x48

class UCodelockPressIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UCodelockRightIPU : public UCodelockDirectionBaseIPU
{
}; // Size: 0x48

class UCodelockSingleClickComponent : public USingleClickComponent
{

    void Interact(class AObj* InteractedActor);
}; // Size: 0x218

class UCodelockUpIPU : public UCodelockDirectionBaseIPU
{
}; // Size: 0x48

class UCombatSubsystem : public UBaseManager
{
}; // Size: 0x78

class UCombatSynchronizerSubsystem : public UWorldSubsystem
{
}; // Size: 0x130

class UCombinationLock : public UInteractableComponent
{
    bool bAvailableToPlayer;                                                          // 0x01A8 (size: 0x1)
    int32 Code;                                                                       // 0x01AC (size: 0x4)
    bool Opened;                                                                      // 0x01B0 (size: 0x1)

}; // Size: 0x1B8

class UCommonHint : public UHintBase
{
    class ULocalizationWidget* LocalizationWidget;                                    // 0x0310 (size: 0x8)
    class UHintSwitcher* HintSwitcherWidget;                                          // 0x0318 (size: 0x8)
    class URichTextWidget* RichTextWidget;                                            // 0x0320 (size: 0x8)
    bool bUpdateLocalization;                                                         // 0x0328 (size: 0x1)
    FString LocalizationSID;                                                          // 0x0330 (size: 0x10)

}; // Size: 0x340

class UCommonVerticalBox : public UVerticalBox
{
}; // Size: 0x178

class UCompassManager : public UBaseTickableManager
{
}; // Size: 0xA8

class UCompassWidget : public UChildViewBase
{
    class UImage* StealthNoiseIndicator;                                              // 0x0278 (size: 0x8)
    class UImage* BackgroundImage;                                                    // 0x0280 (size: 0x8)
    class UImage* CompassCardinalDirectionImage;                                      // 0x0288 (size: 0x8)
    class UImage* BodyCompassLine;                                                    // 0x0290 (size: 0x8)
    class UImage* LineRight;                                                          // 0x0298 (size: 0x8)
    class UImage* LineLeft;                                                           // 0x02A0 (size: 0x8)
    class UProgressBar* NoiseProgress;                                                // 0x02A8 (size: 0x8)
    class UProgressBar* NoiseProgressBottomLines;                                     // 0x02B0 (size: 0x8)
    class UImage* Arrow;                                                              // 0x02B8 (size: 0x8)
    class UCanvasPanel* MarkerContainer;                                              // 0x02C0 (size: 0x8)
    class USizeBox* CompassSize;                                                      // 0x02C8 (size: 0x8)
    class USizeBox* LineSizeBox;                                                      // 0x02D0 (size: 0x8)
    float MultiplyBodyLineSpeedPercent;                                               // 0x02D8 (size: 0x4)
    float CenterZoneWidth;                                                            // 0x02DC (size: 0x4)
    float MaskZoneWidth;                                                              // 0x02E0 (size: 0x4)
    float HiddeMarkerZone;                                                            // 0x02E4 (size: 0x4)
    float CenterCompassBorder;                                                        // 0x02E8 (size: 0x4)
    float UpdateBackgroundTime;                                                       // 0x02EC (size: 0x4)
    float TopMarkerHeight;                                                            // 0x02F0 (size: 0x4)
    float BottomMarkerHeigth;                                                         // 0x02F4 (size: 0x4)
    bool bShouldEnableAutoUpdate;                                                     // 0x02F8 (size: 0x1)
    float NoiseBarFillSpeed;                                                          // 0x02FC (size: 0x4)
    float NoiseBarReduceSpeed;                                                        // 0x0300 (size: 0x4)
    bool bShouldEnableAutoHideCompaas;                                                // 0x0304 (size: 0x1)
    float TimeUpdateHideCompaasMax;                                                   // 0x0308 (size: 0x4)
    float TimeUpdateHideCompaas;                                                      // 0x030C (size: 0x4)
    bool bShouldEnableTurnAngleAutoHide;                                              // 0x0310 (size: 0x1)
    float PlayerTurnAngleMax;                                                         // 0x0314 (size: 0x4)
    float ApproximationPlayerLocation;                                                // 0x0318 (size: 0x4)
    FLinearColor ColorInRadiasMain;                                                   // 0x031C (size: 0x10)
    FLinearColor ColorInRadiasSecondary;                                              // 0x032C (size: 0x10)
    FLinearColor ColorForBattleModAnimation;                                          // 0x033C (size: 0x10)
    FLinearColor ColorForQuestZoneSearchAnimation;                                    // 0x034C (size: 0x10)
    bool bDisableNoiseIndicator;                                                      // 0x035C (size: 0x1)
    class UWidgetAnimation* ShowAnimation;                                            // 0x0360 (size: 0x8)
    float SlowShowAnimationSpeedMultiplier;                                           // 0x0368 (size: 0x4)
    float FastShowAnimationSpeedMultiplier;                                           // 0x036C (size: 0x4)
    class UWidgetAnimation* StealthNoiseWavingAnimation;                              // 0x0370 (size: 0x8)

}; // Size: 0x3F0

class UConfirmUpgradePopup : public UWidgetBase
{
    class UTextWidget* Title;                                                         // 0x0278 (size: 0x8)
    class URichTextWidget* RichDescription;                                           // 0x0280 (size: 0x8)
    class UHintInputController* ConfirmHint;                                          // 0x0288 (size: 0x8)
    class UHintInputController* CancelHint;                                           // 0x0290 (size: 0x8)

}; // Size: 0x298

class UContextualActionAssetDataShared : public UBaseManager
{
}; // Size: 0x128

class UContextualActionCommunicationManager : public UBaseTickableManager
{
}; // Size: 0x268

class UContextualActionComponent : public UUIDActorComponent
{
}; // Size: 0xB8

class UContextualActionEffect : public UObject
{
}; // Size: 0x28

class UContextualActionNeedEffect : public UContextualActionEffect
{
    EContextualActionNeeds ContextualActionNeed;                                      // 0x0028 (size: 0x4)
    float ChangeValuePerSelector;                                                     // 0x002C (size: 0x4)

}; // Size: 0x30

class UContextualActionSubsystem : public UTickableWorldSubsystem
{
}; // Size: 0x1C0

class UContinueButtonStateDefiner : public UMenuButtonStateDefiner
{
}; // Size: 0x30

class UControlSettingsPopup : public UPopupBase
{
    class URichTextBlock* DescriptionLegendText;                                      // 0x0348 (size: 0x8)
    FString DescriptionSID;                                                           // 0x0350 (size: 0x10)
    FName ActionTextStyleID;                                                          // 0x0360 (size: 0x8)
    int32 KeyImageIndex;                                                              // 0x0368 (size: 0x4)
    int32 TextImageIndex;                                                             // 0x036C (size: 0x4)

}; // Size: 0x370

class UControlsSettingsWidget : public USettingsPage
{
    class USettingElementOnOff* VerticalInversion;                                    // 0x0290 (size: 0x8)
    class USettingElementOnOff* HorizontalInversion;                                  // 0x0298 (size: 0x8)
    class USettingsElementPercent* CursorSensitivity;                                 // 0x02A0 (size: 0x8)
    class USettingsElementPercent* MouseAimSensitivity;                               // 0x02A8 (size: 0x8)
    class USettingElementButton* OpenKeyboardMappingButton;                           // 0x02B0 (size: 0x8)
    class USettingElementOnOff* VibrationFeedback;                                    // 0x02B8 (size: 0x8)
    class USettingElementOnOff* GamepadVerticalInversion;                             // 0x02C0 (size: 0x8)
    class USettingElementOnOff* GamepadHorizontalInversion;                           // 0x02C8 (size: 0x8)
    class USettingsElementPercent* GamepadSensitivity;                                // 0x02D0 (size: 0x8)
    class USettingsElementPercent* GamepadAimSensitivity;                             // 0x02D8 (size: 0x8)
    class USettingElementSwitcher* AimAssistType;                                     // 0x02E0 (size: 0x8)
    class USettingsElementPercent* AimAssistStickiness;                               // 0x02E8 (size: 0x8)
    class USettingsElementPercent* AimAssistTracking;                                 // 0x02F0 (size: 0x8)
    class USettingElementSwitcher* AimOnHold;                                         // 0x02F8 (size: 0x8)
    class USettingElementSwitcher* HoldBreathOnHold;                                  // 0x0300 (size: 0x8)
    class USettingElementSwitcher* CrouchOnHold;                                      // 0x0308 (size: 0x8)
    class USettingElementSwitcher* ItemSelectorOnHold;                                // 0x0310 (size: 0x8)
    class USettingElementSwitcher* SprintOnHold;                                      // 0x0318 (size: 0x8)
    class USettingElementSwitcher* WalkOnHold;                                        // 0x0320 (size: 0x8)
    class USettingElementSwitcher* AttachSelectorOnHold;                              // 0x0328 (size: 0x8)
    class USettingElementSwitcher* LeanOnHold;                                        // 0x0330 (size: 0x8)
    class USettingElementSwitcher* LadderOnHold;                                      // 0x0338 (size: 0x8)

}; // Size: 0x340

class UCoverUtilitiesBPFunctionLibrary : public UBlueprintFunctionLibrary
{
}; // Size: 0x28

class UCoversStorage : public UBaseManager
{
}; // Size: 0x88

class UCppMediator : public UBlueprintFunctionLibrary
{

    void UnbindInteractPaintMaterial(class AActor* AffectedActor);
    void UIManagerOnQuestDeselected(FString PrototypeID);
    FString UIManagerGenerateAndGetDefaultNameSave();
    void StartQuestNode(const FPrototypeSID& SID);
    class UTriplanarDecalComponent* SpawnTriplanarDecalAtLocation(const class UObject* WorldContextObject, class UMaterialInterface* DecalMaterial, FVector DecalSize, FVector Location, FRotator Rotation, float LifeSpan);
    void SpawnSearchPoint(const class AObj* Obj, const bool bShowOnMap, const bool bShowOnCompass);
    bool ShouldUpdateSolarTime(float PrevSolarTime, float SolarTime, float UpdateSunDeltaTime);
    void SetupMaterialForInteractPaint(class UMeshComponent* AffectedMesh, TSoftObjectPtr<UMaterialInterface> YellowPaintMaterial, TSoftObjectPtr<UMaterialInterface> DefaultMaterial, const bool bPaintEnabled, const int32 MaterialSlot);
    void SettingsManagerRestoreCachedSettings();
    void SettingsManagerCacheCurrentSettings();
    void SettingsManagerApplySettings();
    void SetSelectedTextLanguage(ELocalizationLanguage InSelectedLanguage);
    void SetSelectedLanguage(ELocalizationLanguage InSelectedLanguage);
    void SetSelectedAudioLanguage(ELocalizationLanguage InSelectedLanguage);
    void SetMuteAllVolume(bool bInMuteAllVolume);
    void SetMusicVolume(float InMusicVolume);
    void SetMouseSensitivityCoef(float InMouseSensitivityCoef);
    void SetMeshNaniteSettings(const class UStaticMesh* Mesh, const bool bEnable);
    void SetMainVolume(float InVolume);
    void SetEffectsVolume(float InEffectsVolume);
    void SetDialogueVolume(float InDialogueVolume);
    void SetAudiologPlaybackPercent(const float PlaybackPercent);
    void SetAimMouseSensitivityCoef(float InAimMouseSensitivityCoef);
    void SerializeCoverOffsetsToConfig(const class UHumanDefaultAnimCollection* HumanDefaultAnimCollection);
    void SelectCurrentSettings(ESettingCategoryType SettingCategoryType);
    void SaveCharacter(FString CharacterSID, const class UMeshGeneratorEditor* MeshGenerator, const bool bSaveObj, const bool bSaveItemGenerator, FString SaveObjConfigPath, FString ParentItemGenerator, const FString NewRank);
    class UWorld* RuntimeGetWorld();
    void ResetSelectedSettings();
    void ResetInvulnerable(const class AObj* Obj);
    void ResetComponentVelocity(const class USceneComponent* Component);
    void RequestSaveSettings();
    void ReloadConfigPrototypes();
    void QuestInteractionComponentFinishAction(class UInteractionComponent* InteractionComponent, FString LauncherName);
    void OnToggleAudiolog(const bool bPlayAudiolog);
    float ObjGetHP(const class AObj* Obj);
    FItemUID MakeItemUID(int32 RawInt32);
    FItemContainerUID MakeItemContainerUID(int32 RawInt32);
    void MakeInvulnerable(const class AObj* Obj);
    int32 MakeInvalidGUID();
    void LogError(class AActor* Sender, FString errorMessage);
    void LerpPlayerToLocationAndRotation(const FVector Location, const FRotator Rotation);
    bool IsWalking(const class AObj* Actor);
    bool IsSoundInProximity(const FVector& Location, const class UAkAudioEvent* AudioEvent);
    bool IsRunningWorldPartitionMigrationFromCommandlet();
    bool IsQuestSelected(const FJournalQuest& JournalQuest);
    bool IsPendingLoadQuickSave();
    bool IsObjAlive(const class AObj* Obj);
    bool IsNaniteEnabledForMesh(const class UStaticMesh* Mesh);
    bool IsMoving(const class AObj* Actor);
    bool IsInteractionPaintEnabled();
    bool IsGamePlaying();
    bool IsFarAwayFromPlayer(FVector Location);
    bool IsEmissionActive();
    bool IsActorInGameWorld(class AActor* ActorToCheck);
    bool HasValidGUID(const class AObj* Actor);
    bool HasAnySignal(class AActor* Actor);
    float GetSkyLightUpdateDeltaTime();
    int32 GetPrototypeID(const class AObj* Actor);
    float GetNotificationAudiologDelay();
    TArray<FString> GetNotePrototypeIDs();
    TArray<class UMeshGeneratorEditor*> GetMeshGenerators();
    int32 GetItemsCountInInventory(const class AObj* Obj, const FString ItemName);
    int32 GetGUID(const class AObj* Actor);
    class AObj* GetFocusedEnemy(const class AObj* Obj);
    TArray<FJournalQuest> GetFinishedQuests();
    TArray<FJournalQuest> GetFailedQuests();
    FVector GetEmissionLocation();
    float GetCurrentAudiologPlayedTime();
    float GetCurrentAudiologDuration();
    float GetAnomalyCullingRadius();
    class AActor* GetActorByGuid(const FGuid& TargetGUID);
    TArray<FJournalQuest> GetActiveSecondaryQuests();
    TArray<FJournalQuest> GetActiveMainQuests();
    void DespawnSearchPoint(const class AObj* Obj);
    void CreateAIVoiceEvent(const class AObj* SenderObj, const FVector& Location, const FVector& Direction);
    void CreateAIEvent(const class AObj* SenderObj, const FVector& Location, const ESoundEventType EventType);
    bool CanPlayAudiolog();
    void BindInteractPaintMaterial(class AActor* AffectedActor);
}; // Size: 0x28

class UCrashAnalyticSubsystem : public UTickableWorldSubsystem
{
}; // Size: 0x90

class UCreator : public UBaseManager
{
}; // Size: 0x210

class UCreditsImage : public UUserWidget
{
    class UImage* Image;                                                              // 0x0278 (size: 0x8)

}; // Size: 0x280

class UCreditsName : public UUserWidget
{
    class UTextWidget* NameText;                                                      // 0x0278 (size: 0x8)

}; // Size: 0x280

class UCreditsNamesWidget : public UUserWidget
{
    class UVerticalBox* NamesVerticalBox;                                             // 0x0278 (size: 0x8)
    TSubclassOf<class UCreditsName> CreditsNameClass;                                 // 0x0280 (size: 0x8)
    FNameDisplaySettings NameDisplaySettings;                                         // 0x0288 (size: 0x14)

}; // Size: 0x2A0

class UCreditsRoleWidget : public UUserWidget
{
    class UHorizontalBox* RoleHorizontalBox;                                          // 0x0278 (size: 0x8)
    class UTextWidget* RoleText;                                                      // 0x0280 (size: 0x8)
    TSubclassOf<class UCreditsNamesWidget> CreditsNamesClass;                         // 0x0288 (size: 0x8)
    FNamesWidgetDisplaySettings NamesDisplaySettings;                                 // 0x0290 (size: 0x1C)

}; // Size: 0x2B0

class UCreditsSectionTitle : public UUserWidget
{
    class UTextWidget* RoleText;                                                      // 0x0278 (size: 0x8)

}; // Size: 0x280

class UCreditsSpacer : public UUserWidget
{
    class USpacer* Spacer;                                                            // 0x0278 (size: 0x8)

}; // Size: 0x280

class UCreditsSubView : public UMenuSubViewBase
{
    class UCreditsWidget* CreditsWidget;                                              // 0x02D0 (size: 0x8)

}; // Size: 0x2D8

class UCreditsWidget : public UWidgetBase
{
    class UVerticalBox* ItemsContainer;                                               // 0x02A8 (size: 0x8)
    class UScrollBox* CreditsScroll;                                                  // 0x02B0 (size: 0x8)
    class UOverlay* CreditsOverlay;                                                   // 0x02B8 (size: 0x8)
    TSubclassOf<class UCreditsSpacer> SpacerClass;                                    // 0x02C0 (size: 0x8)
    TSubclassOf<class UCreditsSectionTitle> CreditsSectionTitleClass;                 // 0x02C8 (size: 0x8)
    TSubclassOf<class UCreditsRoleWidget> CreditsRoleTitleClass;                      // 0x02D0 (size: 0x8)
    TSubclassOf<class UCreditsNamesWidget> CreditsNamesClass;                         // 0x02D8 (size: 0x8)
    class UWidgetAnimation* AppearAnimation;                                          // 0x02E0 (size: 0x8)
    FSectionTitleDisplaySettings SectionTitleDisplaySettings;                         // 0x02E8 (size: 0x14)
    FRoleDisplaySettings FirstRoleDisplaySettings;                                    // 0x02FC (size: 0x10)
    FRoleDisplaySettings RoleDisplaySettings;                                         // 0x030C (size: 0x10)
    float CreditsScrollMultiplier;                                                    // 0x031C (size: 0x4)
    float CreditsScrollUserMultiplier;                                                // 0x0320 (size: 0x4)

}; // Size: 0x330

class UCrosshairWidgetBase : public UChildViewBase
{
    float DelayInterpol;                                                              // 0x0278 (size: 0x4)
    class UWidgetAnimation* ShowCrosshairAnim;                                        // 0x0290 (size: 0x8)
    class UWidgetAnimation* HideCrosshairAnim;                                        // 0x0298 (size: 0x8)
    bool bEnableCrosshairAnimation;                                                   // 0x02A0 (size: 0x1)
    float CrosshairAnimationSpeed;                                                    // 0x02A4 (size: 0x4)

}; // Size: 0x2C8

class UCrosshairWidgetCircle : public UCrosshairWidgetBase
{
    class UImage* Point;                                                              // 0x02C8 (size: 0x8)
    class UImage* circle;                                                             // 0x02D0 (size: 0x8)
    class UOverlay* Container;                                                        // 0x02D8 (size: 0x8)
    class UMaterialInstanceDynamic* CircleMaterial;                                   // 0x02E0 (size: 0x8)
    bool bEnableDespersionLimit;                                                      // 0x02E8 (size: 0x1)
    FName RadiuseParametr;                                                            // 0x02EC (size: 0x8)
    FName RadiuseParametrMax;                                                         // 0x02F4 (size: 0x8)

}; // Size: 0x300

class UCrosshairWidgetCross : public UCrosshairWidgetBase
{
    float shift;                                                                      // 0x02C8 (size: 0x4)
    bool bEnableDespersionLimit;                                                      // 0x02CC (size: 0x1)
    class UImage* DownLine;                                                           // 0x02D0 (size: 0x8)
    class UImage* LeftLine;                                                           // 0x02D8 (size: 0x8)
    class UImage* RightLine;                                                          // 0x02E0 (size: 0x8)
    class UImage* UpLine;                                                             // 0x02E8 (size: 0x8)
    class UImage* Point;                                                              // 0x02F0 (size: 0x8)

}; // Size: 0x2F8

class UCrosshairWidgetPoint : public UCrosshairWidgetBase
{
    class UImage* Point;                                                              // 0x02C8 (size: 0x8)

}; // Size: 0x2D0

class UCrosshairWidgetSwitcher : public UChildViewBase
{
    class UWidgetSwitcher* CrosshairSwitcher;                                         // 0x0278 (size: 0x8)
    class UWidgetAnimation* ShowCrosshairAnim;                                        // 0x0280 (size: 0x8)
    class UWidgetAnimation* HideCrosshairAnim;                                        // 0x0288 (size: 0x8)
    class UWidgetAnimation* BlockHideCrosshairAnim;                                   // 0x0290 (size: 0x8)
    bool bUseDiffirentCrosshairType;                                                  // 0x02E0 (size: 0x1)
    ECrosshairType DefaultCrosshairType;                                              // 0x02E1 (size: 0x1)
    TMap<class ECrosshairTypeSetting, class bool> CrosshairType;                      // 0x02E8 (size: 0x50)
    float CrosshairAnimationAimSpeed;                                                 // 0x0338 (size: 0x4)
    class UCrosshairWidgetBase* CurrCrosshairWidget;                                  // 0x0340 (size: 0x8)

}; // Size: 0x360

class UCrouchIPU : public UBehaviorBasedIPU
{
}; // Size: 0x58

class UCurrentMainViewIndicator : public UWidgetBase
{
    FTextSettings TextSettings;                                                       // 0x0280 (size: 0x3C0)
    class UTextWidget* MainViewText;                                                  // 0x0640 (size: 0x8)
    FString MainMenuSID;                                                              // 0x0648 (size: 0x10)
    FString PauseMenuSID;                                                             // 0x0658 (size: 0x10)
    FString GameOverMenuSID;                                                          // 0x0668 (size: 0x10)
    FString UndefinedMenuSID;                                                         // 0x0678 (size: 0x10)

}; // Size: 0x690

class UCustomButton : public UButton
{
    int32 Tag;                                                                        // 0x0668 (size: 0x4)
    int32 CustomIntParam1;                                                            // 0x066C (size: 0x4)
    int32 CustomIntParam2;                                                            // 0x0670 (size: 0x4)
    float CustomFloatParam3;                                                          // 0x0674 (size: 0x4)
    float CustomFloatParam4;                                                          // 0x0678 (size: 0x4)
    FString StringTag;                                                                // 0x0680 (size: 0x10)
    float FloatTag;                                                                   // 0x0690 (size: 0x4)

    void OnPress();
    void OnClick();
}; // Size: 0x6A0

class UCustomConsoleManager : public UBaseConsoleManager
{
    TArray<class UBaseConsoleManager*> PersonalConsoleManagers;                       // 0x00A8 (size: 0x10)

    void XRunEngineCommand(FString Command);
    void XExecuteAdditionalScript(FString ScriptKeyName);
    void ExecuteScripts(const TArray<FString>& ScriptArray);
}; // Size: 0xC0

class UCustomConsoleManagerAA : public UBaseConsoleManager
{

    void XTryReceiveSignal(FString Guid);
    void XToggleArtifactSpawnerDebugInfo();
    void XToggleAkVisualization(FString Types);
    void XTestJournalQuestRewardCategory(FString QuestSID);
    void XTeleportNPCToSpawn(const FString NPCSID);
    void XTeleportNPCToPlayer(const FString NPCSID);
    void XStartQuestNodeBySID(FString SID);
    void XStartQuestNode(FString ID);
    void XStartQuestBySID(FString SID);
    void XStartQuest(FString ID);
    void XSkipToQuestNode(FString SID);
    void XSkipInfotopicRefreshCooldown();
    void XSimulateWaitForProfileSettingUp(const float SetupDuration);
    void XShowSpawnDebugInfo(const bool Show);
    void XShowQuestTriggers(const bool bShow);
    void XShowHubOwner(FString HubSID);
    void XShowCurrentLocation();
    void XShowCurrentImportantChoices();
    void XSetWeatherTime(const int32 Hour, const int32 Minute, const int32 Second);
    void XSetTimeSpeed(float Speed);
    void XSetTextLanguage(FString LocaleString);
    void XSetSearchpointDebugState(bool bState);
    void XSetRelationsInRadius(float Radius, int32 RelationValue);
    void XSetRandomNodeDefinedPinBySID(FString SID, int32 PinNumber);
    void XSetRandomNodeDefinedPin(FString ID, int32 PinNumber);
    void XSetGameTime(const int32 Hour, const int32 Minute, const int32 Second);
    void XSetDifficultySID(FString DifficultySID);
    void XSetAudioLanguage(FString LocaleString);
    void XSetAkVisualizationRadius(float NewValue);
    void XRestartCurrentDialog();
    void XResetRandomNodeBySID(FString SID);
    void XResetRandomNode(FString ID);
    void XResetQuestBySID(FString SID);
    void XPrintGlobalVariable(FString SID);
    void XPlayDialogLine(const int32 SpeakerUID, FString DialogPrototypeSID);
    void XPlayDialogFromPool(FString DialogEventTypeName, int32 NPCUIDValue1, int32 NPCUIDValue2);
    void XPlayCommentFromPool(FString DialogEventTypeName, int32 NPCUIDValue);
    void XListMapMarkers(FString MarkerType);
    void XKillNPCInRadius(float Radius, const int32 MinimalReputationToKill, int32 MaxReputationToKill);
    void XFindNonEndingDialogs();
    void XExcludeQuestNodeBySID(FString SID);
    void XExcludeQuestNode(FString ID);
    void XExcludeQuestBySID(FString SID);
    void XExcludeQuest(FString ID);
    void XEndQuestNodeBySID(FString SID);
    void XEndQuestNode(FString ID);
    void XEndQuestBySID(FString SID);
    void XEndQuest(FString ID);
    void XDiscoverMarker(FString MarkerSID);
    void XDespawnNPCsAtRadius(float Radius);
    void XDespawnDeadNPCsAtRadius(float Radius);
    void XDespawnAliveNPCsAtRadius(float Radius);
    void XDebugAddHelloDialogsToQueue(const int32 TargetUID, const int32 DialogsCount);
    void XClearDialogQueue();
    void XCheckGamedata();
    void XAddMoneyToPlayer(int32 Value);
    void XAddAllNotes();
    void OnWaitForProfileSimulationFinished();
}; // Size: 0xB0

class UCustomConsoleManagerAI2 : public UBaseConsoleManager
{

    void XSetVisionParamsOverride(const int32 ModelUID, FString PrototypeSID);
    void XSetRelation(const int32 FirstUID, const int32 SecondUID, const int32 Relation);
    void XSetHearingParamsOverride(const int32 ModelUID, FString PrototypeSID);
}; // Size: 0xA8

class UCustomConsoleManagerAK : public UBaseConsoleManager
{

    void XToggleAutoSaveEachFrame();
    void XTestST162667();
    void XTestDangling();
    void XSuicide();
    void XSaveObjListToFile();
    void XPrintModelCapacity();
    void XPrintInventory(int32 UnitUID);
    void XKillThemAll();
}; // Size: 0xB0

class UCustomConsoleManagerAM : public UBaseConsoleManager
{

    void XToggleDebugTool();
    void XResetAI(int32 UID);
    void XMoveToPlayer(int32 NPC_UID, EMovementBehaviour Behaviour);
    void XDeactivateAIFeature(const EAIFeature Feature);
    void XCallQuickSave(float Angular);
    void XCallQuickLoad(float Angular);
    void XAddMoveTo(int32 UID);
    void XActivateAIFeature(const EAIFeature Feature);
    void StopFollowing();
    void StartFollowing(const int32 TargetUID, const bool bLockOrientation, const double ZOffset);
    void GetRelationBetween(const int32 LHS, const int32 RHS);
}; // Size: 0xA8

class UCustomConsoleManagerAchievements : public UBaseConsoleManager
{

    void XAchievementsUpdateDebugAchievement(const int32 Value);
    void XAchievementsResetAll();
    void XAchievementsProcessFinishCampaign();
    void XAchievementsAddProgress(FString Name, const int32 Value);
}; // Size: 0xA8

class UCustomConsoleManagerAnalytics : public UBaseConsoleManager
{

    void XAnalyticsPrintLocalTotals();
    void XAnalyticsPrintLocalKills();
    void XAnalyticsPrintGlobalTotals();
    void XAnalyticsPrintGlobalKills();
    void XAnalyticsPrintDeaths();
}; // Size: 0xA8

class UCustomConsoleManagerBuild : public UBaseConsoleManager
{

    void XSpawnItemNearPlayerBySID(FString ItemPrototypeSID);
    void XSpawnItemInCoordinatesBySID(FString ItemPrototypeSID, float Px, float Py, float Pz);
    void XShowPlayerCoordinates();
    void XSetPlayerSpeedMultiplier(float SpeedMultiplier);
    void XSetNoClipGSC(bool bNoClipGSC, float Speed);
    void XSetGodModeByUID(int32 EntityUID, bool bGodModeState);
    void XSetGodModeAllFactions(bool bGodModeState);
    void XSetFreeCameraSpeedMultiplier(float SpeedMultiplier);
    void XSetFactionGodMode(FString CurrentFactionSelector, bool bGodModeState);
    void XSetEntityUnkillableByUID(int32 EntityUID, bool bGodModeState);
    void XResetCurrentWeaponDurabilityToZero();
    void XResetCurrentBodyArmorDurabilityToZero();
    void XRepairCurrentWeapon();
    void XDisplayFocusingPlayerEnemiesCount();
}; // Size: 0xB8

class UCustomConsoleManagerCamera : public UBaseConsoleManager
{

    void ForegroundDepthScale(const float DepthScale);
}; // Size: 0xA8

class UCustomConsoleManagerDC : public UBaseConsoleManager
{

    void XVideoTeleportPlayerWithFade(const float Distance);
    void XToggleDrawDebugDiamondAnomaly();
    void XToggleDebugPlayerArmorInfo();
    void XToggleDebugLightningBallNavigation();
    void XToggleDebugDrawOverlapWithAnomalyObjects();
    void XToggleDebugCodeLock();
    void XToggleDebugBulletDistanceScaling();
    void XTeleportPlayerWithFade(const float Distance);
    void XTeleportPlayerInForwardDirection(const float Distance, const float Delay);
    void XShowIntroductionLogo();
    void XShowDebugInfoForStash(FString InStashIdentifier);
    void XSetWeatherTransitionTimeMultiplier(const float WeatherTransitionTimeMultiplier);
    void XSetCurrentCode(FString InCurrentCode);
    void XRegenerateItemsInStashes();
    void XNPCRemoveAbility(const int32 NpcUID, FString AbilityTag);
    void XNPCAddAbility(const int32 NpcUID, FString AbilityTag);
    void XKillNpcByUID(const int32 NpcUID);
    void XChangeDropBodyMethod(bool bShouldDrop);
}; // Size: 0x100

class UCustomConsoleManagerDK : public UBaseConsoleManager
{

    void XSetInventoryGamepadNavigationParams(const float InputDelay, const float InputThreshold, const float SelectionDelay);
    void XSetInventoryGamepadNavigationByAxises(const bool bAxes);
    void XSetInventoryGamepadInputThreshold(const float InputThreshold);
    void XSetInventoryGamepadInputSelectionDelay(const float InputSelectionDelay);
    void XSetInventoryGamepadInputDelay(const float InputDelay);
    void XSetGamepadNavigationBorderSpeed(const float Speed);
    void XGridNavigationVar(const int32 InVar);
    void XDrawDebugInventoryNavigation(const bool bDraw);
    void XDKStartTwoQuestStage(const FString QSID);
    void XDKStartQuestStage(const FString QSID, const FString SSID);
    void XDKStartQuest(const FString SID);
    void XDKFinishQuestStage(const FString QSID, const FString SSID, const bool bWin);
    void XDKFinishQuest(const FString SID, const bool bWin);
    void UseStackSplitContextual(const bool bInUse);
    void MoveItemsInTrade(const bool bMoveTraderItems, const bool bMoveOwnItems, const bool bMoveBarterItems);
    void HideCursorInMouseDrag(const bool bHide);
    void AllwaysShowDropHere(const bool bShow);
}; // Size: 0xA8

class UCustomConsoleManagerDP : public UBaseConsoleManager
{

    void XTestCrashStackOverflow(int32 Counter);
    void XTestCrashReturnIfFalse();
    void XTestCrashRandomAddress();
    void XTestCrashNullptrRT();
    void XTestCrashNullptr();
    void XTestCrashLambda();
    void XTestCrashCheckFalse();
    void XPrintLocalizedTextByKey(FString StringKey);
    void XInitializeLocalizationManager();
}; // Size: 0xA8

class UCustomConsoleManagerDR : public UBaseConsoleManager
{

    void XSwitchToWeather(const EWeather WeatherType);
    void XInitializeBenchmarkSequence(FString AssetPath, FString AssetName);
    void XForceWeather(const EWeather WeatherType);
    void XEnableCinematicMode();
    void XDisableCinematicMode();
}; // Size: 0xB0

class UCustomConsoleManagerEG : public UBaseConsoleManager
{

    void XGarbageCollector();
}; // Size: 0xA8

class UCustomConsoleManagerGA : public UBaseConsoleManager
{

    void XToggleAnalyticsTracking_Player(const bool bTracking);
    void XShowAnalyticsUserId();
}; // Size: 0xA8

class UCustomConsoleManagerIK : public UBaseConsoleManager
{

    void XSwitchPlayerRank(const ERank Rank);
    void XSkipTimeHours(const uint32 Hours);
    void XSignalStrengthTest();
    void XSetTwelveHourTime(const bool bSet);
    void XInputActionUnlock(FString IAName, FString IMCName);
    void XInputActionBlock(FString IAName, FString IMCName);
    void XBluePrintSearch();
}; // Size: 0xA8

class UCustomConsoleManagerIM : public UBaseConsoleManager
{

    void XHighlightDangerAreas(FString NavMeshAgentName);
    void XHighlightCovers(FString NavMeshAgentName);
}; // Size: 0xA8

class UCustomConsoleManagerMB : public UBaseConsoleManager
{

    void XToggleShowTriggerCapsuleView();
    void XToggleShowProtection();
    void XToggleShowPlayerRequestedMainHandWeaponType();
    void XToggleShowPlayerLocation();
    void XToggleShowPlayerLastHeldItem();
    void XToggleShowModels();
    void XToggleShowLightningBallAnomalyDebugInfo();
    void XToggleDebugExpulsionAnomaly();
    void XSwitchAnomalySpawnerPreset();
    void XSetDrawDebugExplosion(const bool bDebug, const float DebugTime);
}; // Size: 0xB8

class UCustomConsoleManagerMH : public UBaseConsoleManager
{

    void XToggleSoapBubbleDebug();
    void XToggleHubDoors(const bool bLocked, const float Radius);
    void XToggleDrawPlayerShootingDebug();
    void XToggleDrawPlayerRecoilDebug();
    void XToggleDrawPlayerDispersionDebug();
    void XToggleDrawAIShootingDebug();
    void XToggleCustomFov(const bool bEnable);
    void XSetFov(const float FOV);
    void XRemoveEffectFromPlayer(FString EffectPrototypeSID);
    void XApplyMainHandWeaponUpgradeBySID(FString UpgradePrototypeSID);
}; // Size: 0xC8

class UCustomConsoleManagerMP : public UBaseConsoleManager
{

    void XWeaponDrag(const int32 ModelUID, const float Delay);
    void XTriggerAutoSave();
    void XToggleLogLoadingProgress();
    void XToggleDebugAimAssist();
    void XStartSleep();
    void XSetClosestFaustCloneSwitchValue(const float SearchRadius, const float SwitchValue);
    void XSetArtifactSpawnLuck(const float LuckValue);
    void XSetAimAssistEnabled(const bool bEnabled);
    void XLoadLastSave();
    void XEnableLegsIK();
    void XDisplayArtifactSpawnLuckStatus(FString ArtifactSpawnerSID);
    void XDisableLegsIK();
}; // Size: 0x118

class UCustomConsoleManagerMS : public UBaseConsoleManager
{

    void XShowMaterial(int32 ObjUID, int32 MaterialID, int32 LODId);
    void XSetCameraShakeScale(float NewScale);
    void XSetAIStayGoal(const int32 ObjUID, FString AnimPath);
    void XLaunchCustomAnimation(int32 ObjUID, FString AnimPath, FString AnimSlotName);
    void XCommitSuicide(EDamageType DamageType);
}; // Size: 0xA8

class UCustomConsoleManagerMY : public UBaseConsoleManager
{

    void XSimulatePhysicsOnBoneForObj(int32 ObjUID, FString BoneName);
    void XSetXRayMode(bool bEnabled);
    void XSetDebugMode();
    void XPossessToCharacterByUID(int32 UID);
    void XEnsureAllRelevantCollisionStreamed();
}; // Size: 0xA8

class UCustomConsoleManagerOA : public UBaseConsoleManager
{

    void XPlayVideo(FString Path);
    void XNewDLCAvailable();
    void XIsHDREnabled();
    void XHasDLC(const FName DLCName);
    void XGetActiveDLC();
    void XDebugAudioScattererMap(const bool bEnabled);
    void XDebugAudioScattererEvents(const bool bEnabled, const float DrawTime);
}; // Size: 0x4B0

class UCustomConsoleManagerOM : public UBaseConsoleManager
{

    void XSetCarouselTimeToCenter(float Time);
    void XSetCarouselRotation(float Rotation);
    void XSetCarouselLiftUpTime(float Time);
    void XSetCarouselForce(float Force);
    void XSetCarouselDuration(float Duration);
    void XSetCarouselDebugTrajectory(bool bEnable);
    void XSetCarouselAngle(float Angle);
}; // Size: 0xA8

class UCustomConsoleManagerOP : public UBaseConsoleManager
{

    void XNpcSetStateTag(const int32 NpcUID, const EStateTag StateTag, const bool bEnabled);
    void XNpcSetFaceBlockingBlendMask(const int32 NpcUID, const EFaceBlockingBlendMasks FaceBlockingMask, const float BlockingWeight);
    void XNpcSetFaceBlendShapeState(const int32 NpcUID, const bool bEnabled);
    void XNpcFreezeRagdollPose(const int32 NpcUID);
    void XNpcArraySetFaceBlendShapeState(const int32 StartNpcUID, const int32 EndNpcUID, const bool bEnabled);
}; // Size: 0xA8

class UCustomConsoleManagerPA : public UBaseConsoleManager
{

    void XTogglePhysicalMaterialDebug(float Distance);
    void XToggleHoldBreathDebug();
    void XToggleGrenadeDebug(EGrenadeDebugFlag FlagValue);
    void XChangePlayerMovementFXPrototype(FString PrototypeSID);
}; // Size: 0xB0

class UCustomConsoleManagerPS : public UBaseConsoleManager
{

    void XShowInventoryDebugItmesStats(const bool bShow);
    void XChangeInventoryScroll(int32 Index);
    void XChangeCompasMarkers(int32 Index);
}; // Size: 0xA8

class UCustomConsoleManagerPU : public UBaseConsoleManager
{

    void XStopProcPopup();
    void XStartProcPopup();
    void XShowPopup(const int32 ButtonsNum);
    void XShowDemoPopup();
}; // Size: 0xB0

class UCustomConsoleManagerRK : public UBaseConsoleManager
{

    void XUnlockDoor(int32 DoorUID);
    void XTogglePsyPhantomDebugMode();
    void XTogglePlayerRadiationSphereVisibility();
    void XToggleNPCFlashlight(int32 UID);
    void XToggleHUDElements(EHUDElements ElementsToHide);
    void XToggleFreeCamera();
    void XToggleDrawPlayerStats(float ValueFontXSizeCoef, float ValueFontYSizeCoef);
    void XToggleDrawInteractNPCStats(const float ValueFontXSizeCoef, const float ValueFontYSizeCoef);
    void XToggleDrawCurrentDiscounts();
    void XToggleDetailedVitalsStat(EVitalType VitalType);
    void XTeleportToObjUID(int32 ObjUID);
    void XTeleportTo(float XCoord, float YCoord, float ZCoord);
    void XStopBenchmark();
    void XStartGSCBackgroundProfiler(float MsecThreshold, float RamMBThreshold, uint32 InFramesToCaptureOnSpike, uint32 InFrameCountToComputeAverage);
    void XStartBenchmark(float CameraHeight, float CircleRadius, float InitialPitch, float InitialYaw, int32 BenchRuns, bool bProfileCsv);
    void XSpawnPsyNPC(const bool bIsPsyPhantom, FString ObjPrototypeSID, const ERank Rank, const int32 Count);
    void XSpawnObjBySID(FString PrototypeSID, ERank Rank, bool bDestroyOnOffline, float Px, float Py, float Pz, float Pitch, float Yaw, float Roll);
    int32 XSpawnItemContainer(FString PrototypeID, float Px, float Py, float Pz, int32 Gold, float Pitch, float Yaw, float Roll);
    void XSetWeatherLocked(const bool bNowLocked);
    void XSetPsyNPCFilterParams(const bool bIsPsyPhantom, const EAgentType AgentType1, const EAgentType AgentType2, FString ObjPrototypeFilter1, FString ObjPrototypeFilter2, FString ObjPrototypeFilter3);
    void XSetGodModeForInteractObj(bool bGodMode);
    void XSetGodMode(bool bGodMode);
    void XSetGlobalObjectPath(FString SID, FString InValue);
    void XSetGlobalBool(FString SID, bool InValue);
    void XRevertUpgradeBySID(FString ItemPrototypeSID, FString UpgradePrototypeSID);
    void XOpenDoor(int32 DoorUID);
    void XObjRecalcAllEquipment(int32 ObjUID);
    void XObjRecalcAllCachedStats(int32 ObjUID);
    void XModifyStamina(int32 TargetUID, float FPSpent);
    void XModifyBleeding(int32 TargetUID, int32 AddBleeding);
    void XIncreaseEnsuresLimit(int32 IncreaseLimit);
    void XForceActorInteract(int32 ActorUID, int32 InteractableUID);
    void XFileExists(FString FilePath);
    void XDrawPsyFieldVolumes(bool bInDrawPsyField);
    void XDisassemblyCurrentWeapon();
    void XDisableFrictionForPlayerInBulb(bool bInDrawBulbDebug);
    void XDealDurabilityDamage(int32 ItemUID, float DurabilityDamage);
    void XDealDamage(int32 TargetUID, float Damage, float ArmorDamage, float ArmorPiercing, float Bleeding, float BleedingChanceIncrement, EDamageType Type, FString BoneHit);
    void XCreateItemInInventoryByID(FString PrototypeID, int32 ObjUID, int32 Count, float Durability);
    void XApplyUpgradeBySID(FString ItemPrototypeSID, FString UpgradePrototypeSID);
    void XApplyEffectOnPlayer(FString EffectPrototypeSID);
    void XApplyEffectOnNPCByUID(FString EffectPrototypeSID, const int32 UID);
    void XApplyEffectOnInteractNPC(FString EffectPrototypeSID);
    void TransformUID(int32 UID);
}; // Size: 0xC8

class UCustomConsoleManagerSD : public UBaseConsoleManager
{

    void XTeleportToPlacesOfInterest(FString SID);
    void XShowCompass();
    void XShowAllWidget();
    void XHideCompass();
    void XHideAllWidget();
    void XGetActorNameByUID(int32 UID);
    void XBeginPlay();
}; // Size: 0xA8

class UCustomConsoleManagerSM : public UBaseConsoleManager
{

    void XSVFriendlyFire(bool bEnabled);
    void XStopEmission();
    void XStartEmissionBySID(FString PrototypeSID);
    void XStartEmission();
    void XShowProjectileTrajectory(bool bShow);
    void XResumeScheduledEmission();
    void XPauseScheduledEmission();
    void XGetEmissionState();
}; // Size: 0xA8

class UCustomConsoleManagerSS : public UBaseConsoleManager
{

    void XALifeKillAll();
    void XALifeEnable();
    void XALifeDisable();
}; // Size: 0xA8

class UCustomConsoleManagerVC : public UBaseConsoleManager
{

    void XTestSysNotificationRemoveMoney();
    void XTestSysNotificationRemoveItem();
    void XTestSysNotificationInspectArtifact();
    void XTestSysNotificationDiscoverRegion();
    void XTestSysNotificationAddStash();
    void XTestSysNotificationAddMoney();
    void XTestSysNotificationAddItem();
    void XTestSysNotificationAddAudilog();
    void XTestSysNotification();
    void XTestPDA();
    void XTestJournalFinishQuest();
    void XTestJournal();
    void XShowUIDebugInput(bool bEnabled);
    void XShowStatProgres(bool bEnabled);
    void XShowPopupSaveSettinsRestart();
    void XShowPopupSaveSettings();
    void XShowPopupSaveIcon();
    void XShowPopupOverwriteSavedGame();
    void XShowPopupOverwriteCampaignSlot();
    void XShowPopupNotEnoughSpace();
    void XShowPopupNoIcon();
    void XShowPopupGameCannotBeSaveNow();
    void XShowPopupExitGame();
    void XShowPopupDiscardChanges();
    void XShowPopupDeleteSave();
    void XShowPopupCurruptedSaveData();
    void XShowPopupBrokenIcon();
    void XShowPopupAttentionIcon();
    void XShowHUD(bool bIsShow);
    void XShowGameDataAndTime();
    void XShowCompassAngle(bool bEnabled);
    void XHideGameDataAndTime();
    void XEnterRegion(FString RegionSID);
    void XDialogFontSizeSubtitle(int32 InTextSize);
    void XDialogFontSizeAnswer(int32 InTextSize);
    void XChangeLanguageRU();
    void XChangeLanguageEN();
    void XChangeLanguage(int32 LanguageIndex);
    void XAddPDATutorialsBySID(FString InPDATutorialPrototypeSID);
    void XAddNotesById(FString InNotePrototypeID);
    void XAddItemDragToQuickSlot(int32 IndexSlot);
    void DebugUIShowTextSize(bool bEnabled);
}; // Size: 0xA8

class UCustomConsoleManagerVD : public UBaseConsoleManager
{

    void XSpawnDeadNpc();
    void XShowUnitAndSquadUIDs(float Radius);
    void XProtectSquad(FString SquadUID, bool bProtect);
    void XProtectItemContainer(FString ContainerUID, bool bProtect);
}; // Size: 0xA8

class UCustomConsoleManagerVP : public UBaseConsoleManager
{

    void XWoundNpcByUID(const int32 NpcUID);
    void XShootAttach();
    void XResurrectNPCAsZombie(const int32 NpcUID);
    void XReloadAttachTactical();
    void XReloadAttach();
    void XNpcSetLookAtOwnerState(const int32 NpcUID, ELookAtOwnerState LookAtOwnerState);
    void XNpcLookAtNPC(const int32 NpcUID, const int32 TargetNpcUID);
    void XNpcLookAt(const int32 NpcUID, const float X, const float Y, const float Z);
    void XLimitNpcBodyPartRotation(const int32 NpcUID, const float LimitAngle, ERotationPartType RotationPartType);
    void XLaunchFacialAnimation(const int32 ObjUID, FString AnimPath);
    void XKnockDownNpcByAnotherNpc(const int32 NpcUID, const int32 AttackerNpcUID);
    void XKnockDownNpc(const int32 NpcUID);
}; // Size: 0xA8

class UCustomConsoleManagerVV : public UBaseConsoleManager
{

    void XGiveWeaponWithAttaches();
}; // Size: 0xB8

class UCustomConsoleManagerWP : public UBaseConsoleManager
{
}; // Size: 0xA8

class UCustomConsoleManagerYK : public UBaseConsoleManager
{

    void XTestSetDiscount(const bool InbDiscount);
    void XBlockItemSelectorSlots(const bool InBlock);
    void XBlockItemSelectorSlot(const bool InBlock, const int32 InSlotNum);
}; // Size: 0xB0

class UCustomConsoleManagerYS : public UBaseConsoleManager
{

    void XSpawnALifeDirectorScenario(FString ScenarioSID);
}; // Size: 0xA8

class UCustomDataEditor : public UObject
{
    float ParameterValue;                                                             // 0x0028 (size: 0x4)
    float Weight;                                                                     // 0x002C (size: 0x4)
    int32 VariationIndex;                                                             // 0x0030 (size: 0x4)
    bool bBlockedInVisualizer;                                                        // 0x0034 (size: 0x1)
    TArray<class UEditorMaterialParameterConfig*> MaterialParameterConfigs;           // 0x0038 (size: 0x10)

}; // Size: 0x48

class UCustomDataVariationsEditor : public UObject
{
    int32 ParameterID;                                                                // 0x0028 (size: 0x4)
    FName ParameterName;                                                              // 0x002C (size: 0x8)
    FName MaterialGroup;                                                              // 0x0034 (size: 0x8)
    int32 VariationStartingIndex;                                                     // 0x003C (size: 0x4)
    int32 VariationCount;                                                             // 0x0040 (size: 0x4)
    bool bShouldBeAppliedOnMesh;                                                      // 0x0044 (size: 0x1)
    ECustomDataDistribution Distribution;                                             // 0x0045 (size: 0x1)
    TArray<class UCustomDataEditor*> Variations;                                      // 0x0048 (size: 0x10)

}; // Size: 0x58

class UCustomGrid : public UUserWidget
{
    class UCanvasPanel* CanvasPanel;                                                  // 0x0278 (size: 0x8)
    class UTilingGridBack* TilingBack;                                                // 0x0280 (size: 0x8)
    int32 SizeY;                                                                      // 0x0288 (size: 0x4)
    int32 SizeX;                                                                      // 0x028C (size: 0x4)
    TMap<int32, UCustomGridSlot*> Widgets;                                            // 0x0290 (size: 0x50)
    TArray<class UCustomGridSlot*> CachedWidgets;                                     // 0x02E0 (size: 0x10)
    int32 GamepadCurrPosX;                                                            // 0x02F0 (size: 0x4)
    int32 GamepadCurrPosY;                                                            // 0x02F4 (size: 0x4)
    class UCanvasPanel* ItemPlacementPanel;                                           // 0x02F8 (size: 0x8)
    class UTextWidget* OwnerMoney;                                                    // 0x0300 (size: 0x8)
    class UScrollBox* GridScrollBox;                                                  // 0x0308 (size: 0x8)
    class UTextWidget* HeaderText;                                                    // 0x0310 (size: 0x8)
    class USizeBox* GridSizeBox;                                                      // 0x0318 (size: 0x8)
    class UBorder* ItemPlaceBorder;                                                   // 0x0320 (size: 0x8)
    class UCanvasPanel* ScrollCanvasPanel;                                            // 0x0328 (size: 0x8)
    class UBorder* NavBorder;                                                         // 0x0330 (size: 0x8)
    class UVerticalBox* VerticalBoxScroll;                                            // 0x0338 (size: 0x8)
    class UHorizontalBox* MoneyBox;                                                   // 0x0340 (size: 0x8)
    class UImage* InfinityMoneyIcon;                                                  // 0x0348 (size: 0x8)
    bool bDefaultScrollEnd;                                                           // 0x0350 (size: 0x1)
    bool bShowHeader;                                                                 // 0x0351 (size: 0x1)
    FString HeaderLocSID;                                                             // 0x0358 (size: 0x10)
    class UCustomGridSlot* CurrPickedWidget;                                          // 0x03D0 (size: 0x8)
    class UInventoryNew* InventoryNew;                                                // 0x03D8 (size: 0x8)
    class UWeightBar* WeightBar;                                                      // 0x03E0 (size: 0x8)
    class UOverlay* WeightBarOverlay;                                                 // 0x03E8 (size: 0x8)
    class UTextWidget* WeightText;                                                    // 0x03F0 (size: 0x8)
    class UTextWidget* MaxWeightText;                                                 // 0x03F8 (size: 0x8)
    class UTextWidget* WeightUnits;                                                   // 0x0400 (size: 0x8)
    class UTextWidget* LootSeparator;                                                 // 0x0408 (size: 0x8)
    class UImage* WeightIcon;                                                         // 0x0410 (size: 0x8)
    class UImage* PositiveHighlight;                                                  // 0x0418 (size: 0x8)
    class UImage* NegativeHighlight;                                                  // 0x0420 (size: 0x8)
    float BeforeGamepadNavigationDelay;                                               // 0x0430 (size: 0x4)
    float GamepadNavigationThreshold;                                                 // 0x0434 (size: 0x4)
    float GamepadNavigationDelay;                                                     // 0x0438 (size: 0x4)
    bool bDrawDebugNavigationLines;                                                   // 0x043C (size: 0x1)
    class UCurveFloat* NavCurve;                                                      // 0x0440 (size: 0x8)
    FVector2D VisibleCells;                                                           // 0x0448 (size: 0x10)
    TSoftObjectPtr<UTexture2D> PositiveHighlightTexture;                              // 0x0458 (size: 0x30)
    TSoftObjectPtr<UTexture2D> NegativeHighlightTexture;                              // 0x0488 (size: 0x30)
    float ScrollMovementSpeed;                                                        // 0x04B8 (size: 0x4)
    TSubclassOf<class UUserWidget> ItemSlotWidgetClass;                               // 0x04C0 (size: 0x8)
    int32 InventoryScrollChangeConsole;                                               // 0x04C8 (size: 0x4)
    float CellSize;                                                                   // 0x04CC (size: 0x4)
    class UItemDragWidget* CurrMovingWidget;                                          // 0x04E0 (size: 0x8)
    class UUserWidget* MousePosTargetWidget;                                          // 0x04E8 (size: 0x8)
    float NavPosChangeAnimSpeed;                                                      // 0x0648 (size: 0x4)

    void SetTargetCellDelayed();
    void SetCurrentCellDelayed();
    void OnScrollBarScrolled(float Offset);
}; // Size: 0x650

class UCustomGridSlot : public UInteractableItemSlotBaseWidget
{
    class USizeBox* ItemImageSizeBox;                                                 // 0x0518 (size: 0x8)
    class UImage* Background;                                                         // 0x0520 (size: 0x8)
    class UTextWidget* StackAmount;                                                   // 0x0528 (size: 0x8)
    class UImage* Broken;                                                             // 0x0530 (size: 0x8)
    class UImage* Attach;                                                             // 0x0538 (size: 0x8)
    int32 MinSlotSize;                                                                // 0x0540 (size: 0x4)

}; // Size: 0x580

class UCustomSimplifiedGrid : public UUserWidget
{
    class UCanvasPanel* CanvasPanel;                                                  // 0x0278 (size: 0x8)
    class UTilingGridBack* TilingBack;                                                // 0x0280 (size: 0x8)
    int32 SizeY;                                                                      // 0x0288 (size: 0x4)
    int32 SizeX;                                                                      // 0x028C (size: 0x4)
    TMap<int32, UCustomSimplifiedGridSlot*> Widgets;                                  // 0x0290 (size: 0x50)
    TArray<class UCustomSimplifiedGridSlot*> CachedWidgets;                           // 0x02E0 (size: 0x10)
    int32 GamepadCurrPosX;                                                            // 0x02F0 (size: 0x4)
    int32 GamepadCurrPosY;                                                            // 0x02F4 (size: 0x4)
    class UCanvasPanel* ItemPlacementPanel;                                           // 0x02F8 (size: 0x8)
    class UTextWidget* OwnerMoney;                                                    // 0x0300 (size: 0x8)
    class UScrollBox* GridScrollBox;                                                  // 0x0308 (size: 0x8)
    class UTextWidget* HeaderText;                                                    // 0x0310 (size: 0x8)
    class USizeBox* GridSizeBox;                                                      // 0x0318 (size: 0x8)
    class UBorder* ItemPlaceBorder;                                                   // 0x0320 (size: 0x8)
    class UCanvasPanel* ScrollCanvasPanel;                                            // 0x0328 (size: 0x8)
    class UBorder* NavBorder;                                                         // 0x0330 (size: 0x8)
    class UVerticalBox* VerticalBoxScroll;                                            // 0x0338 (size: 0x8)
    bool bDefaultScrollEnd;                                                           // 0x0340 (size: 0x1)
    bool bShowHeader;                                                                 // 0x0341 (size: 0x1)
    FString HeaderLocSID;                                                             // 0x0348 (size: 0x10)
    class UTextWidget* WeightText;                                                    // 0x0360 (size: 0x8)
    class UTextWidget* MaxWeightText;                                                 // 0x0368 (size: 0x8)
    class UTextWidget* WeightUnits;                                                   // 0x0370 (size: 0x8)
    class UTextWidget* LootSeparator;                                                 // 0x0378 (size: 0x8)
    class UImage* WeightIcon;                                                         // 0x0380 (size: 0x8)
    float BeforeGamepadNavigationDelay;                                               // 0x0390 (size: 0x4)
    float GamepadNavigationThreshold;                                                 // 0x0394 (size: 0x4)
    float GamepadNavigationDelay;                                                     // 0x0398 (size: 0x4)
    bool bDrawDebugNavigationLines;                                                   // 0x039C (size: 0x1)
    class UCurveFloat* NavCurve;                                                      // 0x03A0 (size: 0x8)
    FVector2D VisibleCells;                                                           // 0x03A8 (size: 0x10)
    TSubclassOf<class UUserWidget> ItemSlotWidgetClass;                               // 0x03B8 (size: 0x8)
    float CellSize;                                                                   // 0x03C0 (size: 0x4)
    class UItemDragWidget* CurrMovingWidget;                                          // 0x03C8 (size: 0x8)
    class UUserWidget* MousePosTargetWidget;                                          // 0x03D0 (size: 0x8)
    float NavPosChangeAnimSpeed;                                                      // 0x04D0 (size: 0x4)

    void OnScrollBarScrolled(float Offset);
}; // Size: 0x4D8

class UCustomSimplifiedGridSlot : public UItemSlotBaseWidget
{
    class USizeBox* ItemImageSizeBox;                                                 // 0x0410 (size: 0x8)
    class UImage* Background;                                                         // 0x0418 (size: 0x8)
    class UTextWidget* StackAmount;                                                   // 0x0420 (size: 0x8)
    class UImage* Broken;                                                             // 0x0428 (size: 0x8)
    class UImage* Attach;                                                             // 0x0430 (size: 0x8)
    class UImage* Quest;                                                              // 0x0438 (size: 0x8)
    int32 MinSlotSize;                                                                // 0x0440 (size: 0x4)

}; // Size: 0x480

class UCutsceneLookUpIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UCutsceneTurnIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UCutscenesLocalizationConfig : public UDeveloperSettings
{
    TMap<ELocalizationLanguage, uint32> VoiceoverLanguageToTrackIndexMap;             // 0x0038 (size: 0x50)
    FString LocalizedBinkPostfix;                                                     // 0x0088 (size: 0x10)

}; // Size: 0x98

class UDLCPopup : public UViewBase
{
}; // Size: 0x2C0

class UDPADSelection : public UWidgetBase
{
    class USizeBox* SizeContainer;                                                    // 0x0278 (size: 0x8)
    EDpadNavigation DpadNavigation;                                                   // 0x0280 (size: 0x1)
    FName DPadStyleId;                                                                // 0x0284 (size: 0x8)
    bool bShouldLoadWidgetSize;                                                       // 0x028C (size: 0x1)
    float WidgetSize;                                                                 // 0x0290 (size: 0x4)
    class UImageWidget* Dpad_Active;                                                  // 0x0298 (size: 0x8)

}; // Size: 0x2A0

class UDPadLeftIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UDPadOpenDownIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UDPadOpenUpIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UDPadRightIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UDamageInteractableComponent : public UUIDActorComponent
{
    FDamageInteractableComponentOnDamageAccumulated OnDamageAccumulated;              // 0x00C8 (size: 0x10)
    void OnDamageAccumulated(FUID LastDamageDealerUID, bool bProjectileFlownThroughObject);
    TSet<EDamageSource> DamageSources;                                                // 0x00D8 (size: 0x50)
    float InteractionDamageThreshold;                                                 // 0x0128 (size: 0x4)
    bool bOnlyPlayerDamage;                                                           // 0x0130 (size: 0x1)

}; // Size: 0x148

class UDamageVoiceoverComponent : public UActorComponent
{
    class APC* Owner;                                                                 // 0x00A0 (size: 0x8)

}; // Size: 0x230

class UDataLayerPhysicsComponent : public UActorComponent
{

    void OnDataLayersUpdated(const class UDataLayerInstance* DataLayer, EDataLayerRuntimeState State);
}; // Size: 0xF8

class UDeadBody : public USingleClickComponent
{

    class AObj* GetInteractedActor();
}; // Size: 0x210

class UDeadBodyHoldComponent : public UHoldComponent
{
}; // Size: 0x238

class UDealDamageComponent : public UActorComponent
{
    float Damage;                                                                     // 0x00A0 (size: 0x4)
    float ArmorDamage;                                                                // 0x00A4 (size: 0x4)
    float ArmorPiercing;                                                              // 0x00A8 (size: 0x4)
    EDamageType DamageType;                                                           // 0x00AC (size: 0x1)
    EDamageSource DamageSource;                                                       // 0x00AD (size: 0x1)

    void DealDamage(const class AActor* InTargetActor);
}; // Size: 0xB0

class UDeathCounter : public UWidgetBase
{
    class UTextWidget* DeathCounterText;                                              // 0x0278 (size: 0x8)

}; // Size: 0x280

class UDeathEventData : public UGameplayEventData
{
    EDamageType DamageType;                                                           // 0x0028 (size: 0x1)
    EDamageSource DamageSource;                                                       // 0x0029 (size: 0x1)
    ECauseOfDeath CauseOfDeath;                                                       // 0x002A (size: 0x1)

}; // Size: 0x30

class UDeathScreen : public UMenuMainViewBase
{
    class UImage* BlackBackground;                                                    // 0x0338 (size: 0x8)
    class UOverlay* DeathScreenOverlay;                                               // 0x0340 (size: 0x8)
    class UImage* Background;                                                         // 0x0348 (size: 0x8)
    class UTextWidget* DeadByText;                                                    // 0x0350 (size: 0x8)
    class UDeathCounter* DeathCounterWidget;                                          // 0x0358 (size: 0x8)

}; // Size: 0x370

class UDebugHUDView : public UViewBase
{
    class UTextBlock* HourText;                                                       // 0x02C0 (size: 0x8)
    class UTextBlock* MinutesText;                                                    // 0x02C8 (size: 0x8)
    class UTextBlock* DataText;                                                       // 0x02D0 (size: 0x8)
    class UHorizontalBox* MiniMapPanel;                                               // 0x02D8 (size: 0x8)
    class UHorizontalBox* DataTimePanel;                                              // 0x02E0 (size: 0x8)
    class UStatPanelDebug* StatPanelDebug;                                            // 0x02E8 (size: 0x8)

}; // Size: 0x310

class UDebugTextLenWidget : public UDebugTextWidgetBase
{

    int32 GetWarningIndex(FString Text, const int32 TextLen);
}; // Size: 0x2A8

class UDebugTextLineWidget : public UDebugTextWidgetBase
{

    int32 GetIndecRowSettings(int32 CurrentRow, const TArray<FRengeSettings>& RowSettings);
}; // Size: 0x2B8

class UDebugTextWidgetBase : public UDebugWidgetBase
{
    FName WidgetWarningId;                                                            // 0x0280 (size: 0x8)
    class UDataTable* TextWarningDT;                                                  // 0x0288 (size: 0x8)
    bool IsShouldEnableInWidget;                                                      // 0x0290 (size: 0x1)
    class UImage* DebugImage;                                                         // 0x0298 (size: 0x8)
    class UGSCTextBlock* DebugText;                                                   // 0x02A0 (size: 0x8)

    FUIWarningSettings FindRengeSettings();
    void CheckDebugTextBluprint(const FText& Text, class UUserWidget* InOwnerWidget);
}; // Size: 0x2A8

class UDebugWidgetBase : public UWidgetBase
{
    bool bShouldDisabledOnStart;                                                      // 0x0278 (size: 0x1)

}; // Size: 0x280

class UDebugWorldSubsystem : public UWorldSubsystem
{
    class AGSCDebugDrawer* Drawer;                                                    // 0x0030 (size: 0x8)

}; // Size: 0x38

class UDeleteCampaign : public UMenuButtonActionBase
{
}; // Size: 0x30

class UDeleteSaveAction : public USaveLoadActionBase
{
}; // Size: 0xC0

class UDestructabilityMetaInfoComponent : public UActorComponent
{
    bool bAllowConvertionToDestructibleObject;                                        // 0x00A0 (size: 0x1)

}; // Size: 0xA8

class UDialogActionWidget : public UWidgetBase
{
    class UImageWidget* Icon;                                                         // 0x0278 (size: 0x8)

}; // Size: 0x290

class UDialogDoFComponent : public UObject
{
    TWeakObjectPtr<class AWeatherController> WeatherController;                       // 0x0030 (size: 0x8)
    TWeakObjectPtr<class UWorld> CachedWorld;                                         // 0x0038 (size: 0x8)

}; // Size: 0x40

class UDialogFolder : public UWidgetBase
{
    TSubclassOf<class UDialogueAnswer> AnswerSlotClass;                               // 0x0278 (size: 0x8)
    FName HoverFolderStyleId;                                                         // 0x0280 (size: 0x8)
    FName UnhoverFolderStyleId;                                                       // 0x0288 (size: 0x8)
    class UTextWidget* NameText;                                                      // 0x0290 (size: 0x8)
    class UVerticalBox* AnswerContainer;                                              // 0x0298 (size: 0x8)
    class UProgressBarWidget* WFRTimer;                                               // 0x02A0 (size: 0x8)
    class USlider* WFRSlider;                                                         // 0x02A8 (size: 0x8)

}; // Size: 0x2D0

class UDialogLightSubsystem : public UGameInstanceSubsystem
{
}; // Size: 0x388

class UDialogManager : public UBaseTickableManager
{

    void OnToggleAudiolog(const bool bPlayAudiolog);
}; // Size: 0x380

class UDialogPointLightComponent : public UPointLightComponent
{
}; // Size: 0x450

class UDialogProtectionManager : public UBaseManager
{
    class ADialogProtector* DialogProtector;                                          // 0x0088 (size: 0x8)

}; // Size: 0xA0

class UDialogSelectAnswerIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UDialogSpotLightComponent : public USpotLightComponent
{
}; // Size: 0x450

class UDialogueAnswer : public UDialogueSpeaker
{
    class UButton* Button;                                                            // 0x02B0 (size: 0x8)
    class UDialogActionWidget* Action;                                                // 0x02B8 (size: 0x8)
    class UImage* Back;                                                               // 0x02C0 (size: 0x8)
    class UImage* Line;                                                               // 0x02C8 (size: 0x8)
    class UWidgetAnimation* HoverAnimation;                                           // 0x02D0 (size: 0x8)
    class UDataTable* ColorStyle;                                                     // 0x02D8 (size: 0x8)
    bool bIsEnabledHoverEvents;                                                       // 0x02E0 (size: 0x1)
    float BorderPadding;                                                              // 0x02E4 (size: 0x4)
    class UDebugTextWidgetBase* DebugTextLen;                                         // 0x02E8 (size: 0x8)
    class UDebugTextWidgetBase* DebugTextRow;                                         // 0x02F0 (size: 0x8)
    FName HoverStyleId;                                                               // 0x02F8 (size: 0x8)
    FName NormalStyleId;                                                              // 0x0300 (size: 0x8)

    void AnswerWidgetClick();
}; // Size: 0x328

class UDialogueButton : public UButtonBase
{
    class UTextWidget* Text;                                                          // 0x02C0 (size: 0x8)
    class URichTextWidget* RichTextWidget;                                            // 0x02C8 (size: 0x8)
    bool bEnableStyleManager;                                                         // 0x02D0 (size: 0x1)
    FString StylePrefix;                                                              // 0x02D8 (size: 0x10)
    FName HoverStyleId;                                                               // 0x02E8 (size: 0x8)
    FName NormalStyleId;                                                              // 0x02F0 (size: 0x8)
    FName ActionId;                                                                   // 0x02F8 (size: 0x8)
    FText ButtonText;                                                                 // 0x0300 (size: 0x18)

}; // Size: 0x318

class UDialogueFastAnswer : public UDialogueAnswer
{
    class UHintSwitcher* HintSwitcher;                                                // 0x0328 (size: 0x8)
    bool bShouldMoveOnRight;                                                          // 0x0330 (size: 0x1)
    FString ActionName;                                                               // 0x0338 (size: 0x10)
    FString StylePrefix;                                                              // 0x0348 (size: 0x10)
    FDialogueFastAnswerOnClickFastAnswer OnClickFastAnswer;                           // 0x0358 (size: 0x10)
    void OnClickFastAnswer();
    class UTexture2D* SkifChoiceIcon;                                                 // 0x0368 (size: 0x8)
    class UTexture2D* SparkChoiceIcon;                                                // 0x0370 (size: 0x8)
    class UTexture2D* VartaChoiceIcon;                                                // 0x0378 (size: 0x8)
    class UTexture2D* StrelokChoiceIcon;                                              // 0x0380 (size: 0x8)
    class UTexture2D* StalkerChoiceIcon;                                              // 0x0388 (size: 0x8)
    class UTexture2D* NoonChoiceIcon;                                                 // 0x0390 (size: 0x8)

    void SelectAnswer();
    void PostSelectAnswer();
    void EndSelectAnswer();
}; // Size: 0x3B0

class UDialogueSpeaker : public UWidgetBase
{
    class URichTextWidget* SpeakerText;                                               // 0x0278 (size: 0x8)
    class UImage* Background;                                                         // 0x0280 (size: 0x8)
    bool bShouldResetTexture;                                                         // 0x0288 (size: 0x1)
    class UTexture2D* BackgrounTexture;                                               // 0x0290 (size: 0x8)
    FVector2D MoveWidgetOffset;                                                       // 0x0298 (size: 0x10)

}; // Size: 0x2B0

class UDialogueView : public UViewBaseExtended
{
    FDialogAnswersStyles AswersStyles;                                                // 0x02C8 (size: 0x380)
    bool bShouldShowAnimation;                                                        // 0x0648 (size: 0x1)
    class UWidgetAnimation* ShowAnimation;                                            // 0x0650 (size: 0x8)
    float DialogTimeDelay;                                                            // 0x0658 (size: 0x4)

}; // Size: 0x6F0

class UDialogueViewFolder : public UDialogueView
{
    float InputDelayTime;                                                             // 0x06F0 (size: 0x4)
    int32 DefaultFolderIndex;                                                         // 0x06F4 (size: 0x4)
    StartSelectFolderType DefaultSelectFolderSlot;                                    // 0x06F8 (size: 0x1)
    class USelectedAnswerMark* SelectedAnswerMark;                                    // 0x0700 (size: 0x8)
    class UDialogFolder* FolderSlot1;                                                 // 0x0708 (size: 0x8)
    class UDialogFolder* FolderSlot2;                                                 // 0x0710 (size: 0x8)
    class UDialogFolder* FolderSlot3;                                                 // 0x0718 (size: 0x8)
    class UDialogFolder* FolderSlot4;                                                 // 0x0720 (size: 0x8)
    class UDialogFolder* FolderSlot5;                                                 // 0x0728 (size: 0x8)
    class UDialogFolder* FolderSlot6;                                                 // 0x0730 (size: 0x8)
    class UScrollBox* AnswerContainer;                                                // 0x0738 (size: 0x8)
    class UOverlay* ReplicOverlay;                                                    // 0x0740 (size: 0x8)
    class UVerticalBox* LeftButtonsContainer;                                         // 0x0748 (size: 0x8)
    class UVerticalBox* RightButtonsContainer;                                        // 0x0750 (size: 0x8)
    class UUserWidget* ButtonHintExit;                                                // 0x0758 (size: 0x8)
    class UUserWidget* ButtonHintUpgrade;                                             // 0x0760 (size: 0x8)
    class UUserWidget* ButtonHintTrade;                                               // 0x0768 (size: 0x8)
    class UImage* TimerProgressImage;                                                 // 0x0770 (size: 0x8)
    TArray<class UDialogFolder*> FolderWidgets;                                       // 0x0780 (size: 0x10)
    TArray<class UDialogFolder*> FolderWidgetsPool;                                   // 0x0790 (size: 0x10)

    void UIDialogOpenUpgrade();
    void UIDialogOpenTrade();
    void UIDialogClose();
    void UIDialogAnswerUp();
    void UIDialogAnswerDown();
    void UIDialogAnswerConfirm();
    class UDialogueAnswer* ChangeSelectFolder(const int32 IndexOldFolder, const int32 AxisMove);
}; // Size: 0x7C0

class UDiamondAnomalyAffectedItemComponent : public USceneComponent
{
    class UNiagaraSystem* DiamondParticle;                                            // 0x02A0 (size: 0x8)
    class UPhysicalMaterial* OverridePhysicalMaterial;                                // 0x02A8 (size: 0x8)
    TArray<class UNiagaraComponent*> DiamondParticles;                                // 0x02B0 (size: 0x10)
    class UAkAuxBus* DiamondAuxFilter;                                                // 0x02C0 (size: 0x8)
    class UAkLateReverbComponent* DiamondAuxComponent;                                // 0x02C8 (size: 0x8)
    class UBoxComponent* DiamondFilterBounds;                                         // 0x02D0 (size: 0x8)

}; // Size: 0x320

class UDifficultyButton : public UMenuButtonBase
{
    class UImage* DifficultyImage;                                                    // 0x0300 (size: 0x8)
    class UTextWidget* DifficultyName;                                                // 0x0308 (size: 0x8)
    class UTextWidget* DifficultyDescription;                                         // 0x0310 (size: 0x8)

}; // Size: 0x318

class UDifficultySubView : public UMenuSubViewBase
{
    TSubclassOf<class UMenuButtonBase> DifficultyButtonStyleClass;                    // 0x02D0 (size: 0x8)
    TArray<FShortcutData> DifficultyButtonShortcuts;                                  // 0x02D8 (size: 0x10)
    TMap<int32, FDifficultyData> DifficultyDataSet;                                   // 0x02E8 (size: 0x50)

}; // Size: 0x338

class UDisplaySettingsWidget : public USettingsPage
{
    FDisplaySettingsWidgetOnDisplayGammaSelected OnDisplayGammaSelected;              // 0x0290 (size: 0x10)
    void OnDisplayGammaSelected(const bool InSelected);
    class USettingElementSwitcher* GPUAdapter;                                        // 0x02A0 (size: 0x8)
    class USettingElementSwitcher* Monitor;                                           // 0x02A8 (size: 0x8)
    class USettingElementSwitcher* AspectRatio;                                       // 0x02B0 (size: 0x8)
    class USettingsElementResolutionSwitcher* ScreenResolution;                       // 0x02B8 (size: 0x8)
    class USettingElementSwitcher* WindowMode;                                        // 0x02C0 (size: 0x8)
    class USettingElementValueLocSwitcher* FrameRate;                                 // 0x02C8 (size: 0x8)
    class USettingElementOnOff* Vsync;                                                // 0x02D0 (size: 0x8)
    class USettingsElementPercent* FOV;                                               // 0x02D8 (size: 0x8)
    class USettingElementOnOff* hdr;                                                  // 0x02E0 (size: 0x8)
    class UTextWidget* HDRCategory;                                                   // 0x02E8 (size: 0x8)
    class USettingsElementPercent* Gamma;                                             // 0x02F0 (size: 0x8)
    class USettingsElementPercent* Brightness;                                        // 0x02F8 (size: 0x8)
    class USettingsElementPercent* HDRMinLuminance;                                   // 0x0300 (size: 0x8)
    class USettingsElementPercent* HDRMaxLuminance;                                   // 0x0308 (size: 0x8)
    class USettingsElementPercent* HDRBaseLuminance;                                  // 0x0310 (size: 0x8)
    class USettingsElementPercent* HDRUILuminance;                                    // 0x0318 (size: 0x8)
    class USettingElementValueLocSwitcher* HDRScheme;                                 // 0x0320 (size: 0x8)
    class USettingsElementPercent* Contrast;                                          // 0x0328 (size: 0x8)
    class USettingElementButton* SafeZone;                                            // 0x0330 (size: 0x8)
    class USettingElementOnOff* NVIDIAReflex;                                         // 0x0338 (size: 0x8)
    TArray<class UWidget*> PCSpecificElements;                                        // 0x0340 (size: 0x10)
    TArray<class UWidget*> ConsoleSpecificElements;                                   // 0x0350 (size: 0x10)
    TSoftClassPtr<UMenuSubViewBase> SafeZoneViewWidgetClass;                          // 0x0360 (size: 0x30)

}; // Size: 0x3C0

class UDoNothing : public UMenuButtonActionBase
{
}; // Size: 0x30

class UDoor : public ULockableComponent
{
    TArray<FDoorMovableData> Doors;                                                   // 0x0280 (size: 0x10)
    bool bShouldRestoreAngle;                                                         // 0x0290 (size: 0x1)
    bool bTaskCanBeInterrupted;                                                       // 0x0291 (size: 0x1)
    bool bDoorCanBePushed;                                                            // 0x0292 (size: 0x1)
    float InitialPushImpulseMultiplier;                                               // 0x0294 (size: 0x4)
    float AngleRestoreSpeed;                                                          // 0x0298 (size: 0x4)
    float AngleRestoreDelay;                                                          // 0x029C (size: 0x4)
    EDoorState CurrentState;                                                          // 0x02A0 (size: 0x1)

    void OnDoorMeshHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
}; // Size: 0x2C0

class UDragDropZone : public UUserWidget
{
}; // Size: 0x2C0

class UDraggableComponent : public USingleClickComponent
{
}; // Size: 0x208

class UDrawGSCDebug : public UDebugDrawComponent
{
}; // Size: 0x620

class UDynamicEnvironmentNiagaraComponent : public UEnvironmentNiagaraComponent
{
}; // Size: 0x840

class UDynamicObstacleAvoidanceManager : public UBaseTickableManager
{
}; // Size: 0x110

class UDynamicObstacleAvoidanceSettings : public UDeveloperSettings
{
    FDynamicObstacleAvoidanceSystemSettings SystemSettings;                           // 0x0038 (size: 0x8)
    FDynamicObstacleAvoidanceQuerrySettings QuerrySettings;                           // 0x0040 (size: 0x18)
    FDynamicObstacleAvoidanceAgentSettings PiecefulAgentSettings;                     // 0x0058 (size: 0x20)
    FDynamicObstacleAvoidanceAgentSettings CombatAgentSettings;                       // 0x0078 (size: 0x20)

}; // Size: 0x98

class UEULAView : public UViewBaseExtended
{
    class UTextWidget* EULATitle;                                                     // 0x02C8 (size: 0x8)
    class UVerticalBox* TextVerticalBox;                                              // 0x02D0 (size: 0x8)
    class UScrollBox* EULAScrollBox;                                                  // 0x02D8 (size: 0x8)
    class UModifiableRichText* EULAMainText;                                          // 0x02E0 (size: 0x8)
    class USettingElementSwitcher* SendAnalyticsDataSwitcher;                         // 0x02E8 (size: 0x8)

    void TurnSendAnalyticsOn();
    void TurnSendAnalyticsOff();
    void ShowAcceptButtonBP();
    void ScrollUp();
    void ScrollDown();
    void OnUserScrolled(float Offset);
    void Decline();
    void Accept();
}; // Size: 0x308

class UEditorMaterialParameterConfig : public UObject
{
    FSoftObjectPath TexturePath;                                                      // 0x0028 (size: 0x20)
    FName ParameterName;                                                              // 0x0048 (size: 0x8)

}; // Size: 0x50

class UElectricComponent : public UActorComponent
{
    FElectricComponentOnStartEMIEvent OnStartEMIEvent;                                // 0x00A0 (size: 0x10)
    void OnStartEMIEvent(float EMIDuration);
    FElectricComponentOnEndEMIEvent OnEndEMIEvent;                                    // 0x00B0 (size: 0x10)
    void OnEndEMIEvent();
    bool bIsTurnedOn;                                                                 // 0x00C0 (size: 0x1)

}; // Size: 0xD0

class UEmissionManager : public UBaseTickableManager
{

    void GeneratorsSequenceIdle();
}; // Size: 0x170

class UEnemyBillboardSubsystem : public UWorldSubsystem
{
}; // Size: 0x88

class UEnvironmentNiagaraComponent : public UNiagaraComponent
{
}; // Size: 0x830

class UEnvironmentParticleManager : public UBaseTickableManager
{
    TArray<class UStaticEnvironmentNiagaraComponent*> StaticParticles;                // 0x00A8 (size: 0x10)
    class UNiagaraComponent* EmissionCrowsFall;                                       // 0x00B8 (size: 0x8)

}; // Size: 0x198

class UEquipmentSlot : public UInteractableItemSlotBaseWidget
{
    class UImage* Background;                                                         // 0x0518 (size: 0x8)
    class UImage* EffectsHighlight;                                                   // 0x0520 (size: 0x8)
    class UImage* bLocked;                                                            // 0x0528 (size: 0x8)
    class UImage* DefaultImage;                                                       // 0x0530 (size: 0x8)
    class UImage* Broken;                                                             // 0x0538 (size: 0x8)
    class UImage* Attach;                                                             // 0x0540 (size: 0x8)
    class UScaleBox* ItemImageScaleBox;                                               // 0x0548 (size: 0x8)
    class UBorder* HighlightBorder;                                                   // 0x0550 (size: 0x8)
    FLinearColor DefaultImageColor;                                                   // 0x0558 (size: 0x10)
    FWidgetTransform DefaultIconTransform;                                            // 0x0568 (size: 0x38)
    FLinearColor TransparentDefaultImageColor;                                        // 0x05A0 (size: 0x10)
    class UTexture2D* DefaultIcon;                                                    // 0x05B0 (size: 0x8)
    class UTexture2D* BackgroundIcon;                                                 // 0x05B8 (size: 0x8)
    class UTexture2D* BlockedIcon;                                                    // 0x05C0 (size: 0x8)
    bool bArtifact;                                                                   // 0x05C8 (size: 0x1)
    float DefaultImageScaleX;                                                         // 0x05CC (size: 0x4)
    float DefaultImageScaleY;                                                         // 0x05D0 (size: 0x4)
    class UImage* InventoryHighlightImage;                                            // 0x05D8 (size: 0x8)
    class UTexture2D* InventoryHighlightTexture;                                      // 0x05E0 (size: 0x8)

}; // Size: 0x640

class UEquipmentSlots : public UDragDropZone
{
    class UCanvasPanel* CanvasPanel;                                                  // 0x02C0 (size: 0x8)
    class UEquipmentSlot* MainHand;                                                   // 0x02C8 (size: 0x8)
    class UEquipmentSlot* SecondHand;                                                 // 0x02D0 (size: 0x8)
    class UEquipmentSlot* Head;                                                       // 0x02D8 (size: 0x8)
    class UEquipmentSlot* Detector;                                                   // 0x02E0 (size: 0x8)
    class UEquipmentSlot* Artifact1;                                                  // 0x02E8 (size: 0x8)
    class UEquipmentSlot* Artifact2;                                                  // 0x02F0 (size: 0x8)
    class UEquipmentSlot* Artifact3;                                                  // 0x02F8 (size: 0x8)
    class UEquipmentSlot* Artifact4;                                                  // 0x0300 (size: 0x8)
    class UEquipmentSlot* Artifact5;                                                  // 0x0308 (size: 0x8)
    class UEquipmentSlot* Pistol;                                                     // 0x0310 (size: 0x8)
    class UEquipmentSlot* Torso;                                                      // 0x0318 (size: 0x8)
    class UBorder* NavBorder;                                                         // 0x0320 (size: 0x8)
    class UTextWidget* HeaderText;                                                    // 0x0328 (size: 0x8)
    FLinearColor DefaultNavBorderColor;                                               // 0x0378 (size: 0x10)
    FLinearColor DraggingNavBorderColor;                                              // 0x0388 (size: 0x10)
    class UInventoryNew* InventoryNew;                                                // 0x0398 (size: 0x8)
    TMap<int32, UEquipmentSlot*> ItemSlotsWidgets;                                    // 0x03A0 (size: 0x50)
    TMap<class EInventoryEquipmentSlot, class FEquipmentNavigationPaths> NavigationPaths; // 0x03F0 (size: 0x50)
    class UItemDragWidget* CurrMovingWidget;                                          // 0x0440 (size: 0x8)
    class UEquipmentSlot* CurrPickedSlot;                                             // 0x0448 (size: 0x8)
    class UCanvasPanelSlot* NavBorderSlot;                                            // 0x0468 (size: 0x8)

    void OnItemMouseLeave(class UInteractableItemSlotBaseWidget* ItemWidget);
    void OnItemMouseEnter(class UInteractableItemSlotBaseWidget* ItemWidget);
}; // Size: 0x4C0

class UEventManager : public UBaseTickableManager
{
}; // Size: 0x5E0

class UExplosionComponent : public UActorComponent
{
    class UFXSystemAsset* ExplosionParticles;                                         // 0x00A8 (size: 0x8)
    FPrototypeSID PrototypeSID;                                                       // 0x00B0 (size: 0x40)

    void ExplodeWithCustomLocation(const FVector Location, const FUID ExplosionInstigatorUID);
    void ExplodeAtCustomLocation(const FVector Location, class UObject* ExplosionInstigator);
    void Explode(const FUID ExplosionInstigatorUID);
}; // Size: 0x110

class UFadeoutScreen : public UViewBase
{
    class UTextWidget* SpeakerNameText;                                               // 0x02C0 (size: 0x8)
    class UTextWidget* SubtitleText;                                                  // 0x02C8 (size: 0x8)
    class USizeBox* SpeakerNameContainer;                                             // 0x02D0 (size: 0x8)
    class UImage* FadeoutImage;                                                       // 0x02D8 (size: 0x8)

    void UISkipFadeoutScreen();
}; // Size: 0x2F8

class UFastDialogueView : public UDialogueView
{
    class UVerticalBox* AnswerContainer;                                              // 0x06F0 (size: 0x8)
    class UAbstractProgressBar* TimerWidget;                                          // 0x06F8 (size: 0x8)
    class UDialogueFastAnswer* DialogueAnswerFastLeft;                                // 0x0700 (size: 0x8)
    class UDialogueFastAnswer* DialogueAnswerFastRight;                               // 0x0708 (size: 0x8)
    bool bIsImportant;                                                                // 0x0710 (size: 0x1)

    void UpdateAfterClick();
    void UIFastDialogSecondAnswer();
    void UIFastDialogFirstAnswer();
    void PostSelectAnswer(bool bIsRightAnswer);
    void EndSelectAnswer(bool bIsRightAnswer);
    void BlockInput();
}; // Size: 0x718

class UFastTravelManager : public UBaseManager
{
}; // Size: 0x88

class UFaustBossComponent : public UActorComponent
{
    FAbilityPrototypeSID WoundedPsyStrikeSID;                                         // 0x00A8 (size: 0x48)
    class UPhysicalMaterial* InvulnerablePhysicalMaterial;                            // 0x00F0 (size: 0x8)
    class UPhysicalMaterial* OriginalPhysicalMaterial;                                // 0x00F8 (size: 0x8)
    FString WoundedDialogPrototypeSID;                                                // 0x0100 (size: 0x10)
    int32 NumberOfPhases;                                                             // 0x0110 (size: 0x4)

    void WoundedBark();
}; // Size: 0x158

class UFaustCloneComponent : public UActorComponent
{
    class UCurveFloat* AliveModelDissolveCurve;                                       // 0x00A0 (size: 0x8)
    class UCurveFloat* DeadModelDissolveCurve;                                        // 0x00A8 (size: 0x8)
    class UCurveFloat* AliveModelGroomCurve;                                          // 0x00B0 (size: 0x8)
    class UCurveFloat* DeadModelGroomCurve;                                           // 0x00B8 (size: 0x8)
    class UNiagaraSystem* CloneSwitchEffect;                                          // 0x00C0 (size: 0x8)
    float CloneSwitchTime;                                                            // 0x00C8 (size: 0x4)
    FFaustCloneComponentOnCloneSwitchStarted OnCloneSwitchStarted;                    // 0x00D0 (size: 0x10)
    void OnCloneSwitchStarted();

}; // Size: 0x108

class UFileObjPrototypesEditor : public UObject
{
    TArray<class UObjPrototypeEditor*> ObjPrototypes;                                 // 0x0028 (size: 0x10)

}; // Size: 0x38

class UFinalCreditsWithVideo : public UUserWidget
{
    class UCreditsWidget* CreditsWidget;                                              // 0x02B0 (size: 0x8)
    class UBinkMediaPlayer* BinkMediaPlayer;                                          // 0x02B8 (size: 0x8)
    class UImage* Border;                                                             // 0x02C0 (size: 0x8)
    TMap<class EBorderType, class TSoftObjectPtr<UTexture2D>> BorderImages;           // 0x02C8 (size: 0x50)

    void PlayVideo(class UMediaSource* VideoToPlay);
    float GetVideoDuration();
    void EndVideo();
}; // Size: 0x320

class UFireIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UFireTypeWidget : public UWidgetBase
{
    class UImage* Background;                                                         // 0x0278 (size: 0x8)
    class UImage* Icon;                                                               // 0x0280 (size: 0x8)
    float FadedOpacity;                                                               // 0x0288 (size: 0x4)
    float SelectedOpacity;                                                            // 0x028C (size: 0x4)
    float FadeSpeed;                                                                  // 0x0290 (size: 0x4)

}; // Size: 0x2A0

class UFirstTimeSettingsWidget : public USettingsPage
{
    class USettingElementSwitcher* ColorBlindness;                                    // 0x0290 (size: 0x8)
    class USettingElementSwitcher* InterfaceLanguage;                                 // 0x0298 (size: 0x8)
    class USettingElementSwitcher* VoicingLanguage;                                   // 0x02A0 (size: 0x8)
    class USettingsElementPercent* Gamma;                                             // 0x02A8 (size: 0x8)
    class USettingElementSwitcher* DynamicRange;                                      // 0x02B0 (size: 0x8)
    FFirstTimeSettingsWidgetOnGammaSelectedDelegate OnGammaSelectedDelegate;          // 0x02B8 (size: 0x10)
    void OnGammaSelected(const bool InSelected);

}; // Size: 0x2C8

class UFlashlightComponent : public UElectricComponent
{
    class UMeshComponent* MainMeshComponent;                                          // 0x00F0 (size: 0x8)
    class UStaticMeshComponent* FakeLightBeamComponent;                               // 0x00F8 (size: 0x8)
    class USpotLightComponent* SpotLightComponent;                                    // 0x0100 (size: 0x8)
    class USpotLightComponent* ExtraSpotLightComponent;                               // 0x0108 (size: 0x8)
    class USceneComponent* TopAttachmentComponent;                                    // 0x0110 (size: 0x8)
    class UMeshComponent* ParentMeshComponent;                                        // 0x0128 (size: 0x8)
    class UCurveFloat* InnerRadiusCurve;                                              // 0x0130 (size: 0x8)
    class UCurveFloat* OuterRadiusCurve;                                              // 0x0138 (size: 0x8)
    TArray<class UMaterialInstanceDynamic*> DynamicMaterials;                         // 0x0140 (size: 0x10)
    TArray<class UMeshComponent*> CreatedMeshes;                                      // 0x0150 (size: 0x10)

}; // Size: 0x188

class UFlowerParticleComponent : public USceneComponent
{
    class USplineComponent* Spline;                                                   // 0x02A0 (size: 0x8)
    class UShapeComponent* Collision;                                                 // 0x02A8 (size: 0x8)
    class UNiagaraComponent* Particle;                                                // 0x02B0 (size: 0x8)
    float Speed;                                                                      // 0x02B8 (size: 0x4)
    float Distance;                                                                   // 0x02BC (size: 0x4)

}; // Size: 0x2C0

class UFollowNPCSubsystem : public UTickableWorldSubsystem
{
}; // Size: 0x40

class UForceFeedbackDataAsset : public UDataAsset
{
    TMap<class FGameplayTag, class FProcessorsArray> TriggerToProcessors;             // 0x0030 (size: 0x50)

}; // Size: 0x80

class UForceFeedbackProcessorBase : public UObject
{
    int32 Priority;                                                                   // 0x0030 (size: 0x4)
    bool bIgnoreSelf;                                                                 // 0x0034 (size: 0x1)
    FForceFeedbackParams Params;                                                      // 0x0038 (size: 0xC)
    ERumbleType RumbleType;                                                           // 0x0044 (size: 0x1)
    ERumbleType DefaultRumbleType;                                                    // 0x0045 (size: 0x1)
    class UForceFeedbackEffect* CurrentFeedback;                                      // 0x0060 (size: 0x8)

}; // Size: 0x68

class UForceFeedbackSettings : public UDeveloperSettings
{
    TSoftObjectPtr<UForceFeedbackDataAsset> FeedbackDataAsset;                        // 0x0038 (size: 0x30)
    int32 StopAllPriority;                                                            // 0x0068 (size: 0x4)
    bool bStopCurrentProcessor;                                                       // 0x006C (size: 0x1)

}; // Size: 0x70

class UForceFeedbackSphereComponent : public USphereComponent
{
    FGameplayTag FeedbackTag;                                                         // 0x0588 (size: 0x8)
    class UCurveFloat* ForceFeedbackDistanceIntensityCurve;                           // 0x0590 (size: 0x8)
    float UpdateIntensityRate;                                                        // 0x0598 (size: 0x4)
    float UpdateStartFeedbackRate;                                                    // 0x059C (size: 0x4)
    bool bOneShotFeedback;                                                            // 0x05A0 (size: 0x1)
    bool bDisabledByDefault;                                                          // 0x05A1 (size: 0x1)

    void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex);
    void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
    void EnableForceFeedback();
    void DisableForceFeedback();
}; // Size: 0x5C0

class UForceFeedbackSubsystem : public ULocalPlayerSubsystem
{
    class UForceFeedbackDataAsset* DataAsset;                                         // 0x0030 (size: 0x8)
    TMap<class FGameplayTag, class FProcessorsArray> ActiveProcessors;                // 0x0038 (size: 0x50)
    TMap<class FGameplayTag, class FProcessorsArray> DelayedProcessors;               // 0x0088 (size: 0x50)

    bool StopFeedback(const FGameplayTag& Trigger);
    void StopAll();
    void SetIntensityMultiplier(const float NewValue);
    float GetIntensityMultiplier();
    bool BP_StartFeedback(const FGameplayTag& Trigger, const FForceFeedbackArgs& Args, const float InIntensityMultiplier, const bool bOverrideStopCurrent, const bool bStopCurrent);
}; // Size: 0xF8

class UGAAttachSelectorActionProcessor : public UGAPlayerProcessorInterface
{
}; // Size: 0x48

class UGADeveloperSettings : public UDeveloperSettings
{
    float SessionStatus_AfkThresholdToRecordSessionFinishInSeconds;                   // 0x0038 (size: 0x4)
    float PlayerPosition_RepeatIntervalInSeconds;                                     // 0x003C (size: 0x4)
    float PlayerPosition_AfkTimeThresholdInSeconds;                                   // 0x0040 (size: 0x4)
    float PlayerFactionReputation_RepeatIntervalInSeconds;                            // 0x0044 (size: 0x4)
    float PlayerStatus_RepeatIntervalInSeconds;                                       // 0x0048 (size: 0x4)
    float PlayerStatus_AfkTimeThresholdInSeconds;                                     // 0x004C (size: 0x4)
    float PlayerStatus_EffectAppliedThrottleTimeWindowInSeconds;                      // 0x0050 (size: 0x4)
    float PlayerStatus_DamageReceivedThrottleTimeWindowInSeconds;                     // 0x0054 (size: 0x4)
    float PlayerStatus_MinDamageReceivedAmountToEmit;                                 // 0x0058 (size: 0x4)
    TSet<FString> PlayerStatus_ListOfEffectsToTrack;                                  // 0x0060 (size: 0x50)
    int32 PlayerStatus_MaxEffectsAttributesCount;                                     // 0x00B0 (size: 0x4)
    float InventoryStatus_RepeatIntervalInSeconds;                                    // 0x00B4 (size: 0x4)
    float InventoryAction_Hover_HoverdTimeThresholdInSeconds;                         // 0x00B8 (size: 0x4)
    float PlayerAction_Shoot_ThrottleTimeWindowInSeconds;                             // 0x00BC (size: 0x4)
    float PlayerAction_UseQuickSlot_ThrottleTimeWindowInSeconds;                      // 0x00C0 (size: 0x4)
    float PlayerAction_GetHit_ThrottleTimeWindowInSeconds;                            // 0x00C4 (size: 0x4)
    float PlayerCombat_PlayerHitThrottleTimeWindowInSeconds;                          // 0x00C8 (size: 0x4)
    float PlayerCombat_EnemyHitThrottleTimeWindowInSeconds;                           // 0x00CC (size: 0x4)

}; // Size: 0xD0

class UGADialogueActionProcessor : public UGAPlayerProcessorInterface
{
}; // Size: 0x60

class UGAEventsLibrary : public UObject
{
}; // Size: 0x28

class UGAInventoryActionProcessor : public UGAPlayerProcessorInterface
{
}; // Size: 0x80

class UGAInventoryStatusProcessor : public UGAPlayerProcessorBase
{
}; // Size: 0x68

class UGAManager : public UBaseTickableManager
{
}; // Size: 0x110

class UGAPDAActionProcessor : public UGAPlayerProcessorInterface
{
}; // Size: 0x98

class UGAPlayerActionProcessor : public UGAPlayerProcessorInterface
{
}; // Size: 0x168

class UGAPlayerCombatProcessor : public UGAPlayerProcessorInterface
{
}; // Size: 0x98

class UGAPlayerComponent : public UActorComponent
{
    TArray<class UGAPlayerProcessorInterface*> Processors;                            // 0x00A0 (size: 0x10)

}; // Size: 0xC0

class UGAPlayerFactionReputationProcessor : public UGAPlayerProcessorBase
{
}; // Size: 0x48

class UGAPlayerPositionProcessor : public UGAPlayerProcessorBase
{
}; // Size: 0x50

class UGAPlayerProcessorBase : public UGAPlayerProcessorInterface
{
}; // Size: 0x48

class UGAPlayerProcessorInterface : public UObject
{
}; // Size: 0x28

class UGAPlayerStatusProcessor : public UGAPlayerProcessorBase
{
}; // Size: 0x60

class UGAQuestProcessor : public UGAPlayerProcessorInterface
{
}; // Size: 0x60

class UGATradeActionProcessor : public UGAPlayerProcessorInterface
{
}; // Size: 0x38

class UGATutorialEventProcessor : public UGAPlayerProcessorInterface
{
}; // Size: 0x40

class UGAUpgradeActionProcessor : public UGAPlayerProcessorInterface
{
}; // Size: 0x48

class UGSCAblityBlueprintFunctions : public UBlueprintFunctionLibrary
{

    void ExecuteAbilityByActivationTagAttackPayload(class AActor* Actor, FName ActivationTag);
}; // Size: 0x28

class UGSCAudioVolumeSettings : public UDeveloperSettings
{
    float AmbientTimerDelay;                                                          // 0x0038 (size: 0x4)
    int32 MaxNPCinVolume;                                                             // 0x003C (size: 0x4)
    TSoftObjectPtr<UAkRtpc> AmbientVolumeRTPC;                                        // 0x0040 (size: 0x30)

}; // Size: 0x70

class UGSCBPFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetAffectNavigationForComponent(class UPrimitiveComponent* PrimitiveComponent, bool bCanAffect);
}; // Size: 0x28

class UGSCDataTable : public UDataTable
{
}; // Size: 0xB0

class UGSCLocalPlayer : public ULocalPlayer
{
    TMap<FName, uint32> DLCNameToBitFlag;                                             // 0x0298 (size: 0x50)

    void XImportSaves();
    void XFinishLoginProcess(const bool bSuccess);
    void XFileToClipboard();
    void XExportSaves();
    void XClipboardToFile();
}; // Size: 0x338

class UGSCModIOSubsystem : public UModSubsystemBase
{
    TSoftClassPtr<UUserWidget> ModBrowserClass;                                       // 0x0038 (size: 0x30)
    TSoftClassPtr<UUserWidget> ModBrowserLoadingClass;                                // 0x0068 (size: 0x30)
    class UModioSubsystem* ModioSubsystem;                                            // 0x0098 (size: 0x8)
    class UModioUISubsystem* ModioUISubsystem;                                        // 0x00A0 (size: 0x8)
    class UUserWidget* ModBrowserWidget;                                              // 0x00A8 (size: 0x8)
    class UUserWidget* ModBrowserLoadingWidget;                                       // 0x00B0 (size: 0x8)

    void HandleModBrowserClosed();
}; // Size: 0xB8

class UGSCNavModifierComponent : public UNavModifierComponent
{
    bool bEnabled;                                                                    // 0x0198 (size: 0x1)
    TArray<class UPrimitiveComponent*> SelectedComponents;                            // 0x01A0 (size: 0x10)
    TArray<FNavModifierBodyConfig> PhysicalBodies;                                    // 0x01B0 (size: 0x10)
    TSubclassOf<class UNavArea> TargetAreaClass;                                      // 0x01C0 (size: 0x8)

    void SetEnabled(bool bNewEnabled);
    void RequestBoundsRecalculation();
    void RemoveSelectedComponent(class UPrimitiveComponent* PrimitiveComponent);
    void ClearSelectedComponents();
    void AddSelectedComponent(class UPrimitiveComponent* PrimitiveComponent);
}; // Size: 0x1D0

class UGSCNavigationSettings : public UDeveloperSettings
{
    TArray<FSoftClassPath> NavAreasPriorities;                                        // 0x0038 (size: 0x10)
    TMap<class FSoftClassPath, class FDefaultRestrictions> DefaultRestrictions;       // 0x0048 (size: 0x50)
    TArray<class UClass*> NavAreaClasses;                                             // 0x0098 (size: 0x10)
    TMap<class UClass*, class FDefaultRestrictions> NavAreaDefaultRestrictions;       // 0x00A8 (size: 0x50)

}; // Size: 0xF8

class UGSCTextBlock : public UTextBlock
{
}; // Size: 0x360

class UGameControllerTrackerManager : public UBaseManager
{
}; // Size: 0x78

class UGameGraphRenderingComponent : public UDebugDrawComponent
{
    uint32 ShowComponentId;                                                           // 0x05B4 (size: 0x4)
    FGameGraphSceneProxyDrawParams DrawParams;                                        // 0x05B8 (size: 0x8)
    class UMaterialInstance* GameGraphMaterial;                                       // 0x05C0 (size: 0x8)
    FBoxSphereBounds GameGraphBoundsBox;                                              // 0x05C8 (size: 0x38)

    void ShowAllComponents();
}; // Size: 0x610

class UGameGraphSubsystem : public UWorldSubsystem
{
    class AGameGraphData* GameGraphData;                                              // 0x0030 (size: 0x8)

}; // Size: 0x40

class UGameInstanceSubsystemButtonStateDefiner : public UMenuButtonStateDefiner
{
    TArray<class TSubclassOf<UGameInstanceSubsystem>> ExcludeSubsystems;              // 0x0030 (size: 0x10)

}; // Size: 0x40

class UGameLoadingSubsystem : public UGameInstanceSubsystem
{
    TArray<class UWorldPartitionRuntimeCell*> LevelsToActivate;                       // 0x0130 (size: 0x10)
    TSet<ULevel*> LevelsToRemove;                                                     // 0x0140 (size: 0x50)

}; // Size: 0x190

class UGameManager : public UBaseManager
{
    class ADeveloperSpectator* DeveloperSpectator;                                    // 0x01B0 (size: 0x8)
    class UCurveFloat* StaminaWeightCurve;                                            // 0x01B8 (size: 0x8)

}; // Size: 0x350

class UGameMenuElement : public UWidgetBase
{
    FText LocName;                                                                    // 0x0278 (size: 0x18)
    class UWidgetAnimation* SelectedAnim;                                             // 0x0290 (size: 0x8)
    class UButton* Button;                                                            // 0x0298 (size: 0x8)
    class UTextWidget* Caption;                                                       // 0x02A0 (size: 0x8)

    void Confirm();
}; // Size: 0x2C8

class UGameSettingsWidget : public USettingsPage
{
    class USettingElementOnOff* AutoSave;                                             // 0x0290 (size: 0x8)
    class USettingElementOnOff* Tutorial;                                             // 0x0298 (size: 0x8)
    class USettingElementOnOff* InteractPaint;                                        // 0x02A0 (size: 0x8)
    class USettingElementSwitcher* Difficulty;                                        // 0x02A8 (size: 0x8)
    class USettingElementSwitcher* InterfaceLanguage;                                 // 0x02B0 (size: 0x8)
    class USettingElementSwitcher* VoicingLanguage;                                   // 0x02B8 (size: 0x8)
    class USettingElementOnOff* EnableStreamerMode;                                   // 0x02C0 (size: 0x8)

}; // Size: 0x2C8

class UGamepadMapNavigationIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UGameplayEventData : public UObject
{
}; // Size: 0x28

class UGameplayEventManager : public UBaseManager
{
    TMap<class UClass*, class UGameplayEventData*> EventDataPool;                     // 0x0078 (size: 0x50)

}; // Size: 0xC8

class UGameplayPhysicalMaterial : public UPhysicalMaterial
{
    bool bAllowCustomPhysicalMaterialType;                                            // 0x0080 (size: 0x1)
    EPhysicalMaterialType CustomPhysicalMaterialType;                                 // 0x0084 (size: 0x4)

}; // Size: 0x88

class UGarbageCollectionSubsystem : public UGameInstanceSubsystem
{
}; // Size: 0x30

class UGeigerCounterComponent : public UPlayerEffectsSFXComponent
{
}; // Size: 0xD8

class UGlobal : public UGameInstance
{
    class UMapSettingsAsset* PA_MapSettings;                                          // 0x01C0 (size: 0x8)

    void GoToMap(const FName MapName);
}; // Size: 0x1C8

class UGlobalLoadingSubsystem : public UGameInstanceSubsystem
{
    class UGlobal* GameInstance;                                                      // 0x0050 (size: 0x8)

}; // Size: 0x58

class UGlobalVariableManager : public UBaseManager
{
}; // Size: 0xD0

class UGoPreviousViewAction : public UMenuButtonActionBase
{
}; // Size: 0x30

class UGotoViewAction : public UMenuButtonActionBase
{
    TSoftClassPtr<UMenuSubViewBase> DestinationWidget;                                // 0x0030 (size: 0x30)
    bool bChangeBehaviourOnPresentation;                                              // 0x0060 (size: 0x1)
    int32 CampaignIndex;                                                              // 0x0064 (size: 0x4)
    FString DifficultyPrototypeSID;                                                   // 0x0068 (size: 0x10)

}; // Size: 0x78

class UGraphicsSettingsWidget : public USettingsPage
{
    class USettingElementSwitcher* OverallQuality;                                    // 0x0290 (size: 0x8)
    class USettingElementSwitcher* OverallQualityXSX;                                 // 0x0298 (size: 0x8)
    class USettingsElementPercent* RenderingResolution;                               // 0x02A0 (size: 0x8)
    class USettingsElementPercent* Sharpness;                                         // 0x02A8 (size: 0x8)
    class USettingElementSwitcher* UpscalingMethod;                                   // 0x02B0 (size: 0x8)
    class USettingElementOnOff* DLSSRayReconstruction;                                // 0x02B8 (size: 0x8)
    class USettingElementSwitcher* DLSSFrameGeneration;                               // 0x02C0 (size: 0x8)
    class USettingElementOnOff* FFXFrameGeneration;                                   // 0x02C8 (size: 0x8)
    class USettingElementSwitcher* UpscalingQualityPreset;                            // 0x02D0 (size: 0x8)
    class USettingElementSwitcher* ViewDistance;                                      // 0x02D8 (size: 0x8)
    class USettingElementSwitcher* PostProcessing;                                    // 0x02E0 (size: 0x8)
    class USettingElementSwitcher* AntiAliasing;                                      // 0x02E8 (size: 0x8)
    class USettingElementSwitcher* TexturesQuality;                                   // 0x02F0 (size: 0x8)
    class USettingElementSwitcher* ShadowsQuality;                                    // 0x02F8 (size: 0x8)
    class USettingElementSwitcher* EffectsQuality;                                    // 0x0300 (size: 0x8)
    class USettingElementSwitcher* ReflectionsQuality;                                // 0x0308 (size: 0x8)
    class USettingElementSwitcher* FoliageQuality;                                    // 0x0310 (size: 0x8)
    class USettingElementSwitcher* GlobalIllumination;                                // 0x0318 (size: 0x8)
    class USettingElementSwitcher* ShadingQuality;                                    // 0x0320 (size: 0x8)
    class USettingElementSwitcher* HairQuality;                                       // 0x0328 (size: 0x8)
    class USettingElementSwitcher* ObjectDetailQuality;                               // 0x0330 (size: 0x8)
    class USettingElementSwitcher* VolumetricFogQuality;                              // 0x0338 (size: 0x8)
    class USettingElementSwitcher* VolumetricCloudsQuality;                           // 0x0340 (size: 0x8)
    class USettingElementSwitcher* SkyQuality;                                        // 0x0348 (size: 0x8)
    class USettingElementSwitcher* DOFQuality;                                        // 0x0350 (size: 0x8)
    class USettingElementSwitcher* MaterialQuality;                                   // 0x0358 (size: 0x8)
    class USettingElementSwitcher* MotionBlurQuality;                                 // 0x0360 (size: 0x8)
    class USettingsElementPercent* MotionBlurStrength;                                // 0x0368 (size: 0x8)
    class USettingElementOnOff* LightShaftsQuality;                                   // 0x0370 (size: 0x8)
    TArray<class UWidget*> PCSpecificElements;                                        // 0x0378 (size: 0x10)
    TArray<class UWidget*> ConsoleSpecificElements;                                   // 0x0388 (size: 0x10)
    TArray<class USettingElement*> UpscalingWidgets;                                  // 0x0398 (size: 0x10)

}; // Size: 0x3B0

class UGreetingsPopup : public UPopupBase
{
    class UModifiableRichText* DescriptionRich;                                       // 0x0348 (size: 0x8)
    class UVerticalBox* DescriptionContainer;                                         // 0x0350 (size: 0x8)
    class UImageWidget* BackgroundImage;                                              // 0x0358 (size: 0x8)

}; // Size: 0x360

class UGrenadeExplosionComponent : public UExplosionComponent
{
}; // Size: 0x110

class UGroomCategoryEditor : public UObject
{
    FName CategoryName;                                                               // 0x0028 (size: 0x8)
    TArray<class UGroomEditor*> Variations;                                           // 0x0030 (size: 0x10)

}; // Size: 0x40

class UGroomEditor : public UObject
{
    TArray<class UGroomEditor*> AdditionalGrooms;                                     // 0x0028 (size: 0x10)
    FSoftObjectPath MaterialPath;                                                     // 0x0038 (size: 0x20)
    FSoftObjectPath GroomPath;                                                        // 0x0058 (size: 0x20)
    FSoftObjectPath GroomBindingPath;                                                 // 0x0078 (size: 0x20)
    float Weight;                                                                     // 0x0098 (size: 0x4)
    int32 VariationIndex;                                                             // 0x009C (size: 0x4)
    FName GroomSID;                                                                   // 0x00A0 (size: 0x8)
    TArray<class UCustomDataVariationsEditor*> CustomData;                            // 0x00A8 (size: 0x10)
    TArray<class UMeshGeneratorMaterialSlotEditor*> Materials;                        // 0x00B8 (size: 0x10)

}; // Size: 0xC8

class UGuidActorComponent : public UActorComponent
{
    FGuid Guid;                                                                       // 0x00A8 (size: 0x10)

}; // Size: 0xB8

class UGuitarAutoStrumIPU : public UInputProcessingUnit
{
}; // Size: 0x48

class UGuitarChord1IPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UGuitarChord2IPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UGuitarChord3IPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UGuitarChord4IPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UGuitarChord5IPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UGuitarChord6IPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UGuitarChord7IPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UGuitarChordAxisSelectionIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UGuitarChordSelectorView : public UViewBaseExtended
{
    class UHintInputController* HintGuitarSwapScale;                                  // 0x02C8 (size: 0x8)
    class UGuitarChordView* GuitarChord1View;                                         // 0x02D0 (size: 0x8)
    class UGuitarChordView* GuitarChord2View;                                         // 0x02D8 (size: 0x8)
    class UGuitarChordView* GuitarChord3View;                                         // 0x02E0 (size: 0x8)
    class UGuitarChordView* GuitarChord4View;                                         // 0x02E8 (size: 0x8)
    class UGuitarChordView* GuitarChord5View;                                         // 0x02F0 (size: 0x8)
    class UGuitarChordView* GuitarChord6View;                                         // 0x02F8 (size: 0x8)
    class UGuitarChordView* HoveredChord;                                             // 0x0300 (size: 0x8)

}; // Size: 0x310

class UGuitarChordView : public UWidgetBase
{

    void OnUnselected();
    void OnSelected();
    void OnMinorScale();
    void OnMajorScale();
}; // Size: 0x278

class UGuitarContextualAction : public UInputProcessingUnit
{
}; // Size: 0x40

class UGuitarExitIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UGuitarResetCameraIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UGuitarStrumDownIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UGuitarStrumIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UGuitarStrumUpIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UGuitarSwapMajorMinorScaleIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UGuitarUseIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UGunRecoilTextureDataAsset : public UDataAsset
{
    TArray<FRecoilKeys> RecoilPatternAimKeys;                                         // 0x0030 (size: 0x10)
    TArray<FRecoilKeys> RecoilPatternHipKeys;                                         // 0x0040 (size: 0x10)

}; // Size: 0x50

class UHUDContextualLegend : public UChildViewBase
{
    class URichTextBlock* LegendText;                                                 // 0x0278 (size: 0x8)
    FString DropDeadBodyHintSID;                                                      // 0x0280 (size: 0x10)
    FString GuitarPCAHintSID;                                                         // 0x0290 (size: 0x10)

}; // Size: 0x2A0

class UHUDRestoreIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UHeadFlashlightComponent : public UFlashlightComponent
{
    class UAkAudioEvent* FlashlightTurnOnAudioEvent;                                  // 0x0190 (size: 0x8)
    class UAkAudioEvent* FlashlightTurnOffAudioEvent;                                 // 0x0198 (size: 0x8)
    class UAkAudioEvent* FlashlightBurnOutAudioEvent;                                 // 0x01A0 (size: 0x8)

}; // Size: 0x1D0

class UHintAction : public UCommonHint
{
    class UButton* HintButton;                                                        // 0x0340 (size: 0x8)

}; // Size: 0x360

class UHintActionRichText : public UCommonHint
{
    class UHorizontalBox* HorizontalBox;                                              // 0x0340 (size: 0x8)
    bool bEnableHintLock;                                                             // 0x0358 (size: 0x1)

}; // Size: 0x378

class UHintBase : public UWidgetBase
{
    EInteractionType InteractionType;                                                 // 0x0278 (size: 0x1)
    FString DefaultStylePrefix;                                                       // 0x0280 (size: 0x10)
    FString StylePrefix;                                                              // 0x0290 (size: 0x10)
    FText Text;                                                                       // 0x02A0 (size: 0x18)
    FName FirstPlanStyle;                                                             // 0x02B8 (size: 0x8)
    FName BackgroundStyle;                                                            // 0x02C0 (size: 0x8)
    bool bEnableStyleManager;                                                         // 0x02C8 (size: 0x1)
    bool bCheckInputKey;                                                              // 0x02C9 (size: 0x1)
    bool bGamepadKey;                                                                 // 0x02CA (size: 0x1)
    FString InputActionName;                                                          // 0x02D0 (size: 0x10)
    FName InputMappingName;                                                           // 0x02E0 (size: 0x8)
    FString HintFontStyle;                                                            // 0x02E8 (size: 0x10)
    FString HintActionStyle;                                                          // 0x02F8 (size: 0x10)
    class UImage* Background;                                                         // 0x0308 (size: 0x8)

    void UpdateHintWidget();
    void SetText(const FText& InText);
    void SetStylePrefix(FString InStylePrefix);
    void PostShowHover(bool bInShow);
    void HoverChangeHintTextColor(const bool bShow, FString InStylePrefix);
    TArray<FHoverAction> GetHoverSettings();
}; // Size: 0x310

class UHintControllerBase : public UWidgetBase
{
    bool bInitializeAutomatically;                                                    // 0x0278 (size: 0x1)
    FHintControllerSettings ControllerSettings;                                       // 0x027C (size: 0x24)
    FHintStyleSettings StyleSettings;                                                 // 0x02A0 (size: 0x28)
    class UPlatformSwitcherBase* PlatformSwitcher;                                    // 0x02E8 (size: 0x8)
    class UTextWidget* LeftText;                                                      // 0x02F0 (size: 0x8)
    class USpacer* LeftGap;                                                           // 0x02F8 (size: 0x8)
    class UTextWidget* RightText;                                                     // 0x0300 (size: 0x8)
    class USpacer* RightGap;                                                          // 0x0308 (size: 0x8)

}; // Size: 0x3B0

class UHintDecoratorBase : public URichTextBlockImageDecorator
{
    EGSCInputDeviceType DefaultPlatform;                                              // 0x0030 (size: 0x1)
    bool bEnableEditorDebug;                                                          // 0x0031 (size: 0x1)
    bool bEnableRecolorIcon;                                                          // 0x0032 (size: 0x1)
    FName StyleId;                                                                    // 0x0034 (size: 0x8)
    bool bEnableRecolorConnectedBack;                                                 // 0x003C (size: 0x1)
    bool bShouldUseStylePrefix;                                                       // 0x003D (size: 0x1)

}; // Size: 0x1F0

class UHintHelper : public UObject
{
}; // Size: 0x28

class UHintImageBase : public UWidgetBase
{
    EInputIconsType InputIconsType;                                                   // 0x0278 (size: 0x1)

}; // Size: 0x290

class UHintImageGamepad : public UHintImageBase
{
    class UImage* HintImage;                                                          // 0x0290 (size: 0x8)

}; // Size: 0x298

class UHintImageKeyboard : public UHintImageBase
{
    class UImage* HintImage;                                                          // 0x0290 (size: 0x8)
    class UImage* HintBackground;                                                     // 0x0298 (size: 0x8)
    class URichTextBlock* HintChar;                                                   // 0x02A0 (size: 0x8)
    FString KeyboardCharStyle;                                                        // 0x02A8 (size: 0x10)
    FName BackgroundName;                                                             // 0x02B8 (size: 0x8)

}; // Size: 0x2C0

class UHintInputController : public UHintControllerBase
{
    class UActionMimicButton* MimicButtonElement;                                     // 0x03A8 (size: 0x8)
    bool bHandleMouseInput;                                                           // 0x03B0 (size: 0x1)

}; // Size: 0x3D0

class UHintKey : public UHintBase
{
    class UHintRichTextWidget* HintRichTextWidget;                                    // 0x0310 (size: 0x8)
    class UWidgetAnimation* MultiClickAnim;                                           // 0x0318 (size: 0x8)
    class UWidgetAnimation* RunActionAnim;                                            // 0x0320 (size: 0x8)
    class UWidgetAnimation* MultiClickIdle;                                           // 0x0328 (size: 0x8)
    class UWidgetSwitcher* ActionSwitcher;                                            // 0x0330 (size: 0x8)
    class UProgressBar* HoldProgress;                                                 // 0x0338 (size: 0x8)
    class UImage* ProgressImage;                                                      // 0x0340 (size: 0x8)
    class UImage* ProgressImageBack;                                                  // 0x0348 (size: 0x8)
    class UButton* HintButton;                                                        // 0x0350 (size: 0x8)
    TMap<class FName, class UTexture2D*> BackgroundStyleToBackgroundTexture;          // 0x0358 (size: 0x50)
    class UImage* HoldProgressImage;                                                  // 0x03A8 (size: 0x8)
    class UImage* HoldProgressImageBack;                                              // 0x03B0 (size: 0x8)
    class UImage* MultiClickProgressImage;                                            // 0x03B8 (size: 0x8)
    class UImage* MultiClickProgressImageBack;                                        // 0x03C0 (size: 0x8)
    class UImage* HoldProgressTutorials;                                              // 0x03C8 (size: 0x8)
    class UWidgetAnimation* SingleClickAnim;                                          // 0x03D0 (size: 0x8)
    class UImage* HintDynamicBackground;                                              // 0x03D8 (size: 0x8)
    TArray<FVector2D> HintBackgroundOffsets;                                          // 0x03E0 (size: 0x10)
    bool bUseKeyFromTopMappingContext;                                                // 0x03F0 (size: 0x1)
    int32 HintDesignIteration;                                                        // 0x03F4 (size: 0x4)
    class UImage* IconKey;                                                            // 0x03F8 (size: 0x8)
    class UImage* IconLock;                                                           // 0x0400 (size: 0x8)
    class UImage* IconLowHealth;                                                      // 0x0408 (size: 0x8)
    FColor EnabledIconsColor;                                                         // 0x0410 (size: 0x4)
    FColor DisabledIconsColor;                                                        // 0x0414 (size: 0x4)

    void SetLowHealthState(const bool ShowIcon);
    void SetHintState(const bool IsActive);
    void SetHintKeyLockState(const bool ShowIcon, const bool IsKeyAvailable);
    void PlayHintAnimation(bool bSingleClick);
}; // Size: 0x430

class UHintProgressIPU : public UInputProcessingUnit
{
}; // Size: 0x58

class UHintRichTextWidget : public URichTextWidget
{
}; // Size: 0x990

class UHintSwitcher : public UHintBase
{
    class UPlatformSwitcher* HintSwitcher;                                            // 0x0310 (size: 0x8)
    class UHintKey* HintPC;                                                           // 0x0318 (size: 0x8)
    class UHintKey* HintConsole;                                                      // 0x0320 (size: 0x8)
    class UButton* HintButton;                                                        // 0x0328 (size: 0x8)
    TArray<class UHintKey*> HintKeys;                                                 // 0x0330 (size: 0x10)

}; // Size: 0x340

class UHintTutorialController : public UHintControllerBase
{
    float IntervalClick;                                                              // 0x03A8 (size: 0x4)
    float IntervalHold;                                                               // 0x03AC (size: 0x4)

}; // Size: 0x3C0

class UHintViewBase : public UWidgetBase
{
    bool bInitializeAutomatically;                                                    // 0x0278 (size: 0x1)
    FHintViewSettings HintViewSettings;                                               // 0x027C (size: 0x20)
    class UHintImageBase* HintIconImage;                                              // 0x02B0 (size: 0x8)
    class UHintImageBase* HintIconImageDisabled;                                      // 0x02B8 (size: 0x8)
    class UImage* ProgressMaterial;                                                   // 0x02C0 (size: 0x8)
    class USizeBox* ViewSizeBox;                                                      // 0x02C8 (size: 0x8)
    class UWidgetAnimation* PressAnimation;                                           // 0x02D0 (size: 0x8)
    float PressAnimationSpeedMultiplier;                                              // 0x02D8 (size: 0x4)
    TMap<class EHintProgressType, class FProgressMaterialData> ProgressMaterialMap;   // 0x02E0 (size: 0x50)

}; // Size: 0x340

class UHitEventData : public UGameplayEventData
{
    FVector DamageHitLocation;                                                        // 0x0028 (size: 0x18)
    FVector DamageImpulse;                                                            // 0x0040 (size: 0x18)
    EDamageType DamageType;                                                           // 0x0058 (size: 0x1)
    EDamageSource DamageSource;                                                       // 0x0059 (size: 0x1)

}; // Size: 0x60

class UHitReceiverComponent : public UActorComponent
{
    FHitReceiverComponentExplosionHit ExplosionHit;                                   // 0x00A8 (size: 0x10)
    void ExplosionHitSignature(const FCommonHitArgs& Common, const FExplosionHitArgs& HitArgs);
    FHitReceiverComponentBulletProjectileHit BulletProjectileHit;                     // 0x00B8 (size: 0x10)
    void BulletProjectileHitSignature(const FCommonHitArgs& Common, const FBulletProjectileHitArgs& HitArgs);
    FHitReceiverComponentMeleeHit MeleeHit;                                           // 0x00C8 (size: 0x10)
    void MeleeHitSignature(const FCommonHitArgs& Common, const FMeleeHitArgs& HitArgs);
    FHitReceiverComponentAnomalyHit AnomalyHit;                                       // 0x00D8 (size: 0x10)
    void AnomalyHitSignature(const FCommonHitArgs& Common, const FAnomalyHitArgs& HitArgs);
    FHitReceiverComponentProjectileHit ProjectileHit;                                 // 0x00E8 (size: 0x10)
    void ProjectileHitSignature(const FCommonHitArgs& Common, const FProjectileHitArgs& HitArgs);
    FHitReceiverComponentPhysicsHit PhysicsHit;                                       // 0x00F8 (size: 0x10)
    void PhysicsHitSignature(const FCommonHitArgs& Common, const FPhysicsHitArgs& HitArgs);
    FHitReceiverComponentWaterHit WaterHit;                                           // 0x0108 (size: 0x10)
    void WaterHitSignature(const FCommonHitArgs& Common, const FWaterHitArgs& HitArgs);

}; // Size: 0x118

class UHittableComponent : public UActorComponent
{
    bool bCanHitWater;                                                                // 0x00A0 (size: 0x1)

}; // Size: 0xC0

class UHoldBreathIPU : public UBehaviorBasedIPU
{
}; // Size: 0x58

class UHoldComponent : public UInteractionComponent
{
    FHoldComponentOnHoldStartedEvent OnHoldStartedEvent;                              // 0x01C8 (size: 0x10)
    void InteractionDelegate(class AObj* Object);
    FHoldComponentOnHoldInterruptedEvent OnHoldInterruptedEvent;                      // 0x01D8 (size: 0x10)
    void InteractionDelegate(class AObj* Object);
    FHoldComponentOnHoldFinishedEvent OnHoldFinishedEvent;                            // 0x01E8 (size: 0x10)
    void InteractionDelegate(class AObj* Object);
    FHoldInteractionData InteractionData;                                             // 0x01F8 (size: 0x28)

    bool IsHoldStarted();
}; // Size: 0x230

class UHoldIPU : public UInputProcessingUnit
{
}; // Size: 0x48

class UHoverIndicator : public UWidgetBase
{
    class UImage* Background;                                                         // 0x0278 (size: 0x8)
    FHoverIndicatorOnHoverIndicator OnHoverIndicator;                                 // 0x0280 (size: 0x10)
    void OnHoverIndicator(bool bIsHovered);

}; // Size: 0x290

class UHudHintsPanel : public UChildViewBase
{
    float HintHudRestoreHideTime;                                                     // 0x0288 (size: 0x4)
    float HintRestoreHUDNonActiveOpacity;                                             // 0x028C (size: 0x4)
    class UHintInputController* HintRestoreHUD;                                       // 0x0290 (size: 0x8)
    class UVerticalBox* CommonHintBox;                                                // 0x0298 (size: 0x8)
    class UHintInputController* ChangeAmmoType;                                       // 0x02A0 (size: 0x8)
    class UHintInputController* ItemSelector;                                         // 0x02A8 (size: 0x8)
    class UHintInputController* OpenInventory;                                        // 0x02B0 (size: 0x8)
    class UHintInputController* OpenMap;                                              // 0x02B8 (size: 0x8)
    class UHintInputController* OpenPDA;                                              // 0x02C0 (size: 0x8)
    float CommonHintsOpacitySpeedChange;                                              // 0x02D8 (size: 0x4)
    float RestoreOpacitySpeedChange;                                                  // 0x02DC (size: 0x4)

    void UpdateInputDependent();
}; // Size: 0x2E0

class UHumanAnimCollection : public UObject
{
    TMap<class EAnomalyAnimInteraction, class UAnimMontage*> AnomalyInteractions;     // 0x0028 (size: 0x50)
    TMap<class EAnimationTargetType, class UAnimMontage*> AnimationTargetTypes;       // 0x0078 (size: 0x50)
    FHumanExternalAnimations ExternalAnimations;                                      // 0x00C8 (size: 0xD0)
    TMap<class EAnimStealthKillPose, class UAnimMontage*> StealthDeaths;              // 0x0198 (size: 0x50)
    TArray<FCriticalHitAnimations> CriticalHits;                                      // 0x01E8 (size: 0x10)
    FPoseSearchLocomotionAnimCollectionData PoseSearchLocomotionAnimCollectionData;   // 0x01F8 (size: 0x30)

}; // Size: 0x228

class UHumanDefaultAnimCollection : public UObject
{
    class UHumanAnimCollection* HumanAnimCollection;                                  // 0x0028 (size: 0x8)
    UClass* HumanAnimBlueprint;                                                       // 0x0030 (size: 0x8)
    FEquipUnequipAnimations EquipUnequip;                                             // 0x0038 (size: 0x18)
    FPDAUsageAnimations PDAUsage;                                                     // 0x0050 (size: 0x18)
    FDragDeadBodyAnimations DragDeadBodyAnimations;                                   // 0x0068 (size: 0x10)
    FSmartCoverAnimCollectionData SmartCoverAnimCollectionData;                       // 0x0078 (size: 0x50)
    FHumanDeathAnimations DeathAnimations;                                            // 0x00C8 (size: 0xF0)
    TMap<class EEmotionalDialogState, class FAnimDialogContextualWeightedArray> DialogIdleAnimations; // 0x01B8 (size: 0x50)
    TMap<class EDialogAnimationType, class FAnimDialogContextualArray> DialogAnimations; // 0x0208 (size: 0x50)

}; // Size: 0x258

class UHumanFirearmAnimCollection : public UObject
{
    FHumanFirearmInternalAnimations InternalAnimations;                               // 0x0028 (size: 0xD0)
    FHumanWeaponExternalAnimations ExternalAnimations;                                // 0x00F8 (size: 0x40)
    TMap<class FName, class FVector> SocketLocations;                                 // 0x0138 (size: 0x50)
    bool bIsOneHanded;                                                                // 0x0188 (size: 0x1)
    FHumanWeaponAnimations WeaponAnimations;                                          // 0x0190 (size: 0x120)

}; // Size: 0x2B0

class UHyperlinkButton : public UButtonBase
{
    class UTextWidget* Text;                                                          // 0x02C0 (size: 0x8)
    class UImage* Underline;                                                          // 0x02C8 (size: 0x8)
    FString URL;                                                                      // 0x02D0 (size: 0x10)
    FText DefaultText;                                                                // 0x02E0 (size: 0x18)
    bool bEnableLocalization;                                                         // 0x02F8 (size: 0x1)
    FString LocalizationSID;                                                          // 0x0300 (size: 0x10)
    FName SetStyleIdHover;                                                            // 0x0310 (size: 0x8)
    FName SetStyleIdUnHover;                                                          // 0x0318 (size: 0x8)

}; // Size: 0x320

class UIdleScreenView : public UViewBaseExtended
{
    FVector2f LoadArrowRotation;                                                      // 0x02C8 (size: 0x8)
    float IndicatorSpeed;                                                             // 0x02D0 (size: 0x4)
    class UWidgetSwitcher* TextSwitcher;                                              // 0x02D8 (size: 0x8)
    class UWidgetAnimation* TextTransitionAnim;                                       // 0x02E0 (size: 0x8)
    class UWidgetAnimation* ShaderCompilingAnim;                                      // 0x02E8 (size: 0x8)
    class UVerticalBox* ShadersCompilationBox;                                        // 0x02F0 (size: 0x8)
    class UProgressBarWidget* ProgressBarShaderCompiling;                             // 0x02F8 (size: 0x8)

    void OnAnyKeyIsPressed();
}; // Size: 0x318

class UImageWidget : public UWidgetBase
{
    FName StyleId;                                                                    // 0x0278 (size: 0x8)
    bool bEnableStyleManager;                                                         // 0x0280 (size: 0x1)
    bool bSetDefaultIcon;                                                             // 0x0281 (size: 0x1)
    FIconSettings IconSettings;                                                       // 0x0290 (size: 0x120)
    class UImage* ImageObj;                                                           // 0x03B0 (size: 0x8)

    void SetBrushTextureInIconSettings(class UTexture2D* Texture);
}; // Size: 0x3D0

class UImpulseComponent : public UActorComponent
{

    void ApplyImpulse(const class AActor* InTargetActor, const FVector InImpulse, const bool bIgnoreMass);
}; // Size: 0xA0

class UInertionIPU : public UInputProcessingUnit
{
}; // Size: 0x60

class UInitialControllerTrackerManager : public UBaseManager
{
}; // Size: 0x78

class UInputDamageModifierComponent : public UActorComponent
{
    float DamageModifier;                                                             // 0x00A8 (size: 0x4)

    void SetIgnoreHitFeedback(const bool bInIgnore);
}; // Size: 0xB0

class UInputManager : public UBaseTickableManager
{
    TWeakObjectPtr<class UInputMappingContext> RemapMappingContext;                   // 0x01A0 (size: 0x8)
    TArray<class UInputProcessingUnit*> InputProcessingUnits;                         // 0x01A8 (size: 0x10)
    TArray<class UInputProcessingUnit*> TickableIPUs;                                 // 0x01B8 (size: 0x10)
    class UInputComponent* InputComponent;                                            // 0x01D8 (size: 0x8)
    class UPlayerInput* PlayerInput;                                                  // 0x01E0 (size: 0x8)
    class ACharacter* PlayerCharacter;                                                // 0x01E8 (size: 0x8)
    class AActor* InteractProgressBarFocusedActor;                                    // 0x01F0 (size: 0x8)

}; // Size: 0x258

class UInputMappingSettingsModel : public UDataAsset
{
    TArray<FInputMappingSettingsElementModels> ElementsModels;                        // 0x0030 (size: 0x10)

}; // Size: 0x40

class UInputMappingSettingsPage : public USettingsPage
{
    TSubclassOf<class USettingsCategory> AnchorClass;                                 // 0x0290 (size: 0x8)
    FMargin AnchorPadding;                                                            // 0x0298 (size: 0x10)
    TSubclassOf<class USettingElementInput> InputElementClass;                        // 0x02A8 (size: 0x8)
    TSubclassOf<class USettingElementBindedInput> BindedInputElementClass;            // 0x02B0 (size: 0x8)
    FMargin SettingElementPadding;                                                    // 0x02B8 (size: 0x10)
    FMargin ToggleElementPadding;                                                     // 0x02C8 (size: 0x10)
    TArray<class USettingsCategory*> Anchors;                                         // 0x02D8 (size: 0x10)
    class UInputMappingSettingsModel* InputMappingSettingsModel;                      // 0x02E8 (size: 0x8)

}; // Size: 0x2F0

class UInputProcessingUnit : public UObject
{
    TArray<FInputBufferIPUStruct> InputBuffer;                                        // 0x0030 (size: 0x10)

}; // Size: 0x40

class UInputTriggerActionBlocker : public UInputTrigger
{
    class UActionBlockerConditionBase* Condition;                                     // 0x0050 (size: 0x8)

}; // Size: 0x58

class UInspectArtifactExitIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UInspectArtifactView : public UViewBaseExtended
{
    class UWidgetAnimation* HintFadeAnimation;                                        // 0x02C8 (size: 0x8)
    float HintFadeInPlaybackSpeed;                                                    // 0x02D0 (size: 0x4)
    float HintFadeOutPlaybackSpeed;                                                   // 0x02D4 (size: 0x4)
    float HintShowTime;                                                               // 0x02D8 (size: 0x4)

}; // Size: 0x300

class UInteractHintInputController : public UHintControllerBase
{
    class UImage* IconImage;                                                          // 0x03B0 (size: 0x8)
    TMap<class EInteractionTypeIcon, class TSoftObjectPtr<UTexture2D>> InteractionTypeIcons; // 0x03B8 (size: 0x50)

}; // Size: 0x410

class UInteractView : public UViewBase
{
    class UInteractHintInputController* MainHint;                                     // 0x02C0 (size: 0x8)
    class UInteractHintInputController* OptionalHint;                                 // 0x02C8 (size: 0x8)
    class UCanvasPanel* BothElementCanvas;                                            // 0x02D0 (size: 0x8)
    class UCanvasPanel* InteractCanvas;                                               // 0x02D8 (size: 0x8)
    class UTextWidget* NameText;                                                      // 0x02E0 (size: 0x8)
    class UTextWidget* ActionText;                                                    // 0x02E8 (size: 0x8)
    class UTextWidget* SecondActionText;                                              // 0x02F0 (size: 0x8)
    class UOverlay* MainActionElement;                                                // 0x02F8 (size: 0x8)
    class UOverlay* SecondActionElement;                                              // 0x0300 (size: 0x8)
    class UOverlay* NameElement;                                                      // 0x0308 (size: 0x8)
    class UImage* UpgradeIcon;                                                        // 0x0310 (size: 0x8)
    class UImage* DurabilityIcon;                                                     // 0x0318 (size: 0x8)
    class UImage* OverweightIcon;                                                     // 0x0320 (size: 0x8)
    class UImage* MainRightSoftTile;                                                  // 0x0328 (size: 0x8)
    FVector2D InteractItemOffset;                                                     // 0x0330 (size: 0x10)
    TArray<TWeakObjectPtr<UInteractionComponent>> InteractionComponents;              // 0x0340 (size: 0x10)
    TArray<class UInteractHintInputController*> HintWidgets;                          // 0x0350 (size: 0x10)
    FString UpgradesBlueprintL10n;                                                    // 0x0388 (size: 0x10)

    void UpdateInteractHints();
    void UpdateHintState();
    void HideInteractHints();
}; // Size: 0x3A0

class UInteractViewDots : public UViewBase
{
    class UCanvasPanel* HintCanvas;                                                   // 0x02C0 (size: 0x8)
    class UImageWidget* HintDot;                                                      // 0x02C8 (size: 0x8)
    TArray<class UImageWidget*> HintDots;                                             // 0x02D0 (size: 0x10)

}; // Size: 0x2E8

class UInteractViewHint : public UCommonHint
{
    class UTextWidget* TitleText;                                                     // 0x0340 (size: 0x8)
    class UTextWidget* InteractText;                                                  // 0x0348 (size: 0x8)
    class UTextWidget* InteractTextSmall;                                             // 0x0350 (size: 0x8)
    class UVerticalBox* HintsContainer;                                               // 0x0358 (size: 0x8)
    class UImageWidget* IconUpgrade;                                                  // 0x0360 (size: 0x8)
    class UImageWidget* IconOverweight;                                               // 0x0368 (size: 0x8)
    class UWidgetAnimation* RunActionAnim;                                            // 0x0370 (size: 0x8)

    void OnRunAction();
}; // Size: 0x3D0

class UInteractableAnimCollection : public UObject
{
    FInteractableAnimations InteractableAnimations;                                   // 0x0030 (size: 0x18)
    FAnimInteractableData InteractableData;                                           // 0x0048 (size: 0x28)
    FPlayerWeaponAnimations WeaponAnimations;                                         // 0x0070 (size: 0x230)

}; // Size: 0x2A0

class UInteractableComponent : public UUIDActorComponent
{
    FInteractableComponentOnStartQuestNode OnStartQuestNode;                          // 0x00B8 (size: 0x1)
    void OnStartQuestNodeSignature();
    FInteractableComponentOnFinishQuestNode OnFinishQuestNode;                        // 0x00B9 (size: 0x1)
    void OnFinishQuestNodeSignature();
    FInteractableComponentOnExcludeQuestNode OnExcludeQuestNode;                      // 0x00BA (size: 0x1)
    void OnExcludeQuestNodeSignature();
    FInteractableComponentOnRunAction OnRunAction;                                    // 0x00C0 (size: 0x10)
    void InteractableComponentRunActionSignature();
    FInteractableComponentOnRunAlternativeAction OnRunAlternativeAction;              // 0x00D0 (size: 0x10)
    void InteractableComponentRunAlternativeActionSignature();
    FInteractableComponentOnEndInteract OnEndInteract;                                // 0x00E0 (size: 0x10)
    void InteractableComponentEndInteractSignature();
    FInteractableComponentOnUpdateInteract OnUpdateInteract;                          // 0x0108 (size: 0x10)
    void OnUpdateInteract();
    FInteractableComponentOnUpdateProgress OnUpdateProgress;                          // 0x0118 (size: 0x10)
    void OnUpdateProgress(EInteractionType InteractableType, float Progress);
    bool bEnabled;                                                                    // 0x0128 (size: 0x1)
    TArray<class UBaseInteractableAction*> InteractableActions;                       // 0x0130 (size: 0x10)
    TArray<class AActor*> TriggerActorsList;                                          // 0x0140 (size: 0x10)
    TArray<class AActor*> AlternativeTriggerActorsList;                               // 0x0150 (size: 0x10)
    int32 TriggerUserData;                                                            // 0x0160 (size: 0x4)
    int32 TriggerAlternativeUserData;                                                 // 0x0164 (size: 0x4)
    EInteractionType InteractionType;                                                 // 0x0168 (size: 0x1)
    EDisplayPriority DisplayPriority;                                                 // 0x0169 (size: 0x1)
    float InteractionProgressDurationTime;                                            // 0x016C (size: 0x4)
    float InteractionProgressIncreasingSpeed;                                         // 0x0170 (size: 0x4)
    float InteractionProgressFillTimeInSeconds;                                       // 0x0178 (size: 0x4)
    FString OverrideInteractionPromptText;                                            // 0x0180 (size: 0x10)
    bool bTickableInteractable;                                                       // 0x0190 (size: 0x1)
    bool bInteractableWithDeadBody;                                                   // 0x0191 (size: 0x1)
    class AActor* CurrentInteractingActor;                                            // 0x0198 (size: 0x8)

    void SetEnabled(const bool bInEnabled);
    void SetDisplayPriority(const EDisplayPriority& NewPriority);
    bool GetPreventDefaultInteract();
    EInteractionType GetInteractionType();
    EDisplayPriority GetDisplayPriority();
}; // Size: 0x1A8

class UInteractableItemSlotBaseWidget : public UItemSlotBaseWidget
{
}; // Size: 0x520

class UInteractionComponent : public UUIDActorComponent
{
    FInteractionComponentOnStartQuestNode OnStartQuestNode;                           // 0x00B8 (size: 0x1)
    void OnStartQuestNodeDelegate();
    FInteractionComponentOnFinishQuestNode OnFinishQuestNode;                         // 0x00B9 (size: 0x1)
    void OnFinishQuestNodeDelegate();
    FInteractionComponentOnExcludeQuestNode OnExcludeQuestNode;                       // 0x00BA (size: 0x1)
    void OnExcludeQuestNodeDelegate();
    FInteractionComponentOnInteractedEvent OnInteractedEvent;                         // 0x00C0 (size: 0x10)
    void InteractSignature();
    FInteractionComponentOnEndInteractedEvent OnEndInteractedEvent;                   // 0x00D0 (size: 0x10)
    void InteractSignature();
    FInteractionComponentOnNotifyInteractEvent OnNotifyInteractEvent;                 // 0x00E0 (size: 0x10)
    void InteractSignature();
    FName InteractionSocketName;                                                      // 0x00F0 (size: 0x8)
    bool bIsInteractionActive;                                                        // 0x0138 (size: 0x1)
    bool bShouldReleaseTargetOnInteraction;                                           // 0x0139 (size: 0x1)
    bool bRightHandBusy;                                                              // 0x013A (size: 0x1)
    bool bLeftHandBusy;                                                               // 0x013B (size: 0x1)
    bool bIsConeInteraction;                                                          // 0x013C (size: 0x1)
    bool bShowInactive;                                                               // 0x013D (size: 0x1)
    bool bSelfActivating;                                                             // 0x013E (size: 0x1)
    float MinInteractionRadius;                                                       // 0x0140 (size: 0x4)
    float MaxInteractionRadius;                                                       // 0x0144 (size: 0x4)
    FVector ConeTipOffset;                                                            // 0x0148 (size: 0x18)
    float InteractionHeight;                                                          // 0x0160 (size: 0x4)
    float InteractionPointHeightOffset;                                               // 0x0164 (size: 0x4)
    FVector ConeDirection;                                                            // 0x0168 (size: 0x18)
    float ConeHeight;                                                                 // 0x0180 (size: 0x4)
    float ConeAngle;                                                                  // 0x0184 (size: 0x4)
    class UInteractableAnimCollection* InteractableAnimCollection;                    // 0x0188 (size: 0x8)
    FVector Offset;                                                                   // 0x0190 (size: 0x18)
    bool bShowInteractionDot;                                                         // 0x01A8 (size: 0x1)

    void SetShowInactive(const bool bShow);
    void SetSelfActivating(const bool bNewValue);
    void SetInteractionDistance(const float MinDistance, const float MaxDistance);
    void SetInteractionActive(const bool bActive);
    bool HasRelatedQuest();
    bool HasItemRequirement();
}; // Size: 0x1C8

class UInventoryIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UInventoryNew : public UViewBaseExtended
{
    class UCanvasPanel* CanvasPanel;                                                  // 0x02C8 (size: 0x8)
    class UEquipmentSlots* EquipmentWidget;                                           // 0x02D0 (size: 0x8)
    class UQuickPanel* QuickPanel;                                                    // 0x02D8 (size: 0x8)
    class UCustomGrid* InventoryWidget;                                               // 0x02E0 (size: 0x8)
    class UInteractableItemSlotBaseWidget* CurrSelectedItem;                          // 0x02E8 (size: 0x8)
    class UInteractableItemSlotBaseWidget* HoveredItem;                               // 0x02F0 (size: 0x8)
    class UInteractableItemSlotBaseWidget* CurrClickedItem;                           // 0x02F8 (size: 0x8)
    class UImage* TakeAllIcon;                                                        // 0x0310 (size: 0x8)
    class UTextWidget* LootSeparator;                                                 // 0x0318 (size: 0x8)
    class UCustomGrid* LootGridWidget;                                                // 0x0320 (size: 0x8)
    class UButton* ButtonTakeAllItems;                                                // 0x0328 (size: 0x8)
    class UDragDropZone* DropZone;                                                    // 0x0330 (size: 0x8)
    class UDragDropZone* RejectDropZoneInventory;                                     // 0x0338 (size: 0x8)
    class UDragDropZone* RejectDropZoneEquipment;                                     // 0x0340 (size: 0x8)
    class UDragDropZone* RejectDropZoneLootSmall;                                     // 0x0348 (size: 0x8)
    class UDragDropZone* RejectDropZoneLootBig;                                       // 0x0350 (size: 0x8)
    class UDragDropZone* ContextualDropZone;                                          // 0x0358 (size: 0x8)
    class UOverlay* HintsOverlay;                                                     // 0x0360 (size: 0x8)
    class UOverlay* SafeZoneOverlay;                                                  // 0x0368 (size: 0x8)
    class UHintInputController* HintToggleEquipment;                                  // 0x0370 (size: 0x8)
    class UHintInputController* HintToggleDescription;                                // 0x0378 (size: 0x8)
    class UHintInputController* HintToggleAutoComparing;                              // 0x0380 (size: 0x8)
    class UHintInputController* HintClose;                                            // 0x0388 (size: 0x8)
    class UHintInputController* HintBack;                                             // 0x0390 (size: 0x8)
    class UHintInputController* HintUseItem;                                          // 0x0398 (size: 0x8)
    class UHintInputController* HintEquip;                                            // 0x03A0 (size: 0x8)
    class UHintInputController* HintMoveToBackpack;                                   // 0x03A8 (size: 0x8)
    class UHintInputController* HintRemoveAttach;                                     // 0x03B0 (size: 0x8)
    class UHintInputController* HintUnload;                                           // 0x03B8 (size: 0x8)
    class UHintInputController* HintChangeCompareItemHint;                            // 0x03C0 (size: 0x8)
    class UHintInputController* HintDropItem;                                         // 0x03C8 (size: 0x8)
    class UHintInputController* HintLootTakeItem;                                     // 0x03D0 (size: 0x8)
    class UHintInputController* HintLootPutDown;                                      // 0x03D8 (size: 0x8)
    class UHintInputController* HintLootTakeAll;                                      // 0x03E0 (size: 0x8)
    class UHintInputController* HintSortInventory;                                    // 0x03E8 (size: 0x8)
    class UHintInputController* HintShowContextualMenu;                               // 0x03F0 (size: 0x8)
    class UHintInputController* HintMoveItem;                                         // 0x03F8 (size: 0x8)
    class UHintInputController* HintPlaceItem;                                        // 0x0400 (size: 0x8)
    class UHintInputController* HintRemoveQuickAccess;                                // 0x0408 (size: 0x8)
    float UseItemHoldTime;                                                            // 0x0410 (size: 0x4)
    float DropItemHoldTime;                                                           // 0x0414 (size: 0x4)
    class UUpgradeMenuWidget* UpgradeMenu;                                            // 0x0418 (size: 0x8)
    class UButton* SortButton;                                                        // 0x0420 (size: 0x8)
    class UOverlay* LootOverlay;                                                      // 0x0428 (size: 0x8)
    class UImage* IconTakeAllItems;                                                   // 0x0430 (size: 0x8)
    float TooltipAndHintsPadding;                                                     // 0x0438 (size: 0x4)
    TArray<class UHintInputController*> VisibleStateHints;                            // 0x0440 (size: 0x10)
    TArray<class UHintInputController*> CommonHints;                                  // 0x0450 (size: 0x10)
    class UAkSwitchValue* ItemTypeSwitchValue;                                        // 0x0468 (size: 0x8)
    float TooltipDistance;                                                            // 0x0470 (size: 0x4)
    TMap<class UUserWidget*, class ESlateVisibility> GridVisibilityMap;               // 0x0478 (size: 0x50)
    class UUserWidget* CurrGamepadNavigatedWidget;                                    // 0x04F8 (size: 0x8)
    class UItemDragWidget* DragWidget;                                                // 0x0510 (size: 0x8)
    class UItemDragWidget* DragWidgetGrid;                                            // 0x0518 (size: 0x8)
    float ItemTooltipShowDelay;                                                       // 0x0520 (size: 0x4)
    float ItemTooltipCompareShowDelay;                                                // 0x0524 (size: 0x4)
    TSubclassOf<class UItemInfo> ItemTooltipClass;                                    // 0x0528 (size: 0x8)
    TSubclassOf<class UItemDragWidget> DragWidgetClass;                               // 0x0530 (size: 0x8)
    TSubclassOf<class UItemDragWidget> DragGridWidgetClass;                           // 0x0538 (size: 0x8)
    TSubclassOf<class UStackSplittingWidget> StackSplitWidgetClass;                   // 0x0540 (size: 0x8)
    class UStackSplitContextual* StackSplitContextual;                                // 0x0548 (size: 0x8)
    class UStackSplittingWidget* StackSplit;                                          // 0x0550 (size: 0x8)
    FLinearColor ItemBacktDefault;                                                    // 0x0558 (size: 0x10)
    FLinearColor ItemBackOk;                                                          // 0x0568 (size: 0x10)
    FLinearColor ItemBackInterceptOne;                                                // 0x0578 (size: 0x10)
    FLinearColor ItemBackInterceptTwo;                                                // 0x0588 (size: 0x10)
    FLinearColor ItemBackDepend;                                                      // 0x0598 (size: 0x10)
    FLinearColor ItemBackHoveredCompatible;                                           // 0x05A8 (size: 0x10)
    float GamepadNavigationThreshold;                                                 // 0x05C8 (size: 0x4)
    class UWidgetAnimation* RadiationMark;                                            // 0x05D0 (size: 0x8)
    FLinearColor ToggleEquipmentIconColor;                                            // 0x05D8 (size: 0x10)
    FLinearColor OverWeightColor;                                                     // 0x05E8 (size: 0x10)
    FLinearColor NormalWeightColor;                                                   // 0x05F8 (size: 0x10)
    class UUserWidget* RightClickMenuWidget;                                          // 0x0638 (size: 0x8)
    class UInteractableItemSlotBaseWidget* ItemSlotStartedDrag;                       // 0x06A0 (size: 0x8)
    class UInteractableItemSlotBaseWidget* CurrGamepadSelectedItem;                   // 0x06A8 (size: 0x8)
    EInventoryEquipmentSlot CurrentCompareSlot;                                       // 0x06D8 (size: 0x1)
    class UEquipmentSlot* EquipmentSlotToCompare;                                     // 0x06E0 (size: 0x8)
    EInventoryEquipmentSlot CurrentCompareItemSlotType;                               // 0x06E8 (size: 0x1)
    TArray<class UCustomGridSlot*> GridSlotsPool;                                     // 0x0BE8 (size: 0x10)

    void UseItemHoldReleased();
    void UpdateInputDependent();
    void UIInventoryToggleItemInfo();
    void UIInventoryToggleEquipment();
    void UIInventoryTakeItem();
    void UIInventorySort();
    void UIInventoryNavigateUp();
    void UIInventoryNavigateRight();
    void UIInventoryNavigateLeft();
    void UIInventoryNavigateDown();
    void UIInventoryNavigateComparingUp();
    void UIInventoryNavigateComparingRight();
    void UIInventoryNavigateComparingLeft();
    void UIInventoryNavigateComparingDown();
    void UIInventoryItemAction();
    void UIInventoryEnableAutoComparing();
    void UIInventoryDropItem();
    void UIInventoryCompareItem();
    void UIInventoryChangeComparingItem();
    void UIGamepadInventoryItemAction();
    void SortInventory();
    void ShowTooltip();
    void OnVisibilityChangedEvent(ESlateVisibility NewVisibility);
    void OnUseItemHoldTriggered();
    void OnTakeAllHoldTriggered();
    void OnSplitConfirmed(int32 ItemAmountSplitForDrop, const FItemUID ItemUID);
    void OnSplitCanceled();
    void OnRightClickMenuItemSelected(const FRightClickMenuItemData& ItemData);
    void OnRightClickMenuItemHover(const FRightClickMenuItemData& ItemData, const bool bInHover);
    void OnRightClickMenuCanceled();
    void OnRejectDrop(const FVector2D Pos);
    void OnMoveToBackpackHoldTriggered();
    void OnGamepadSelectItemRelease();
    void OnGamepadSelectItemForMoveRepeat();
    void OnGamepadSelectItemForMovePress();
    void OnGamepadItemSelectHoldFinished();
    void OnGamepadEquipItem();
    void OnGamepadContextMenu();
    void OnGamepadCompareItemRepeat();
    void OnGamepadCompareItemRelease();
    void OnGamepadCompareItemPress();
    void OnExitClick(FName ButtonId);
    void OnEquipHoldTriggered();
    void OnDropToEmptyPlace(const FVector2D Pos);
    void OnDropItemHoldTriggered();
    void OnDragDropCanceled(const FVector2D Pos);
    void LootTakeItemAction();
    void LootTakeAllHoldStarted();
    void LootTakeAllHoldReleased();
    void InventoryWidgetTakeAllItems();
    void HideRightClickMenu();
    void GamepadDragStop();
    void DropItemHoldReleased();
}; // Size: 0x1388

class UItemAnimCollection : public UObject
{
    FCharacterWeaponAnimations UseItemAnimation;                                      // 0x0030 (size: 0x20)
    FCharacterWeaponAnimations UseItemFastAnimation;                                  // 0x0050 (size: 0x20)
    FAnimWeaponSwingContainer SwingConfigContainer;                                   // 0x0070 (size: 0x38)
    FWeaponInertiaContainer StopSwingInertia;                                         // 0x00A8 (size: 0x20)
    FPlayerWeaponAnimations WeaponAnimations;                                         // 0x00C8 (size: 0x230)

}; // Size: 0x2F8

class UItemAppearanceComponent : public UUIDActorComponent
{
    class USkeletalMeshComponent* WeaponMeshInHands;                                  // 0x00C8 (size: 0x8)
    class USkeletalMeshComponent* WeaponMeshUnequipped;                               // 0x00D0 (size: 0x8)
    class USkeletalMeshComponent* SecondaryItemInHands;                               // 0x00D8 (size: 0x8)
    class USkeletalMeshComponent* ShootingAttachMesh;                                 // 0x00E0 (size: 0x8)
    class UAkRtpc* SilencerRTPCParameter;                                             // 0x00E8 (size: 0x8)
    class UAkRtpc* FireIntervalRTPCParameter;                                         // 0x00F0 (size: 0x8)
    class UAkRtpc* MechModulatorRTPCParameter;                                        // 0x00F8 (size: 0x8)
    class UAkAudioEvent* LastBulletInClipEvent;                                       // 0x0100 (size: 0x8)
    class UAkAudioEvent* ShellSoundEvent;                                             // 0x0108 (size: 0x8)
    class UAkSwitchValue* WeaponTypeSwitch;                                           // 0x0110 (size: 0x8)
    class UAkAudioEvent* WeaponJamEvent;                                              // 0x0118 (size: 0x8)
    class UAkComponent* WeaponAkComponent;                                            // 0x0120 (size: 0x8)
    class UAkAudioEvent* KnifeLightAttackImpactEvent;                                 // 0x0128 (size: 0x8)
    class UAkAudioEvent* KnifeHeavyAttackImpactEvent;                                 // 0x0130 (size: 0x8)
    FWeaponAttachMeshesData WeaponInHandsAttachesData;                                // 0x01F8 (size: 0x80)
    FWeaponAttachMeshesData ShadowAttachesData;                                       // 0x0278 (size: 0x80)
    class UParticleCallbackHandler* CollisionHandler;                                 // 0x0358 (size: 0x8)

    void OnShotSoundStart(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
}; // Size: 0x360

class UItemContainerHoldComponent : public UHoldComponent
{
}; // Size: 0x250

class UItemContainerInteractionComponent : public ULockableComponent
{
    int32 PresetItemContainerPrototypeID;                                             // 0x0290 (size: 0x4)
    class UAkSwitchValue* StashTypeSwitch;                                            // 0x02A8 (size: 0x8)
    class UAkAudioEvent* OpenAudioEvent;                                              // 0x02B0 (size: 0x8)
    class UAkAudioEvent* CloseAudioEvent;                                             // 0x02B8 (size: 0x8)
    class AObj* InteractedActor;                                                      // 0x02C0 (size: 0x8)

}; // Size: 0x2E0

class UItemDragWidget : public UItemSlotBaseWidget
{
    class USizeBox* ItemImageSizeBox;                                                 // 0x0410 (size: 0x8)
    class UImage* Background;                                                         // 0x0418 (size: 0x8)
    class UBorder* Border;                                                            // 0x0420 (size: 0x8)
    int32 ReturnEquipSlot;                                                            // 0x0478 (size: 0x4)

}; // Size: 0x480

class UItemGiveComponent : public UActorComponent
{
    TArray<FInteractObjectData> ObjectsToGive;                                        // 0x00A0 (size: 0x10)

    void ProvideItems();
}; // Size: 0xB0

class UItemInfo : public UWidgetBase
{
    class UImage* FullBackCenter;                                                     // 0x0278 (size: 0x8)
    class UTextWidget* HeaderText;                                                    // 0x0280 (size: 0x8)
    class UTextWidget* DurabilityText;                                                // 0x0288 (size: 0x8)
    class UTextWidget* CaliberText;                                                   // 0x0290 (size: 0x8)
    class UTextWidget* ModeText;                                                      // 0x0298 (size: 0x8)
    class UTextWidget* MagazineText;                                                  // 0x02A0 (size: 0x8)
    class UTextWidget* Price;                                                         // 0x02A8 (size: 0x8)
    class UTextWidget* DurabilityPercentText;                                         // 0x02B0 (size: 0x8)
    class URichTextWidget* FittingWeaponsRichText;                                    // 0x02B8 (size: 0x8)
    class USizeBox* FittingWeaponsBox;                                                // 0x02C0 (size: 0x8)
    class URichTextWidget* AmmoTypeRichText;                                          // 0x02C8 (size: 0x8)
    class USizeBox* AmmoTypeBox;                                                      // 0x02D0 (size: 0x8)
    class UItemStatProgress* ItemStatProgress1;                                       // 0x02D8 (size: 0x8)
    class UItemStatProgress* ItemStatProgress2;                                       // 0x02E0 (size: 0x8)
    class UItemStatProgress* ItemStatProgress3;                                       // 0x02E8 (size: 0x8)
    class UItemStatProgress* ItemStatProgress4;                                       // 0x02F0 (size: 0x8)
    class UItemStatProgress* ItemStatProgress5;                                       // 0x02F8 (size: 0x8)
    class UItemStatProgress* ItemStatProgress6;                                       // 0x0300 (size: 0x8)
    class UItemStatProgress* ItemStatProgress7;                                       // 0x0308 (size: 0x8)
    class UItemStatProgress* ItemStatProgress8;                                       // 0x0310 (size: 0x8)
    class UImage* FullBackTitle;                                                      // 0x0318 (size: 0x8)
    class UImage* Single;                                                             // 0x0320 (size: 0x8)
    class UImage* Dualshot;                                                           // 0x0328 (size: 0x8)
    class UImage* Burst;                                                              // 0x0330 (size: 0x8)
    class UImage* Auto;                                                               // 0x0338 (size: 0x8)
    class UTextWidget* AmmoName;                                                      // 0x0340 (size: 0x8)
    class UTextWidget* MagSize;                                                       // 0x0348 (size: 0x8)
    class UTextWidget* Weight;                                                        // 0x0350 (size: 0x8)
    class UTextWidget* ItemDescription;                                               // 0x0358 (size: 0x8)
    class UVerticalBox* ItemStatValueBox;                                             // 0x0360 (size: 0x8)
    class UHorizontalBox* ArmorValuesBox;                                             // 0x0368 (size: 0x8)
    class UHorizontalBox* ArtContainersBox;                                           // 0x0370 (size: 0x8)
    class UTextWidget* ArtCount;                                                      // 0x0378 (size: 0x8)
    class UVerticalBox* FireTypesBox;                                                 // 0x0380 (size: 0x8)
    class UImage* SplitterLeft;                                                       // 0x0388 (size: 0x8)
    class UImage* SplitterRight;                                                      // 0x0390 (size: 0x8)
    class UVerticalBox* AmmoBox;                                                      // 0x0398 (size: 0x8)
    class UVerticalBox* MagBox;                                                       // 0x03A0 (size: 0x8)
    class UHorizontalBox* WeightBox;                                                  // 0x03A8 (size: 0x8)
    class UOverlay* DurabilityOverlay;                                                // 0x03B0 (size: 0x8)
    class UProgressBar* Durability;                                                   // 0x03B8 (size: 0x8)
    class UImage* DurabilityBackground;                                               // 0x03C0 (size: 0x8)
    class UWidgetAnimation* RadiationMark;                                            // 0x03C8 (size: 0x8)
    class UImage* ImageAttach;                                                        // 0x03D0 (size: 0x8)
    class UOverlay* EquipmentMarkOverlay;                                             // 0x03D8 (size: 0x8)
    class UTextWidget* BlueprintIndicatorText;                                        // 0x03E0 (size: 0x8)
    class USizeBox* ItemInfoBox;                                                      // 0x03E8 (size: 0x8)
    TMap<class EItemType, class UTexture2D*> ItemTypeBackgroundMapping;               // 0x03F0 (size: 0x50)
    class UTexture2D* FallbackHeaderBackground;                                       // 0x0440 (size: 0x8)
    TSubclassOf<class UItemStatValue> ItemInfoWidgetClass;                            // 0x0448 (size: 0x8)
    TSubclassOf<class UItemStatValue> ArmorAdditionalEffectWidgetClass;               // 0x0450 (size: 0x8)
    FProgressBarStyle DurabilityStyle;                                                // 0x0460 (size: 0x2F0)
    FSlateBrush BackgroundDurabilityImage;                                            // 0x0750 (size: 0xF0)
    FSlateBrush ZeroDurabilityFillImage;                                              // 0x0840 (size: 0xF0)
    FSlateBrush LowDurabilityFillImage;                                               // 0x0930 (size: 0xF0)
    FSlateBrush MidDurabilityFillImage;                                               // 0x0A20 (size: 0xF0)
    FSlateBrush FullDurabilityFillImage;                                              // 0x0B10 (size: 0xF0)
    class UTexture2D* DamageIcon;                                                     // 0x0C00 (size: 0x8)
    class UTexture2D* PenetrationIcon;                                                // 0x0C08 (size: 0x8)
    class UTexture2D* FireRateIcon;                                                   // 0x0C10 (size: 0x8)
    class UTexture2D* DistanceIcon;                                                   // 0x0C18 (size: 0x8)
    class UTexture2D* AccuracyIcon;                                                   // 0x0C20 (size: 0x8)
    class UTexture2D* RadiationArmorIcon;                                             // 0x0C28 (size: 0x8)
    class UTexture2D* PhysicalArmorIcon;                                              // 0x0C30 (size: 0x8)
    class UTexture2D* PsyArmorIcon;                                                   // 0x0C38 (size: 0x8)
    class UTexture2D* ChemicalArmorIcon;                                              // 0x0C40 (size: 0x8)
    class UTexture2D* ElectoArmorIcon;                                                // 0x0C48 (size: 0x8)
    class UTexture2D* FireArmorIcon;                                                  // 0x0C50 (size: 0x8)
    TArray<class UItemStatValue*> ItemStatValueArray;                                 // 0x0CB0 (size: 0x10)
    FSoftObjectPath EffectDurationIcon;                                               // 0x0CC0 (size: 0x20)
    TArray<EEffectType> IncludeArmorAdditionalEffects;                                // 0x0D30 (size: 0x10)

}; // Size: 0xD40

class UItemManager : public UBaseManager
{
}; // Size: 0xA8

class UItemSelectorAxisSelectionIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UItemSelectorEquipSlot : public UItemSelectorSlotBase
{
    class UOverlay* SlotHighlight;                                                    // 0x0290 (size: 0x8)
    class UOverlay* SlotHighlightWhite;                                               // 0x0298 (size: 0x8)
    class USizeBox* SlotSizeBox;                                                      // 0x02A0 (size: 0x8)
    FString InputActionName;                                                          // 0x02A8 (size: 0x10)
    class UHintSwitcher* HintSwitcher;                                                // 0x02B8 (size: 0x8)
    EDpadNavigation DpadNavigation;                                                   // 0x02C0 (size: 0x1)
    bool bIsAvailable;                                                                // 0x02C1 (size: 0x1)
    int32 IndexEquipSlot;                                                             // 0x02C4 (size: 0x4)
    FVector2D SlotSize;                                                               // 0x02C8 (size: 0x10)
    bool FlipHintLetter;                                                              // 0x02D8 (size: 0x1)

}; // Size: 0x2E8

class UItemSelectorIPU : public UBehaviorBasedIPU
{
}; // Size: 0x58

class UItemSelectorSlotBase : public UWidgetBase
{
    class UImageWidget* WeaponIcon;                                                   // 0x0278 (size: 0x8)
    class UTexture2D* AlternativeIconTexture;                                         // 0x0280 (size: 0x8)
    EMainHandEquipmentType DisplaySlotType;                                           // 0x0288 (size: 0x1)

}; // Size: 0x290

class UItemSelectorView : public UViewBaseExtended
{
    bool bIsActive;                                                                   // 0x02C8 (size: 0x1)
    class UImageWidget* AmmoIcon;                                                     // 0x02D0 (size: 0x8)
    class UImage* AmmoIconSwipe;                                                      // 0x02D8 (size: 0x8)
    class UImage* FireTypeIcon;                                                       // 0x02E0 (size: 0x8)
    class UImage* GrenadeIcon;                                                        // 0x02E8 (size: 0x8)
    class UImage* GrenadeIconSwipe;                                                   // 0x02F0 (size: 0x8)
    class UImage* NavigateArrowLeftGrenade;                                           // 0x02F8 (size: 0x8)
    class UImage* NavigateArrowRightGrenade;                                          // 0x0300 (size: 0x8)
    class UImage* NavigateArrowLeftAmmo;                                              // 0x0308 (size: 0x8)
    class UImage* NavigateArrowRightAmmo;                                             // 0x0310 (size: 0x8)
    class UTextWidget* TextAmmoType;                                                  // 0x0318 (size: 0x8)
    class UWidgetSwitcher* MidleSwitcher;                                             // 0x0320 (size: 0x8)
    class UTextWidget* TextShutType;                                                  // 0x0328 (size: 0x8)
    class UHintSwitcher* ModeHintSwitcher;                                            // 0x0330 (size: 0x8)
    class UHintSwitcher* AmmoHintSwitcher;                                            // 0x0338 (size: 0x8)
    class UHintSwitcher* GrenadeHintSwitcher;                                         // 0x0340 (size: 0x8)
    class UWidget* HintUseGuitar;                                                     // 0x0348 (size: 0x8)
    class UWidgetAnimation* ItemSelectorChangeGrenade;                                // 0x0350 (size: 0x8)
    class UWidgetAnimation* ItemSelectorChangeAmmo;                                   // 0x0358 (size: 0x8)
    class UWidgetAnimation* ItemSelectorChangeFireMode;                               // 0x0360 (size: 0x8)
    class UWidgetAnimation* ItemSelectorRestoreState;                                 // 0x0368 (size: 0x8)
    float FastChangeSlotTime;                                                         // 0x0370 (size: 0x4)
    float FastChangeUpdateTime;                                                       // 0x0374 (size: 0x4)
    float InputDelayTime;                                                             // 0x0378 (size: 0x4)
    float ItemSelectorChangeAmmoSpeed;                                                // 0x037C (size: 0x4)
    float ItemSelectorChangeFireModeSpeed;                                            // 0x0380 (size: 0x4)
    float ItemSelectorChangeGrenadeSpeed;                                             // 0x0384 (size: 0x4)
    EMainHandEquipmentType DefoultSelectSlotType;                                     // 0x0388 (size: 0x1)
    bool bShouldIgnoreEmptySlot;                                                      // 0x0389 (size: 0x1)
    TMap<class EFireType, class FFireTypeDisplayInfo> FireTypesInfo;                  // 0x0390 (size: 0x50)
    class UItemSelectorEquipSlot* SideSlotDetector;                                   // 0x03E0 (size: 0x8)
    class UItemSelectorEquipSlot* SideSlotFlashlight;                                 // 0x03E8 (size: 0x8)
    class UItemSelectorEquipSlot* SideSlotUnarmed;                                    // 0x03F0 (size: 0x8)
    class UItemSelectorEquipSlot* SideSlotLauncher;                                   // 0x03F8 (size: 0x8)
    class UItemSelectorWeaponSlot* SelectedSlot;                                      // 0x0400 (size: 0x8)
    class UItemSelectorWeaponSlot* HoveredSlot;                                       // 0x0408 (size: 0x8)
    class UItemSelectorEquipSlot* SelectedEquipSlot;                                  // 0x0410 (size: 0x8)

    void UIItemSelectorUnarm();
    void UIItemSelectorGrenadeLauncher();
    void UIItemSelectorFlashlight();
    void UIItemSelectorDetector();
    void ToggleAttachMode();
    TArray<class UItemSelectorWeaponSlot*> GetSlotsBP();
    void ChangeFireType();
    void ChangeAmmoType();
}; // Size: 0x480

class UItemSelectorWeaponSlot : public UItemSelectorSlotBase
{
    FLinearColor SelectedColor;                                                       // 0x0290 (size: 0x10)
    FLinearColor ActiveColor;                                                         // 0x02A0 (size: 0x10)
    FLinearColor DefaultColor;                                                        // 0x02B0 (size: 0x10)
    class USizeBox* SlotRadiusSizeBox;                                                // 0x02C0 (size: 0x8)
    class UWidget* RotationBox;                                                       // 0x02C8 (size: 0x8)
    class UImage* BackgroundImage;                                                    // 0x02D0 (size: 0x8)
    TSoftObjectPtr<UTexture2D> BackgroundTexture;                                     // 0x02D8 (size: 0x30)
    class UImage* Particles;                                                          // 0x0308 (size: 0x8)
    class UTextWidget* GrenadeText;                                                   // 0x0310 (size: 0x8)
    class UTextWidget* AmmoText;                                                      // 0x0318 (size: 0x8)
    class UTextWidget* AmmoTextMax;                                                   // 0x0320 (size: 0x8)
    class UTextWidget* UnderbarrelAmmoText;                                           // 0x0328 (size: 0x8)
    class UTextWidget* UnderbarrelAmmoTextMax;                                        // 0x0330 (size: 0x8)
    class UTextWidget* AmmoSlash;                                                     // 0x0338 (size: 0x8)
    class UTextWidget* UnderbarrelAmmoSlash;                                          // 0x0340 (size: 0x8)
    class USizeBox* IconContainer;                                                    // 0x0348 (size: 0x8)
    class UWidgetSwitcher* AmmoContainer;                                             // 0x0350 (size: 0x8)
    int32 IndexSlot;                                                                  // 0x0358 (size: 0x4)
    FText AlternativeDisplayText;                                                     // 0x0360 (size: 0x18)
    float SlotAngle;                                                                  // 0x0378 (size: 0x4)
    float Radius;                                                                     // 0x037C (size: 0x4)
    FVector2D ContainerSizeMax;                                                       // 0x0380 (size: 0x10)
    FVector2D ContainerSizeMin;                                                       // 0x0390 (size: 0x10)
    FVector2D ParticlesTranslation;                                                   // 0x03A0 (size: 0x10)
    FLinearColor HoverTextColor;                                                      // 0x03B0 (size: 0x10)
    FLinearColor UnHoverTextColor;                                                    // 0x03C0 (size: 0x10)
    bool bSlotBlocked;                                                                // 0x03D0 (size: 0x1)
    FLinearColor UnBlockColor;                                                        // 0x03D4 (size: 0x10)
    FLinearColor BlockColor;                                                          // 0x03E4 (size: 0x10)
    ELayerSlotType LayerSlotType;                                                     // 0x03F4 (size: 0x1)
    float FadeVCoordinate;                                                            // 0x03F8 (size: 0x4)
    float HorizontalSpeed;                                                            // 0x03FC (size: 0x4)
    float SoftFadeDistance;                                                           // 0x0400 (size: 0x4)
    float UTiling;                                                                    // 0x0404 (size: 0x4)
    float VerticalSpeed;                                                              // 0x0408 (size: 0x4)
    float VTiling;                                                                    // 0x040C (size: 0x4)
    class UOverlay* AttachesOverlay;                                                  // 0x0440 (size: 0x8)
    TSubclassOf<class UImageWidget> AttachImageWidgetClass;                           // 0x0448 (size: 0x8)
    FIconSettings IconSettings;                                                       // 0x0450 (size: 0x120)

    bool IsWeaponSlot();
    bool IsGrenadeSlot();
    bool IsAlternativeSlot();
    TArray<class UUserWidget*> GetHoveredWidgets();
    void ConstructUpdateSlotScale();
}; // Size: 0x5F0

class UItemSlotBaseWidget : public UWidgetBase
{
    int32 SlotIndex;                                                                  // 0x0288 (size: 0x4)
    class UOverlay* ItemAndAttachesOverlay;                                           // 0x0290 (size: 0x8)
    class UOverlay* AttachesOverlay;                                                  // 0x0298 (size: 0x8)
    class UImageWidget* ItemImage;                                                    // 0x02A0 (size: 0x8)
    class UItemSlotState* SlotState;                                                  // 0x02A8 (size: 0x8)
    FIconSettings IconSettings;                                                       // 0x02B0 (size: 0x120)
    TSubclassOf<class UImageWidget> AttachImageWidgetClass;                           // 0x03D0 (size: 0x8)
    TArray<class UImageWidget*> AttachesImages;                                       // 0x03E8 (size: 0x10)

}; // Size: 0x410

class UItemSlotState : public UUserWidget
{
    class UImage* Highlight;                                                          // 0x0278 (size: 0x8)
    class UImage* Background;                                                         // 0x0280 (size: 0x8)
    class UImage* Quest;                                                              // 0x0288 (size: 0x8)
    FVector2D SizeReductionToFitEquipment;                                            // 0x0290 (size: 0x10)
    FVector2D SizeReductionToFitGrid;                                                 // 0x02A0 (size: 0x10)
    FLinearColor DependencyColor;                                                     // 0x02B0 (size: 0x10)
    FLinearColor HoveredColor;                                                        // 0x02C0 (size: 0x10)
    FLinearColor DefaultColor;                                                        // 0x02D0 (size: 0x10)

}; // Size: 0x2E8

class UItemStatProgress : public UUserWidget
{
    class UImage* IconImage;                                                          // 0x0278 (size: 0x8)
    class UTextWidget* Name;                                                          // 0x0280 (size: 0x8)
    class UProgressBar* ProgressBackground;                                           // 0x0288 (size: 0x8)
    class UProgressBar* ProgressForeground;                                           // 0x0290 (size: 0x8)
    FLinearColor DefaultColor;                                                        // 0x0298 (size: 0x10)
    FLinearColor BetterColor;                                                         // 0x02A8 (size: 0x10)
    FLinearColor WorseColor;                                                          // 0x02B8 (size: 0x10)
    FLinearColor BuffColor;                                                           // 0x02C8 (size: 0x10)

}; // Size: 0x2D8

class UItemStatValue : public UWidgetBase
{
    class UTextWidget* Name;                                                          // 0x0278 (size: 0x8)
    class UTextWidget* Value;                                                         // 0x0280 (size: 0x8)
    class UTextWidget* ValuePostFix;                                                  // 0x0288 (size: 0x8)
    FLinearColor PositiveEffectValueColor;                                            // 0x0290 (size: 0x10)
    FLinearColor NegativeEffectValueColor;                                            // 0x02A0 (size: 0x10)
    FLinearColor NeutralEffectValueColor;                                             // 0x02B0 (size: 0x10)
    class UImageWidget* IconImage;                                                    // 0x02D8 (size: 0x8)

}; // Size: 0x2E0

class UItemUsageComponent : public UActorComponent
{
    TArray<FInteractObject> ObjectsNeededToInteract;                                  // 0x00A8 (size: 0x10)

    void RemoveAffectedComponent(class UInteractionComponent* InteractionComponent);
    bool HasRequiredItems();
    bool HasAnyItemNeededToInteract();
    void ConsumeRequiredItems();
    void AddAffectedComponent(class UInteractionComponent* InteractionComponent);
}; // Size: 0xC8

class UItemsStatsUpgrades : public UWidgetBase
{
    class UTextWidget* DurabilityPercentText;                                         // 0x0278 (size: 0x8)
    class UItemStatProgress* ItemStatProgress1;                                       // 0x0280 (size: 0x8)
    class UItemStatProgress* ItemStatProgress2;                                       // 0x0288 (size: 0x8)
    class UItemStatProgress* ItemStatProgress3;                                       // 0x0290 (size: 0x8)
    class UItemStatProgress* ItemStatProgress4;                                       // 0x0298 (size: 0x8)
    class UItemStatProgress* ItemStatProgress5;                                       // 0x02A0 (size: 0x8)
    class UItemStatProgress* ItemStatProgress6;                                       // 0x02A8 (size: 0x8)
    class UItemStatProgress* ItemStatProgress7;                                       // 0x02B0 (size: 0x8)
    class UItemStatProgress* ItemStatProgress8;                                       // 0x02B8 (size: 0x8)
    class UOverlay* DurabilityOverlay;                                                // 0x02C0 (size: 0x8)
    class UProgressBar* Durability;                                                   // 0x02C8 (size: 0x8)
    class UWidgetAnimation* RadiationMark;                                            // 0x02D0 (size: 0x8)
    class UVerticalBox* ItemStatValueBox;                                             // 0x02D8 (size: 0x8)
    TSubclassOf<class UItemStatValue> ItemInfoWidgetClass;                            // 0x02E0 (size: 0x8)
    FLinearColor ColorDurabilityZero;                                                 // 0x02E8 (size: 0x10)
    FLinearColor ColorDurabilityLow;                                                  // 0x02F8 (size: 0x10)
    FLinearColor ColorDurabilityMid;                                                  // 0x0308 (size: 0x10)
    FLinearColor ColorDurabilityFull;                                                 // 0x0318 (size: 0x10)
    class UTexture2D* DamageIcon;                                                     // 0x0328 (size: 0x8)
    class UTexture2D* PenetrationIcon;                                                // 0x0330 (size: 0x8)
    class UTexture2D* FireRateIcon;                                                   // 0x0338 (size: 0x8)
    class UTexture2D* DistanceIcon;                                                   // 0x0340 (size: 0x8)
    class UTexture2D* AccuracyIcon;                                                   // 0x0348 (size: 0x8)
    class UTexture2D* RadiationArmorIcon;                                             // 0x0350 (size: 0x8)
    class UTexture2D* PhysicalArmorIcon;                                              // 0x0358 (size: 0x8)
    class UTexture2D* PsyArmorIcon;                                                   // 0x0360 (size: 0x8)
    class UTexture2D* ChemicalArmorIcon;                                              // 0x0368 (size: 0x8)
    class UTexture2D* ElectoArmorIcon;                                                // 0x0370 (size: 0x8)
    class UTexture2D* FireArmorIcon;                                                  // 0x0378 (size: 0x8)
    TArray<class UItemStatValue*> ItemStatValueArray;                                 // 0x03D8 (size: 0x10)

}; // Size: 0x3E8

class UJournalIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UJournalMouseIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UJournalPage : public UPDAPage
{
    class UPDAQuestButton* CurrentQuestButton;                                        // 0x0298 (size: 0x8)
    class UPDAQuestButton* DoneQuestButton;                                           // 0x02A0 (size: 0x8)
    class UPDAQuestPanel* PDAQuestPanel;                                              // 0x02A8 (size: 0x8)
    class UPDAQuestDetails* QuestDetails;                                             // 0x02B0 (size: 0x8)
    class UHintInputController* SelectQuestHint;                                      // 0x02B8 (size: 0x8)
    class UHintInputController* HintSelectPanelLeft;                                  // 0x02C0 (size: 0x8)
    class UHintInputController* HintSelectPanelRight;                                 // 0x02C8 (size: 0x8)
    class UHintInputController* ButtonHintTransitionToMap;                            // 0x02D0 (size: 0x8)
    FString MainQuestLocalizationSID;                                                 // 0x02D8 (size: 0x10)
    FString SecondaryQuestLocalizationSID;                                            // 0x02E8 (size: 0x10)
    FString FinishQuestLocalizationSID;                                               // 0x02F8 (size: 0x10)
    FString FeilQuestLocalizationSID;                                                 // 0x0308 (size: 0x10)
    FString CanceledQuestLocalizationSID;                                             // 0x0318 (size: 0x10)
    FName SelectInput;                                                                // 0x0328 (size: 0x8)
    FLinearColor MainQuestTint;                                                       // 0x0330 (size: 0x10)
    FLinearColor DefaultQuestTint;                                                    // 0x0340 (size: 0x10)
    float QuestSlotListScrollTime;                                                    // 0x0350 (size: 0x4)
    float TabTransitionTime;                                                          // 0x0354 (size: 0x4)

    void UpdateStageOnDetailed();
    void UpdateHoverDetailsElement(const bool bHovered, const EDetailsElementType ElementType);
    void UpdateButton(const int32 IndexUpdateButton);
    void UIPDATransitionToMarkerPosition();
    void UIPDANavigationUp();
    void UIPDANavigationSelectPanelRight();
    void UIPDANavigationSelectPanelLeft();
    void UIPDANavigationSelect();
    void UIPDANavigationRightHint();
    void UIPDANavigationRight();
    void UIPDANavigationReleased();
    void UIPDANavigationLeftHint();
    void UIPDANavigationLeft();
    void UIPDANavigationDown();
    void StageSlotHover();
    void ShowDetails(bool bEmpty);
    void SelectedSlotWithMouse();
    void ClickButtonQuest(const FName ButtonId);
}; // Size: 0x388

class UKeyboardMappingSettingsPage : public UInputMappingSettingsPage
{
}; // Size: 0x2F0

class UKorshunovBossComponent : public UActorComponent
{
    FKorshunovBossComponentOnShieldStateChanged OnShieldStateChanged;                 // 0x0108 (size: 0x10)
    void OnShieldStateChanged(EShieldState State);
    FKorshunovBossComponentOnCoilsStateChanged OnCoilsStateChanged;                   // 0x0118 (size: 0x10)
    void OnCoilsStateChanged(ECoilsState State);
    FKorshunovBossComponentOnCoilsHeated OnCoilsHeated;                               // 0x0128 (size: 0x10)
    void OnCoilsHeated(float Value);
    FKorshunovBossComponentOnCoilsDamageThresholdPassed OnCoilsDamageThresholdPassed; // 0x0138 (size: 0x10)
    void OnCoilsDamageThresholdPassed();
    TArray<float> PhasesHealthThresholds;                                             // 0x0148 (size: 0x10)
    float MeleeResistancePercent;                                                     // 0x0158 (size: 0x4)
    float StunDuration;                                                               // 0x015C (size: 0x4)
    float JumpZScale;                                                                 // 0x0160 (size: 0x4)
    float CutsceneSequenceTrackingDistance;                                           // 0x0164 (size: 0x4)
    float ShieldArmorHealth;                                                          // 0x0168 (size: 0x4)
    float CoilsHeatingThreshold;                                                      // 0x016C (size: 0x4)
    class UMaterialInstance* CoilsMaterialInstance;                                   // 0x0170 (size: 0x8)
    TSubclassOf<class ATelekineticShield> TelekineticShieldType;                      // 0x0178 (size: 0x8)

}; // Size: 0x1F0

class ULadderAscendIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class ULadderComponent : public UGuidActorComponent
{
    class UCurveFloat* UnfoldingCurve;                                                // 0x00C0 (size: 0x8)
    class UCurveFloat* HorizontalOffsetCurve;                                         // 0x00C8 (size: 0x8)
    FLadderComponentOnUnfoldingStarted OnUnfoldingStarted;                            // 0x00D0 (size: 0x10)
    void OnUnfoldingStarted();
    FLadderComponentOnUnfoldingEnded OnUnfoldingEnded;                                // 0x00E0 (size: 0x10)
    void OnUnfoldingEnded();
    FLadderComponentOnHiddenStateChanged OnHiddenStateChanged;                        // 0x00F0 (size: 0x10)
    void OnHiddenStateChanged();
    bool bTopBlocked;                                                                 // 0x0105 (size: 0x1)
    bool bLadderHidden;                                                               // 0x0106 (size: 0x1)

    void SetTopBlocked(const bool InbTopBlocked);
    void SetLadderHidden(const bool InbLadderHidden);
    bool IsTopBlocked();
    bool IsLadderHidden();
}; // Size: 0x108

class ULadderDescendIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class ULadderJumpIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class ULadderSprintIPU : public UBehaviorBasedIPU
{
}; // Size: 0x58

class ULaserSightComponent : public UActorComponent
{
    class UMeshComponent* ParentMesh;                                                 // 0x00A0 (size: 0x8)
    class UNiagaraComponent* LaserSightVFX;                                           // 0x0128 (size: 0x8)

}; // Size: 0x140

class ULastSaveTimeMenuWidget : public UWidgetBase
{
    class UTextWidget* Timestamp;                                                     // 0x0278 (size: 0x8)
    FString DateFormat;                                                               // 0x0280 (size: 0x10)

}; // Size: 0x290

class ULayeredItemImage : public UWidgetBase
{
    FString PathSuffix;                                                               // 0x0278 (size: 0x10)
    class UImageWidget* MainImage;                                                    // 0x0288 (size: 0x8)
    class UOverlay* ImagesOverlay;                                                    // 0x0290 (size: 0x8)
    class UOverlay* LowPrioOverlay;                                                   // 0x0298 (size: 0x8)
    class UOverlay* HighPrioOverlay;                                                  // 0x02A0 (size: 0x8)
    int32 IconsAsyncRequestCounter;                                                   // 0x02A8 (size: 0x4)
    TSubclassOf<class UImageWidget> ImageWidgetClass;                                 // 0x02B0 (size: 0x8)
    FIconSettings IconSettings;                                                       // 0x02C0 (size: 0x120)
    TArray<class UImageWidget*> ImageWidgets;                                         // 0x03E0 (size: 0x10)

}; // Size: 0x420

class ULeanLeftIPU : public UBehaviorBasedIPU
{
}; // Size: 0x58

class ULeanRightIPU : public UBehaviorBasedIPU
{
}; // Size: 0x58

class ULever : public ULockableComponent
{
    float CurrentValue;                                                               // 0x0278 (size: 0x4)
    bool bShouldConsumeItemOnOpen;                                                    // 0x027C (size: 0x1)
    bool bUseInBothSides;                                                             // 0x027D (size: 0x1)
    class UStaticMeshComponent* LeverHandleMesh;                                      // 0x0280 (size: 0x8)
    class UCurveFloat* LeverCurve;                                                    // 0x0288 (size: 0x8)
    class UCurveFloat* LeverCurveReverse;                                             // 0x0290 (size: 0x8)

    void ChangeLeverPosition();
}; // Size: 0x348

class ULightBulbComponent : public UGuidActorComponent
{
    bool bFlicker;                                                                    // 0x00C0 (size: 0x1)
    bool bAutoLightOnNight;                                                           // 0x00C1 (size: 0x1)

    void SetFlicker(const bool bInFlicker);
    void SetAutoLightOnNight(const bool bInAutoLightOnNight);
    bool IsFlicker();
    bool IsAutoLightOnNight();
}; // Size: 0xC8

class ULightningBallNavigationComponent : public UActorComponent
{
}; // Size: 0x128

class ULightsCache : public UBaseTickableManager
{
}; // Size: 0xC8

class ULoadButtonStateDefiner : public UMenuButtonStateDefiner
{
}; // Size: 0x30

class ULoadLastSaveAction : public UMenuButtonActionBase
{
}; // Size: 0x30

class ULoadSaveAction : public USaveLoadActionBase
{
}; // Size: 0xC0

class ULoadingScreenManager : public UGameInstanceSubsystem
{
}; // Size: 0x78

class ULoadingScreenSettings : public UDeveloperSettings
{
    TMap<class ELoadingDestination, class FLoadingScreenBehaviourSettings> LoadingScreenBehaviourSettings; // 0x0038 (size: 0x50)
    FSlateFontInfo DescriptionFont;                                                   // 0x0088 (size: 0x58)
    FSlateFontInfo TitleFont;                                                         // 0x00E0 (size: 0x58)
    FSlateFontInfo WaitForUserInputTextStyle;                                         // 0x0138 (size: 0x58)
    FLinearColor TextColor;                                                           // 0x0190 (size: 0x10)
    FMargin ContentPadding;                                                           // 0x01A0 (size: 0x10)
    FMargin TipsTitleTextPadding;                                                     // 0x01B0 (size: 0x10)
    FMargin TipsTextPadding;                                                          // 0x01C0 (size: 0x10)
    FMargin LoadArrowPadding;                                                         // 0x01D0 (size: 0x10)
    FVector2D LoadArrowRotation;                                                      // 0x01E0 (size: 0x10)
    float WaitForUserInputTextPos;                                                    // 0x01F0 (size: 0x4)
    int32 TipsRangeMax;                                                               // 0x01F4 (size: 0x4)
    FText WaitForUserInputText;                                                       // 0x01F8 (size: 0x18)
    FSoftObjectPath LoadingScreenIndicatorBackground;                                 // 0x0210 (size: 0x20)
    FVector2D LoadingScreenIndicatorBackgroundSize;                                   // 0x0230 (size: 0x10)
    FSoftObjectPath LoadingIndicatorArrow;                                            // 0x0240 (size: 0x20)
    FSoftObjectPath ForegroundImage;                                                  // 0x0260 (size: 0x20)
    FSoftObjectPath SlidingDirtMaterialPtrTopLeft;                                    // 0x0280 (size: 0x20)
    FSoftObjectPath SlidingDirtMaterialPtrTopRight;                                   // 0x02A0 (size: 0x20)
    FSoftObjectPath SlidingDirtMaterialPtrBottomLeft;                                 // 0x02C0 (size: 0x20)
    FSoftObjectPath SlidingDirtMaterialPtrBottomRight;                                // 0x02E0 (size: 0x20)
    TArray<FInfoScreenSettings> InfoScreenSettingsData;                               // 0x0300 (size: 0x10)
    FVector2D SlidingDirtMaterialSize;                                                // 0x0310 (size: 0x10)
    float TimeTillShowingLoadingIndicator;                                            // 0x0320 (size: 0x4)
    float TimeTillHidingLoadingScreen;                                                // 0x0324 (size: 0x4)
    FSoftObjectPath CustomTeleportMediaSource;                                        // 0x0328 (size: 0x20)
    FSoftObjectPath IntroductionLogoMediaSource;                                      // 0x0348 (size: 0x20)

}; // Size: 0x368

class ULoadingScreenWidget : public UBaseLoadingScreenWidget
{
    class UTextBlock* PressAnyButtonText;                                             // 0x02A8 (size: 0x8)
    class UImage* LoadingScreenImage;                                                 // 0x02B0 (size: 0x8)
    class UImage* LoadingProgressBar;                                                 // 0x02B8 (size: 0x8)
    class UImage* LoadingProgressArrow;                                               // 0x02C0 (size: 0x8)
    class UTextBlock* Title;                                                          // 0x02C8 (size: 0x8)
    class UTextBlock* Hint;                                                           // 0x02D0 (size: 0x8)
    TArray<TSoftObjectPtr<UTexture2D>> LoadingScreensSet;                             // 0x02D8 (size: 0x10)
    float FadeTime;                                                                   // 0x02E8 (size: 0x4)
    FVector2D ArrowMinMaxAngles;                                                      // 0x02F0 (size: 0x10)
    float ArrowInterpSpeed;                                                           // 0x0300 (size: 0x4)
    FString PressAnyButtonL10n;                                                       // 0x0308 (size: 0x10)

}; // Size: 0x350

class ULocalizationDatabase : public UObject
{
}; // Size: 0x28

class ULocalizationWidget : public UWidgetBase
{
    bool bEnableLocalization;                                                         // 0x0278 (size: 0x1)
    FString LocalizationSID;                                                          // 0x0280 (size: 0x10)
    class URichTextBlock* RichTextBlockObj;                                           // 0x0290 (size: 0x8)
    class UTextBlock* TextBlockObj;                                                   // 0x0298 (size: 0x8)
    class UCommonTextBlock* CommonTextBlockObj;                                       // 0x02A0 (size: 0x8)

}; // Size: 0x2B8

class ULocalizedImage : public UWidgetBase
{
    class UImage* Image;                                                              // 0x0278 (size: 0x8)
    TMap<class ELocalizationLanguage, class TSoftObjectPtr<UTexture2D>> LocalizedImages; // 0x0280 (size: 0x50)
    TSoftObjectPtr<UTexture2D> FallbackImage;                                         // 0x02D0 (size: 0x30)

    void ForceLoadImage(const TSoftObjectPtr<UTexture2D>& SoftImage);
}; // Size: 0x310

class ULockableComponent : public USingleClickComponent
{
    FString DisplayAlternativeText;                                                   // 0x0200 (size: 0x10)
    FLockStruct LockStruct;                                                           // 0x0210 (size: 0x60)
    bool bLocked;                                                                     // 0x0270 (size: 0x1)

}; // Size: 0x278

class ULookAtRestrictionsDataAsset : public UDataAsset
{
    FRestrictionsMap DefaultRestrictions;                                             // 0x0030 (size: 0x38)
    TMap<class ELookAtOwnerState, class FRestrictionsMap> Restrictions;               // 0x0068 (size: 0x50)

}; // Size: 0xB8

class ULookAtSourceComponent : public UActorComponent
{
    class AActor* Target;                                                             // 0x00A0 (size: 0x8)
    bool bIsEnabled;                                                                  // 0x00A8 (size: 0x1)
    bool bUseDefaultSetting;                                                          // 0x00A9 (size: 0x1)
    FLookAtAngleParams LookAtAngleParams;                                             // 0x00B0 (size: 0x60)

}; // Size: 0x110

class ULookAtTargetComponent : public USceneComponent
{
}; // Size: 0x2A0

class ULookUpIPU : public UInertionIPU
{
}; // Size: 0x60

class UMainHandEquipBoltIPU : public UMainHandEquipItemIPU
{
}; // Size: 0x48

class UMainHandEquipDetectorIPU : public UInputProcessingUnit
{
}; // Size: 0x48

class UMainHandEquipGrenadeIPU : public UMainHandEquipItemIPU
{
}; // Size: 0x48

class UMainHandEquipItemIPU : public UInputProcessingUnit
{
}; // Size: 0x48

class UMainHandEquipKnifeIPU : public UMainHandEquipItemIPU
{
}; // Size: 0x48

class UMainHandEquipPistolIPU : public UMainHandEquipItemIPU
{
}; // Size: 0x48

class UMainHandEquipPrimaryWeaponIPU : public UMainHandEquipItemIPU
{
}; // Size: 0x48

class UMainHandEquipSecondaryWeaponIPU : public UMainHandEquipItemIPU
{
}; // Size: 0x48

class UMainMenuSubView : public UMenuSubViewBase
{
}; // Size: 0x2D0

class UMainMenuView : public UMenuMainViewBase
{
    TSubclassOf<class UMenuSubViewBase> FirstTimeSettingsViewClass;                   // 0x0338 (size: 0x8)

}; // Size: 0x340

class UMapBorderIndicator : public UWidgetBase
{
    class UImage* BorderLeft;                                                         // 0x0278 (size: 0x8)
    class UImage* BorderRight;                                                        // 0x0280 (size: 0x8)
    class UImage* BorderBottom;                                                       // 0x0288 (size: 0x8)
    class UImage* BorderTop;                                                          // 0x0290 (size: 0x8)

}; // Size: 0x298

class UMapLegend : public UWidgetBase
{
    class UWidgetAnimation* FadeInAnimation;                                          // 0x0298 (size: 0x8)
    class UVerticalBox* NoteList;                                                     // 0x02A0 (size: 0x8)
    class UScrollBox* LegendScroll;                                                   // 0x02A8 (size: 0x8)
    float GamepadScrollSpeed;                                                         // 0x02B0 (size: 0x4)
    float FadeInAnimationSpeed;                                                       // 0x02B4 (size: 0x4)
    float FadeOutAnimationSpeed;                                                      // 0x02B8 (size: 0x4)

}; // Size: 0x2C0

class UMapLegendNote : public UWidgetBase
{
    class UImage* MarkerIcon;                                                         // 0x0278 (size: 0x8)
    class UTextWidget* MarkerName;                                                    // 0x0280 (size: 0x8)
    class USizeBox* SizeBox;                                                          // 0x0288 (size: 0x8)
    EMarkerType MarkerType;                                                           // 0x0290 (size: 0x1)
    FString MarkerNameSID;                                                            // 0x0298 (size: 0x10)
    float Height;                                                                     // 0x02A8 (size: 0x4)

}; // Size: 0x2B0

class UMapMouseIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UMapSettingsAsset : public UDataAsset
{
    float HubFoldingRadius;                                                           // 0x0030 (size: 0x4)
    int32 HubFoldingZoomLevel;                                                        // 0x0034 (size: 0x4)
    bool bEnableReverseHoldMoveAxis;                                                  // 0x0038 (size: 0x1)
    bool bEnableMouseMovement;                                                        // 0x0039 (size: 0x1)
    bool bEnableHoldBorderMoving;                                                     // 0x003A (size: 0x1)
    float GamepadCursorMovementSpeedMultiplier;                                       // 0x003C (size: 0x4)
    float GamepadMapMovementSpeedMultiplier;                                          // 0x0040 (size: 0x4)
    float AttractionRadius;                                                           // 0x0044 (size: 0x4)
    float AttractionSpeed;                                                            // 0x0048 (size: 0x4)
    float UnselectedAreaBrightness;                                                   // 0x004C (size: 0x4)
    float TooltipPadding;                                                             // 0x0050 (size: 0x4)
    TArray<FZoomLevelSettings> ZoomLevelSettings;                                     // 0x0058 (size: 0x10)
    int32 PlayerLandmarksLimitTotal;                                                  // 0x0068 (size: 0x4)
    float CreateRadius;                                                               // 0x006C (size: 0x4)
    TMap<class EMarkerType, class FZoomMarkerSettings> ZoomMarkerSettings;            // 0x0070 (size: 0x50)
    TMap<EMarkerType, int32> ZOrderMarkerSettings;                                    // 0x00C0 (size: 0x50)
    int32 ZOrderForHoverMarker;                                                       // 0x0110 (size: 0x4)
    FZoomMarkerSettings DefaultMarkerZoomSettings;                                    // 0x0114 (size: 0x10)
    float MapMarkerLocationUpdateTime;                                                // 0x0124 (size: 0x4)
    float MapMarkerLocationUpdateRadius;                                              // 0x0128 (size: 0x4)

}; // Size: 0x130

class UMapTransitionActionBlockerCondition : public UActionBlockerConditionBase
{
    bool bBlockMapTransition;                                                         // 0x0028 (size: 0x1)

}; // Size: 0x30

class UMarkerCompassWidget : public UWidgetBase
{
    class UTextBlock* DistanceText;                                                   // 0x0278 (size: 0x8)
    class UImage* IconImage;                                                          // 0x0280 (size: 0x8)
    class UImage* HeightArrow;                                                        // 0x0288 (size: 0x8)
    class UWidget* DistanceContainer;                                                 // 0x0290 (size: 0x8)
    class USizeBox* IconSizeBox;                                                      // 0x0298 (size: 0x8)
    float HideDelayForEnemyMarkers;                                                   // 0x02A0 (size: 0x4)
    float HideEnemyTime;                                                              // 0x02A4 (size: 0x4)
    float UpdateRate;                                                                 // 0x02A8 (size: 0x4)

}; // Size: 0x2C8

class UMarkerSettings : public UDataAsset
{
    TMap<class EMarkerType, class FMarkerTypeSettings> MarkerTypeSettings;            // 0x0030 (size: 0x50)
    class UCurveFloat* CompassMarkerVisibilityCurve;                                  // 0x0080 (size: 0x8)
    FMarkerTypeSettings MarkerSettingsDefaultObject;                                  // 0x0088 (size: 0x48)

}; // Size: 0xD0

class UMaterialGroupEditor : public UObject
{
    FSoftObjectPath MaterialPath;                                                     // 0x0028 (size: 0x20)
    int32 VariationIndex;                                                             // 0x0048 (size: 0x4)
    bool bBlockedInVisualizer;                                                        // 0x004C (size: 0x1)
    float Weight;                                                                     // 0x0050 (size: 0x4)

}; // Size: 0x58

class UMenuButtonActionBase : public UObject
{
    bool bShouldPlaySound;                                                            // 0x0028 (size: 0x1)
    EUISound OnExecuteSound;                                                          // 0x002C (size: 0x4)

    void ExecuteButtonAction();
}; // Size: 0x30

class UMenuButtonBase : public UWidgetBase
{
    class UTextWidget* ActionName;                                                    // 0x0290 (size: 0x8)
    class UButton* Button;                                                            // 0x0298 (size: 0x8)
    class UWidgetAnimation* HoverAnimation;                                           // 0x02A0 (size: 0x8)
    class UWidgetAnimation* PressAnimation;                                           // 0x02A8 (size: 0x8)
    float HoverAnimationSpeedMultiplier;                                              // 0x02B0 (size: 0x4)
    float HideHoverAnimationSpeedMultiplier;                                          // 0x02B4 (size: 0x4)
    float PressButtonAnimationSpeed;                                                  // 0x02B8 (size: 0x4)
    float IsNotActiveOpacity;                                                         // 0x02BC (size: 0x4)
    class UMenuButtonActionBase* ButtonAction;                                        // 0x02C0 (size: 0x8)
    TArray<FShortcutData> ButtonShortcuts;                                            // 0x02E0 (size: 0x10)
    TArray<class UMenuButtonStateDefiner*> ButtonStateDefiners;                       // 0x02F0 (size: 0x10)

    void OnPressed();
    void OnMousePressed();
    void OnButtonHovered();
    void ExecuteAction();
}; // Size: 0x300

class UMenuButtonModel : public UDataAsset
{
    TArray<FMenuButtonData> ButtonDataList;                                           // 0x0030 (size: 0x10)
    TSubclassOf<class UHintControllerBase> LegendButtonWidgetClass;                   // 0x0040 (size: 0x8)
    TArray<FShortcutData> SubViewShortcuts;                                           // 0x0048 (size: 0x10)

}; // Size: 0x58

class UMenuButtonStateDefiner : public UObject
{
    class UMenuButtonActionBase* OverrideBlockedAction;                               // 0x0028 (size: 0x8)

}; // Size: 0x30

class UMenuLegendSubView : public UChildViewBase
{
    class UHorizontalBox* LegendSubViewPanel;                                         // 0x0278 (size: 0x8)
    class UHorizontalBox* LegendButtonPanelOne;                                       // 0x0280 (size: 0x8)
    class UHorizontalBox* LegendButtonPanelTwo;                                       // 0x0288 (size: 0x8)
    float SpaceBetweenHints;                                                          // 0x0290 (size: 0x4)
    TArray<class UHintControllerBase*> LegendSubViewWidgets;                          // 0x0298 (size: 0x10)
    TArray<class UHintControllerBase*> LegendButtonWidgets;                           // 0x02A8 (size: 0x10)

}; // Size: 0x360

class UMenuMainBackgroundVideo : public UUserWidget
{
    TSoftObjectPtr<UMediaSource> BackgroundVideo;                                     // 0x0278 (size: 0x30)
    TSoftObjectPtr<UMediaSource> BackgroundVideoSecond;                               // 0x02A8 (size: 0x30)
    class UBinkMediaPlayer* BinkMediaPlayer;                                          // 0x02D8 (size: 0x8)
    class UImage* BlackoutImage;                                                      // 0x02F0 (size: 0x8)
    class UImage* Border;                                                             // 0x02F8 (size: 0x8)
    TMap<class EBorderType, class TSoftObjectPtr<UTexture2D>> BorderImages;           // 0x0300 (size: 0x50)

    void PlayVideo(class UMediaSource* VideoToPlay);
}; // Size: 0x350

class UMenuMainViewBase : public UViewBaseExtended
{
    class UOverlay* SubMenuViewOverlay;                                               // 0x02C8 (size: 0x8)
    class UMenuLegendSubView* LegendSubView;                                          // 0x02D0 (size: 0x8)
    class UMenuMainBackgroundVideo* MainMenuBackgroundVideo;                          // 0x02D8 (size: 0x8)
    TSubclassOf<class UMenuSubViewBase> RootSubViewClass;                             // 0x02E0 (size: 0x8)
    class UWidgetAnimation* FadeOutAnimation;                                         // 0x02E8 (size: 0x8)
    class UWidgetAnimation* FadeInAnimation;                                          // 0x02F0 (size: 0x8)
    float FadeInSpeedMultiplier;                                                      // 0x02F8 (size: 0x4)
    float FadeOutSpeedMultiplier;                                                     // 0x02FC (size: 0x4)
    class UEnhancedInputComponent* EnhancedInputComponent;                            // 0x0300 (size: 0x8)

    void FadeOutStartedFunction();
    void FadeOutFinishedFunction();
    void FadeInStartedFunction();
    void FadeInFinishedFunction();
}; // Size: 0x338

class UMenuNavigationPanelBase : public UWidgetBase
{
    class UPanelWidget* SlotContainer;                                                // 0x0290 (size: 0x8)
    class USettingsNavigationButton* HoveredButton;                                   // 0x0298 (size: 0x8)
    TArray<class USettingsNavigationButton*> Buttons;                                 // 0x02A0 (size: 0x10)

    void OnButtonPressed(class USettingsNavigationButton* PressedButton);
}; // Size: 0x2B0

class UMenuSubViewBase : public UChildViewBase
{
    class UTextWidget* PauseText;                                                     // 0x0278 (size: 0x8)
    class UPanelWidget* ButtonPanel;                                                  // 0x0280 (size: 0x8)
    class UMenuButtonModel* MenuButtonModel;                                          // 0x0288 (size: 0x8)
    int32 DefaultSelectedIndex;                                                       // 0x0290 (size: 0x4)
    FTextProperties TextProperties;                                                   // 0x0294 (size: 0x14)
    float SpaceBetweenOptions;                                                        // 0x02A8 (size: 0x4)
    class UScrollBox* ScrollBox;                                                      // 0x02B0 (size: 0x8)
    TArray<class UMenuButtonBase*> MenuOptionsHolder;                                 // 0x02B8 (size: 0x10)
    class UMenuButtonBase* SelectedButton;                                            // 0x02C8 (size: 0x8)

    void SelectOptionWidget(class UMenuButtonBase* ButtonWidget);
}; // Size: 0x2D0

class UMeshGeneratorBodyMeshEditor : public UObject
{
    TSet<FName> BlockingGroomSIDs;                                                    // 0x0028 (size: 0x50)
    FString BodyMeshSID;                                                              // 0x0078 (size: 0x10)
    FSoftObjectPath MeshPath;                                                         // 0x0088 (size: 0x20)
    FSoftObjectPath AnimPath;                                                         // 0x00A8 (size: 0x20)
    float Weight;                                                                     // 0x00C8 (size: 0x4)
    bool bIsSkeletal;                                                                 // 0x00CC (size: 0x1)
    TArray<FName> BlockingSlots;                                                      // 0x00D0 (size: 0x10)
    TArray<FName> BlockingAttaches;                                                   // 0x00E0 (size: 0x10)
    TSet<FName> BlockingGroom;                                                        // 0x00F0 (size: 0x50)
    FString ItemPrototypeSID;                                                         // 0x0140 (size: 0x10)
    EBodyMeshType Type;                                                               // 0x0150 (size: 0x1)
    TArray<class UMeshGeneratorBodyMeshEditor*> AdditionalMeshes;                     // 0x0158 (size: 0x10)
    FString MeshGeneratorSID;                                                         // 0x0168 (size: 0x10)
    bool bUseCustomLODSync;                                                           // 0x0178 (size: 0x1)
    ESyncOption LODSyncOption;                                                        // 0x0179 (size: 0x1)
    TArray<int32> LODSyncMapping;                                                     // 0x0180 (size: 0x10)
    FName HumanReadableName;                                                          // 0x0190 (size: 0x8)
    TArray<class UMeshGeneratorMaterialSlotEditor*> Materials;                        // 0x0198 (size: 0x10)
    TArray<class UGroomCategoryEditor*> Grooms;                                       // 0x01A8 (size: 0x10)

}; // Size: 0x1B8

class UMeshGeneratorBodySlotEditor : public UObject
{
    int32 SelectedIndex;                                                              // 0x0028 (size: 0x4)
    FName SlotName;                                                                   // 0x002C (size: 0x8)
    TArray<class UMeshGeneratorBodyMeshEditor*> MeshArray;                            // 0x0038 (size: 0x10)

}; // Size: 0x48

class UMeshGeneratorEditor : public UObject
{
    FName SID;                                                                        // 0x0028 (size: 0x8)
    FName ParentMeshGeneratorSID;                                                     // 0x0030 (size: 0x8)
    FName ParentItemGeneratorSID;                                                     // 0x0038 (size: 0x8)
    TArray<class UMeshGeneratorBodySlotEditor*> GeneratorBodySlots;                   // 0x0040 (size: 0x10)
    TArray<class UMeshGeneratorMaterialSlotEditor*> Materials;                        // 0x0050 (size: 0x10)
    TArray<class UCustomDataVariationsEditor*> CustomData;                            // 0x0060 (size: 0x10)
    TArray<class UGroomCategoryEditor*> Grooms;                                       // 0x0070 (size: 0x10)

}; // Size: 0x80

class UMeshGeneratorMaterialSlotEditor : public UObject
{
    FName MaterialGroup;                                                              // 0x0028 (size: 0x8)
    TArray<class UMaterialGroupEditor*> MaterialGroupArray;                           // 0x0030 (size: 0x10)
    int32 MaterialSlot;                                                               // 0x0040 (size: 0x4)
    TArray<class UCustomDataVariationsEditor*> CustomData;                            // 0x0048 (size: 0x10)

}; // Size: 0x58

class UMeshSoundPlacerManager : public UBaseTickableManager
{
}; // Size: 0x170

class UModSubsystemBase : public UGameInstanceSubsystem
{
}; // Size: 0x30

class UModelCharacterMovementComponent : public UCharacterMovementComponent
{
}; // Size: 0xF00

class UModifiableRichText : public UWidgetBase
{
    float LineHeightPercentage;                                                       // 0x0278 (size: 0x4)
    class URichTextWidget* RichText;                                                  // 0x0280 (size: 0x8)
    bool bEnableList;                                                                 // 0x0288 (size: 0x1)
    FString ClosureTag;                                                               // 0x0290 (size: 0x10)
    FString ListPointTag;                                                             // 0x02A0 (size: 0x10)
    FString ListItemTag;                                                              // 0x02B0 (size: 0x10)
    FString ListItemClosureTag;                                                       // 0x02C0 (size: 0x10)
    FString ListNumericTag;                                                           // 0x02D0 (size: 0x10)
    TArray<FString> ClouseTags;                                                       // 0x02E0 (size: 0x10)
    TArray<FString> OpenTags;                                                         // 0x02F0 (size: 0x10)
    FString BodyTag;                                                                  // 0x0300 (size: 0x10)
    FString PointTag;                                                                 // 0x0310 (size: 0x10)
    TArray<FDoubleLineSettings> DoubleLineTags;                                       // 0x0320 (size: 0x10)
    bool bShoudUseDefaultStyle;                                                       // 0x0330 (size: 0x1)
    FText DefaultStyleId;                                                             // 0x0338 (size: 0x18)
    bool bEnableDefaultText;                                                          // 0x0350 (size: 0x1)
    FText DefaultText;                                                                // 0x0358 (size: 0x18)
    float WrappingTextAt;                                                             // 0x0370 (size: 0x4)
    int32 TagSize;                                                                    // 0x0374 (size: 0x4)
    float WrappingTextAtEULA;                                                         // 0x0378 (size: 0x4)
    bool bShoudLoadLocalization;                                                      // 0x037C (size: 0x1)

    FText GetNextLine();
}; // Size: 0x380

class UModioAuthView : public UModioCommonAuthView
{
}; // Size: 0x490

class UModioCategorySelectionBox : public UCommonUserWidget
{
    class UPanelWidget* CheckboxPanel;                                                // 0x02B8 (size: 0x8)
    TArray<class UModioCategorySelectionBoxEntry*> CheckboxList;                      // 0x02C0 (size: 0x10)
    class UModioCategorySelectionBoxEntry* SelectedCheckbox;                          // 0x02D0 (size: 0x8)

}; // Size: 0x2D8

class UModioCategorySelectionBoxEntry : public UModioCommonButtonBase
{
    class UCheckBoxWidget* DummyCheckbox;                                             // 0x17A0 (size: 0x8)
    class UTextWidget* CheckboxNameText;                                              // 0x17A8 (size: 0x8)
    class UWidgetAnimation* HoverAnimation;                                           // 0x17B0 (size: 0x8)
    class UWidgetAnimation* PressAnimation;                                           // 0x17B8 (size: 0x8)
    FString CategoryTag;                                                              // 0x17C0 (size: 0x10)
    float HoverAnimationSpeedMultiplier;                                              // 0x17D0 (size: 0x4)
    float HideHoverAnimationSpeedMultiplier;                                          // 0x17D4 (size: 0x4)
    float PressButtonAnimationSpeed;                                                  // 0x17D8 (size: 0x4)
    bool IsCheckedOnInit;                                                             // 0x17DC (size: 0x1)
    bool EnableLocalization;                                                          // 0x17DD (size: 0x1)
    FText CheckboxName;                                                               // 0x17E0 (size: 0x18)
    FString CheckboxNameLocalizationSID;                                              // 0x17F8 (size: 0x10)
    FName CheckedStyleIdActive;                                                       // 0x1808 (size: 0x8)
    FName CheckedStyleIdInactive;                                                     // 0x1810 (size: 0x8)
    FName UncheckedStyleIdActive;                                                     // 0x1818 (size: 0x8)
    FName UncheckedStyleIdInactive;                                                   // 0x1820 (size: 0x8)

}; // Size: 0x1830

class UModioEmailAuthCodePopup : public UModioCommonEmailAuthCodeViewBase
{
    class UTextWidget* ValidationText;                                                // 0x0458 (size: 0x8)
    class UModioCommonCodeInputTextBox* CodeInputTextBox;                             // 0x0460 (size: 0x8)

}; // Size: 0x470

class UModioEmailAuthLoadingPopup : public UModioCommonEmailAuthLoadingViewBase
{
}; // Size: 0x440

class UModioEmailAuthPopup : public UModioCommonEmailAuthViewBase
{
    class UTextWidget* ValidationText;                                                // 0x0458 (size: 0x8)
    class UModioCommonEditableTextBox* EmailTextBox;                                  // 0x0460 (size: 0x8)

    void OnEditableTextBoxTextChanged(const FText& Text);
    FString GetEmail();
}; // Size: 0x470

class UModioFeaturedView : public UModioCommonFeaturedView
{
}; // Size: 0x520

class UModioFilterNavigationButton : public UModioCommonButtonBase
{
    class UImage* SelectLine;                                                         // 0x1798 (size: 0x8)
    class UImage* IconImage;                                                          // 0x17A0 (size: 0x8)
    class UTextWidget* TextWidget;                                                    // 0x17A8 (size: 0x8)
    bool bEnableLocalisation;                                                         // 0x17B0 (size: 0x1)
    FString ButtonLocalizationSID;                                                    // 0x17B8 (size: 0x10)
    FText DisplayText;                                                                // 0x17C8 (size: 0x18)
    bool bEnableSelectAnimation;                                                      // 0x17E0 (size: 0x1)
    bool bEnableByDefault;                                                            // 0x17E1 (size: 0x1)
    int32 ButtonIndex;                                                                // 0x17E4 (size: 0x4)
    FName SetStyleIdHover;                                                            // 0x17E8 (size: 0x8)
    FName SetStyleIdUnHover;                                                          // 0x17F0 (size: 0x8)
    FSlateColor SetStyleIconTintHover;                                                // 0x17F8 (size: 0x14)
    FSlateColor SetStyleIconTintUnhover;                                              // 0x180C (size: 0x14)
    class UTexture2D* SetStyleIconImageTexture;                                       // 0x1820 (size: 0x8)

}; // Size: 0x1830

class UModioFilterNavigationPanel : public UCommonUserWidget
{
    class UPanelWidget* SlotContainer;                                                // 0x02B8 (size: 0x8)

    void OnButtonClicked(const int32 ButtonIndex);
}; // Size: 0x2C8

class UModioFilteredModListView : public UModioCommonFilteredModListView
{
    class UModioModListPageInfo* PageInfo;                                            // 0x05E8 (size: 0x8)

}; // Size: 0x5F0

class UModioFirstFilterNavigationPanel : public UModioFilterNavigationPanel
{
}; // Size: 0x2C8

class UModioGenericModEntry : public UModioCommonGenericModEntry
{
    class UModioGenericModEntryRating* Rating;                                        // 0x05A0 (size: 0x8)
    class UTextWidget* ModAuthorText;                                                 // 0x05A8 (size: 0x8)
    class UTextWidget* ByText;                                                        // 0x05B0 (size: 0x8)
    class UPanelWidget* ModIncompatiblePanel;                                         // 0x05B8 (size: 0x8)
    FLinearColor SelectedOperationTrackerImageColorTint;                              // 0x05C0 (size: 0x10)
    FLinearColor UnselectedOperationTrackerImageColorTint;                            // 0x05D0 (size: 0x10)
    FLinearColor UnselectedOperationTrackerImageColorTintError;                       // 0x05E0 (size: 0x10)
    FLinearColor SelectedByTextColor;                                                 // 0x05F0 (size: 0x10)
    FLinearColor UnselectedByTextColor;                                               // 0x0600 (size: 0x10)
    FLinearColor SelectedModAuthorTextColor;                                          // 0x0610 (size: 0x10)
    FLinearColor UnselectedModAuthorTextColor;                                        // 0x0620 (size: 0x10)

}; // Size: 0x630

class UModioGenericModEntryOperationTrackerUserWidget : public UModioCommonModOperationTrackerUserWidget
{
    FLinearColor DefaultImageColorTint;                                               // 0x04E8 (size: 0x10)

}; // Size: 0x500

class UModioGenericModEntryRating : public UCommonUserWidget
{
    class UPanelWidget* StarImagesPanel;                                              // 0x02A0 (size: 0x8)
    class UTexture2D* StarImageTexture;                                               // 0x02A8 (size: 0x8)
    FSlateColor StarActiveHoveredColor;                                               // 0x02B0 (size: 0x14)
    FSlateColor StarInactiveHoveredColor;                                             // 0x02C4 (size: 0x14)
    FSlateColor StarActiveUnhoveredColor;                                             // 0x02D8 (size: 0x14)
    FSlateColor StarInactiveUnhoveredColor;                                           // 0x02EC (size: 0x14)

}; // Size: 0x308

class UModioLegendModel : public UMenuButtonModel
{
    TArray<FShortcutData> SubViewShortcutsRightSide;                                  // 0x0058 (size: 0x10)

}; // Size: 0x68

class UModioLegendSubView : public UMenuLegendSubView
{
    class UModioSearchField* SearchField;                                             // 0x0370 (size: 0x8)
    FModioLegendData LegendData;                                                      // 0x0378 (size: 0x10)

}; // Size: 0x580

class UModioModBrowser : public UModioCommonModBrowser
{
    class UModioLegendSubView* LegendSubView;                                         // 0x0510 (size: 0x8)
    class UModioCategorySelectionBox* CategorySelectionBox;                           // 0x0518 (size: 0x8)
    class UModioFirstFilterNavigationPanel* FirstFilterNavigationPanel;               // 0x0520 (size: 0x8)
    class UModioSecondFilterNavigationPanel* SecondFilterNavigationPanel;             // 0x0528 (size: 0x8)
    class UWidgetAnimation* FadeInBlurAnim;                                           // 0x0530 (size: 0x8)

}; // Size: 0x5E8

class UModioModBrowserDummySubView : public UMenuSubViewBase
{
}; // Size: 0x2D8

class UModioModBrowserLoadingIndicator : public UUserWidget
{
    class USizeBox* SpinnerImageSizeBox;                                              // 0x0278 (size: 0x8)
    class UImage* SpinnerImage;                                                       // 0x0280 (size: 0x8)
    class UWidgetAnimation* SpinnerAnim;                                              // 0x0288 (size: 0x8)
    float SpinnerAnimSpeed;                                                           // 0x0290 (size: 0x4)
    FVector2D size;                                                                   // 0x0298 (size: 0x10)

}; // Size: 0x2A8

class UModioModDetailsView : public UModioCommonModDetailsView
{
    class UTextWidget* AuthorTextLabel;                                               // 0x05E0 (size: 0x8)
    class UTextWidget* AuthorText;                                                    // 0x05E8 (size: 0x8)
    class UTextWidget* TagsTextLabel;                                                 // 0x05F0 (size: 0x8)
    class UTextWidget* TagsText;                                                      // 0x05F8 (size: 0x8)
    class UTextWidget* RatedTextLabel;                                                // 0x0600 (size: 0x8)
    class UTextWidget* RatedText;                                                     // 0x0608 (size: 0x8)
    class UTextWidget* FileSizeTextLabel;                                             // 0x0610 (size: 0x8)
    class UTextWidget* ReleaseDateTextLabel;                                          // 0x0618 (size: 0x8)
    class UTextWidget* LastUpdatedTextLabel;                                          // 0x0620 (size: 0x8)
    class UTextWidget* ErrorMessageText;                                              // 0x0628 (size: 0x8)
    class UHorizontalBox* ErrorMessageHorizontalBox;                                  // 0x0630 (size: 0x8)
    class UModioGenericModEntryRating* Rating;                                        // 0x0638 (size: 0x8)
    class UImage* LikeImage;                                                          // 0x0640 (size: 0x8)
    class UImage* DislikeImage;                                                       // 0x0648 (size: 0x8)
    class UPanelWidget* ModIncompatibleInfoPanel;                                     // 0x0650 (size: 0x8)
    FSlateColor ActiveRatingImageTint;                                                // 0x0658 (size: 0x14)
    FSlateColor InactiveRatingImageTint;                                              // 0x066C (size: 0x14)
    FLinearColor OperationTrackerImageColorTintError;                                 // 0x0680 (size: 0x10)

}; // Size: 0x698

class UModioModListPageInfo : public UCommonUserWidget
{
    class UTextWidget* PageInfoText;                                                  // 0x02A0 (size: 0x8)
    class UHintInputController* HintNavigationLeft;                                   // 0x02A8 (size: 0x8)
    class UHintInputController* HintNavigationRight;                                  // 0x02B0 (size: 0x8)

}; // Size: 0x2B8

class UModioModOperationTrackerUserWidget : public UModioCommonModOperationTrackerUserWidget
{
}; // Size: 0x4E8

class UModioModTileView : public UModioCommonModTileView
{
}; // Size: 0xE60

class UModioSearchField : public UCommonUserWidget
{
    class UHintInputController* SearchHint;                                           // 0x02B0 (size: 0x8)
    class UModioCommonEditableTextBox* SearchTextBox;                                 // 0x02B8 (size: 0x8)

    void HandleOnTextCommitted(const FText& Text, const TEnumAsByte<ETextCommit::Type> CommitMethod);
    FString GetSearchKeywords();
}; // Size: 0x2C0

class UModioSearchResultsView : public UModioCommonSearchResultsView
{
}; // Size: 0x578

class UModioSecondFilterNavigationPanel : public UModioFilterNavigationPanel
{
}; // Size: 0x2C8

class UModioTermsOfUsePopup : public UModioCommonTermsOfUseViewBase
{
    class UHyperlinkButton* PrivacyPolicyButton;                                      // 0x0528 (size: 0x8)
    class UHyperlinkButton* TermsOfUseButton;                                         // 0x0530 (size: 0x8)

}; // Size: 0x540

class UModioUserProfileWidget : public UModioCommonUserProfileWidget
{
    class UTextWidget* NickNameText;                                                  // 0x0440 (size: 0x8)

}; // Size: 0x448

class UMouthComponent : public UActorComponent
{
    TSoftObjectPtr<UCurveFloat> StaminaCurve;                                         // 0x00A0 (size: 0x30)
    TSoftObjectPtr<UCurveFloat> HealthCurve;                                          // 0x00D0 (size: 0x30)
    TSoftObjectPtr<UCurveFloat> StaminaIntensityCurve;                                // 0x0100 (size: 0x30)
    TSoftObjectPtr<UCurveFloat> HealthIntensityCurve;                                 // 0x0130 (size: 0x30)
    TSoftObjectPtr<UAkRtpc> StaminaIntensityRTPC;                                     // 0x0160 (size: 0x30)
    TSoftObjectPtr<UAkRtpc> HealthIntensityRTPC;                                      // 0x0190 (size: 0x30)
    TSoftObjectPtr<UAkAudioEvent> BreathInhale;                                       // 0x01C0 (size: 0x30)
    TSoftObjectPtr<UAkAudioEvent> BreathExhale;                                       // 0x01F0 (size: 0x30)
    TSoftObjectPtr<UAkSwitchValue> DefaultBreathType;                                 // 0x0220 (size: 0x30)
    TSoftObjectPtr<UAkSwitchValue> HoldBreathBreathType;                              // 0x0250 (size: 0x30)
    class APC* OwnerObj;                                                              // 0x0280 (size: 0x8)
    class UAkRtpc* StaminaRTPC;                                                       // 0x0288 (size: 0x8)
    class UAkRtpc* HealthRTPC;                                                        // 0x0290 (size: 0x8)
    class UCurveFloat* HealthBreathCurve;                                             // 0x0298 (size: 0x8)
    class UCurveFloat* StaminaBreathCurve;                                            // 0x02A0 (size: 0x8)
    class UCurveFloat* HealthBreathIntensityCurve;                                    // 0x02A8 (size: 0x8)
    class UCurveFloat* StaminaBreathIntensityCurve;                                   // 0x02B0 (size: 0x8)
    class UAkSwitchValue* DefaultBreathTypeSwitch;                                    // 0x02B8 (size: 0x8)
    class UAkSwitchValue* HoldBreathBreathTypeSwitch;                                 // 0x02C0 (size: 0x8)

}; // Size: 0x338

class UMoveIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UMovementComponentExt : public UActorComponent
{
    FPrototypeSID CameraShakeEffectPrototype;                                         // 0x0138 (size: 0x40)
    float MaxCameraShakeDistance;                                                     // 0x0178 (size: 0x4)
    class UCurveFloat* CameraShakeEffectCurve;                                        // 0x0180 (size: 0x8)
    class UAkRtpc* WaterDepthRtpc;                                                    // 0x0210 (size: 0x8)
    class UAkAudioEvent* AkSoundEvent;                                                // 0x0238 (size: 0x8)
    class UAkSwitchValue* AkSurfaceSwitch;                                            // 0x0260 (size: 0x8)
    class UAkSwitchValue* AkMovementBehaviourSwitch;                                  // 0x0288 (size: 0x8)

}; // Size: 0x290

class UMovementModeChangedEventData : public UGameplayEventData
{
    EMovementBehaviour NewMovementBehavior;                                           // 0x0028 (size: 0x1)
    EMovementBehaviour OldMovementBehavior;                                           // 0x0029 (size: 0x1)

}; // Size: 0x30

class UMultiClickComponent : public UInteractionComponent
{
    FMultiClickInteractionData InteractionData;                                       // 0x01C8 (size: 0x28)

}; // Size: 0x1F8

class UMultiClickIPU : public UInputProcessingUnit
{
}; // Size: 0x48

class UMusicManager : public UBaseManager
{
    class UAkAudioEvent* GameMusicEvent;                                              // 0x0078 (size: 0x8)
    class UAkRtpc* MusicVolumeSlider;                                                 // 0x0080 (size: 0x8)

}; // Size: 0x130

class UMutantAnimCollection : public UObject
{
    TArray<class UAnimMontage*> ClawAttacks;                                          // 0x0028 (size: 0x10)
    TArray<class UAnimMontage*> JumpAttacks;                                          // 0x0038 (size: 0x10)
    TMap<class EAttackDirection, class UAnimMontage*> RunAttacks;                     // 0x0048 (size: 0x50)
    class UAnimMontage* Sleep;                                                        // 0x0098 (size: 0x8)
    class UAnimSequenceBase* ReactionOnEmission;                                      // 0x00A0 (size: 0x8)
    class UAnimSequenceBase* Idle;                                                    // 0x00A8 (size: 0x8)
    TMap<class EAnomalyAnimInteraction, class UAnimMontage*> AnomalyInteractions;     // 0x00B0 (size: 0x50)
    FPoseSearchLocomotionAnimCollectionData PoseSearchLocomotionAnimCollectionData;   // 0x0100 (size: 0x30)

}; // Size: 0x130

class UNPCComponent : public USingleClickComponent
{
}; // Size: 0x200

class UNPCScheduleManager : public UBaseTickableManager
{
}; // Size: 0x108

class UNPCWetnessComponent : public UWetnessComponent
{
    class UNiagaraComponent* Niagara;                                                 // 0x00E0 (size: 0x8)
    FName SplashSpawnRateParamName;                                                   // 0x00E8 (size: 0x8)
    FName DropSpawnRateParamName;                                                     // 0x00F0 (size: 0x8)

}; // Size: 0xF8

class UNameDistributor : public UBaseManager
{
}; // Size: 0xC8

class UNavArea_Anomaly : public UNavArea
{
}; // Size: 0x48

class UNavArea_Dialog : public UNavArea
{
}; // Size: 0x48

class UNavArea_Door : public UNavArea
{
}; // Size: 0x48

class UNavArea_Interactive : public UNavArea
{
}; // Size: 0x48

class UNavArea_Lair : public UNavArea
{
}; // Size: 0x48

class UNavArea_RadiationFields : public UNavArea
{
}; // Size: 0x48

class UNavArea_SafeZone : public UNavArea
{
}; // Size: 0x48

class UNavArea_Scripted : public UNavArea
{
}; // Size: 0x48

class UNavArea_Shelter : public UNavArea
{
}; // Size: 0x48

class UNavModifiersManagementSubsystem : public UWorldSubsystem
{
    TMap<class FGuid, class AGSCNavModifierVolume*> VolumesMap;                       // 0x0080 (size: 0x50)
    class ARecastNavMesh* CachedDefaultRecast;                                        // 0x3070 (size: 0x8)

}; // Size: 0x30A0

class UNavigationPanel : public UWidgetBase
{
    class UPanelWidget* SlotContainer;                                                // 0x0278 (size: 0x8)
    bool bShouldEnableClick;                                                          // 0x0280 (size: 0x1)
    bool bShouldSelectDefaultSlot;                                                    // 0x0281 (size: 0x1)
    int32 DefaultSlotIndex;                                                           // 0x0284 (size: 0x4)
    bool bShouldStopOthersInputs;                                                     // 0x0288 (size: 0x1)
    bool bShouldBindClick;                                                            // 0x0289 (size: 0x1)
    FName MoveToNextSlotAction;                                                       // 0x028C (size: 0x8)
    FName MoveToPreviousSlotAction;                                                   // 0x0294 (size: 0x8)
    bool bIgnoreInputOnPause;                                                         // 0x029C (size: 0x1)
    bool bShouldLoopMove;                                                             // 0x029D (size: 0x1)
    float PDASectionSwitch;                                                           // 0x02A0 (size: 0x4)
    FNavigationPanelOnChangeSelectSlot OnChangeSelectSlot;                            // 0x02A8 (size: 0x10)
    void OnChangeSelectSlot();
    FNavigationPanelOnSlotClicked OnSlotClicked;                                      // 0x02B8 (size: 0x10)
    void OnSlotClicked(int32 InIndexButton);
    class UHintInputController* PrevPageHint;                                         // 0x02C8 (size: 0x8)
    class UHintInputController* NextPageHint;                                         // 0x02D0 (size: 0x8)

    void TransitToNextSlot();
    void TransitSelectSlotRelease();
    void TransitSelectSlotForward();
    void TransitSelectSlotBack();
    void MoveSelectSlotToPreviousSlot();
    void MoveSelectSlotToNextSlot();
    void InitClickTransition(FName ButtonId);
    void ClickMenuButton(const FName InButtonId);
}; // Size: 0x350

class UNiagaraDataInterfaceAkEvent : public UNiagaraDataInterface
{
    class UAkAudioEvent* Event;                                                       // 0x0038 (size: 0x8)
    class UAkAudioEvent* StopEvent;                                                   // 0x0040 (size: 0x8)

}; // Size: 0x48

class UNiagaraEyeAdaptationProvider : public UNiagaraParameterProvider
{
}; // Size: 0x108

class UNiagaraParameterProvider : public UActorComponent
{
    TSet<UNiagaraComponent*> ValueReceivers;                                          // 0x00A0 (size: 0x50)

}; // Size: 0x100

class UNiagaraPlayerLocationProvider : public UNiagaraParameterProvider
{
}; // Size: 0x100

class UNiagaraTerrainOffsetProvider : public UNiagaraParameterProvider
{
}; // Size: 0x108

class UNiagaraTimeOfDayNormalizedProvider : public UNiagaraParameterProvider
{
}; // Size: 0x100

class UNiagaraWindIntensityDirectionProvider : public UNiagaraParameterProvider
{
}; // Size: 0x100

class UNicknameWidget : public UWidgetBase
{
    class UTextWidget* Greeting;                                                      // 0x0278 (size: 0x8)
    class UTextWidget* Nickname;                                                      // 0x0280 (size: 0x8)

}; // Size: 0x290

class UNoteMouseIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UNotesIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UNotesPage : public UPDAPage
{
    class UPDANotesDetails* NoteDetails;                                              // 0x0298 (size: 0x8)
    class UPDANotesButton* ButtonAll;                                                 // 0x02A0 (size: 0x8)
    class UPDANotesButton* ButtonFlash;                                               // 0x02A8 (size: 0x8)
    class UPDANotesButton* ButtonNotes;                                               // 0x02B0 (size: 0x8)
    class UPDANotesButton* ButtonAudio;                                               // 0x02B8 (size: 0x8)
    class UPDANotePanel* NotePanel;                                                   // 0x02C0 (size: 0x8)
    class UWidget* PlayAudioHint;                                                     // 0x02C8 (size: 0x8)
    int32 DefaultOpenFilter;                                                          // 0x02D0 (size: 0x4)
    float NotesSlotListScrollTime;                                                    // 0x02D4 (size: 0x4)
    TMap<class ENoteType, class FBackgroundSettings> BackgroundSettings;              // 0x02D8 (size: 0x50)
    FName ButtonActionLeft;                                                           // 0x032C (size: 0x8)
    FName ButtonActionRight;                                                          // 0x0334 (size: 0x8)
    EMappingContext MappingContext;                                                   // 0x033C (size: 0x4)

    void UIPDANavigationUp();
    void UIPDANavigationRight();
    void UIPDANavigationPlayAudio();
    void UIPDANavigatioNoteUp();
    void UIPDANavigatioNoteDown();
    void UIPDANavigationLeft();
    void UIPDANavigationDown();
    void UIPDANavigationButtonRelease();
    void SlotTransitionUp();
    void ShowDetails(const bool bEmpty);
    void ClickButtonMenu(const FName ButtonId);
}; // Size: 0x378

class UNotificationWidget : public UWidgetBase
{
    class UQuestNotification* MainQuest;                                              // 0x02E8 (size: 0x8)
    class UQuestNotification* SecondaryQuest;                                         // 0x02F0 (size: 0x8)
    class UVerticalBox* QuestVerticalBox;                                             // 0x02F8 (size: 0x8)
    class UQuestNotificationDataAsset* Settings;                                      // 0x0300 (size: 0x8)
    class UQuestNotification* NotificationWithActiveHint;                             // 0x0338 (size: 0x8)

    void TryShowNextNotify();
    void HideNotificationSecondary();
    void HideNotificationMain();
}; // Size: 0x370

class UObjPrototypeEditor : public UObject
{
    FString SID;                                                                      // 0x0028 (size: 0x10)
    FString ItemGeneratorSID;                                                         // 0x0038 (size: 0x10)

}; // Size: 0x48

class UObjWaterContactController : public UWaterContactController
{
}; // Size: 0x138

class UOnAKEventFinished_Proxy : public UObject
{

    void OnSoundFinished(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
}; // Size: 0x48

class UOpenModBrowser : public UMenuButtonActionBase
{
    TSoftClassPtr<UMenuSubViewBase> ModBrowserDummyViewWidget;                        // 0x0030 (size: 0x30)

}; // Size: 0x60

class UOpenSelectorIPU : public UInputProcessingUnit
{
}; // Size: 0x50

class UOpenSettingsSubTab : public UMenuButtonActionBase
{
}; // Size: 0x30

class UOptimizationSettings : public UObject
{
    bool bReloadPrototypes;                                                           // 0x0028 (size: 0x1)
    float SoftMemoryThresholdMultiplier;                                              // 0x002C (size: 0x4)
    float StreamingDistanceMemoryMultiplier;                                          // 0x0030 (size: 0x4)
    float StreamingDistanceModifierLimit;                                             // 0x0034 (size: 0x4)
    float MemoryThresholdMultiplierToStartHighPriorityNavMeshLoading;                 // 0x0038 (size: 0x4)
    float AfkTimeout;                                                                 // 0x003C (size: 0x4)
    float WaterTraceDistanceTolerance;                                                // 0x0040 (size: 0x4)
    bool bAlwaysCleanXSSViews;                                                        // 0x0044 (size: 0x1)

}; // Size: 0x48

class UOverwriteSaveGameAction : public USaveLoadActionBase
{
}; // Size: 0xC0

class UPCSaveLoadIO : public USaveLoadIO
{
}; // Size: 0x28

class UPDAArrowButton : public UButtonBase
{
    class UImage* ArrowIcon;                                                          // 0x02C0 (size: 0x8)
    class UWidgetAnimation* ClickAnimation;                                           // 0x02C8 (size: 0x8)
    float ClickAnimSpeed;                                                             // 0x02D0 (size: 0x4)
    bool bShoudBlockClickAnim;                                                        // 0x02D4 (size: 0x1)
    bool bShoudHoverOpacity;                                                          // 0x02D5 (size: 0x1)
    float HoverOpacity;                                                               // 0x02D8 (size: 0x4)
    float UnHoverOpacity;                                                             // 0x02DC (size: 0x4)

}; // Size: 0x2E0

class UPDAButtonBase : public UButtonBase
{
    class UImage* Background;                                                         // 0x02C0 (size: 0x8)
    class UImage* BackgroundLeft;                                                     // 0x02C8 (size: 0x8)
    class UImage* BackgroundRight;                                                    // 0x02D0 (size: 0x8)
    class UImage* NewPoint;                                                           // 0x02D8 (size: 0x8)
    FLinearColor ButtonCollorEnable;                                                  // 0x02E0 (size: 0x10)
    FLinearColor ButtonCollorDisable;                                                 // 0x02F0 (size: 0x10)
    FName ButtonEnabledStyleId;                                                       // 0x0300 (size: 0x8)
    FName ButtonDisabledStyleId;                                                      // 0x0308 (size: 0x8)
    bool bShoudHoverOpacity;                                                          // 0x0310 (size: 0x1)
    float HoverOpacity;                                                               // 0x0314 (size: 0x4)
    float UnHoverOpacity;                                                             // 0x0318 (size: 0x4)
    bool bShouldShowNewItem;                                                          // 0x031C (size: 0x1)

}; // Size: 0x320

class UPDAMenuButton : public UButtonBase
{
    class UImage* SelectLine;                                                         // 0x02C8 (size: 0x8)
    class UImage* Notify;                                                             // 0x02D0 (size: 0x8)
    class UTextWidget* ButtonText;                                                    // 0x02D8 (size: 0x8)
    bool bEnableLocalisation;                                                         // 0x02E0 (size: 0x1)
    FString ButtonLocalizationSID;                                                    // 0x02E8 (size: 0x10)
    FText DisplayText;                                                                // 0x02F8 (size: 0x18)
    bool bEnableSelectAnimation;                                                      // 0x0310 (size: 0x1)
    FName SetStyleIdHover;                                                            // 0x0314 (size: 0x8)
    FName SetStyleIdUnHover;                                                          // 0x031C (size: 0x8)

}; // Size: 0x328

class UPDANotePanel : public UPDASlotPanelBase
{
    class USizeBox* AbsentNoteSizeBox;                                                // 0x02E0 (size: 0x8)
    TMap<class ENoteType, class FSlotFilterSettings> SlotFilterSettings;              // 0x02E8 (size: 0x50)

}; // Size: 0x358

class UPDANotesButton : public UPDAButtonBase
{
    class UImageWidget* ButtonIcon;                                                   // 0x0320 (size: 0x8)
    FNoteFilterSettings FilterSettings;                                               // 0x0328 (size: 0x8)
    bool ShouldEnableStailManager;                                                    // 0x0330 (size: 0x1)
    class UTexture2D* Icon;                                                           // 0x0338 (size: 0x8)

}; // Size: 0x340

class UPDANotesDetails : public UWidgetBase
{
    class UVerticalBox* NotesBox;                                                     // 0x0278 (size: 0x8)
    class UHorizontalBox* AudioContainer;                                             // 0x0280 (size: 0x8)
    class UImage* BackgroundImage;                                                    // 0x0288 (size: 0x8)
    class UWidget* ImageContainer;                                                    // 0x0290 (size: 0x8)
    class UModifiableRichText* TitleText;                                             // 0x0298 (size: 0x8)
    class UModifiableRichText* HintText;                                              // 0x02A0 (size: 0x8)
    class UModifiableRichText* HeaderText;                                            // 0x02A8 (size: 0x8)
    class UModifiableRichText* BodyText;                                              // 0x02B0 (size: 0x8)
    class UModifiableRichText* FooterText;                                            // 0x02B8 (size: 0x8)
    class UScrollBox* TextScroll;                                                     // 0x02C0 (size: 0x8)
    class UCheckBoxWidget* AudioPlayButton;                                           // 0x02C8 (size: 0x8)
    class UProgressBar* AudiologProgressBar;                                          // 0x02D0 (size: 0x8)
    class UTextWidget* AbsentNoteText;                                                // 0x02D8 (size: 0x8)
    class UTextWidget* TimerText;                                                     // 0x02E0 (size: 0x8)
    float ScrollMoveSpeed;                                                            // 0x02E8 (size: 0x4)
    class UCommonVerticalBox* ParentVerticalBox;                                      // 0x02F0 (size: 0x8)
    class UWidget* TopBorder;                                                         // 0x0330 (size: 0x8)
    class UWidget* BottomBorder;                                                      // 0x0338 (size: 0x8)
    class UWidget* RightBorder;                                                       // 0x0340 (size: 0x8)
    class UWidget* LeftBorder;                                                        // 0x0348 (size: 0x8)

    void UpdateTimer();
    void CheckBoxPlayAudio();
}; // Size: 0x350

class UPDANotesSlot : public UPDASlotBase
{
    FPDANotesSlotOnNoteSlotClick OnNoteSlotClick;                                     // 0x0300 (size: 0x10)
    void OnNoteSlotClick(int32 OutSlotIndex);

}; // Size: 0x318

class UPDAOpenIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UPDAPage : public UPageViewBase
{
    EPDAPageType PDAPage;                                                             // 0x0290 (size: 0x1)

}; // Size: 0x298

class UPDAQuestButton : public UPDAButtonBase
{
    class UTextWidget* ButtonText;                                                    // 0x0320 (size: 0x8)
    bool bEnableLocalization;                                                         // 0x0328 (size: 0x1)
    FString ButtonLocalizationSID;                                                    // 0x0330 (size: 0x10)

}; // Size: 0x340

class UPDAQuestDescription : public UChildViewBase
{
    class UTextWidget* DescriptionText;                                               // 0x0278 (size: 0x8)
    class UScrollBox* DescriptionContainer;                                           // 0x0280 (size: 0x8)
    bool bEnableHoverIllumination;                                                    // 0x0288 (size: 0x1)
    float ScrollSpeed;                                                                // 0x028C (size: 0x4)
    FPDAQuestDescriptionOnHoverDescription OnHoverDescription;                        // 0x0290 (size: 0x10)
    void OnHoverDescription(bool bIsHovered);
    FLinearColor HoverScrollColor;                                                    // 0x02A0 (size: 0x10)
    FLinearColor UnHoverScrollColor;                                                  // 0x02B0 (size: 0x10)

}; // Size: 0x2C8

class UPDAQuestDetails : public UChildViewBase
{
    class UVerticalBox* QuestInfoBox;                                                 // 0x0278 (size: 0x8)
    class UImage* QuestLogo;                                                          // 0x0280 (size: 0x8)
    class UTextWidget* TaskText;                                                      // 0x0288 (size: 0x8)
    class UTextWidget* DescriptionText;                                               // 0x0290 (size: 0x8)
    class UTextWidget* RewardText;                                                    // 0x0298 (size: 0x8)
    class UPanelWidget* RewardBlock;                                                  // 0x02A0 (size: 0x8)
    class UPDAQuestDescription* DescriptionQuest;                                     // 0x02A8 (size: 0x8)
    class UTextWidget* QuestNameText;                                                 // 0x02B0 (size: 0x8)
    class UTextWidget* QuestStatusText;                                               // 0x02B8 (size: 0x8)
    class UHorizontalBox* RewardContainer;                                            // 0x02C0 (size: 0x8)
    class UPDAQuestTaskContainer* TaskContainer;                                      // 0x02C8 (size: 0x8)
    TMap<class EJournalState, class FQuestStatusSettings> StatusSettings;             // 0x02D0 (size: 0x50)
    class UTexture2D* DefaultQuestIcon;                                               // 0x0320 (size: 0x8)
    TMap<class EJournalState, class FTaskStatusSettings> TaskStatusSettings;          // 0x0328 (size: 0x50)
    FQuestStageSelectSettings SelectedStatusSettings;                                 // 0x0378 (size: 0x28)
    FQuestStageSelectSettings UnSelectedStatusSettings;                               // 0x03A0 (size: 0x28)
    TMap<class EQuestRewardType, class UTexture2D*> RewardSettings;                   // 0x03C8 (size: 0x50)
    FName StyleTextIdMain;                                                            // 0x0418 (size: 0x8)
    FName StyleTextIdSecondary;                                                       // 0x0420 (size: 0x8)
    FName StyleIdTaitlMain;                                                           // 0x0428 (size: 0x8)
    FName StyleIdTaitlSecondary;                                                      // 0x0430 (size: 0x8)
    FName StyleTextIdDefault;                                                         // 0x0438 (size: 0x8)
    int32 TaskListSizeMax;                                                            // 0x0440 (size: 0x4)
    FString TaskLocalizationSID;                                                      // 0x0448 (size: 0x10)
    FString DescriptionLocalizationSID;                                               // 0x0458 (size: 0x10)
    FString RewardLocalizationSID;                                                    // 0x0468 (size: 0x10)
    FPDAQuestDetailsOnHoveredDetailsElement OnHoveredDetailsElement;                  // 0x0478 (size: 0x10)
    void OnHoveredDetailsElement(bool bIsHovered, EDetailsElementType ElementType);
    FPDAQuestDetailsOnUpdateQuestList OnUpdateQuestList;                              // 0x0488 (size: 0x10)
    void OnUpdateQuestList();
    FPDAQuestDetailsOnStageSlotHover OnStageSlotHover;                                // 0x0498 (size: 0x10)
    void OnStageSlotHover();

    void UpdateStageSlotHover();
    void UpdateStageHover(bool bIsStageHovered);
    void UpdateDescriptionHover(bool bIsHovered);
    void StageClick(class UPDAQuestTaskSlot* InSlot);
}; // Size: 0x4E0

class UPDAQuestPanel : public UPDASlotPanelBase
{
    class UPDATextBorder* MainQuestBorder;                                            // 0x02E0 (size: 0x8)
    class UPDATextBorder* CancelledQuestBorder;                                       // 0x02E8 (size: 0x8)
    class UPDATextBorder* SecondaryQuestBorder;                                       // 0x02F0 (size: 0x8)
    class USizeBox* EmptySizeBorder;                                                  // 0x02F8 (size: 0x8)
    class USizeBox* SecondEmptySizeBorder;                                            // 0x0300 (size: 0x8)
    FName SelectInput;                                                                // 0x0308 (size: 0x8)
    FString InputActionName;                                                          // 0x0310 (size: 0x10)
    FLinearColor MainQuestTint;                                                       // 0x0320 (size: 0x10)
    FLinearColor DefaultQuestTint;                                                    // 0x0330 (size: 0x10)
    FString MainQuestLocalizationSID;                                                 // 0x0340 (size: 0x10)
    FString SecondaryQuestLocalizationSID;                                            // 0x0350 (size: 0x10)
    FString FinishQuestLocalizationSID;                                               // 0x0360 (size: 0x10)
    FString FailedQuestLocalizationSID;                                               // 0x0370 (size: 0x10)
    FString CanceledQuestLocalizationSID;                                             // 0x0380 (size: 0x10)
    class UScenarioManager* ScenarioManager;                                          // 0x03A0 (size: 0x8)

    void ChangeSelectedQuestSlot(const int32 JournalQuestIndex);
}; // Size: 0x3D0

class UPDAQuestRewardSlot : public UWidgetBase
{
    class UImage* RewardIcon;                                                         // 0x0278 (size: 0x8)

}; // Size: 0x280

class UPDAQuestSlot : public UPDASlotBase
{
    class UTextWidget* RegionText;                                                    // 0x0300 (size: 0x8)
    class UTextWidget* PlayText;                                                      // 0x0308 (size: 0x8)
    FPDAQuestSlotOnQuestSlotClick OnQuestSlotClick;                                   // 0x0310 (size: 0x10)
    void OnQuestSlotClick(int32 OutSlotIndex);
    FPDAQuestSlotOnChangeSlotSelectQuest OnChangeSlotSelectQuest;                     // 0x0320 (size: 0x10)
    void OnChangeSlotSelectQuest(int32 OutSlotIndex);
    float SelectStageHoverOpacity;                                                    // 0x0330 (size: 0x4)
    FString HintLocalizationSIDEnable;                                                // 0x0338 (size: 0x10)
    FString HintLocalizationSIDDisabled;                                              // 0x0348 (size: 0x10)

}; // Size: 0x370

class UPDAQuestTaskContainer : public UHoverIndicator
{
    class UScrollBox* TaskScroll;                                                     // 0x0290 (size: 0x8)
    TSubclassOf<class UPDAQuestTaskSlot> TaskListClass;                               // 0x0298 (size: 0x8)
    int32 TaskListSize;                                                               // 0x02A0 (size: 0x4)
    bool bShouldDebug;                                                                // 0x02A4 (size: 0x1)
    FString FontStyle;                                                                // 0x02A8 (size: 0x10)
    FString InputAction;                                                              // 0x02B8 (size: 0x10)
    FPDAQuestTaskContainerOnTrackingStage OnTrackingStage;                            // 0x02C8 (size: 0x10)
    void OnTrackingStage(class UPDAQuestTaskSlot* StageSlotWidget);
    FPDAQuestTaskContainerOnUpdateStageHover OnUpdateStageHover;                      // 0x02D8 (size: 0x10)
    void OnUpdateStageHover();

    void StageClick(class UPDAQuestTaskSlot* InSlot);
    void MouseHoverStage(const bool bHovered, const int32 IndexOnParent);
}; // Size: 0x2F8

class UPDAQuestTaskSlot : public UWidgetBase
{
    class UImage* ImageTask;                                                          // 0x0278 (size: 0x8)
    class UWidget* HoverImage;                                                        // 0x0280 (size: 0x8)
    class URichTextBlock* RichText;                                                   // 0x0288 (size: 0x8)
    class UWidgetAnimation* ClickAnim;                                                // 0x0290 (size: 0x8)
    FString NotNecessaryStyleId;                                                      // 0x0298 (size: 0x10)
    FString NotNecessaryLocalizationSID;                                              // 0x02A8 (size: 0x10)
    float ClickAnimSpeed;                                                             // 0x02B8 (size: 0x4)
    FPDAQuestTaskSlotOnTrackingStage OnTrackingStage;                                 // 0x02E0 (size: 0x10)
    void OnTrackingStageSlot(class UPDAQuestTaskSlot* StageSlotWidget);
    FPDAQuestTaskSlotOnHoverTaskSlot OnHoverTaskSlot;                                 // 0x02F0 (size: 0x10)
    void OnHoverTaskSlot(bool bIsHovered, int32 InIndexOnParent);
    FTaskStatusSettings SlotData;                                                     // 0x0308 (size: 0x20)

}; // Size: 0x328

class UPDARadiationLine : public UWidgetBase
{
    class UWidgetAnimation* MoveAnim;                                                 // 0x0278 (size: 0x8)
    bool bShoudBlockAnim;                                                             // 0x0280 (size: 0x1)
    float MoveAnimSpeed;                                                              // 0x0284 (size: 0x4)

}; // Size: 0x288

class UPDARegionPanel : public UChildViewBase
{
    class UProgressBar* Progress;                                                     // 0x0278 (size: 0x8)
    class UTextWidget* RegionText;                                                    // 0x0280 (size: 0x8)
    FLinearColor ActiveColor;                                                         // 0x0288 (size: 0x10)
    FLinearColor DisactiveColor;                                                      // 0x0298 (size: 0x10)

}; // Size: 0x2A8

class UPDASlotBase : public UWidgetBase
{
    class UTextWidget* NameText;                                                      // 0x0278 (size: 0x8)
    class UCheckBoxWidget* SelectPoint;                                               // 0x0280 (size: 0x8)
    class UImage* HoverBeckground;                                                    // 0x0288 (size: 0x8)
    class UImage* SelectBeckground;                                                   // 0x0290 (size: 0x8)
    class UImage* NewPoint;                                                           // 0x0298 (size: 0x8)
    bool bShouldAutoCut;                                                              // 0x02A0 (size: 0x1)
    TMap<ELocalizationLanguage, int32> CultureCutPreference;                          // 0x02A8 (size: 0x50)

    void SetSelectPointTint(FLinearColor InColor);
}; // Size: 0x300

class UPDASlotPanelBase : public UChildViewBase
{
    class UVerticalBox* SlotContainer;                                                // 0x0278 (size: 0x8)
    class UPDAArrowButton* ArrowDown;                                                 // 0x0280 (size: 0x8)
    class UPDAArrowButton* ArrowTop;                                                  // 0x0288 (size: 0x8)
    FPDASlotPanelBaseOnUpdateDetails OnUpdateDetails;                                 // 0x0290 (size: 0x10)
    void OnUpdateDetails(bool bIsEmptyDetails);
    FPDASlotPanelBaseOnUpdateSelectButton OnUpdateSelectButton;                       // 0x02A0 (size: 0x10)
    void OnUpdateSelectButton(int32 OutIndexSelectButton);
    FName ArrowActionIdTop;                                                           // 0x02B0 (size: 0x8)
    FName ArrowActionIdDown;                                                          // 0x02B8 (size: 0x8)

    void UpdateSelectSlotID();
    void ClickSlot(const int32 QuestSlotIndex);
    void ClickArrowButton(const FName ButtonId);
}; // Size: 0x2E0

class UPDATextBorder : public UWidgetBase
{
    class UImage* LeftBorder;                                                         // 0x0278 (size: 0x8)
    class UImage* RightBorder;                                                        // 0x0280 (size: 0x8)
    class UTextWidget* BorderText;                                                    // 0x0288 (size: 0x8)
    FVector2D SizeLine;                                                               // 0x0290 (size: 0x10)

}; // Size: 0x2A0

class UPDATimePanel : public UChildViewBase
{
    class UTextWidget* HourText;                                                      // 0x0278 (size: 0x8)
    class UTextWidget* MinutesText;                                                   // 0x0280 (size: 0x8)
    class UWidgetAnimation* PointAnim;                                                // 0x0288 (size: 0x8)
    float PointAnimSpeed;                                                             // 0x0290 (size: 0x4)

}; // Size: 0x2B0

class UPDATutorialButton : public UPDAButtonBase
{
    class UImageWidget* ButtonIcon;                                                   // 0x0320 (size: 0x8)
    FTutorialFilterSettings FilterSettings;                                           // 0x0328 (size: 0x8)
    bool ShouldEnableStailManager;                                                    // 0x0330 (size: 0x1)
    class UTexture2D* Icon;                                                           // 0x0338 (size: 0x8)

}; // Size: 0x340

class UPDATutorialDetails : public UHoverIndicator
{
    class UVerticalBox* TutorialBox;                                                  // 0x0290 (size: 0x8)
    class URichTextBlock* TitleText;                                                  // 0x0298 (size: 0x8)
    class URichTextBlock* RichText;                                                   // 0x02A0 (size: 0x8)
    class UScrollBox* TextScroll;                                                     // 0x02A8 (size: 0x8)
    int32 NumWidgetsInLine;                                                           // 0x02B0 (size: 0x4)
    float ScrollMoveSpeed;                                                            // 0x02B4 (size: 0x4)
    class UCommonVerticalBox* ParentVerticalBox;                                      // 0x02B8 (size: 0x8)

}; // Size: 0x3E8

class UPDATutorialPanel : public UPDASlotPanelBase
{
    class USizeBox* AbsentTutorialSizeBox;                                            // 0x02E0 (size: 0x8)
    TMap<class EPDATutorialCategory, class FSlotFilterSettings> SlotFilterSettings;   // 0x02F8 (size: 0x50)

}; // Size: 0x358

class UPDATutorialSlot : public UPDASlotBase
{
    class UTexture2D* NavigationIcon;                                                 // 0x0300 (size: 0x8)
    class UTexture2D* CombatIcon;                                                     // 0x0308 (size: 0x8)
    class UTexture2D* SurvivalIcon;                                                   // 0x0310 (size: 0x8)
    class UTexture2D* EarningsIcon;                                                   // 0x0318 (size: 0x8)
    FString NavigationSID;                                                            // 0x0320 (size: 0x10)
    FString CombatSID;                                                                // 0x0330 (size: 0x10)
    FString SurvivalSID;                                                              // 0x0340 (size: 0x10)
    FString EarningsSID;                                                              // 0x0350 (size: 0x10)
    FPDATutorialSlotOnTutorialSlotClick OnTutorialSlotClick;                          // 0x0360 (size: 0x10)
    void OnTutorialSlotClick(int32 OutSlotIndex);
    class UTextWidget* CategoryText;                                                  // 0x0370 (size: 0x8)

}; // Size: 0x380

class UPDAUpgradePanel : public UPDASlotPanelBase
{
    class UUpgradeMenuWidget* UpgradeMenu;                                            // 0x02E0 (size: 0x8)
    class UPDATextBorder* EquipedBorder;                                              // 0x02F0 (size: 0x8)
    class UPDATextBorder* UnEquipedBorder;                                            // 0x02F8 (size: 0x8)
    FString EquipedBorderLocalizationSID;                                             // 0x0300 (size: 0x10)
    FString UnEquipedBorderLocalizationSID;                                           // 0x0310 (size: 0x10)
    FLinearColor UpgradeColor;                                                        // 0x0320 (size: 0x10)

}; // Size: 0x350

class UPDAUpgradesButton : public UPDAButtonBase
{
    class UImageWidget* ButtonIcon;                                                   // 0x0320 (size: 0x8)
    FUpgradeFilterSettings FilterSettings;                                            // 0x0328 (size: 0x2)
    bool ShouldEnableStailManager;                                                    // 0x032A (size: 0x1)
    class UTexture2D* Icon;                                                           // 0x0330 (size: 0x8)

}; // Size: 0x338

class UPDAUpgradesSlot : public UPDASlotBase
{
    FPDAUpgradesSlotOnUpgradeSlotClick OnUpgradeSlotClick;                            // 0x0300 (size: 0x10)
    void OnUpgradeSlotClick(int32 OutSlotIndex);
    class UTextWidget* RegionText;                                                    // 0x0310 (size: 0x8)
    class UImageWidget* ButtonIcon;                                                   // 0x0318 (size: 0x8)
    FLinearColor DefaultIconColor;                                                    // 0x0320 (size: 0x10)
    FName StyleIdWeapon;                                                              // 0x0330 (size: 0x8)
    FName StyleArmor;                                                                 // 0x0338 (size: 0x8)
    FName StyleHelmet;                                                                // 0x0340 (size: 0x8)
    FName StyleDetector;                                                              // 0x0348 (size: 0x8)

}; // Size: 0x378

class UPDAView : public UBookViewBase
{
    class UOverlay* Container;                                                        // 0x02F0 (size: 0x8)
    class UPDATimePanel* TimeWidget;                                                  // 0x02F8 (size: 0x8)
    class UPDARegionPanel* RegionWidget;                                              // 0x0300 (size: 0x8)
    class UWidgetAnimation* PDAFadeOutAnimation;                                      // 0x0308 (size: 0x8)
    class UWidgetAnimation* PDAFadeInAnimation;                                       // 0x0310 (size: 0x8)
    bool bSholdShowInput;                                                             // 0x0318 (size: 0x1)
    float PDATurnOnTimer;                                                             // 0x031C (size: 0x4)

    void UpdateQuestList();
    void HideAllWindows();
    void CloseUpdateView();
}; // Size: 0x350

class UPageViewBase : public UChildViewBase
{
    bool bShouldBindWidgetInputs;                                                     // 0x0278 (size: 0x1)
    bool bShoudIgnoreInputOnPouse;                                                    // 0x0279 (size: 0x1)
    bool bOpenedFromDialog;                                                           // 0x0288 (size: 0x1)

}; // Size: 0x290

class UParticleCallbackHandler : public UObject
{
}; // Size: 0x48

class UPassiveDetectorComponent : public UActorComponent
{
    class UAkRtpc* DangerLevelSoundParameter;                                         // 0x00A8 (size: 0x8)
    class UAkAudioEvent* DetectorWorkSFX;                                             // 0x00B0 (size: 0x8)
    class UCurveFloat* DetectorWorkCurve;                                             // 0x00B8 (size: 0x8)
    class UCurveFloat* SignalCurve;                                                   // 0x00C0 (size: 0x8)

}; // Size: 0xE0

class UPathBuilderDrawComponent : public UDebugDrawComponent
{
}; // Size: 0x5B0

class UPauseGameView : public UViewBaseExtended
{
    class UGameMenuElement* Continue;                                                 // 0x02C8 (size: 0x8)
    class UGameMenuElement* Play;                                                     // 0x02D0 (size: 0x8)
    class UGameMenuElement* Save;                                                     // 0x02D8 (size: 0x8)
    class UGameMenuElement* Load;                                                     // 0x02E0 (size: 0x8)
    class UGameMenuElement* Online;                                                   // 0x02E8 (size: 0x8)
    class UGameMenuElement* Options;                                                  // 0x02F0 (size: 0x8)
    class UGameMenuElement* Back;                                                     // 0x02F8 (size: 0x8)
    class UGameMenuElement* Exit;                                                     // 0x0300 (size: 0x8)
    class UGameMenuElement* DebugMaps;                                                // 0x0308 (size: 0x8)
    class UGameMenuElement* BackToMainMenu;                                           // 0x0310 (size: 0x8)
    class UGameMenuElement* DebugBenchmark;                                           // 0x0318 (size: 0x8)
    class UVerticalBox* ButtonContainer;                                              // 0x0320 (size: 0x8)
    class UImage* Background;                                                         // 0x0328 (size: 0x8)
    class UOverlay* MenuOverlay;                                                      // 0x0330 (size: 0x8)
    class UOverlay* OptionsOverlay;                                                   // 0x0338 (size: 0x8)

    void UpdateShowDebugMenu();
    void UIOptionsBack();
    void UIMenuMoveUp();
    void UIMenuMoveDown();
    void UIMenuConfirm();
    void UIMenuBack();
    void OnItemHovered();
    void OnClickSave();
    void OnClickPlay();
    void OnClickOptions();
    void OnClickOnline();
    void OnClickLoad();
    void OnClickExit();
    void OnClickDebugMaps();
    void OnClickContinue();
    void OnClickBackToMainMenu();
    void OnClickBack();
}; // Size: 0x358

class UPauseMenuIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UPauseMenuMainView : public UMenuMainViewBase
{
}; // Size: 0x338

class UPauseMenuSubView : public UMenuSubViewBase
{
}; // Size: 0x2D0

class UPhysicsInteractionComponent : public UActorComponent
{
    bool bLoadDefaultPrototypeOnBeginPlay;                                            // 0x00A8 (size: 0x1)
    bool bCreateWaterContactController;                                               // 0x00A9 (size: 0x1)
    bool bCreateWetnessComponent;                                                     // 0x00AA (size: 0x1)
    class UFXSystemAsset* WaterContactNiagaraSystemVFX;                               // 0x00C8 (size: 0x8)
    FString PhysicsInteractionPrototypeSID;                                           // 0x00D8 (size: 0x10)

}; // Size: 0x110

class UPhysicsSoundsComponent : public UActorComponent
{
    FString PhysicsInteractionPrototypeSID;                                           // 0x00B8 (size: 0x10)
    class UAkAudioEvent* PhysicalObjectAudioEventPlay;                                // 0x00D0 (size: 0x8)
    class UAkAudioEvent* PhysicalObjectAudioEventStop;                                // 0x00D8 (size: 0x8)
    class UAkSwitchValue* DraggingParameterSwitch;                                    // 0x00E0 (size: 0x8)
    class UAkSwitchValue* RollingParameterSwitch;                                     // 0x00E8 (size: 0x8)
    class UAkSwitchValue* HitParameterSwitch;                                         // 0x00F0 (size: 0x8)
    class UAkRtpc* PhysicalObjectContinuousSpeedRTPC;                                 // 0x00F8 (size: 0x8)
    class UAkRtpc* PhysicalObjectInstantSpeedRTPCParameter;                           // 0x0100 (size: 0x8)
    class UAkRtpc* WaterDepthRtpc;                                                    // 0x0108 (size: 0x8)
    class UAkComponent* AkAudioComponent;                                             // 0x0110 (size: 0x8)

}; // Size: 0x140

class UPlatformButtonStateDefiner : public UMenuButtonStateDefiner
{
    uint32 AvailablePlatforms;                                                        // 0x0030 (size: 0x4)

}; // Size: 0x38

class UPlatformManager : public UBaseTickableManager
{
    int32 InputStorySize;                                                             // 0x00A8 (size: 0x4)
    bool bUsePlatformSwitchingThreshold;                                              // 0x00AC (size: 0x1)
    float PlatformSwitchingThreshold;                                                 // 0x00B0 (size: 0x4)
    bool bSwitchToOtherDeviceOnConnect;                                               // 0x00B4 (size: 0x1)
    bool bUseMouseFeatures;                                                           // 0x00B5 (size: 0x1)

}; // Size: 0x108

class UPlatformSwitcher : public UPlatformSwitcherBase
{
    bool bChildrenView;                                                               // 0x01F0 (size: 0x1)

}; // Size: 0x1F8

class UPlatformSwitcherBase : public UWidgetSwitcher
{
    bool bEnablePlatformAutoSwitch;                                                   // 0x0180 (size: 0x1)
    TMap<EGSCInputDeviceType, int32> PlatformSettings;                                // 0x0188 (size: 0x50)

    void UpdateWidget();
    void InitWidget();
}; // Size: 0x1F0

class UPlaySoundQuestNodeListener : public UObject
{

    void OnSoundFinished(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
}; // Size: 0x30

class UPlayVideoWidget : public UUserWidget
{
    class USkipHintView* SkipHint;                                                    // 0x02B0 (size: 0x8)
    class UTextWidget* SubtitleTextWidget;                                            // 0x02B8 (size: 0x8)
    class UBinkMediaPlayer* BinkMediaPlayer;                                          // 0x02C0 (size: 0x8)

    void SkipVideo();
    float GetVideoDuration();
    void EndVideo();
}; // Size: 0x2E0

class UPlayerAnimCollection : public UObject
{
    FPlayerExternalAnimations ExternalAnimations;                                     // 0x0028 (size: 0x278)
    FPlayerInternalAnimations InternalAnimations;                                     // 0x02A0 (size: 0xB8)
    class UPlayerAnimCollection* ParentAnimCollection;                                // 0x0358 (size: 0x8)

}; // Size: 0x360

class UPlayerCodelockAnimCollection : public UObject
{
    FCodelockInteractionAnimations CodelockInteractionAnimations;                     // 0x0028 (size: 0x8)

}; // Size: 0x30

class UPlayerContextualActionExitIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UPlayerDefaultAnimCollection : public UObject
{
    class UPlayerAnimCollection* PlayerAnimCollection;                                // 0x0028 (size: 0x8)
    UClass* PlayerAnimBlueprint;                                                      // 0x0030 (size: 0x8)
    FEquipUnequipAnimations EquipUnequip;                                             // 0x0038 (size: 0x18)
    FInspectArtifactAnimations InspectArtifactAnimations;                             // 0x0050 (size: 0x10)
    FDragDeadBodyAnimations DragDeadBodyAnimations;                                   // 0x0060 (size: 0x10)
    FPlayerDeathAnimations DeathAnimations;                                           // 0x0070 (size: 0xF0)
    FPlayerDialogAnimations Dialog;                                                   // 0x0160 (size: 0x50)
    FPlayerGuitarAnimations GuitarAnimations;                                         // 0x01B0 (size: 0x108)
    TMap<class EDodgeSide, class UAnimMontage*> DodgeAnimations;                      // 0x02B8 (size: 0x50)

}; // Size: 0x308

class UPlayerDetectorAnimCollection : public UObject
{
    FCharacterDetectorAnimations Equip;                                               // 0x0028 (size: 0x68)
    FCharacterDetectorAnimations Unequip;                                             // 0x0090 (size: 0x68)
    FCharacterDetectorAnimations EquipBothHands;                                      // 0x00F8 (size: 0x68)
    FCharacterDetectorWeaponAnimations WeaponSwitch;                                  // 0x0160 (size: 0x8)
    FCharacterDetectorWeaponAnimations WeaponShoot;                                   // 0x0168 (size: 0x8)
    FCharacterDetectorWeaponAnimations WeaponAimShoot;                                // 0x0170 (size: 0x8)
    FCharacterDetectorFailedLandingAnimations FailedLanding;                          // 0x0178 (size: 0x50)
    FDetectorToggleFlashlightAnimations ToggleFlashlight;                             // 0x01C8 (size: 0x50)
    UClass* PlayerAnimBlueprint;                                                      // 0x0218 (size: 0x8)
    FAnimWeaponSwingContainer SwingConfigContainer;                                   // 0x0220 (size: 0x38)
    FWeaponInertiaContainer StopSwingInertia;                                         // 0x0258 (size: 0x20)
    FWeaponInertiaContainer StopSprintInertia;                                        // 0x0278 (size: 0x20)

}; // Size: 0x298

class UPlayerEffectsSFXComponent : public UActorComponent
{
    class UAkAudioEvent* SFXStartEvent;                                               // 0x00A0 (size: 0x8)
    class UAkAudioEvent* SFXStopEvent;                                                // 0x00A8 (size: 0x8)
    class UAkRtpc* SFXParameter;                                                      // 0x00B0 (size: 0x8)

}; // Size: 0xD0

class UPlayerEnhancedInputComponent : public UEnhancedInputComponent
{
}; // Size: 0x168

class UPlayerFirearmAnimCollection : public UObject
{
    FPlayerFirearmInternalAnimations InternalAnimations;                              // 0x0030 (size: 0x2B8)
    TMap<class FName, class FVector> SocketLocations;                                 // 0x02E8 (size: 0x50)
    class UCurveVector* IdleSwayCurve;                                                // 0x0338 (size: 0x8)
    FPlayerWeaponAnimations WeaponAnimations;                                         // 0x0340 (size: 0x230)
    FPlayerAutoCoverAnimations AutoCoverAnimations;                                   // 0x0570 (size: 0x78)

}; // Size: 0x5E8

class UPlayerGameHUDView : public UViewBase
{
    class UHUDContextualLegend* ContextualLegend;                                     // 0x02C0 (size: 0x8)
    class UQuickPanel* QuickPanel;                                                    // 0x02C8 (size: 0x8)
    class UHudHintsPanel* HudHintsPanel;                                              // 0x02D0 (size: 0x8)
    class USystemNotificationWidget* SystemNotification;                              // 0x02D8 (size: 0x8)
    class UOverlay* Container;                                                        // 0x02E0 (size: 0x8)
    class UCompassWidget* CompassWidget;                                              // 0x02E8 (size: 0x8)
    class UAmmoWidget* AmmoPanel;                                                     // 0x02F0 (size: 0x8)
    class UHintAction* HoldBreathHint;                                                // 0x02F8 (size: 0x8)
    class UCrosshairWidgetSwitcher* Crosshair;                                        // 0x0300 (size: 0x8)
    class UStatPanel* StatPanel;                                                      // 0x0308 (size: 0x8)
    class UUserWidget* Background;                                                    // 0x0310 (size: 0x8)
    class UNotificationWidget* NotificationWidget;                                    // 0x0318 (size: 0x8)
    class UThreatIndicator* ThreatIndicator;                                          // 0x0320 (size: 0x8)
    class UBackgroundBlur* InventoryBlur;                                             // 0x0328 (size: 0x8)
    class UWidgetAnimation* ItemSelectorHudModeAnimation;                             // 0x0330 (size: 0x8)
    float ItemSelectorHUDMod;                                                         // 0x0338 (size: 0x4)
    float ItemSelectorHUDModSpeed;                                                    // 0x033C (size: 0x4)
    bool bShouldEnableAutoHideWidgets;                                                // 0x0340 (size: 0x1)
    float TimeUpdateHideWidgetsMax;                                                   // 0x0344 (size: 0x4)
    float TimeUpdateHideWidgets;                                                      // 0x0348 (size: 0x4)
    bool bShouldEnableTurnAngleAutoHide;                                              // 0x034C (size: 0x1)
    float PlayerTurnAngleMax;                                                         // 0x0350 (size: 0x4)
    float ApproximationPlayerLocation;                                                // 0x0354 (size: 0x4)

}; // Size: 0x3D0

class UPlayerIdentityWidget : public UWidgetBase
{
    class UHorizontalBox* IdentityContainer;                                          // 0x0278 (size: 0x8)
    TArray<TSoftClassPtr<UWidgetBase>> IdentityList;                                  // 0x0280 (size: 0x10)

}; // Size: 0x2A0

class UPlayerInteractionComponent : public UActorComponent
{
}; // Size: 0xE0

class UPlayerItemsSounds : public UDataAsset
{
    class UAkAudioEvent* SFXPickUp;                                                   // 0x0030 (size: 0x8)
    class UAkAudioEvent* SFXPickUpCloth;                                              // 0x0038 (size: 0x8)
    class UAkAudioEvent* SFXDrop;                                                     // 0x0040 (size: 0x8)
    class UAkAudioEvent* SFXUse;                                                      // 0x0048 (size: 0x8)

}; // Size: 0x50

class UPlayerKnifeAnimCollection : public UObject
{
    FPlayerKnifeInternalAnimations InternalAnimations;                                // 0x0030 (size: 0xB0)
    FPlayerWeaponAnimations WeaponAnimations;                                         // 0x00E0 (size: 0x230)

}; // Size: 0x310

class UPlayerLaserSightComponent : public ULaserSightComponent
{
    class APC* PlayerOwner;                                                           // 0x0140 (size: 0x8)

}; // Size: 0x150

class UPlayerModeManager : public UBaseTickableManager
{
}; // Size: 0x228

class UPlayerOpticScopeComponent : public UActorComponent
{
}; // Size: 0xB0

class UPlayerPictureWidget : public UWidgetBase
{
    class UImage* PlayerPicture;                                                      // 0x0278 (size: 0x8)

}; // Size: 0x288

class UPlayerStorageData : public UWidgetBase
{
    class UTooltipRecord* ItemsAmount;                                                // 0x0278 (size: 0x8)
    class UTooltipRecord* ItemsWeight;                                                // 0x0280 (size: 0x8)

}; // Size: 0x288

class UPlayerThrowableItemAnimCollection : public UObject
{
    FPlayerThrowableItemInternalAnimations InternalAnimations;                        // 0x0030 (size: 0xC0)
    FPlayerWeaponAnimations WeaponAnimations;                                         // 0x00F0 (size: 0x230)
    FCharacterWeaponAnimations ToggleFlashlight;                                      // 0x0320 (size: 0x20)

}; // Size: 0x340

class UPoppyFieldAnomalyBehaviorComponent : public USceneComponent
{
    FPrototypeSID InsideSleepinessEffectSID;                                          // 0x02A0 (size: 0x40)
    FPrototypeSID OutsideSleepinessEffectSID;                                         // 0x02E0 (size: 0x40)
    FPrototypeSID CriticalSleepinessEffectSID;                                        // 0x0320 (size: 0x40)
    TArray<FEffectPrototypeSID> FallAsleepEffectSIDs;                                 // 0x0360 (size: 0x10)
    TArray<FTransform> TeleportPoints;                                                // 0x0370 (size: 0x10)
    TArray<float> SleepThresholds;                                                    // 0x0380 (size: 0x10)
    float SleepTeleportMinDistance;                                                   // 0x0390 (size: 0x4)
    float SleepDuration;                                                              // 0x0394 (size: 0x4)
    TSoftObjectPtr<UAkAudioEvent> FlowerSoundEvent;                                   // 0x0398 (size: 0x30)
    TSoftObjectPtr<UAkAudioEvent> AmbientSoundEvent;                                  // 0x03C8 (size: 0x30)
    TSoftObjectPtr<UAkAudioEvent> SleepinessSoundEventPlay;                           // 0x03F8 (size: 0x30)
    TSoftObjectPtr<UAkAudioEvent> SleepinessSoundEventStop;                           // 0x0428 (size: 0x30)
    TSoftObjectPtr<UAkAudioEvent> EyelidsMovementSoundEvent;                          // 0x0458 (size: 0x30)
    TSoftObjectPtr<UAkAudioEvent> BlinkSoundEvent;                                    // 0x0488 (size: 0x30)
    TSoftObjectPtr<UAkRtpc> BlinkParameter;                                           // 0x04B8 (size: 0x30)
    FPrototypeSID BlinkValueProviderSID;                                              // 0x04E8 (size: 0x40)
    TArray<class UShapeComponent*> Collisions;                                        // 0x0558 (size: 0x10)
    TArray<class UFlowerParticleComponent*> FlowerParticleComponents;                 // 0x0568 (size: 0x10)

    void OnEndOverlapFlowers(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnBeginOverlapFlowers(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0x5C0

class UPopupBase : public UWidgetBase
{
    class UTextWidget* Title;                                                         // 0x0278 (size: 0x8)
    class UTextWidget* Description;                                                   // 0x0280 (size: 0x8)
    class UHintInputController* ConfirmHint;                                          // 0x0288 (size: 0x8)
    class UHintInputController* DiscardHint;                                          // 0x0290 (size: 0x8)
    class UHintInputController* RetryHint;                                            // 0x0298 (size: 0x8)
    class UHintInputController* CancelHint;                                           // 0x02A0 (size: 0x8)
    class UHorizontalBox* NoIconHorizontalBox;                                        // 0x02A8 (size: 0x8)
    class UHorizontalBox* IconHorizontalBox;                                          // 0x02B0 (size: 0x8)
    class UImage* Icon;                                                               // 0x02B8 (size: 0x8)
    class UHyperlinkButton* PrivacyPolicyButton;                                      // 0x02C0 (size: 0x8)
    class UHyperlinkButton* TermsOfUseButton;                                         // 0x02C8 (size: 0x8)
    class UTexture2D* SaveIcon;                                                       // 0x02D0 (size: 0x8)
    class UTexture2D* BrokenIcon;                                                     // 0x02D8 (size: 0x8)
    class UTexture2D* AttentionIcon;                                                  // 0x02E0 (size: 0x8)

}; // Size: 0x348

class UPopupHintImage : public UWidgetBase
{
    class UHintImageKeyboard* HintImageKeyboard;                                      // 0x0278 (size: 0x8)

}; // Size: 0x280

class UPopupManager : public UBaseManager
{
    class UPopupView* PopupView;                                                      // 0x0078 (size: 0x8)

}; // Size: 0xB0

class UPopupView : public UViewBaseExtended
{
    class UOverlay* PopupOverlay;                                                     // 0x02C8 (size: 0x8)
    int32 PopupViewZOrder;                                                            // 0x02D0 (size: 0x4)
    class UPopupBase* ActivePopupWidget;                                              // 0x02D8 (size: 0x8)

    void Retry();
    void Discard();
    void Confirm();
    void Cancel();
}; // Size: 0x2F8

class UPoseSearchLocomotionCharacterMovementComponent : public UModelCharacterMovementComponent
{
    float NavWalkingSearchFloorScale;                                                 // 0x0F00 (size: 0x4)
    bool bNavWalkingOrientToSlope;                                                    // 0x0F04 (size: 0x1)
    float NavWalkingOrientToSlopeInterpolationSpeed;                                  // 0x0F08 (size: 0x4)
    float FutureLocationPredictionTime;                                               // 0x0F1C (size: 0x4)
    float PredictionBlockedAngle;                                                     // 0x0F20 (size: 0x4)

}; // Size: 0x11C0

class UPossessedObjectComponent : public USphereComponent
{

    void OnSphereComponentHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void OnSphereComponentBeginOverlap(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0x6F0

class UPossessedObjectEventData : public UGameplayEventData
{

    float GetVFXSize();
    class AActor* GetPossessedObject();
    FVector GetBoundsOffset();
}; // Size: 0x50

class UPossessedShootingWeaponComponent : public UActorComponent
{
    class UAkComponent* WeaponAkComponent;                                            // 0x0190 (size: 0x8)
    class UAkAudioEvent* FireAudioEvent;                                              // 0x0198 (size: 0x8)
    class UAkAudioEvent* FireEventLoop;                                               // 0x01A0 (size: 0x8)
    class UAkAudioEvent* CurrentFireEvent;                                            // 0x01A8 (size: 0x8)
    class UAkAudioEvent* BreakAudioEvent;                                             // 0x01B0 (size: 0x8)
    class UFXSystemComponent* WeaponMuzzleComponent;                                  // 0x01B8 (size: 0x8)

}; // Size: 0x1D0

class UPostUpdateTickAggregationManager : public UBaseTickableManager
{
    FProjectileCollection ProjectilesCollection;                                      // 0x00A8 (size: 0x78)
    FPhysicalManagerCollection PhysicalManagerCollection;                             // 0x0120 (size: 0x78)
    FPhysicsObjectCollection PhysicsObjectCollection;                                 // 0x0198 (size: 0x98)

}; // Size: 0x230

class UPreBlendCinematicComponent : public UObject
{
}; // Size: 0xB8

class UPresentationSettings : public UDeveloperSettings
{
    bool bEnablePresentationSubsystem;                                                // 0x0038 (size: 0x1)
    FString DemoPopupTitleSID;                                                        // 0x0040 (size: 0x10)
    FString DemoPopupDescriptionSID;                                                  // 0x0050 (size: 0x10)
    FString QuestNodeToStopPresentation;                                              // 0x0060 (size: 0x10)
    FString DemoPopupContinuePlaySID;                                                 // 0x0070 (size: 0x10)
    FString DemoPopupToMainMenuSID;                                                   // 0x0080 (size: 0x10)
    int32 PresentationTimer;                                                          // 0x0090 (size: 0x4)
    bool bShowEndPopup;                                                               // 0x0094 (size: 0x1)

}; // Size: 0x98

class UPresentationSubsystem : public UGameInstanceSubsystem
{

    void ResumeGame();
    void GoToMainMenu();
}; // Size: 0xA0

class UPressBuildControlSettingsWidget : public UWidgetBase
{
    class ULocalizedImage* Gamepad;                                                   // 0x0278 (size: 0x8)
    class ULocalizedImage* Keyboard;                                                  // 0x0280 (size: 0x8)

}; // Size: 0x288

class UPressSelectedOptionAction : public UMenuButtonActionBase
{
}; // Size: 0x30

class UProgressBarWidget : public UAbstractProgressBar
{
    class UProgressBar* ProgressBarObj;                                               // 0x0288 (size: 0x8)

}; // Size: 0x290

class UProjectileImpactEffectSubsystem : public UWorldSubsystem
{
    TMap<uint32, FProjectileImpactFXData> ImpactRequests;                             // 0x0030 (size: 0x50)
    class APC* CachedPlayerView;                                                      // 0x0080 (size: 0x8)

}; // Size: 0x90

class UProjectileSpawnSettings : public UDeveloperSettings
{
    float ProjectileAmountRefreshRate;                                                // 0x0038 (size: 0x4)
    float ProjectileActiveKeepTime;                                                   // 0x003C (size: 0x4)
    float ProjectileDesiredPreHeatTime;                                               // 0x0040 (size: 0x4)
    int32 ProjectileExtraPreHeatShots;                                                // 0x0044 (size: 0x4)
    int32 ProjectileSpawnPerFrameAmount;                                              // 0x0048 (size: 0x4)
    int32 MaxDestroyedProjectilesPerFrame;                                            // 0x004C (size: 0x4)

}; // Size: 0x50

class UProjectileSubsystem : public UBaseTickableManager
{
}; // Size: 0x100

class UPrototypeBasedForceFeedbackProcessor : public UForceFeedbackProcessorBase
{
    class UForceFeedbackEffect* DefaultFeedback;                                      // 0x0068 (size: 0x8)
    TMap<class FString, class UForceFeedbackEffect*> PrototypeToFeedback;             // 0x0070 (size: 0x50)
    TMap<class FString, class ERumbleType> PrototypeToRumble;                         // 0x00C0 (size: 0x50)

}; // Size: 0x110

class UProximityGroupManager : public UBaseTickableManager
{
}; // Size: 0xE0

class UPsyNPCComponent : public UActorComponent
{
    class UCurveFloat* DissolveCurve;                                                 // 0x00A0 (size: 0x8)
    class UCurveFloat* GroomCurve;                                                    // 0x00A8 (size: 0x8)
    float DissolveTime;                                                               // 0x00B0 (size: 0x4)

}; // Size: 0xD8

class UPsyNoiseSFXComponent : public UPlayerEffectsSFXComponent
{
}; // Size: 0xD0

class UPsyPhantomComponent : public UActorComponent
{
    float SecondsToAppear;                                                            // 0x00A8 (size: 0x4)
    float SecondsToDisappear;                                                         // 0x00AC (size: 0x4)
    float PhatnomHeightChangeSpeedPerSecond;                                          // 0x00B0 (size: 0x4)
    FName MaterialAlphaParameterName;                                                 // 0x00B4 (size: 0x8)
    FName VFXAlphaParameterName;                                                      // 0x00BC (size: 0x8)
    class UFXSystemAsset* ParticleOnSpawn;                                            // 0x00C8 (size: 0x8)
    class UFXSystemAsset* PhantomHitVFX;                                              // 0x00D0 (size: 0x8)
    class UFXSystemAsset* ParticleOnDeath;                                            // 0x00D8 (size: 0x8)
    class UFXSystemAsset* TrailsParticle;                                             // 0x00E0 (size: 0x8)
    FVector TrailsParticleScale;                                                      // 0x00E8 (size: 0x18)
    class UAkRtpc* RTPC;                                                              // 0x0100 (size: 0x8)
    class UAkAudioEvent* SpawnSound;                                                  // 0x0108 (size: 0x8)
    class UAkAudioEvent* DeathSound;                                                  // 0x0110 (size: 0x8)
    bool bUseDissolveMaterials;                                                       // 0x0118 (size: 0x1)
    float SpawnTimestamp;                                                             // 0x011C (size: 0x4)
    float DeathTimestamp;                                                             // 0x0120 (size: 0x4)
    class UFXSystemComponent* TrailsFX;                                               // 0x0128 (size: 0x8)
    TArray<class UMaterialInstanceDynamic*> DynamicMaterials;                         // 0x0130 (size: 0x10)

    void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0x140

class UPsyPhantomManager : public UBaseTickableManager
{
}; // Size: 0x330

class UPsyVolumeComponent : public UBaseVolumeComponent
{
    TArray<FString> PsyEffectPrototypeSIDs;                                           // 0x0688 (size: 0x10)
    TArray<FString> EndOverlapPsyEffectPrototypeSIDs;                                 // 0x0698 (size: 0x10)
    float PsyTimerMin;                                                                // 0x06A8 (size: 0x4)
    float PsyTimerMax;                                                                // 0x06AC (size: 0x4)

    void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0x7B0

class UPushOptionButton : public UMenuButtonBase
{
}; // Size: 0x300

class UQuestMenuWidget : public UWidgetBase
{
    class UTaskIcon* QuestIcon;                                                       // 0x0278 (size: 0x8)
    class UTextWidget* QuestName;                                                     // 0x0280 (size: 0x8)
    class UTextWidget* QuestLocation;                                                 // 0x0288 (size: 0x8)
    class UVerticalBox* QuestTaskList;                                                // 0x0290 (size: 0x8)
    TSubclassOf<class UTaskMenuWidget> TaskMenuWidgetClass;                           // 0x0298 (size: 0x8)
    FMargin TaskSlotPadding;                                                          // 0x02A0 (size: 0x10)
    FName MainQuestStyleID;                                                           // 0x02B0 (size: 0x8)
    FName SecondaryQuestStyleID;                                                      // 0x02B8 (size: 0x8)
    int32 TaskCap;                                                                    // 0x02C0 (size: 0x4)

}; // Size: 0x2C8

class UQuestNotification : public UWidgetBase
{
    TArray<class UQuestTaskNotification*> TaskWidgets;                                // 0x0288 (size: 0x10)
    FName TextureID;                                                                  // 0x029C (size: 0x8)
    class UTextWidget* QuestTitle;                                                    // 0x02A8 (size: 0x8)
    class UImage* QuestImage;                                                         // 0x02B0 (size: 0x8)
    class UWorldMapTooltipHeader* QuestNotificationHeader;                            // 0x02B8 (size: 0x8)
    class UImage* LabelBackground;                                                    // 0x02C0 (size: 0x8)
    class UImage* ContentLine;                                                        // 0x02C8 (size: 0x8)
    class UTextWidget* LabelText;                                                     // 0x02D0 (size: 0x8)
    class UHintInputController* Hint;                                                 // 0x02D8 (size: 0x8)
    class UVerticalBox* QuestVerticalBox;                                             // 0x02E0 (size: 0x8)
    class UWidgetAnimation* ShowAnimation;                                            // 0x02E8 (size: 0x8)
    class UWidgetAnimation* HideAnimation;                                            // 0x02F0 (size: 0x8)
    bool bMainQuest;                                                                  // 0x02F8 (size: 0x1)
    EUISound QuestAddedSound;                                                         // 0x02FC (size: 0x4)
    EUISound QuestCompletedSound;                                                     // 0x0300 (size: 0x4)
    class UQuestTaskNotification* LastUpdatedTask;                                    // 0x0308 (size: 0x8)
    class UQuestNotificationDataAsset* Settings;                                      // 0x0310 (size: 0x8)
    FString PrototypeID;                                                              // 0x0318 (size: 0x10)
    int32 QuestStagesLen;                                                             // 0x0328 (size: 0x4)
    bool bTaskAnimationWasFinished;                                                   // 0x032C (size: 0x1)
    bool bTaskAnimationWasStarted;                                                    // 0x032D (size: 0x1)

    void HideTasks();
}; // Size: 0x358

class UQuestNotificationDataAsset : public UDataAsset
{
    bool bEnableDelayBetweenNotifications;                                            // 0x0030 (size: 0x1)
    float TimerRate;                                                                  // 0x0034 (size: 0x4)
    float DelayAfterShow;                                                             // 0x0038 (size: 0x4)
    FName TextureParameterName;                                                       // 0x003C (size: 0x8)
    float HoldTimeThreshold;                                                          // 0x0044 (size: 0x4)
    class UTexture2D* BackgroundImageTexture;                                         // 0x0048 (size: 0x8)
    class UTexture2D* LeftLineTexture;                                                // 0x0050 (size: 0x8)
    class UTexture2D* DotsLeftTexture;                                                // 0x0058 (size: 0x8)
    class UTexture2D* DotsRightTexture;                                               // 0x0060 (size: 0x8)
    TSubclassOf<class UUserWidget> TaskClass;                                         // 0x0068 (size: 0x8)
    int32 MaxTaskNumber;                                                              // 0x0070 (size: 0x4)
    int32 MaxTitleLen;                                                                // 0x0074 (size: 0x4)
    FString AppendedEndText;                                                          // 0x0078 (size: 0x10)
    TMap<class EQuestState, class FLinearColor> ColorsPerState;                       // 0x0088 (size: 0x50)
    FLinearColor HeaderColorMainQuest;                                                // 0x00D8 (size: 0x10)
    FLinearColor HeaderColorSideQuest;                                                // 0x00E8 (size: 0x10)
    FMargin TaskPadding;                                                              // 0x00F8 (size: 0x10)
    class UTexture2D* TrackQuestIcon;                                                 // 0x0108 (size: 0x8)
    class UTexture2D* UntrackQuestIcon;                                               // 0x0110 (size: 0x8)
    FString NotNecessaryStyleId;                                                      // 0x0118 (size: 0x10)
    FName StyleTextIdMain;                                                            // 0x0128 (size: 0x8)
    FString NotNecessaryLocalizationSID;                                              // 0x0130 (size: 0x10)
    bool bEnableDelayForHide;                                                         // 0x0140 (size: 0x1)
    float QuestNotificationLifeTime;                                                  // 0x0144 (size: 0x4)
    float QuestNotificationLifeTimeTimerRate;                                         // 0x0148 (size: 0x4)
    FString OpenJournalString;                                                        // 0x0150 (size: 0x10)
    FString TrackQuestString;                                                         // 0x0160 (size: 0x10)
    FString UnTrackQuestString;                                                       // 0x0170 (size: 0x10)
    FString QuestUpdatedL10n;                                                         // 0x0180 (size: 0x10)
    FString QuestFailedL10n;                                                          // 0x0190 (size: 0x10)
    FString QuestFinishedL10n;                                                        // 0x01A0 (size: 0x10)
    FString QuestCancelledL10n;                                                       // 0x01B0 (size: 0x10)
    FString NewQuestL10n;                                                             // 0x01C0 (size: 0x10)
    float RemainingTimeAfterHintAction;                                               // 0x01D0 (size: 0x4)

}; // Size: 0x1D8

class UQuestTaskNotification : public UWidgetBase
{
    class URichTextWidget* TextWidget;                                                // 0x0278 (size: 0x8)
    class UImage* TrackingStage;                                                      // 0x0280 (size: 0x8)
    class UImage* CanceledStage;                                                      // 0x0288 (size: 0x8)
    class UImage* FailedStage;                                                        // 0x0290 (size: 0x8)
    class UImage* FinishedStage;                                                      // 0x0298 (size: 0x8)
    class UImage* UntrackingStage;                                                    // 0x02A0 (size: 0x8)
    class UWidgetAnimation* AppearAnim;                                               // 0x02A8 (size: 0x8)
    class UWidgetAnimation* FailAnim;                                                 // 0x02B0 (size: 0x8)
    class UWidgetAnimation* FinishedAnim;                                             // 0x02B8 (size: 0x8)
    class UWidgetAnimation* CancelAnim;                                               // 0x02C0 (size: 0x8)
    class UWidgetAnimation* LastAnim;                                                 // 0x02E8 (size: 0x8)
    class UWidgetSwitcher* QuestStateSwitcher;                                        // 0x0300 (size: 0x8)

    void PostPlayTaskAnimation(const EQuestTaskAnimationType AnimationType);
    void PlayTaskAnimation(const EQuestTaskAnimationType AnimationType, const bool bWithSound);
    void OnAnimStarted__DelegateSignature();
    void OnAnimFinished__DelegateSignature();
}; // Size: 0x308

class UQuickLoadIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UQuickPanel : public UChildViewBase
{
    bool bFillQuickSlots;                                                             // 0x02C8 (size: 0x1)
    ESortGroup SlotADefaultEquipment;                                                 // 0x02C9 (size: 0x1)
    ESortGroup SlotBDefaultEquipment;                                                 // 0x02CA (size: 0x1)
    ESortGroup SlotCDefaultEquipment;                                                 // 0x02CB (size: 0x1)
    ESortGroup SlotDDefaultEquipment;                                                 // 0x02CC (size: 0x1)
    bool bAnimate;                                                                    // 0x02CD (size: 0x1)
    float UpdateShouldUseAnimationTime;                                               // 0x02D0 (size: 0x4)
    class UWidgetAnimation* AnimPanelHide;                                            // 0x02D8 (size: 0x8)
    class UWidgetAnimation* AnimPanelShow;                                            // 0x02E0 (size: 0x8)
    class UBorder* NavBorder;                                                         // 0x02E8 (size: 0x8)
    class UCanvasPanelSlot* NavBorderSlot;                                            // 0x02F0 (size: 0x8)
    FLinearColor DefaultNavBorderColor;                                               // 0x0320 (size: 0x10)
    FLinearColor DraggingNavBorderColor;                                              // 0x0330 (size: 0x10)
    class UHintInputController* LeftHint;                                             // 0x0348 (size: 0x8)
    class UHintInputController* RightHint;                                            // 0x0350 (size: 0x8)
    class UQuickSlot* QuickSlot1;                                                     // 0x0358 (size: 0x8)
    class UQuickSlot* QuickSlot3;                                                     // 0x0360 (size: 0x8)
    class UQuickSlot* QuickSlot2;                                                     // 0x0368 (size: 0x8)
    class UQuickSlot* QuickSlot4;                                                     // 0x0370 (size: 0x8)
    TArray<class UQuickSlot*> QuickSlots;                                             // 0x0378 (size: 0x10)
    class UImage* HoldProgressLeft;                                                   // 0x0388 (size: 0x8)
    class UImage* HoldProgressRight;                                                  // 0x0390 (size: 0x8)
    class UHintAction* HintLeft;                                                      // 0x0398 (size: 0x8)
    class UHintAction* HintRight;                                                     // 0x03A0 (size: 0x8)
    float HoldInactiveOpacity;                                                        // 0x03A8 (size: 0x4)
    float HoldActiveOpacity;                                                          // 0x03AC (size: 0x4)
    float HidePanelDelay;                                                             // 0x03B0 (size: 0x4)
    float QuickSlotsFadeIn;                                                           // 0x03B4 (size: 0x4)
    float QuickSlotsFadeOut;                                                          // 0x03B8 (size: 0x4)
    bool bInventoryQuickPanel;                                                        // 0x03BC (size: 0x1)
    class UQuickSlot* CurrSelectedSlot;                                               // 0x03C0 (size: 0x8)
    class UInventoryNew* InventoryNew;                                                // 0x0410 (size: 0x8)

    void UpdateShouldUseAnimation();
    bool PlayShouldUseAnimationIfRequired(ESortGroup InSortGroup);
    void OnQuickSlotMouseLeave(class UQuickSlot* HoveredWidget);
    void OnQuickSlotMouseEnter(class UQuickSlot* ItemWidget);
}; // Size: 0x470

class UQuickSaveGameAction : public USaveLoadActionBase
{
}; // Size: 0xC0

class UQuickSaveIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UQuickSaveManager : public UBaseManager
{
}; // Size: 0x80

class UQuickSlot : public UWidgetBase
{
    class UImageWidget* Icon;                                                         // 0x02F0 (size: 0x8)
    class UImage* Background;                                                         // 0x02F8 (size: 0x8)
    class UImage* DefaultImage;                                                       // 0x0300 (size: 0x8)
    class UImage* UseFrame;                                                           // 0x0308 (size: 0x8)
    class UImage* ShouldUseFrame;                                                     // 0x0310 (size: 0x8)
    class UImage* HighlightImage;                                                     // 0x0318 (size: 0x8)
    class UTextWidget* ItemCountText;                                                 // 0x0320 (size: 0x8)
    class USizeBox* IconSizeBox;                                                      // 0x0328 (size: 0x8)
    class UImage* InventoryHighlightImage;                                            // 0x0330 (size: 0x8)
    class UWidgetAnimation* ClickAnimation;                                           // 0x0338 (size: 0x8)
    class UWidgetAnimation* ShouldUseAnimation;                                       // 0x0340 (size: 0x8)
    int32 SlotIndex;                                                                  // 0x0348 (size: 0x4)
    class UTexture2D* BackgroundTexture;                                              // 0x0350 (size: 0x8)
    class UTexture2D* UseFrameTexture;                                                // 0x0358 (size: 0x8)
    class UTexture2D* ShouldUseFrameTexture;                                          // 0x0360 (size: 0x8)
    class UTexture2D* DefaultIconTexture;                                             // 0x0368 (size: 0x8)
    class UTexture2D* InventoryHighlightTexture;                                      // 0x0370 (size: 0x8)
    float QuickSlotSize;                                                              // 0x0378 (size: 0x4)
    float IconSize;                                                                   // 0x037C (size: 0x4)
    bool bEnableHint;                                                                 // 0x0380 (size: 0x1)
    bool bEnableCountText;                                                            // 0x0381 (size: 0x1)
    bool bEnableTransparency;                                                         // 0x0382 (size: 0x1)
    bool bEnableClickAnimation;                                                       // 0x0383 (size: 0x1)
    bool bEnableShouldUseAnimation;                                                   // 0x0384 (size: 0x1)
    FName IconOnTextureParam;                                                         // 0x0388 (size: 0x8)
    float LowTransparency;                                                            // 0x0390 (size: 0x4)
    float HighTransparency;                                                           // 0x0394 (size: 0x4)
    float ClickAnimationSpeed;                                                        // 0x0398 (size: 0x4)
    float ShouldUseAnimationSpeed;                                                    // 0x039C (size: 0x4)
    int32 ShouldUseAnimationDuration;                                                 // 0x03A0 (size: 0x4)
    int32 ShouldUseAnimationCooldown;                                                 // 0x03A4 (size: 0x4)
    TMap<class ESortGroup, class TSoftObjectPtr<UTexture2D>> SortGroupToIconMap;      // 0x03A8 (size: 0x50)
    class UImage* SlotTypeIcon;                                                       // 0x03F8 (size: 0x8)

    void StopCooldown();
}; // Size: 0x440

class UQuickSlot1IPU : public UQuickSlotBaseIPU
{
}; // Size: 0x48

class UQuickSlot2IPU : public UQuickSlotBaseIPU
{
}; // Size: 0x48

class UQuickSlot3IPU : public UQuickSlotBaseIPU
{
}; // Size: 0x48

class UQuickSlot4IPU : public UQuickSlotBaseIPU
{
}; // Size: 0x48

class UQuickSlotBaseIPU : public UInputProcessingUnit
{
}; // Size: 0x48

class UQuitAction : public UMenuButtonActionBase
{
}; // Size: 0x30

class UQuitToMainMenuAction : public UMenuButtonActionBase
{
    bool bForceQuit;                                                                  // 0x0030 (size: 0x1)

}; // Size: 0x38

class URazerChromaCinematicEventTracker : public UObject
{
    class URazerChromaSubsystem* Subsystem;                                           // 0x0078 (size: 0x8)

}; // Size: 0x80

class URazerChromaEventTracker : public UObject
{
    class URazerChromaSubsystem* Subsystem;                                           // 0x0170 (size: 0x8)

}; // Size: 0x178

class URazerChromaSettings : public UDeveloperSettings
{
    FString ContentBasePath;                                                          // 0x0038 (size: 0x10)
    FString AnimationSuffix;                                                          // 0x0048 (size: 0x10)
    TArray<FString> SupportedDevices;                                                 // 0x0058 (size: 0x10)
    float OneTimeEventLifetime;                                                       // 0x0068 (size: 0x4)
    FRazerChromaEvent KillEvent;                                                      // 0x0070 (size: 0x18)
    FRazerChromaEvent UseConsumableEvent;                                             // 0x0088 (size: 0x18)
    FRazerChromaEvent AchievementUnlockedEvent;                                       // 0x00A0 (size: 0x18)
    FRazerChromaEvent PlayerNoticedEvent;                                             // 0x00B8 (size: 0x18)
    FRazerChromaEvent SaveGameEvent;                                                  // 0x00D0 (size: 0x18)
    FRazerChromaEvent ArtifactPickupEvent;                                            // 0x00E8 (size: 0x18)
    FRazerChromaEvent ArtifactVisualizedEvent;                                        // 0x0100 (size: 0x18)
    FRazerChromaEvent DetectorPingEvent;                                              // 0x0118 (size: 0x18)
    FRazerChromaEvent ChangeFireTypeEvent;                                            // 0x0130 (size: 0x18)
    FRazerChromaEvent ChangeAmmoTypeEvent;                                            // 0x0148 (size: 0x18)
    FRazerChromaEvent ChangeWeaponEvent;                                              // 0x0160 (size: 0x18)
    FRazerChromaEvent ToggleUnderbarrelEvent;                                         // 0x0178 (size: 0x18)
    FRazerChromaEvent LooseShootEvent;                                                // 0x0190 (size: 0x18)
    TArray<FRazerChromaDamageSettings> DamageEvents;                                  // 0x01A8 (size: 0x10)
    FRazerChromaEvent ActivePDAEvent;                                                 // 0x01B8 (size: 0x18)
    FRazerChromaEvent OverweightEvent;                                                // 0x01D0 (size: 0x18)
    FRazerChromaEvent SprintEvent;                                                    // 0x01E8 (size: 0x18)
    FRazerChromaEvent DeathEvent;                                                     // 0x0200 (size: 0x18)
    FRazerChromaEvent IdleEvent;                                                      // 0x0218 (size: 0x18)
    FRazerChromaEvent ReloadEvent;                                                    // 0x0230 (size: 0x18)
    FRazerChromaEvent NoAmmoEvent;                                                    // 0x0248 (size: 0x18)
    FRazerChromaEvent WeaponJammedEvent;                                              // 0x0260 (size: 0x18)
    FRazerChromaEvent AudioLogEvent;                                                  // 0x0278 (size: 0x18)
    TMap<class EVitalType, class FRazerChromaVitalsSettings> VitalsEvents;            // 0x0290 (size: 0x50)
    TMap<class FGameplayTag, class FRazerChromaEvent> CinematicEvents;                // 0x02E0 (size: 0x50)

}; // Size: 0x330

class URazerChromaSubsystem : public UGameInstanceSubsystem
{
    class URazerChromaEventTracker* EventTracker;                                     // 0x0058 (size: 0x8)
    class URazerChromaCinematicEventTracker* CinematicEventTracker;                   // 0x0060 (size: 0x8)

}; // Size: 0x68

class URegionToEpicIDConfig : public UDeveloperSettings
{
    TMap<ERegion, int32> RegionToEpicMap;                                             // 0x0038 (size: 0x50)

}; // Size: 0x88

class URemoveNeedEffect : public UContextualActionEffect
{
    EContextualActionNeeds ContextualActionNeedForRemove;                             // 0x0028 (size: 0x4)

}; // Size: 0x30

class URepairPriceWidget : public UWidgetBase
{
    class UTextBlock* Price;                                                          // 0x0278 (size: 0x8)

}; // Size: 0x280

class UResetToDefaultSettings : public UMenuButtonActionBase
{
}; // Size: 0x30

class UResumeAction : public UMenuButtonActionBase
{
}; // Size: 0x30

class URichPresenceSubsystem : public ULocalPlayerSubsystem
{
}; // Size: 0xB0

class URichTextBlockWidgetDecorator : public URichTextBlockDecorator
{
    TArray<class UUserWidget*> ChachedWidgetsCreatedByDecorator;                      // 0x0028 (size: 0x10)
    class UDataTable* WidgetSet;                                                      // 0x0038 (size: 0x8)

}; // Size: 0x40

class URichTextWidget : public URichTextBlock
{
    bool bEnableStyleManager;                                                         // 0x0930 (size: 0x1)

}; // Size: 0x940

class URightClickMenuItemWidget : public UUserWidget
{
    class UButton* ButtonClick;                                                       // 0x0278 (size: 0x8)
    class UTextWidget* Label;                                                         // 0x0280 (size: 0x8)
    class UImage* UnhoveredBackground;                                                // 0x0288 (size: 0x8)
    class UImage* HoveredBackground;                                                  // 0x0290 (size: 0x8)
    FLinearColor TextColorHovered;                                                    // 0x0298 (size: 0x10)
    FLinearColor TextColorUnhovered;                                                  // 0x02A8 (size: 0x10)
    TSubclassOf<class UUserWidget> MenuItemWidgetClass;                               // 0x02B8 (size: 0x8)

    void OnButtonUnHovered();
    void OnButtonHovered();
    void OnButtonClick();
}; // Size: 0x328

class URightClickMenuWidget : public UUserWidget
{
    class UVerticalBox* Menu;                                                         // 0x0278 (size: 0x8)
    class UImage* Left_NoTile;                                                        // 0x0280 (size: 0x8)
    class UImage* Right_NoTile;                                                       // 0x0288 (size: 0x8)
    TSubclassOf<class UUserWidget> MenuItemWidgetClass;                               // 0x0290 (size: 0x8)
    class UWidgetAnimation* RadiationMark;                                            // 0x0298 (size: 0x8)
    int32 NoTileBordersElementsNum;                                                   // 0x02E0 (size: 0x4)

    void OnNoItemClick();
    void OnItemHover(const FRightClickMenuItemData& Data, const bool bInHover);
    void OnItemClicked(const FRightClickMenuItemData& Data);
}; // Size: 0x300

class URootMotionModifier_WarpWithScale : public URootMotionModifier_SkewWarp
{
    FName ScaleWarpTargetName;                                                        // 0x0250 (size: 0x8)

}; // Size: 0x260

class US2TargetMeleeSectorComponent : public UTargetMeleeSectorComponent
{
}; // Size: 0x150

class USafeZoneApply : public UMenuButtonActionBase
{
}; // Size: 0x30

class USafeZoneButton : public UWidgetBase
{
}; // Size: 0x278

class USafeZoneReset : public UMenuButtonActionBase
{
}; // Size: 0x30

class USafeZoneWidget : public UMenuSubViewBase
{
    float Speed;                                                                      // 0x02D0 (size: 0x4)
    float MinScale;                                                                   // 0x02D4 (size: 0x4)
    float MaxScale;                                                                   // 0x02D8 (size: 0x4)
    float MinValue;                                                                   // 0x02DC (size: 0x4)
    float MaxValue;                                                                   // 0x02E0 (size: 0x4)
    float MaxX;                                                                       // 0x02E4 (size: 0x4)
    float MaxY;                                                                       // 0x02E8 (size: 0x4)
    double DefaultScale;                                                              // 0x02F0 (size: 0x8)
    float ValueX;                                                                     // 0x02F8 (size: 0x4)
    class UImageWidget* LeftTopCorner;                                                // 0x0300 (size: 0x8)
    class UImageWidget* RightTopCorner;                                               // 0x0308 (size: 0x8)
    class UImageWidget* LeftDownCorner;                                               // 0x0310 (size: 0x8)
    class UImageWidget* RightDownCorner;                                              // 0x0318 (size: 0x8)
    class UImageWidget* Border;                                                       // 0x0320 (size: 0x8)

    void HandleEditSafeZoneMoveBordersIncreaseWidth();
    void HandleEditSafeZoneMoveBordersIncreaseHeight();
    void HandleEditSafeZoneMoveBordersDecreaseWidth();
    void HandleEditSafeZoneMoveBordersDecreaseHeight();
}; // Size: 0x330

class USaveButtonStateDefiner : public UMenuButtonStateDefiner
{
}; // Size: 0x30

class USaveGameAction : public USaveLoadActionBase
{
}; // Size: 0xC0

class USaveLoadActionBase : public UMenuButtonActionBase
{
}; // Size: 0xC0

class USaveLoadIO : public UObject
{
}; // Size: 0x28

class USaveLoadManager : public UBaseManager
{
    class USaveLoadIO* SaveLoadIO;                                                    // 0x0078 (size: 0x8)
    TMap<class FName, class FString> DLCUserFriendlyNames;                            // 0x0138 (size: 0x50)

}; // Size: 0x190

class USaveLoadNotificationBase : public UWidgetBase
{
    class UWidgetAnimation* FadeInAnimation;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* FadeOutAnimation;                                         // 0x0280 (size: 0x8)
    class UWidgetAnimation* BlinkingAnimation;                                        // 0x0288 (size: 0x8)
    class UTextWidget* Title;                                                         // 0x02B0 (size: 0x8)
    class UTextWidget* Description;                                                   // 0x02B8 (size: 0x8)
    class USizeBox* SizeBox;                                                          // 0x02C0 (size: 0x8)
    class UImage* Icon;                                                               // 0x02C8 (size: 0x8)
    float SingleLineDescWidth;                                                        // 0x02D0 (size: 0x4)
    float TwoLineDescWidth;                                                           // 0x02D4 (size: 0x4)
    float ThreeLineDescWidth;                                                         // 0x02D8 (size: 0x4)
    float TimerRate;                                                                  // 0x02DC (size: 0x4)
    class UTexture2D* FloppyDisk;                                                     // 0x02E0 (size: 0x8)
    class UTexture2D* BrokenFloppyDisk;                                               // 0x02E8 (size: 0x8)

}; // Size: 0x300

class USaveLoadNotificationManager : public UBaseManager
{
    class USaveLoadNotificationView* SaveLoadNotificationView;                        // 0x0078 (size: 0x8)

}; // Size: 0xB0

class USaveLoadNotificationView : public UViewBaseExtended
{
    class UOverlay* SaveLoadNotificationOverlay;                                      // 0x02D8 (size: 0x8)
    int32 SaveLoadNotificationViewZOrder;                                             // 0x02E0 (size: 0x4)
    FMargin DefaultNotifyPadding;                                                     // 0x02E4 (size: 0x10)
    class USaveLoadNotificationBase* ActiveSaveLoadNotificationWidget;                // 0x02F8 (size: 0x8)

}; // Size: 0x300

class USaveScreenSubView : public UMenuSubViewBase
{
    class USaveLoadActionBase* SaveButtonActionPrototype;                             // 0x02D0 (size: 0x8)
    TSubclassOf<class UMenuButtonBase> SaveButtonStyleClass;                          // 0x02D8 (size: 0x8)
    TArray<FShortcutData> SaveButtonShortcuts;                                        // 0x02E0 (size: 0x10)
    class USaveLoadActionBase* NewSaveButtonActionPrototype;                          // 0x02F0 (size: 0x8)
    TSubclassOf<class UMenuButtonBase> NewSaveButtonStyleClass;                       // 0x02F8 (size: 0x8)
    TSubclassOf<class UMenuButtonBase> BlockedButtonStyleClass;                       // 0x0300 (size: 0x8)
    TArray<FShortcutData> NewSaveButtonShortcuts;                                     // 0x0308 (size: 0x10)
    TSet<ESaveType> SaveTypesToShow;                                                  // 0x0318 (size: 0x50)
    bool bLoadPage;                                                                   // 0x0368 (size: 0x1)
    class UMenuButtonActionBase* BlockedSaveButtonAction;                             // 0x0370 (size: 0x8)
    class UMenuButtonActionBase* SaveButtonAction;                                    // 0x0378 (size: 0x8)
    class UMenuNavigationPanelBase* NavigationPanel;                                  // 0x0380 (size: 0x8)

    void OnNavigationButtonPressed(const int32 InButtonIndex);
}; // Size: 0x390

class USaveSlotButton : public UMenuButtonBase
{
    class UImage* Thumbnail;                                                          // 0x0300 (size: 0x8)
    class UImage* Background;                                                         // 0x0308 (size: 0x8)
    class UImage* CompatibilityImage;                                                 // 0x0310 (size: 0x8)
    class UEditableTextBox* SaveName;                                                 // 0x0318 (size: 0x8)
    class UTextWidget* DateTime;                                                      // 0x0320 (size: 0x8)
    class UTextWidget* GameDuration;                                                  // 0x0328 (size: 0x8)
    class UTextWidget* SaveTypeText;                                                  // 0x0330 (size: 0x8)
    class UTextWidget* LocationName;                                                  // 0x0338 (size: 0x8)
    TArray<FShortcutData> RenameStateShortcuts;                                       // 0x0340 (size: 0x10)
    FString DateTimeFormat;                                                           // 0x0350 (size: 0x10)
    FString GameDurationTimeFormat;                                                   // 0x0360 (size: 0x10)
    FLinearColor CompatibleSaveColor;                                                 // 0x0370 (size: 0x10)
    FLinearColor PartiallyCompatibleSaveColor;                                        // 0x0380 (size: 0x10)
    FLinearColor NonCompatibleSaveColor;                                              // 0x0390 (size: 0x10)
    TArray<TSoftObjectPtr<UTexture2D>> SaveIcons;                                     // 0x03A0 (size: 0x10)
    TSoftObjectPtr<UTexture2D> CorruptedSaveThumbnail;                                // 0x03B0 (size: 0x30)

}; // Size: 0x3E0

class UScarBossComponent : public UActorComponent
{
    TArray<FScarPhaseData> Phases;                                                    // 0x00A8 (size: 0x10)
    FPrototypeSID StunMeshGenerator;                                                  // 0x00B8 (size: 0x40)

}; // Size: 0x148

class UScenarioManager : public UBaseTickableManager
{
    TArray<class UPlaySoundQuestNodeListener*> PlaySoundQuestNodeListeners;           // 0x04D8 (size: 0x10)

}; // Size: 0x588

class USearchpointDetectorComponent : public UPassiveDetectorComponent
{
}; // Size: 0xE0

class USecuritySettings : public UDeveloperSettings
{
    FString Watermark;                                                                // 0x0038 (size: 0x10)
    bool bDisplayWatermark;                                                           // 0x0048 (size: 0x1)

}; // Size: 0x50

class USelectNextOption : public UMenuButtonActionBase
{
}; // Size: 0x30

class USelectPreviousOption : public UMenuButtonActionBase
{
}; // Size: 0x30

class USelectedAnswerMark : public UWidgetBase
{
    class UUserWidget* Hint;                                                          // 0x0278 (size: 0x8)
    class UImage* LockSwitcher;                                                       // 0x0280 (size: 0x8)
    class UImage* Background;                                                         // 0x0288 (size: 0x8)
    class UOverlay* TimerContainer;                                                   // 0x0290 (size: 0x8)

}; // Size: 0x2E0

class USequenceComponent : public UObject
{
    class UPreBlendCinematicComponent* PreBlendCinematicComponent;                    // 0x0038 (size: 0x8)

    void OnSequenceStarted();
    void OnSequenceFinished();
}; // Size: 0x88

class USetCampaign : public UGotoViewAction
{
}; // Size: 0x78

class USetCampaignWithoutDifficulty : public UStartGameAction
{
    FString DifficultyPrototypeSID;                                                   // 0x0030 (size: 0x10)

}; // Size: 0x40

class USetDifficulty : public UStartGameAction
{
    FString DifficultySID;                                                            // 0x0030 (size: 0x10)

}; // Size: 0x40

class USetDifficultyWithWarning : public USetDifficulty
{
    FString WarningSID;                                                               // 0x0040 (size: 0x10)

}; // Size: 0x50

class USettingElement : public UWidgetBase
{
    bool bShouldHideOnShipping;                                                       // 0x0290 (size: 0x1)
    bool bShouldHideOnPresentation;                                                   // 0x0291 (size: 0x1)
    FName HoveredTextStyle;                                                           // 0x0294 (size: 0x8)
    FName TextStyle;                                                                  // 0x029C (size: 0x8)
    class UImage* Background;                                                         // 0x02A8 (size: 0x8)
    class UTexture2D* HoveredBackground;                                              // 0x02B0 (size: 0x8)
    class UTexture2D* UnhoveredBackground;                                            // 0x02B8 (size: 0x8)
    FButtonStyle HoveredArrow;                                                        // 0x02C0 (size: 0x470)
    FButtonStyle UnHoveredArrow;                                                      // 0x0730 (size: 0x470)
    FProgressBarStyle HoveredSlider;                                                  // 0x0BA0 (size: 0x2F0)
    FProgressBarStyle UnHoveredSlider;                                                // 0x0E90 (size: 0x2F0)
    FSliderStyle HoveredThumbSlider;                                                  // 0x1180 (size: 0x5C0)
    FSliderStyle UnHoveredThumbSlider;                                                // 0x1740 (size: 0x5C0)
    class UTextWidget* NameText;                                                      // 0x1D00 (size: 0x8)
    class UTextWidget* ValueText;                                                     // 0x1D08 (size: 0x8)
    class UButton* LeftButton;                                                        // 0x1D10 (size: 0x8)
    class UButton* RightButton;                                                       // 0x1D18 (size: 0x8)
    class UButton* LeftButtonImage;                                                   // 0x1D20 (size: 0x8)
    class UButton* RightButtonImage;                                                  // 0x1D28 (size: 0x8)
    class UProgressBar* ProgressBar;                                                  // 0x1D30 (size: 0x8)
    class USlider* Slider;                                                            // 0x1D38 (size: 0x8)
    FString NameLocSID;                                                               // 0x1D40 (size: 0x10)
    FString DescriptionLocSID;                                                        // 0x1D50 (size: 0x10)
    TArray<class USettingElement*> WidgetDependencies;                                // 0x1D60 (size: 0x10)
    EInputTypeForButtons InputTypeToDisplayButton;                                    // 0x1D70 (size: 0x1)
    bool bIsSpecialButton;                                                            // 0x1D72 (size: 0x1)
    class USettingsMenuSubView* Settings;                                             // 0x1D78 (size: 0x8)

    void OnRightButtonClicked();
    void OnLeftButtonClicked();
    bool GetIsEnabledElement();
}; // Size: 0x1D80

class USettingElementBindedInput : public USettingElementInput
{
}; // Size: 0x1E60

class USettingElementButton : public USettingElement
{
    ENestingIndex NestingWindowIndex;                                                 // 0x1D98 (size: 0x1)

    void ChangeLegendOnUnhovered();
    void ChangeLegendOnHovered();
}; // Size: 0x1DA0

class USettingElementInput : public USettingElement
{
    class UHintImageKeyboard* LeftHintImage;                                          // 0x1D80 (size: 0x8)
    class UHintImageKeyboard* RightHintImage;                                         // 0x1D88 (size: 0x8)
    EMappingContext MappingContext;                                                   // 0x1D90 (size: 0x4)
    FString PopupDescription;                                                         // 0x1E10 (size: 0x10)
    FString PopupTitle;                                                               // 0x1E20 (size: 0x10)
    FString PopupApplyHintSID;                                                        // 0x1E30 (size: 0x10)
    FString PopupCancelHintSID;                                                       // 0x1E40 (size: 0x10)

}; // Size: 0x1E50

class USettingElementOnOff : public USettingElement
{
    bool bDisableDependenciesWhenValueIs;                                             // 0x1DB1 (size: 0x1)

}; // Size: 0x1DC0

class USettingElementSwitcher : public USettingElement
{
    TMap<int32, FString> ValuesToLocSID;                                              // 0x1D98 (size: 0x50)
    TArray<int32> AvailableValues;                                                    // 0x1DE8 (size: 0x10)
    int32 Value;                                                                      // 0x1DF8 (size: 0x4)
    bool bLocalizeValues;                                                             // 0x1DFC (size: 0x1)
    int32 DisableDependenciesWhenValueIs;                                             // 0x1E00 (size: 0x4)
    TArray<int32> DisableDependenciesValues;                                          // 0x1E08 (size: 0x10)
    bool bWrapValueAround;                                                            // 0x1E18 (size: 0x1)
    bool bUpdateDescriptionOnValueChange;                                             // 0x1E20 (size: 0x1)
    TMap<int32, FString> ValuesToDescriptionSID;                                      // 0x1E28 (size: 0x50)
    bool bReverseValues;                                                              // 0x1E78 (size: 0x1)

    void SortValues();
}; // Size: 0x1E80

class USettingElementValueLocSwitcher : public USettingElement
{
    TArray<FValueLocalisationPair> Values;                                            // 0x1D98 (size: 0x10)
    int32 Index;                                                                      // 0x1DAC (size: 0x4)

}; // Size: 0x1DB0

class USettingsCategory : public UWidgetBase
{
    FString CategoryNameSID;                                                          // 0x0278 (size: 0x10)
    class UTextWidget* CategoryNameText;                                              // 0x0288 (size: 0x8)

}; // Size: 0x290

class USettingsElementPercent : public USettingElement
{
    float Value;                                                                      // 0x1D98 (size: 0x4)
    float MaxValue;                                                                   // 0x1D9C (size: 0x4)
    float MinValue;                                                                   // 0x1DA0 (size: 0x4)
    float Step;                                                                       // 0x1DA4 (size: 0x4)
    bool bShowPercentSign;                                                            // 0x1DA8 (size: 0x1)
    FFloatValueLocalisationPair ReplacedValue;                                        // 0x1DB0 (size: 0x20)

    void SetValue(const float InValue, const bool bForce);
}; // Size: 0x1DD0

class USettingsElementRefreshRateSwitcher : public USettingElement
{
}; // Size: 0x1DC0

class USettingsElementResolutionSwitcher : public USettingElement
{
}; // Size: 0x1DC0

class USettingsManager : public UBaseTickableManager
{
    class UAkRtpc* MainVolumeRTPCParameter;                                           // 0x01A8 (size: 0x8)
    class UAkRtpc* MusicVolumeRTPCParameter;                                          // 0x01B0 (size: 0x8)
    class UAkRtpc* EffectsVolumeRTPCParameter;                                        // 0x01B8 (size: 0x8)
    class UAkRtpc* DialogueVolumeRTPCParameter;                                       // 0x01C0 (size: 0x8)
    class UAkRtpc* MuteAllRTPCParameter;                                              // 0x01C8 (size: 0x8)
    class UAkRtpc* DisableCopyrightedMusicRTPCParameter;                              // 0x01D0 (size: 0x8)
    class UAkEffectShareSet* FullAkEffectShareSet;                                    // 0x01D8 (size: 0x8)
    class UAkEffectShareSet* MediumAkEffectShareSet;                                  // 0x01E0 (size: 0x8)
    class UAkEffectShareSet* NarrowAkEffectShareSet;                                  // 0x01E8 (size: 0x8)

}; // Size: 0x1F8

class USettingsMenuSubView : public UMenuSubViewBase
{
    class USettingsView* SettingsView;                                                // 0x02D0 (size: 0x8)
    class UMenuButtonModel* ElementButtonHoveredMenuButtonModel;                      // 0x02D8 (size: 0x8)
    class UMenuButtonModel* SubCategoryMenuButtonModel;                               // 0x02E0 (size: 0x8)

}; // Size: 0x2F0

class USettingsNavigationButton : public UButtonBase
{
    class UImage* SelectLine;                                                         // 0x02C0 (size: 0x8)
    class UTextWidget* ButtonText;                                                    // 0x02C8 (size: 0x8)
    bool bEnableLocalisation;                                                         // 0x02D0 (size: 0x1)
    FString ButtonLocalizationSID;                                                    // 0x02D8 (size: 0x10)
    FText DisplayText;                                                                // 0x02E8 (size: 0x18)
    bool bEnableSelectAnimation;                                                      // 0x0300 (size: 0x1)
    bool bEnableByDefault;                                                            // 0x0301 (size: 0x1)
    int32 ButtonIndex;                                                                // 0x0304 (size: 0x4)
    FName SetStyleIdHover;                                                            // 0x0308 (size: 0x8)
    FName SetStyleIdUnHover;                                                          // 0x0310 (size: 0x8)
    bool bShouldHideOnPresentation;                                                   // 0x0318 (size: 0x1)
    ESettingCategoryType Category;                                                    // 0x0319 (size: 0x1)
    bool bEnablePopupOnSlotSwitch;                                                    // 0x031A (size: 0x1)

}; // Size: 0x338

class USettingsNavigationPanel : public UWidgetBase
{
    class UPanelWidget* SlotContainer;                                                // 0x0278 (size: 0x8)
    class UScrollBox* NavPanelScroll;                                                 // 0x0280 (size: 0x8)

}; // Size: 0x290

class USettingsPage : public UWidgetBase
{
    class UScrollBox* OptionsContainer;                                               // 0x0278 (size: 0x8)
    ESettingCategoryType Category;                                                    // 0x0280 (size: 0x1)

}; // Size: 0x290

class USettingsView : public UViewBaseExtended
{
    class USettingsNavigationPanel* NavigationPanel;                                  // 0x02C8 (size: 0x8)
    class USettingsNavigationPanel* NavigationPanelMapping;                           // 0x02D0 (size: 0x8)
    class UWidgetSwitcher* NavPanelSwitcher;                                          // 0x02D8 (size: 0x8)
    class UWidgetSwitcher* CategorySwitcher;                                          // 0x02E0 (size: 0x8)
    class UWidgetSwitcher* NestingSwitcher;                                           // 0x02E8 (size: 0x8)
    class UTextWidget* SettingName;                                                   // 0x02F0 (size: 0x8)
    class UTextWidget* SettingDescription;                                            // 0x02F8 (size: 0x8)
    class USizeBox* SettingsVisualizationBox;                                         // 0x0300 (size: 0x8)
    class ULocalizedImage* SettingsVisualization;                                     // 0x0308 (size: 0x8)
    class UImage* DescriptionLine;                                                    // 0x0310 (size: 0x8)
    class USettingsPage* KeyboardMapping;                                             // 0x0318 (size: 0x8)
    FString SavePopupTitleSID;                                                        // 0x0320 (size: 0x10)
    FString SavePopupDescSID;                                                         // 0x0330 (size: 0x10)
    FString SavePopupButtonSID;                                                       // 0x0340 (size: 0x10)
    FString ExitPopupTitleSID;                                                        // 0x0350 (size: 0x10)
    FString ExitPopupDescSID;                                                         // 0x0360 (size: 0x10)
    FString ExitPopupButtonOkSID;                                                     // 0x0370 (size: 0x10)
    FString ExitPopupButtonNoSID;                                                     // 0x0380 (size: 0x10)
    FString ResetPopupTitleSID;                                                       // 0x0390 (size: 0x10)
    FString ResetPopupDescSID;                                                        // 0x03A0 (size: 0x10)
    FString ResetPopupButtonOkSID;                                                    // 0x03B0 (size: 0x10)
    FString ResetPopupButtonNoSID;                                                    // 0x03C0 (size: 0x10)
    FString ExitToSettingsPopupTitleSID;                                              // 0x03D0 (size: 0x10)
    FString NeedRestartPopupDescSID;                                                  // 0x03E0 (size: 0x10)
    TSoftObjectPtr<UTexture2D> KeyboardMappingTexture;                                // 0x03F0 (size: 0x30)

}; // Size: 0x450

class UShippingButtonStateDefiner : public UMenuButtonStateDefiner
{
}; // Size: 0x30

class UShootingWeaponComponent : public USceneComponent
{
    FPrototypeSID WeaponPrototypeSID;                                                 // 0x02A0 (size: 0x40)

    void ShootWithOwnerOverride(class UObject* OwnerOverride);
    void Shoot();
}; // Size: 0x350

class UShotgunRecoilTextureDataAsset : public UGunRecoilTextureDataAsset
{
    TArray<FBuckRecoilKeys> RecoilPatternBuckKeys;                                    // 0x0050 (size: 0x10)

}; // Size: 0x60

class UShowOverrideCampaignPopup : public UMenuButtonActionBase
{
    TSoftClassPtr<UMenuSubViewBase> DestinationAfterConfirm;                          // 0x0030 (size: 0x30)
    FString TitleSID;                                                                 // 0x0060 (size: 0x10)
    FString DescriptionSID;                                                           // 0x0070 (size: 0x10)
    FString AcceptButtonNameSID;                                                      // 0x0080 (size: 0x10)
    FString DeclineButtonNameSID;                                                     // 0x0090 (size: 0x10)

}; // Size: 0xA0

class UShowOverrideCampaignPopupGameStart : public UMenuButtonActionBase
{
    FString DifficultyPrototypeSID;                                                   // 0x0030 (size: 0x10)
    FString TitleSID;                                                                 // 0x0040 (size: 0x10)
    FString DescriptionSID;                                                           // 0x0050 (size: 0x10)
    FString AcceptButtonNameSID;                                                      // 0x0060 (size: 0x10)
    FString DeclineButtonNameSID;                                                     // 0x0070 (size: 0x10)

}; // Size: 0x80

class UShowPopupAction : public UMenuButtonActionBase
{
    FString TitleSID;                                                                 // 0x0030 (size: 0x10)
    FString DescriptionSID;                                                           // 0x0040 (size: 0x10)
    FString AcceptButtonNameSID;                                                      // 0x0050 (size: 0x10)
    FString DeclineButtonNameSID;                                                     // 0x0060 (size: 0x10)

}; // Size: 0x70

class UShowSafeZoneViewButton : public UMenuButtonBase
{
}; // Size: 0x300

class USignalProcessingSubsystem : public UGameInstanceSubsystem
{
}; // Size: 0xE0

class USignalReceiverComponent : public UGuidActorComponent
{
    FSignalReceiverComponentOnSignalReceived OnSignalReceived;                        // 0x00B8 (size: 0x1)
    void SignalReceiverComponentReceiveSignature(class UObject* DataObject);
    bool bCanBeUsedInQuests;                                                          // 0x00B9 (size: 0x1)

}; // Size: 0xC0

class USignalSenderComponent : public UGuidActorComponent
{
    TArray<FSignalToSend> Signals;                                                    // 0x00B8 (size: 0x10)

    void Send(class UObject* DataObject);
}; // Size: 0xC8

class USimpleAxisIPU : public UInputProcessingUnit
{
}; // Size: 0xE0

class USimpleForceFeedbackProcessor : public UForceFeedbackProcessorBase
{
    class UForceFeedbackEffect* Feedback;                                             // 0x0068 (size: 0x8)

}; // Size: 0x70

class USingleClickComponent : public UInteractionComponent
{
    FSingleClickComponentOnSingleClickInteractFailed OnSingleClickInteractFailed;     // 0x01C8 (size: 0x10)
    void OnSingleClickInteractFailed();
    FSingleClickInteractionData InteractionData;                                      // 0x01D8 (size: 0x18)
    bool bNeedSendFailedEvent;                                                        // 0x01F0 (size: 0x1)

    void SetNeededFailedEvent(const bool bNeedEvent);
    bool CanSendFailedEvent();
}; // Size: 0x1F8

class USingleClickIPU : public UInputProcessingUnit
{
}; // Size: 0x48

class USkipCutsceneIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class USkipDialogIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class USkipHintView : public UViewBaseExtended
{
    class USizeBox* ButtonHintSkip;                                                   // 0x02C8 (size: 0x8)
    class URichTextBlock* SkipTextHint;                                               // 0x02D0 (size: 0x8)
    FString HoldSkipLocSID;                                                           // 0x02D8 (size: 0x10)
    FString PressSkipLocSID;                                                          // 0x02E8 (size: 0x10)
    class UWidgetAnimation* SkipFadeAnimation;                                        // 0x02F8 (size: 0x8)
    float AnimationSpeed;                                                             // 0x0300 (size: 0x4)
    float HideSkipHintLifeBond;                                                       // 0x0304 (size: 0x4)

}; // Size: 0x338

class USkipKeyHint : public UUserWidget
{
    class UHintControllerBase* InputController;                                       // 0x0278 (size: 0x8)

}; // Size: 0x280

class USleepView : public UViewBaseExtended
{
    class UWidgetAnimation* FadeAnimation;                                            // 0x02C8 (size: 0x8)

}; // Size: 0x2D0

class USmartCoverRenderingComponent : public UDebugDrawComponent
{
}; // Size: 0x5B0

class USoundManager : public UBaseManager
{
    class UAudioScattererDataAsset* AudioScatterer;                                   // 0x00C0 (size: 0x8)
    TWeakObjectPtr<class ALandscape> Landscape;                                       // 0x00E4 (size: 0x8)
    class UAkRtpc* InteriorFlagRTPC;                                                  // 0x00F0 (size: 0x8)
    class UOnAKEventFinished_Proxy* OnAKEventFinished_Proxy;                          // 0x00F8 (size: 0x8)

}; // Size: 0x870

class USpaceRestrictorsCheats : public UCheatManagerExtension
{

    void XRestrictorsShowResponse(const int32 UID);
    void XRestrictorsPrint();
}; // Size: 0x28

class USpeechComponent : public UObject
{
}; // Size: 0x80

class USprintIPU : public UBehaviorBasedIPU
{
}; // Size: 0x58

class UStackSplitContextual : public UUserWidget
{
    class UHintInputController* ConfirmHint;                                          // 0x0278 (size: 0x8)
    class UHintInputController* ConfirmAllHint;                                       // 0x0280 (size: 0x8)
    class UHintInputController* CancelHint;                                           // 0x0288 (size: 0x8)
    class UTextWidget* TitleText;                                                     // 0x0290 (size: 0x8)
    FLinearColor SignCaptionPressedColor;                                             // 0x0298 (size: 0x10)
    FLinearColor SignCaptionDefaultColor;                                             // 0x02A8 (size: 0x10)
    class USlider* Slider_ItemSplit;                                                  // 0x02B8 (size: 0x8)
    class UTextWidget* SplitTextTest;                                                 // 0x02C0 (size: 0x8)
    class UTextWidget* ItemName;                                                      // 0x02C8 (size: 0x8)
    class USizeBox* SizeBoxSlider;                                                    // 0x02D0 (size: 0x8)
    class UOverlay* OverlayNumbers;                                                   // 0x02D8 (size: 0x8)
    class UOverlay* OverlaySize;                                                      // 0x02E0 (size: 0x8)
    class UImage* SliderImage;                                                        // 0x02E8 (size: 0x8)
    class UCurveFloat* MovementCurve;                                                 // 0x02F0 (size: 0x8)
    TMap<class ESplitStackTypeDirection, class FString> ConfirmHintType;              // 0x02F8 (size: 0x50)
    TMap<class ESplitStackTypeDirection, class FString> ConfirmAllHintType;           // 0x0348 (size: 0x50)
    class UButton* ArrowLeft;                                                         // 0x0398 (size: 0x8)
    class UButton* ArrowRight;                                                        // 0x03A0 (size: 0x8)
    class UPlatformSwitcherBase* ArrowRightPlatformSwitcher;                          // 0x03A8 (size: 0x8)
    class UPlatformSwitcherBase* ArrowLeftPlatformSwitcher;                           // 0x03B0 (size: 0x8)
    class UOverlay* MainOverlay;                                                      // 0x03D8 (size: 0x8)
    FLinearColor ActiveBarColor;                                                      // 0x0450 (size: 0x10)
    FLinearColor NonActiveBarColor;                                                   // 0x0460 (size: 0x10)

    void PressChangeAmmount();
    void OnSplitValueChanged(float Value);
    void OnSplitConfirmed__DelegateSignature(int32 Count, FItemUID ItemUID);
    void OnSplitCanceled__DelegateSignature();
    void OnSplitButtonClicked();
    void OnPlusButtonReleased();
    void OnPlusButtonPressed();
    void OnPlusButtonClicked();
    void OnMinusButtonReleased();
    void OnMinusButtonPressed();
    void OnMinusButtonClicked();
    void OnHoldTimerTriggered();
    void OnDropAllButtonClicked();
    void OnCancelButtonClicked();
}; // Size: 0x480

class UStackSplitContexualTrade : public UStackSplitContextual
{
    FString SellLocSID;                                                               // 0x0480 (size: 0x10)
    FString SellAllLocSID;                                                            // 0x0490 (size: 0x10)
    FString BuyLocSID;                                                                // 0x04A0 (size: 0x10)
    FString BuyAllLocSID;                                                             // 0x04B0 (size: 0x10)
    FString ReturnLocSID;                                                             // 0x04C0 (size: 0x10)
    FString ReturnAllLocSID;                                                          // 0x04D0 (size: 0x10)
    FString SellTitleLocSID;                                                          // 0x04E0 (size: 0x10)
    FString BuyTitleLocSID;                                                           // 0x04F0 (size: 0x10)
    FString ReturnTitleLocSID;                                                        // 0x0500 (size: 0x10)

}; // Size: 0x510

class UStackSplittingWidget : public UWidgetBase
{
    class UTextBlock* TextBlock_AmountToDrop;                                         // 0x0278 (size: 0x8)
    class USlider* Slider_ItemSplit;                                                  // 0x0280 (size: 0x8)
    class UTextBlock* TextBlock_FullAmount;                                           // 0x0288 (size: 0x8)
    class UButton* Button_Cancel;                                                     // 0x0290 (size: 0x8)
    class UButton* Button_Split;                                                      // 0x0298 (size: 0x8)
    class UTextBlock* TextBlock_Split;                                                // 0x02A0 (size: 0x8)
    class UImageWidget* ItemImage;                                                    // 0x02A8 (size: 0x8)
    class UTextBlock* HeaderText;                                                     // 0x02B0 (size: 0x8)
    class UTextBlock* ItemName;                                                       // 0x02B8 (size: 0x8)

    void OnSplitValueChanged(float Value);
    void OnSplitButtonClicked();
    void OnCancelButtonClicked();
}; // Size: 0x348

class UStartGameAction : public UMenuButtonActionBase
{
}; // Size: 0x30

class UStatPanel : public UChildViewBase
{
    class UOverlay* VitalsOverlay;                                                    // 0x0280 (size: 0x8)
    class UStatSlot* StatWeight;                                                      // 0x0288 (size: 0x8)
    class UStatSlot* StatSleep;                                                       // 0x0290 (size: 0x8)
    class UStatSlot* StatHunger;                                                      // 0x0298 (size: 0x8)
    class UStatSlot* StatBleeding;                                                    // 0x02A0 (size: 0x8)
    class UProgressBar* HPProgress;                                                   // 0x02A8 (size: 0x8)
    class UProgressBar* HPProgressWhite;                                              // 0x02B0 (size: 0x8)
    class UProgressBar* HPProgressDark;                                               // 0x02B8 (size: 0x8)
    class UProgressBar* Stamina;                                                      // 0x02C0 (size: 0x8)
    class UImage* RadiationProgress;                                                  // 0x02C8 (size: 0x8)
    class UWidgetAnimation* BlinkingStaminaAnim;                                      // 0x02D0 (size: 0x8)
    class UWidgetAnimation* BlinkingHPAnim;                                           // 0x02D8 (size: 0x8)
    class UWidgetAnimation* VitalsOverlayHideAnim;                                    // 0x02E0 (size: 0x8)
    class UWidgetAnimation* VitalsOverlayShowAnim;                                    // 0x02E8 (size: 0x8)
    class UStatPanelDataAsset* SettingsAsset;                                         // 0x02F0 (size: 0x8)
    FLinearColor ColorWeight;                                                         // 0x02F8 (size: 0x10)
    FLinearColor ColorOverWeight;                                                     // 0x0308 (size: 0x10)
    FLinearColor HeavyIconColor;                                                      // 0x0318 (size: 0x10)
    FLinearColor MediumIconColor;                                                     // 0x0328 (size: 0x10)
    FLinearColor LightIconColor;                                                      // 0x0338 (size: 0x10)
    class UCurveFloat* HPProgressCurve;                                               // 0x0348 (size: 0x8)

    void UpdateAllStats();
}; // Size: 0x3D8

class UStatPanelDataAsset : public UDataAsset
{
    float HealthBarReduce;                                                            // 0x0030 (size: 0x4)
    float HealthBarUpdate;                                                            // 0x0034 (size: 0x4)
    float HealthBarUpdateDelay;                                                       // 0x0038 (size: 0x4)
    float HealthBarCriticalLevel;                                                     // 0x003C (size: 0x4)
    float HealthBarCriticalSpeed;                                                     // 0x0040 (size: 0x4)
    float HealthBarRestoreSpeed;                                                      // 0x0044 (size: 0x4)
    float HealthBarFadeOut;                                                           // 0x0048 (size: 0x4)
    float HealthBarFadeIn;                                                            // 0x004C (size: 0x4)
    float OnImmidiatlyDeathWhiteBarReduceDelay;                                       // 0x0050 (size: 0x4)
    float StatPanelHideDelay;                                                         // 0x0054 (size: 0x4)
    float OngoingDamageWhiteBarReduceDelay;                                           // 0x0058 (size: 0x4)
    float StaminaBarCriticalLevel;                                                    // 0x005C (size: 0x4)
    float StaminaBarCriticalSpeed;                                                    // 0x0060 (size: 0x4)
    float RadBarGrowSpeed;                                                            // 0x0064 (size: 0x4)
    float RadBarRestoreSpeed;                                                         // 0x0068 (size: 0x4)
    FName RadBarProgressParameterName;                                                // 0x006C (size: 0x8)
    float BleedingFadeOut;                                                            // 0x0074 (size: 0x4)
    float BleedingFadeIn;                                                             // 0x0078 (size: 0x4)
    float OverloadFadeOut;                                                            // 0x007C (size: 0x4)
    float OverloadFadeIn;                                                             // 0x0080 (size: 0x4)
    float HungerFadeOut;                                                              // 0x0084 (size: 0x4)
    float HungerFadeIn;                                                               // 0x0088 (size: 0x4)
    float SleepinessFadeOut;                                                          // 0x008C (size: 0x4)
    float SleepinessFadeIn;                                                           // 0x0090 (size: 0x4)

}; // Size: 0x98

class UStatPanelDebug : public UChildViewBase
{
    class UProgressBar* ProgressHP;                                                   // 0x0278 (size: 0x8)
    class UProgressBar* ProgressRadiation;                                            // 0x0280 (size: 0x8)
    class UProgressBar* ProgressStamina;                                              // 0x0288 (size: 0x8)
    class UProgressBar* ProgressPsy;                                                  // 0x0290 (size: 0x8)
    class UTextBlock* HPText;                                                         // 0x0298 (size: 0x8)
    class UTextBlock* RadiationText;                                                  // 0x02A0 (size: 0x8)
    class UTextBlock* StaminaText;                                                    // 0x02A8 (size: 0x8)
    class UTextBlock* PsyText;                                                        // 0x02B0 (size: 0x8)

    void UpdateAllStats();
}; // Size: 0x2C0

class UStatSlot : public UWidgetBase
{
    class UImage* Icon;                                                               // 0x0278 (size: 0x8)
    class UImage* Shadow;                                                             // 0x0280 (size: 0x8)
    FVector2D size;                                                                   // 0x0288 (size: 0x10)
    bool bShouldShowProgress;                                                         // 0x0298 (size: 0x1)
    class UTexture2D* IconTexture;                                                    // 0x02A0 (size: 0x8)
    float WeakStateOpacityPercent;                                                    // 0x02A8 (size: 0x4)
    float BlinkingAnimSpeed;                                                          // 0x02AC (size: 0x4)
    EStatSlotStates CurrState;                                                        // 0x02B0 (size: 0x4)
    FName TextureID;                                                                  // 0x02B4 (size: 0x8)
    class UWidgetAnimation* ShowAnim;                                                 // 0x02C0 (size: 0x8)
    class UWidgetAnimation* HideAnim;                                                 // 0x02C8 (size: 0x8)
    class UWidgetAnimation* BlinkingAnim;                                             // 0x02D0 (size: 0x8)

}; // Size: 0x2D8

class UStaticEnvironmentNiagaraComponent : public UEnvironmentNiagaraComponent
{
    FName PrototypeName;                                                              // 0x0830 (size: 0x8)
    EStaticParticleType ParticleType;                                                 // 0x0848 (size: 0x1)

}; // Size: 0x850

class UStatisticIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UStealthKillComponent : public UActorComponent
{
    class APC* OwnerPlayer;                                                           // 0x00A0 (size: 0x8)
    class UCurveFloat* StealthKillSnapCurve;                                          // 0x00A8 (size: 0x8)

}; // Size: 0x130

class USteamWorkshopSubsystem : public UModSubsystemBase
{
}; // Size: 0x88

class UStoreButtonStateDefiner : public UMenuButtonStateDefiner
{
    TArray<FName> ExcludeSubsystems;                                                  // 0x0030 (size: 0x10)

    TArray<FName> GetSubsystemOptions();
}; // Size: 0x40

class UStreamingDistanceOverrideSubsystem : public UWorldSubsystem
{
    TArray<FStreamingDistanceOverrideVolumeState> RegisteredSDOVolumeStates;          // 0x0060 (size: 0x10)

}; // Size: 0x178

class UStrelokBossComponent : public UActorComponent
{

    void OnDashAbilityUsed(const bool bAbilityUsed);
}; // Size: 0x148

class USubtitleView : public UViewBaseExtended
{
    class UDebugTextWidgetBase* DebugLenSpeaker;                                      // 0x02C8 (size: 0x8)
    class UDebugTextWidgetBase* DebugLenSubtitle;                                     // 0x02D0 (size: 0x8)
    class UDebugTextWidgetBase* DebugRowSpeaker;                                      // 0x02D8 (size: 0x8)
    class UDebugTextWidgetBase* DebugRowSubtitle;                                     // 0x02E0 (size: 0x8)
    class UTextWidget* SpeakerDialogText;                                             // 0x02E8 (size: 0x8)
    class UHorizontalBox* NameBox;                                                    // 0x02F0 (size: 0x8)
    class UBorder* SubtitileBorder;                                                   // 0x02F8 (size: 0x8)
    class USizeBox* SubtitileContainer;                                               // 0x0300 (size: 0x8)
    class UTextWidget* TextDialog;                                                    // 0x0308 (size: 0x8)
    int32 CharToShow;                                                                 // 0x0310 (size: 0x4)
    float SpeedCharToShow;                                                            // 0x0314 (size: 0x4)
    TMap<class ESubtitlesSize, class FName> SubtitleNames;                            // 0x0318 (size: 0x50)
    float AnimationSpeed;                                                             // 0x0368 (size: 0x4)
    float HideSkipHintLifeBond;                                                       // 0x036C (size: 0x4)
    TSoftObjectPtr<UTexture2D> BackgroundTexture;                                     // 0x0370 (size: 0x30)

}; // Size: 0x410

class USummonAbilityEventData : public UGameplayEventData
{

    bool ShouldSpawnEffects();
    TArray<FVector> GetSummonLocations();
}; // Size: 0x40

class USummonStateComponent : public UActorComponent
{
}; // Size: 0xF0

class USwapWeaponIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class USwitchWeaponIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class USystemNotificationItem : public UWidgetBase
{
    bool bWasVoiceNotePlayed;                                                         // 0x02A8 (size: 0x1)
    class UWidgetAnimation* MoveUpAnim;                                               // 0x02B0 (size: 0x8)
    class UWidgetAnimation* MoveFromDownAnim;                                         // 0x02B8 (size: 0x8)
    class UWidgetAnimation* HideAnim;                                                 // 0x02C0 (size: 0x8)
    class UWidgetAnimation* AppearAnim;                                               // 0x02C8 (size: 0x8)
    class URichTextWidget* Title;                                                     // 0x02D0 (size: 0x8)
    class UTextBlock* Description;                                                    // 0x02D8 (size: 0x8)
    class UHintInputController* Hint;                                                 // 0x02E0 (size: 0x8)
    class UImage* Icon;                                                               // 0x02E8 (size: 0x8)
    class UWidgetSwitcher* AudiologSwitcher;                                          // 0x02F0 (size: 0x8)
    class UHorizontalBox* VoiceHorizontalBox;                                         // 0x02F8 (size: 0x8)
    class UProgressBar* AudiologProgressBar;                                          // 0x0300 (size: 0x8)
    class UTextBlock* AudiologDuration;                                               // 0x0308 (size: 0x8)
    class UTextBlock* AudiologCurrentDuration;                                        // 0x0310 (size: 0x8)
    class UImage* BackgroundBody;                                                     // 0x0318 (size: 0x8)
    class UImage* BackgroundTop;                                                      // 0x0320 (size: 0x8)
    class UImage* BackgroundDown;                                                     // 0x0328 (size: 0x8)
    class UBorder* AppearanceLayer;                                                   // 0x0330 (size: 0x8)
    class UBorder* AppearanceLine;                                                    // 0x0338 (size: 0x8)
    FLinearColor General;                                                             // 0x0340 (size: 0x10)
    FLinearColor green;                                                               // 0x0350 (size: 0x10)
    FLinearColor red;                                                                 // 0x0360 (size: 0x10)
    int32 RegularHeight;                                                              // 0x0370 (size: 0x4)
    int32 HeightWithHint;                                                             // 0x0374 (size: 0x4)
    FNotificationModel NotificationModel;                                             // 0x0378 (size: 0x78)
    FText Play;                                                                       // 0x03F0 (size: 0x18)
    FText Stop;                                                                       // 0x0408 (size: 0x18)
    int32 OneLineNotificationAlignment;                                               // 0x0420 (size: 0x4)
    TMap<class EHintType, class FString> HintSIDs;                                    // 0x0428 (size: 0x50)
    float InactiveHintTransparency;                                                   // 0x0478 (size: 0x4)

    void SetModel();
}; // Size: 0x4C0

class USystemNotificationWidget : public UWidgetBase
{
    class UVerticalBox* VerticalBox;                                                  // 0x0278 (size: 0x8)
    TMap<class ESystemNotificationIconType, class TSoftObjectPtr<UTexture2D>> NotificationIcons; // 0x0280 (size: 0x50)
    TSubclassOf<class USystemNotificationItem> SystemNotificationItemClass;           // 0x02D0 (size: 0x8)
    int32 SystemNotificationsMax;                                                     // 0x02D8 (size: 0x4)
    TArray<float> ItemLifespanByIndex;                                                // 0x02E0 (size: 0x10)
    FString Received;                                                                 // 0x02F0 (size: 0x10)
    FString Lost;                                                                     // 0x0300 (size: 0x10)
    FString Coordinates;                                                              // 0x0310 (size: 0x10)
    FString NewNote;                                                                  // 0x0320 (size: 0x10)
    FString NewStash;                                                                 // 0x0330 (size: 0x10)
    FString NewRegionName;                                                            // 0x0340 (size: 0x10)
    FString NewBlueprint;                                                             // 0x0350 (size: 0x10)
    FString MoneyText;                                                                // 0x0360 (size: 0x10)
    FString EncyclopediaUpdated;                                                      // 0x0370 (size: 0x10)
    FText TitleFormatForItems;                                                        // 0x0380 (size: 0x18)
    FText TitleFormat;                                                                // 0x0398 (size: 0x18)
    float QueueDelay;                                                                 // 0x03C0 (size: 0x4)
    float TimerRate;                                                                  // 0x03C4 (size: 0x4)
    float MoveUpAnimMultiplier;                                                       // 0x03C8 (size: 0x4)
    float AppearAnimMultiplier;                                                       // 0x03CC (size: 0x4)
    float HideAnimMultiplier;                                                         // 0x03D0 (size: 0x4)
    int32 WorldMapStashZoom;                                                          // 0x03D4 (size: 0x4)
    int32 MaxTitleLen;                                                                // 0x03D8 (size: 0x4)
    FString EndText;                                                                  // 0x03E0 (size: 0x10)

    void ProceedInput();
    void OnSystemNotificationActionCompleted(const FNotificationModel& Model);
    void NotificationClickHandler();
    void InputCancel();
    void CenterMapOnLocation();
}; // Size: 0x4B0

class UTacticalFlashlightComponent : public UFlashlightComponent
{
}; // Size: 0x188

class UTaskIcon : public UWidgetBase
{
    FVector2f DesiredSize;                                                            // 0x0278 (size: 0x8)
    class USizeBox* IconSize;                                                         // 0x0280 (size: 0x8)
    class UImage* SelectedMarker;                                                     // 0x0288 (size: 0x8)
    class UImage* TaskMarker;                                                         // 0x0290 (size: 0x8)
    FName MainQuestColorStyleID;                                                      // 0x0298 (size: 0x8)
    FName SecondaryQuestColorStyleID;                                                 // 0x02A0 (size: 0x8)

}; // Size: 0x2A8

class UTaskListMenuWidget : public UWidgetBase
{
    FVector2f WidgetSize;                                                             // 0x0278 (size: 0x8)
    class USizeBox* WidgetSizeBox;                                                    // 0x0280 (size: 0x8)
    class UHorizontalBox* MainTasksTitle;                                             // 0x0288 (size: 0x8)
    class UHorizontalBox* SecondaryTaskTitle;                                         // 0x0290 (size: 0x8)
    class UVerticalBox* MainTasks;                                                    // 0x0298 (size: 0x8)
    class UVerticalBox* SecondaryTasks;                                               // 0x02A0 (size: 0x8)
    class UVerticalBox* MainTasksBox;                                                 // 0x02A8 (size: 0x8)
    class UVerticalBox* SecondaryTasksBox;                                            // 0x02B0 (size: 0x8)
    TSubclassOf<class UQuestMenuWidget> QuestMenuWidgetClass;                         // 0x02B8 (size: 0x8)

}; // Size: 0x2C0

class UTaskMenuWidget : public UWidgetBase
{
    class UTaskIcon* TaskIcon;                                                        // 0x0278 (size: 0x8)
    class UTextWidget* TaskText;                                                      // 0x0280 (size: 0x8)
    FString OptionalPostfixSID;                                                       // 0x0288 (size: 0x10)

}; // Size: 0x2B0

class UTeleportManager : public UBaseManager
{
}; // Size: 0x198

class UTextWidget : public ULocalizationWidget
{
    float DefaultWrapText;                                                            // 0x02B8 (size: 0x4)
    FText DefaultText;                                                                // 0x02C0 (size: 0x18)
    bool bUseWrappingFromStyle;                                                       // 0x02D8 (size: 0x1)
    bool bEnableStyleManager;                                                         // 0x02D9 (size: 0x1)
    FTextSettings TextSettings;                                                       // 0x02E0 (size: 0x3C0)
    bool bEnableScroll;                                                               // 0x06A0 (size: 0x1)
    class UCommonTextBlock* CommonTextObj;                                            // 0x06A8 (size: 0x8)
    FSlotScaleSettings TextScaleSettings;                                             // 0x06B0 (size: 0x14)

    void SetText(FText InText);
    FText GetText();
}; // Size: 0x6E0

class UTextureTools : public UActorComponent
{
}; // Size: 0xA0

class UThreatIndicator : public UChildViewBase
{
    class UOverlay* ThreatsOverlay;                                                   // 0x0278 (size: 0x8)
    float ThreatIndicatorShowDistance;                                                // 0x0280 (size: 0x4)
    int32 ThreatPointerCap;                                                           // 0x0284 (size: 0x4)
    FThreatPointerSettings ThreatPointerSettings;                                     // 0x0288 (size: 0x20)
    float ThreatsUpdateInterval;                                                      // 0x02A8 (size: 0x4)
    TSubclassOf<class UThreatPointer> ThreatPointerWidgetClass;                       // 0x02B0 (size: 0x8)
    TArray<class UThreatPointer*> ActiveThreatPointers;                               // 0x02B8 (size: 0x10)

}; // Size: 0x2D0

class UThreatPointer : public UWidgetBase
{
    class UWidgetAnimation* AlertAnimation;                                           // 0x0278 (size: 0x8)
    class UImage* ThreatLevelVisualizer;                                              // 0x0280 (size: 0x8)
    class USizeBox* CircleSize;                                                       // 0x0288 (size: 0x8)

}; // Size: 0x2C8

class UTickAggregationManager : public UBaseTickableManager
{
    FAgentCollection AgentsCollection;                                                // 0x00A8 (size: 0xA0)
    FAIEntityCollection AIEntityCollection;                                           // 0x0148 (size: 0x68)
    FArtifactCollection ArtifactsCollection;                                          // 0x01B0 (size: 0x98)
    FAnomalyCollection AnomaliesCollection;                                           // 0x0248 (size: 0x98)
    FAITickComponentCollection AITickComponentsCollection;                            // 0x02E0 (size: 0x78)
    FDestructibleObjectCollection DestructibleCollection;                             // 0x0358 (size: 0x98)
    FWetnessComponentCollection WetnessComponentCollection;                           // 0x03F0 (size: 0x98)
    FHeadFlashlightComponentCollection HeadFlashlightComponentCollection;             // 0x0488 (size: 0x98)
    FItemContainerModelCollection ItemContainersCollection;                           // 0x0520 (size: 0x98)
    FAkRoomCollection AkRoomComponentsCollection;                                     // 0x05B8 (size: 0x78)
    FAkComponentCollection AkComponentsCollection;                                    // 0x0630 (size: 0x78)
    FAkLateReverbCollection AkLateReverbComponentsCollection;                         // 0x06A8 (size: 0x78)
    FAkSurfaceReflectorSetCollection AkSurfaceReflectorSetsCollection;                // 0x0720 (size: 0x78)
    FAgentModelCollection AgentModelCollection;                                       // 0x0798 (size: 0xB8)
    FAnomalyModelCollection AnomalyModelCollection;                                   // 0x0850 (size: 0xA0)
    FDestructibleModelCollection DestructibleModelCollection;                         // 0x08F0 (size: 0xA0)
    FContextualActionModelCollection ContextualActionModelCollection;                 // 0x0990 (size: 0xA0)
    FQuestNodeCollection QuestNodeCollection;                                         // 0x0A30 (size: 0x98)

}; // Size: 0xAC8

class UTickBudgetSettings : public UDeveloperSettings
{
    FTimeBudget TimeBudget;                                                           // 0x0038 (size: 0x30)
    FInitialCollectionSize InitialCollectionSize;                                     // 0x0068 (size: 0x48)

}; // Size: 0xB0

class UTilingGridBack : public UUserWidget
{
    class USizeBox* FullSizeBox;                                                      // 0x0278 (size: 0x8)
    FVector2D VisibleSize;                                                            // 0x0280 (size: 0x10)
    float BorderSize;                                                                 // 0x0290 (size: 0x4)

}; // Size: 0x298

class UTimeManager : public UBaseManager
{
    bool bIsPaused;                                                                   // 0x0079 (size: 0x1)
    FDateTime CurrentDate;                                                            // 0x0080 (size: 0x8)
    FDateTime WeatherDate;                                                            // 0x0088 (size: 0x8)
    double GameTimeSecondsDouble;                                                     // 0x0090 (size: 0x8)
    double WeatherTimeSeconds;                                                        // 0x0098 (size: 0x8)
    double GameTimeSeconds;                                                           // 0x00A0 (size: 0x8)
    float RealTime;                                                                   // 0x00A8 (size: 0x4)
    float LastTickDeltaTimeNormalized;                                                // 0x00AC (size: 0x4)
    float CustomDeltaTime;                                                            // 0x00B0 (size: 0x4)
    float SpeedFactor;                                                                // 0x00B4 (size: 0x4)
    float WeatherSpeedFactor;                                                         // 0x00B8 (size: 0x4)
    float FrameRate;                                                                  // 0x00BC (size: 0x4)
    int64 TickCounter;                                                                // 0x00C0 (size: 0x8)
    int32 FixedFPS;                                                                   // 0x00C8 (size: 0x4)
    int32 GameHours;                                                                  // 0x00CC (size: 0x4)
    int32 GameMinutes;                                                                // 0x00D0 (size: 0x4)
    float GameSecondsClamped;                                                         // 0x00D4 (size: 0x4)
    bool bDay;                                                                        // 0x00D8 (size: 0x1)
    FDateTime StartDate;                                                              // 0x00E0 (size: 0x8)
    int64 UnixTime;                                                                   // 0x00E8 (size: 0x8)
    int64 LastUnixTimeUpdateTick;                                                     // 0x00F0 (size: 0x8)

}; // Size: 0x128

class UTimedLoadingScreenWidget : public UBaseLoadingScreenWidget
{
    class UThrobber* LoadingIndicator;                                                // 0x02B8 (size: 0x8)
    class UImage* ContentImage;                                                       // 0x02C0 (size: 0x8)
    float FadeTime;                                                                   // 0x02C8 (size: 0x4)

}; // Size: 0x2F0

class UTimeoutSpeechComponent : public USpeechComponent
{
}; // Size: 0x90

class UToggleButton : public ULockableComponent
{
    float CurrentValue;                                                               // 0x0278 (size: 0x4)
    bool bShouldConsumeItemOnOpen;                                                    // 0x027C (size: 0x1)
    bool bUseInBothSides;                                                             // 0x027D (size: 0x1)
    class UStaticMeshComponent* ToggleButtonHandleMesh;                               // 0x0280 (size: 0x8)
    class UCurveFloat* ToggleButtonCurve;                                             // 0x0288 (size: 0x8)
    class UCurveFloat* ToggleButtonCurveReverse;                                      // 0x0290 (size: 0x8)

    void ChangeToggleButtonPosition();
}; // Size: 0x340

class UToggleHeldItemIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UTooltipRecord : public UWidgetBase
{
    FString FieldNameSID;                                                             // 0x0278 (size: 0x10)
    class UTextWidget* FieldName;                                                     // 0x0288 (size: 0x8)
    class UTextWidget* FieldValue;                                                    // 0x0290 (size: 0x8)

}; // Size: 0x298

class UTopazScannerComponent : public UGuidActorComponent
{
    FTopazScannerComponentOnTopazStateChanged OnTopazStateChanged;                    // 0x00C0 (size: 0x10)
    void OnTopazStateChanged(const ETopazScannerState NewState);
    ETopazScannerState InitialState;                                                  // 0x00D0 (size: 0x1)
    float ScanningTime;                                                               // 0x00D4 (size: 0x4)

    float GetStateStartTimestamp();
    ETopazScannerState GetCurrentState();
    void ChangeState();
}; // Size: 0xE8

class UTopazSingleClickComponent : public USingleClickComponent
{
    float InteractionAngle;                                                           // 0x0200 (size: 0x4)
    class UInteractableAnimCollection* ActivationAnimCollection;                      // 0x0208 (size: 0x8)
    class UInteractableAnimCollection* CollectAnimCollection;                         // 0x0210 (size: 0x8)
    bool bCustomInteractText;                                                         // 0x0218 (size: 0x1)
    class ATopazScanner* OwnerScanner;                                                // 0x0220 (size: 0x8)

}; // Size: 0x228

class UTouchComponent : public UActorComponent
{
}; // Size: 0xA8

class UTradeView : public UInventoryNew
{
    class UCustomGrid* TraderGridWidget;                                              // 0x1388 (size: 0x8)
    class UCustomGrid* SellGridWidget;                                                // 0x1390 (size: 0x8)
    class UCustomGrid* BuyGridWidget;                                                 // 0x1398 (size: 0x8)
    class UTextWidget* TradeConfirmInfoText;                                          // 0x13A0 (size: 0x8)
    class UTextWidget* TradeResultMoney;                                              // 0x13A8 (size: 0x8)
    class UTextWidget* TradeResultWeight;                                             // 0x13B0 (size: 0x8)
    class UTextWidget* TradeResultWeightUnits;                                        // 0x13B8 (size: 0x8)
    class UPlatformSwitcher* TraderButtonSwitcher;                                    // 0x13C0 (size: 0x8)
    class UHintInputController* ButtonHintConfirmTrade;                               // 0x13C8 (size: 0x8)
    class UHintInputController* ButtonHintCancelTrade;                                // 0x13D0 (size: 0x8)
    class UHintInputController* HintBuy;                                              // 0x13D8 (size: 0x8)
    class UHintInputController* HintSell;                                             // 0x13E0 (size: 0x8)
    class UHintInputController* HintReturn;                                           // 0x13E8 (size: 0x8)

    void SellOrBuyReturnItemAction();
    void OnConfirmTradeHoldTriggered();
    void OnConfirmTradeHoldReleased();
    void OnCancelTradeHoldTriggered();
    void OnCancelTradeHoldReleased();
}; // Size: 0x1408

class UTraderGridSlot : public UCustomGridSlot
{
    FLinearColor CantBuyHighlight;                                                    // 0x0578 (size: 0x10)
    FLinearColor DefaultHighlightColor;                                               // 0x0588 (size: 0x10)

}; // Size: 0x5A0

class UTriggerManager : public UBaseTickableManager
{
}; // Size: 0x210

class UTriplanarDecalComponent : public UDecalComponent
{
    int32 NumberOfTraces;                                                             // 0x0300 (size: 0x4)
    class UTexture2D* HeightMap;                                                      // 0x0308 (size: 0x8)

}; // Size: 0x310

class UTutorialAutonomic : public UTutorialBase
{
    class UBorder* TextBackgroundBorder;                                              // 0x03F0 (size: 0x8)
    FMargin PaddingWithHint;                                                          // 0x03F8 (size: 0x10)
    FMargin PaddingWithoutHint;                                                       // 0x0408 (size: 0x10)

}; // Size: 0x418

class UTutorialBase : public UViewBaseExtended
{
    class URichTextBlock* Text;                                                       // 0x02C8 (size: 0x8)
    class UOverlay* TutorialOverlay;                                                  // 0x02D0 (size: 0x8)
    FString HintFont;                                                                 // 0x02D8 (size: 0x10)
    float DurationInSeconds;                                                          // 0x03D4 (size: 0x4)

}; // Size: 0x3F0

class UTutorialIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UTutorialPage : public UPDAPage
{
    class UPDATutorialDetails* TutorialDetails;                                       // 0x0298 (size: 0x8)
    class UPDATutorialButton* ButtonAll;                                              // 0x02A0 (size: 0x8)
    class UPDATutorialButton* ButtonNavigation;                                       // 0x02A8 (size: 0x8)
    class UPDATutorialButton* ButtonFight;                                            // 0x02B0 (size: 0x8)
    class UPDATutorialButton* ButtonSurvival;                                         // 0x02B8 (size: 0x8)
    class UPDATutorialButton* ButtonEarning;                                          // 0x02C0 (size: 0x8)
    class UPDATutorialPanel* TutorialPanel;                                           // 0x02C8 (size: 0x8)
    int32 DefaultOpenFilter;                                                          // 0x02D0 (size: 0x4)
    float TutorialSlotListScrollTime;                                                 // 0x02D4 (size: 0x4)
    TMap<class EPDATutorialCategory, class FBackgroundSettings> BackgroundSettings;   // 0x02D8 (size: 0x50)

    void UIPDANavigatioTutorialUp();
    void UIPDANavigatioTutorialDown();
    void UIPDANavigationUp();
    void UIPDANavigationRight();
    void UIPDANavigationMouseUp();
    void UIPDANavigationMouseDown();
    void UIPDANavigationLeft();
    void UIPDANavigationDown();
    void UIPDANavigationButtonRelease();
    void ShowDetails(const bool bEmpty);
    void ShowBlockListNavigation(const bool bBlock);
    void ClickButtonMenu(const FName ButtonId);
}; // Size: 0x360

class UTutorialReference : public UTutorialBase
{
    class UVerticalBox* TitleBox;                                                     // 0x03F0 (size: 0x8)
    class UVerticalBox* TitleLineBox;                                                 // 0x03F8 (size: 0x8)
    class UVerticalBox* LineWithIconBox;                                              // 0x0400 (size: 0x8)
    class URichTextBlock* TitleTutorText;                                             // 0x0408 (size: 0x8)

}; // Size: 0x410

class UTutorialSplash : public UTutorialBase
{
    class URichTextBlock* TitleTutorText;                                             // 0x03F0 (size: 0x8)

}; // Size: 0x3F8

class UTwoSideProgressBar : public UAbstractProgressBar
{
    class USlider* RightSlider;                                                       // 0x0288 (size: 0x8)
    class USlider* LeftSlider;                                                        // 0x0290 (size: 0x8)
    class UImage* ProgressLine;                                                       // 0x0298 (size: 0x8)

}; // Size: 0x2A0

class UUIBaseManager : public UBaseManager
{
    TMap<class EWidgetNameEx, class TWeakObjectPtr<UViewBase>> AllWidgets;            // 0x0088 (size: 0x50)
    TArray<class UViewBase*> OpenViews;                                               // 0x00D8 (size: 0x10)
    TArray<class UViewBase*> OpenViewsBuffer;                                         // 0x00E8 (size: 0x10)
    class UWaterElement* WaterElementWidget;                                          // 0x00F8 (size: 0x8)
    class UAkAudioEvent* LastAudioEvent;                                              // 0x0DD8 (size: 0x8)

}; // Size: 0xDE0

class UUIDActorComponent : public UGuidActorComponent
{
}; // Size: 0xB8

class UUIMainMenuManager : public UUIBaseManager
{
}; // Size: 0xDE0

class UUIManagerEx : public UUIBaseManager
{

    void OnOpenLootMenu(const FItemContainerUID InStorageItemContainerUID);
}; // Size: 0xFF0

class UUISettingsWidget : public USettingsPage
{
    class USettingElementOnOff* Subtitle;                                             // 0x0290 (size: 0x8)
    class USettingElementSwitcher* SubtitleSize;                                      // 0x0298 (size: 0x8)
    class USettingsElementPercent* BackgroundOpacity;                                 // 0x02A0 (size: 0x8)
    class USettingsElementPercent* HUDOpacity;                                        // 0x02A8 (size: 0x8)
    class USettingElementOnOff* SubtitleName;                                         // 0x02B0 (size: 0x8)
    class USettingElementSwitcher* CrosshairType;                                     // 0x02B8 (size: 0x8)
    class USettingElementOnOff* HUD;                                                  // 0x02C0 (size: 0x8)
    class USettingElementOnOff* ThreatIndicator;                                      // 0x02C8 (size: 0x8)
    class USettingElementOnOff* HitIndicator;                                         // 0x02D0 (size: 0x8)
    class USettingElementOnOff* Crosshair;                                            // 0x02D8 (size: 0x8)
    class USettingElementOnOff* CrosshairColor;                                       // 0x02E0 (size: 0x8)
    class USettingElementOnOff* QuestNotification;                                    // 0x02E8 (size: 0x8)
    class USettingElementOnOff* Compass;                                              // 0x02F0 (size: 0x8)
    class USettingElementOnOff* AmmoCounter;                                          // 0x02F8 (size: 0x8)
    class USettingElementOnOff* SystemNotification;                                   // 0x0300 (size: 0x8)
    class USettingElementOnOff* QuickSlot;                                            // 0x0308 (size: 0x8)

}; // Size: 0x310

class UUIStyleManager : public UObject
{
    FString PathToPlatformIconDT;                                                     // 0x0028 (size: 0x10)
    FString PathToIconDT;                                                             // 0x0038 (size: 0x10)
    FString PathToCommonFontDT;                                                       // 0x0048 (size: 0x10)
    FString PathToCommonStailDT;                                                      // 0x0058 (size: 0x10)
    FString PathToProgresBarStailDT;                                                  // 0x0068 (size: 0x10)
    FString PathToNPCRelationColorsDT;                                                // 0x0078 (size: 0x10)
    FString PathToNPCRelationColorsMarkerDT;                                          // 0x0088 (size: 0x10)
    FString PathToFactionIconsDT;                                                     // 0x0098 (size: 0x10)
    FString PathToPCDefaultInputIconsDT;                                              // 0x00A8 (size: 0x10)
    FString PathToPCDisabledInputIconsDT;                                             // 0x00B8 (size: 0x10)
    bool bShoudLoadTabe;                                                              // 0x00C8 (size: 0x1)
    bool bLoadDataTableInConfig;                                                      // 0x00C9 (size: 0x1)

}; // Size: 0x3A0

class UUpdateUIHintIPU : public UInputProcessingUnit
{
}; // Size: 0x58

class UUpgradeEffectWidget : public UWidgetBase
{
    class UImage* EffectIcon;                                                         // 0x0278 (size: 0x8)
    class UTextBlock* EffectText;                                                     // 0x0280 (size: 0x8)
    FLinearColor PositiveEffectValueColor;                                            // 0x0288 (size: 0x10)
    FLinearColor NegativeEffectValueColor;                                            // 0x0298 (size: 0x10)
    FLinearColor NeutralEffectValueColor;                                             // 0x02A8 (size: 0x10)

}; // Size: 0x2B8

class UUpgradeItemTooltipWidget : public UUserWidget
{
    class UTextBlock* TitleText;                                                      // 0x0278 (size: 0x8)
    class UTextBlock* DescriptionText;                                                // 0x0280 (size: 0x8)
    class UVerticalBox* MainVerticalBox;                                              // 0x0288 (size: 0x8)
    class UVerticalBox* ContentVerticalBox;                                           // 0x0290 (size: 0x8)
    class URichTextWidget* BlockingText;                                              // 0x0298 (size: 0x8)
    FString WeaponDurabilityIsTooLowL10n;                                             // 0x02A0 (size: 0x10)
    FString TechnicianCantMakeThisUpgradeL10n;                                        // 0x02B0 (size: 0x10)
    FString RequiredUpgradesL10n;                                                     // 0x02C0 (size: 0x10)
    FString BlockingUpgradesL10n;                                                     // 0x02D0 (size: 0x10)
    FString NotEnoughMoneyL10n;                                                       // 0x02E0 (size: 0x10)
    FString RequiredItemsL10n;                                                        // 0x02F0 (size: 0x10)
    FString UpgradesBlueprintL10n;                                                    // 0x0300 (size: 0x10)
    FString UnableToInstallL10n;                                                      // 0x0310 (size: 0x10)
    FString NoUpgradesL10n;                                                           // 0x0320 (size: 0x10)
    FString OrL10n;                                                                   // 0x0330 (size: 0x10)
    TSubclassOf<class UUpgradeEffectWidget> UpgradeEffectWidgetClass;                 // 0x0340 (size: 0x8)
    TArray<class UUpgradeEffectWidget*> EffectWidgets;                                // 0x0348 (size: 0x10)
    FString LastUpgradePrototypeSID;                                                  // 0x0358 (size: 0x10)

}; // Size: 0x368

class UUpgradeMenuWidget : public UWidgetBase
{
    TMap<class EUpgradeTargetPartType, class UUpgradeSection*> Sections;              // 0x02B0 (size: 0x50)
    TArray<class UUpgradeSection*> SectionWidgetsArray;                               // 0x0300 (size: 0x10)
    FLinearColor BlackFade;                                                           // 0x0310 (size: 0x10)
    FString ConfirmWarningPopupL10n;                                                  // 0x0320 (size: 0x10)
    TSubclassOf<class UUserWidget> UpgradeTooltipWidgetClass;                         // 0x0370 (size: 0x8)
    class UHintInputController* RepairButton;                                         // 0x0378 (size: 0x8)
    class URepairPriceWidget* RepairPrice;                                            // 0x0380 (size: 0x8)
    class UHintInputController* HideInformationButton;                                // 0x0388 (size: 0x8)
    class UHintInputController* RemoveAttachmentButton;                               // 0x0390 (size: 0x8)
    class UHintActionRichText* DisassembleButton;                                     // 0x0398 (size: 0x8)
    class UHintInputController* InSelectInstallAttachmentButton;                      // 0x03A0 (size: 0x8)
    class UUpgradeSlot* CurrentSlot;                                                  // 0x03A8 (size: 0x8)
    class UUpgradePriceWidget* PriceWidget;                                           // 0x03B0 (size: 0x8)
    class UTextWidget* ItemNameText;                                                  // 0x03B8 (size: 0x8)
    class UTextWidget* PlayerMoneyText;                                               // 0x03C0 (size: 0x8)
    class ULayeredItemImage* UpgradedItemIcon;                                        // 0x03C8 (size: 0x8)
    class UCanvasPanel* CanvasPanel;                                                  // 0x03D0 (size: 0x8)
    class UItemsStatsUpgrades* ItemTooltip;                                           // 0x03D8 (size: 0x8)
    class UUpgradeItemTooltipWidget* UpgradeTooltipWidget;                            // 0x03E0 (size: 0x8)
    class UOverlay* ConfirmPopupContainer;                                            // 0x03E8 (size: 0x8)
    class UConfirmUpgradePopup* ConfirmUpgradePopup;                                  // 0x03F0 (size: 0x8)
    class UImageWidget* IconDurability;                                               // 0x03F8 (size: 0x8)
    class UHorizontalBox* PlayerMoneyBox;                                             // 0x0400 (size: 0x8)
    float TensileStrength;                                                            // 0x0408 (size: 0x4)
    FString RepairButtonL10N;                                                         // 0x0410 (size: 0x10)
    FString PriceStyle;                                                               // 0x0420 (size: 0x10)
    FString CurrencyImageId;                                                          // 0x0430 (size: 0x10)
    class UUpgradeSection* LastActiveSection;                                         // 0x0440 (size: 0x8)
    bool bShowInfoOnClick;                                                            // 0x0448 (size: 0x1)
    bool bPriceWidgetEnabled;                                                         // 0x0449 (size: 0x1)
    class UUpgradeSection* LastHoveredSection;                                        // 0x0450 (size: 0x8)
    FString ItemSID;                                                                  // 0x0458 (size: 0x10)
    bool bSetPositions;                                                               // 0x0468 (size: 0x1)
    class UCanvasPanel* SectionsCanvas;                                               // 0x0470 (size: 0x8)
    class UImage* BlackWeaponFade;                                                    // 0x0478 (size: 0x8)

    void OnWeaponFadeProgress(const float Alpha, const bool bIsShowing);
    void OnUpgradeMouseExit();
    void OnUpgradeMouseEnter(FString UpgradeID);
    void OnUpgradeClick(const FString UpgradeID, class UUpgradeSlot* InCurrentSlot);
    void OnSectionFadeProgress(const float Alpha, const bool bIsShowing);
    void OnSectionClicked(class UUpgradeSection* Section);
    void OnRevertLastUpgrade();
    void OnRepair();
    FEventReply OnMouseBlackFadeDown(FGeometry InGeometry, const FPointerEvent& InMouseEvent);
    void OnApplyUpgrade(FString UpgradeID, class UUpgradeSlot* InCurrentSlot);
    void LogSectionPositions();
    void LoadPrototypeEditor();
    void DrawAttaches(class UTexture2D* Texture, int32 AttachIndex);
    void DisassembleItem();
    void ClearAttaches();
    void ChangeUpgradeModule();
}; // Size: 0x4F0

class UUpgradePage : public UPDAPage
{
    class UPDAUpgradePanel* UpgradePanel;                                             // 0x0298 (size: 0x8)
    class UPDAUpgradesButton* ButtonAll;                                              // 0x02A0 (size: 0x8)
    class UPDAUpgradesButton* ButtonWeapon;                                           // 0x02A8 (size: 0x8)
    class UPDAUpgradesButton* ButtonArmor;                                            // 0x02B0 (size: 0x8)
    class UPDAUpgradesButton* ButtonHelmet;                                           // 0x02B8 (size: 0x8)
    class UUpgradeMenuWidget* UpgradeMenu;                                            // 0x02C0 (size: 0x8)
    class UHintInputController* HintNavLeft;                                          // 0x02C8 (size: 0x8)
    class UHintInputController* HintNavRight;                                         // 0x02D0 (size: 0x8)
    class UHintInputController* HideInformation;                                      // 0x02D8 (size: 0x8)
    class UHintInputController* RepairButton;                                         // 0x02E0 (size: 0x8)
    class UHintInputController* RemoveAttachment;                                     // 0x02E8 (size: 0x8)
    class UHintInputController* SelectInstalAttachment;                               // 0x02F0 (size: 0x8)
    class UHintInputController* ButtonHintExit;                                       // 0x02F8 (size: 0x8)
    class UHintInputController* NavigationHint;                                       // 0x0300 (size: 0x8)
    class UWidgetSwitcher* UpgradeSwitcher;                                           // 0x0308 (size: 0x8)
    class UHintActionRichText* DisassembleButton;                                     // 0x0310 (size: 0x8)
    class URepairPriceWidget* RepairPrice;                                            // 0x0318 (size: 0x8)
    FName SelectInput;                                                                // 0x0320 (size: 0x8)
    int32 UpgradesIndex;                                                              // 0x0328 (size: 0x4)
    int32 EmptyScreenIndex;                                                           // 0x032C (size: 0x4)
    float GreyValue;                                                                  // 0x0330 (size: 0x4)
    FString ExitTextHintl10nSID;                                                      // 0x0338 (size: 0x10)
    FString BackTextHintl10nSID;                                                      // 0x0348 (size: 0x10)
    TArray<class UPDAUpgradesButton*> MenuButtons;                                    // 0x0360 (size: 0x10)
    float HintHoldTime;                                                               // 0x0374 (size: 0x4)

    void UpdatePanel();
    void UnbindUpgradesNavigation();
    void UnbindConfirmPopup();
    void UIPDAUpgradesTreeNavigationUp();
    void UIPDAUpgradesTreeNavigationSelect();
    void UIPDAUpgradesTreeNavigationRight();
    void UIPDAUpgradesTreeNavigationLeft();
    void UIPDAUpgradesTreeNavigationDown();
    void UIPDAUpgradesTreeNavigationBack();
    void UIPDAUpgradesDisassemble();
    void UIPDANavigationUp();
    void UIPDANavigationRight();
    void UIPDANavigationLeft();
    void UIPDANavigationDown();
    void UIPDANavigationButtonRelease();
    void Repair();
    void Remove();
    void Hide();
    void HandleConfirmPopupBindings(bool InBind);
    void DisassembleItemHoldStarted();
    void DisassembleItemHoldReleased();
    void ClickButtonMenu(const FName ButtonId);
    void ClearInput();
    void BindUpgradesNavigation();
    void BindConfirmPopup();
}; // Size: 0x3A0

class UUpgradePriceWidget : public UWidgetBase
{
    class UTextBlock* Price;                                                          // 0x0278 (size: 0x8)
    class UTextBlock* Weight;                                                         // 0x0280 (size: 0x8)
    class UTextBlock* Description;                                                    // 0x0288 (size: 0x8)
    FString KgL10nSID;                                                                // 0x0290 (size: 0x10)
    FString DescriptionL10nSID;                                                       // 0x02A0 (size: 0x10)

}; // Size: 0x2B0

class UUpgradeSection : public UWidgetBase
{
    FUpgradeSectionOnSectionClicked OnSectionClicked;                                 // 0x0278 (size: 0x10)
    void OnSectionClicked(class UUpgradeSection* ClickedSection);
    bool bIsEnabledSection;                                                           // 0x0288 (size: 0x1)
    EUpgradeTargetPartType TargetPart;                                                // 0x0289 (size: 0x1)
    ELineDirection UpgradesLineDirection;                                             // 0x028A (size: 0x1)
    ELineDirection ModulesLineDirection;                                              // 0x028B (size: 0x1)
    FVector2D DotHoverSize;                                                           // 0x0290 (size: 0x10)
    FVector2D DotNormalSize;                                                          // 0x02A0 (size: 0x10)
    FUpgradeSectionOnAnimationProgress OnAnimationProgress;                           // 0x02B0 (size: 0x10)
    void OnAnimationProgress(const float Alpha, const bool bShowing);
    TArray<class UVerticalBox*> ModulesVerticalBoxes;                                 // 0x02C0 (size: 0x10)
    TArray<class UVerticalBox*> UpgradesVerticalBoxes;                                // 0x02D0 (size: 0x10)
    class UImage* ConnectionLineUpgrade;                                              // 0x02E0 (size: 0x8)
    class UVerticalBox* UpgradesPanel;                                                // 0x02E8 (size: 0x8)
    class UImage* ConnectionLineModule;                                               // 0x02F0 (size: 0x8)
    class UVerticalBox* ModulesPanel;                                                 // 0x02F8 (size: 0x8)
    class UTextBlock* NewUpgradeNotification;                                         // 0x0300 (size: 0x8)
    class UTextBlock* UpgradesTextBlock;                                              // 0x0308 (size: 0x8)
    class UTextBlock* ModulesTextBlock;                                               // 0x0310 (size: 0x8)
    class UImage* Dot;                                                                // 0x0318 (size: 0x8)
    class UButton* DotButton;                                                         // 0x0320 (size: 0x8)
    TSubclassOf<class UUpgradeSlot> SlotWidgetClass;                                  // 0x0328 (size: 0x8)
    class UUpgradesSettings* SettingsAsset;                                           // 0x0330 (size: 0x8)
    TArray<class UUpgradeSlot*> Slots;                                                // 0x0338 (size: 0x10)
    FText UpgradeL10n;                                                                // 0x0348 (size: 0x18)
    FText ModulesL10n;                                                                // 0x0360 (size: 0x18)
    FText NewNotificationL10n;                                                        // 0x0378 (size: 0x18)
    class UUpgradeSlot* LastHighlightedSlot;                                          // 0x03C0 (size: 0x8)

    void ToggleSection();
    void SectionUnhovered();
    void SectionHovered();
    void SectionClicked();
    void RebuildSections();
    void OnSectionClicked__DelegateSignature(class UUpgradeSection* ClickedSection);
    void OnAnimationProgress__DelegateSignature(const float Alpha, const bool bShowing);
}; // Size: 0x3C8

class UUpgradeSlot : public UWidgetBase
{
    class UImage* UpgradeImage;                                                       // 0x02A8 (size: 0x8)
    class UImage* TopConnectionLine;                                                  // 0x02B0 (size: 0x8)
    class UImage* MiddleConnectionLine;                                               // 0x02B8 (size: 0x8)
    class UImage* DownConnectionLine;                                                 // 0x02C0 (size: 0x8)
    class UImage* Locked;                                                             // 0x02C8 (size: 0x8)
    class UImage* Blueprint;                                                          // 0x02D0 (size: 0x8)
    class UImage* Highlighted;                                                        // 0x02D8 (size: 0x8)
    class UImage* Mod;                                                                // 0x02E0 (size: 0x8)
    class UImage* Border;                                                             // 0x02E8 (size: 0x8)
    class UImage* Discount;                                                           // 0x02F0 (size: 0x8)
    class UButton* UpgradeButton;                                                     // 0x02F8 (size: 0x8)
    class UUpgradesSettings* SettingsAsset;                                           // 0x0300 (size: 0x8)
    FUpgradeSlotData Data;                                                            // 0x0320 (size: 0x58)

    void Unhighlight();
    void OnUpgradeClick__DelegateSignature(FString UgradeId, class UUpgradeSlot* InCurrentSlot);
    void OnUpgradeButtonClick();
    void OnItemMouseLeave__DelegateSignature();
    void OnItemMouseEnter__DelegateSignature(FString UgradeId);
    void Highlight();
}; // Size: 0x380

class UUpgradesIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UUpgradesMouseIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UUpgradesSettings : public UDataAsset
{
    FSlateColor Purchased;                                                            // 0x0030 (size: 0x14)
    FSlateColor bLocked;                                                              // 0x0044 (size: 0x14)
    FSlateColor Available;                                                            // 0x0058 (size: 0x14)
    FSlateColor PurchasedModuleOn;                                                    // 0x006C (size: 0x14)
    FSlateColor PurchasedModuleOff;                                                   // 0x0080 (size: 0x14)
    FSlateColor Unavailable;                                                          // 0x0094 (size: 0x14)
    FSlateColor LastUpdated;                                                          // 0x00A8 (size: 0x14)
    FSlateColor ClosedNotEmptySection;                                                // 0x00BC (size: 0x14)
    FSlateColor EmptySection;                                                         // 0x00D0 (size: 0x14)
    FSlateColor OpenedSection;                                                        // 0x00E4 (size: 0x14)
    int32 HorizontalMaxNumber;                                                        // 0x00F8 (size: 0x4)
    int32 VerticalMaxNumber;                                                          // 0x00FC (size: 0x4)
    float SectionAnimationDuration;                                                   // 0x0100 (size: 0x4)

}; // Size: 0x108

class UUpgradesWidget : public UInventoryNew
{
}; // Size: 0x1388

class UUpscalingElementOnOff : public USettingElementOnOff
{
    EPerformanceBoostUpscalingMethod UpscalingMethodValue;                            // 0x1DE0 (size: 0x1)

}; // Size: 0x1DF0

class UUpscalingElementPercent : public USettingsElementPercent
{
    EPerformanceBoostUpscalingMethod UpscalingMethodValue;                            // 0x1DF8 (size: 0x1)

}; // Size: 0x1E00

class UUpscalingElementSwitcher : public USettingElementSwitcher
{
    EPerformanceBoostUpscalingMethod UpscalingMethodValue;                            // 0x1EA8 (size: 0x1)

}; // Size: 0x1EB0

class UUserMarkerCounter : public UWidgetBase
{
    class UTextWidget* CounterText;                                                   // 0x0278 (size: 0x8)
    FString CounterFormat;                                                            // 0x0280 (size: 0x10)

    void UpdateMarkerCounterWidget(const int32 NewAmount);
}; // Size: 0x298

class UUserMarkerSelector : public UChildViewBase
{
    class UOverlay* ButtonOverlay;                                                    // 0x0298 (size: 0x8)
    class UImage* Background;                                                         // 0x02A0 (size: 0x8)
    class UUserMarkerCounter* MarkerCounter;                                          // 0x02A8 (size: 0x8)
    class UUserMarkerSelectorButton* TopButton;                                       // 0x02B0 (size: 0x8)
    class UUserMarkerSelectorButton* RightButton;                                     // 0x02B8 (size: 0x8)
    class UUserMarkerSelectorButton* LeftButton;                                      // 0x02C0 (size: 0x8)
    class UUserMarkerSelectorButton* BottomButton;                                    // 0x02C8 (size: 0x8)
    class USizeBox* SizeBox;                                                          // 0x02D0 (size: 0x8)
    class UWidgetAnimation* ShowAnimation;                                            // 0x02D8 (size: 0x8)
    class UWidgetAnimation* ToGamepadCursor;                                          // 0x02E0 (size: 0x8)
    bool bIsCursor;                                                                   // 0x02E8 (size: 0x1)
    float ShowAnimationSpeedMultiplier;                                               // 0x02EC (size: 0x4)
    float HideAnimationSpeedMultiplier;                                               // 0x02F0 (size: 0x4)
    float CursorSelectorTransitionSpeedMultiplier;                                    // 0x02F4 (size: 0x4)
    FVector2D size;                                                                   // 0x02F8 (size: 0x10)
    class UUserMarkerSelectorButton* HoveredButton;                                   // 0x0308 (size: 0x8)

    void PressedButton(const EMarkerType MarkType, const FVector& Coordinates);
    void HoverButton(class UUserMarkerSelectorButton* InHoveredButton);
}; // Size: 0x318

class UUserMarkerSelectorButton : public UWidgetBase
{
    EMarkerType MarkerType;                                                           // 0x0278 (size: 0x1)
    EMarkerPosition MarkerPosition;                                                   // 0x0279 (size: 0x1)
    FName HoverColorStyleID;                                                          // 0x02A0 (size: 0x8)
    FName DisableHoverColorStyleID;                                                   // 0x02A8 (size: 0x8)
    FName NotHoverColorStyleID;                                                       // 0x02B0 (size: 0x8)
    class UButton* ButtonElement;                                                     // 0x02B8 (size: 0x8)
    class UImage* MarkerImage;                                                        // 0x02C0 (size: 0x8)
    class UImage* Background;                                                         // 0x02C8 (size: 0x8)
    class UOverlay* RotationOverlay;                                                  // 0x02D0 (size: 0x8)
    class UWidgetAnimation* HoverOptionAnimation;                                     // 0x02D8 (size: 0x8)
    class UWidgetAnimation* SelectAnimation;                                          // 0x02E0 (size: 0x8)
    float SelectAnimationSpeedMultiplier;                                             // 0x02E8 (size: 0x4)
    float HoverAnimationSpeedMultiplier;                                              // 0x02EC (size: 0x4)
    float HideHoverAnimationSpeedMultiplier;                                          // 0x02F0 (size: 0x4)
    FName HighlightDirectionParameterName;                                            // 0x02F4 (size: 0x8)
    FName BackgroundImageParameterName;                                               // 0x02FC (size: 0x8)
    FName StartColorParameterName;                                                    // 0x0304 (size: 0x8)
    FName FinishColorParameterName;                                                   // 0x030C (size: 0x8)
    FName HoverColorParameterName;                                                    // 0x0314 (size: 0x8)

    void OnPressedButtonElement();
    void OnHoveredButtonElement();
}; // Size: 0x340

class UUserWaterElement : public UWidgetBase
{
    class UOverlay* WaterMarks;                                                       // 0x0278 (size: 0x8)

}; // Size: 0x280

class UUserWaterElementText : public UWidgetBase
{
    class UTextBlock* WaterMarkText;                                                  // 0x0278 (size: 0x8)
    class UWidgetAnimation* WaterElementMovement;                                     // 0x0280 (size: 0x8)
    float AnimationSpeed;                                                             // 0x0288 (size: 0x4)

}; // Size: 0x290

class UVATAnimationsConfig : public UPrimaryDataAsset
{
    FName MaterialNextAnimPropertyName;                                               // 0x0030 (size: 0x8)
    FName MaterialNextAnimLastFramePropertyName;                                      // 0x0038 (size: 0x8)
    FName MaterialPrevAnimPropertyName;                                               // 0x0040 (size: 0x8)
    FName MaterialAnimBlendingPropertyName;                                           // 0x0048 (size: 0x8)
    TArray<FVATAnimation> Animations;                                                 // 0x0050 (size: 0x10)

}; // Size: 0x60

class UVehicleSoundPlacement : public USceneComponent
{
    class UAkAudioEvent* VehiclePullSound;                                            // 0x02A0 (size: 0x8)
    class UAkAudioEvent* VehicleReleaseSound;                                         // 0x02A8 (size: 0x8)

}; // Size: 0x2B0

class UVictoryBPFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool WidgetIsChildOf(class UWidget* ChildWidget, class UWidget* PossibleParent);
    class UUserWidget* WidgetGetParentOfClass(class UWidget* ChildWidget, TSubclassOf<class UUserWidget> WidgetClass);
    bool Viewport__GetCenterOfViewport(const class APlayerController* ThePC, float& PosX, float& PosY);
    bool VictorySoundVolumeChange(class USoundClass* SoundClassObject, float NewVolume);
    void VictoryRemoveAxisKeyBind(FVictoryInputAxis ToRemove);
    void VictoryRemoveActionKeyBind(FVictoryInput ToRemove);
    bool VictoryReBindAxisKey(FVictoryInputAxis Original, FVictoryInputAxis NewBinding);
    bool VictoryReBindActionKey(FVictoryInput Original, FVictoryInput NewBinding);
    FString VictoryPaths__ScreenShotsDir();
    FString VictoryPaths__SavedDir();
    FVictoryInputAxis VictoryGetVictoryInputAxis(const FKeyEvent& KeyEvent);
    FVictoryInput VictoryGetVictoryInput(const FKeyEvent& KeyEvent);
    void VictoryGetAllAxisKeyBindings(TArray<FVictoryInputAxis>& Bindings);
    void VictoryGetAllAxisAndActionMappingsForKey(FKey Key, TArray<FVictoryInput>& ActionBindings, TArray<FVictoryInputAxis>& AxisBindings);
    void VictoryGetAllActionKeyBindings(TArray<FVictoryInput>& Bindings);
    bool ScreenShots_Rename_Move_Most_Recent(FString& OriginalFileName, FString NewName, FString NewAbsoluteFolderPath, bool HighResolution);
    void SaveGameObject_GetAllSaveSlotFileNames(TArray<FString>& FileNames);
    void SaveConfigToFile(TArray<FVictoryInput> VictoryInputs, FString Filename);
    void RemoveAllWidgetsOfClass(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetClass);
    float MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);
    class UObject* LoadObjectFromAssetPath(UClass* ObjectClass, FName Path, bool& IsValid);
    bool IsWidgetOfClassInViewport(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetClass);
    FName GetObjectPath(class UObject* Obj);
    class UUserWidget* GetFirstWidgetOfClass(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetClass, bool TopLevelOnly);
    void GetAllWidgetsOfClass(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetClass, TArray<class UUserWidget*>& FoundWidgets, bool TopLevelOnly);
}; // Size: 0x28

class UVideoLoadingScreenWidget : public UTimedLoadingScreenWidget
{
    class UBinkMediaPlayer* BinkMediaPlayer;                                          // 0x02F0 (size: 0x8)

    void EndVideo();
}; // Size: 0x328

class UViewBase : public UWidgetBase
{
    FViewOpenSettings ViewOpenSettings;                                               // 0x0278 (size: 0x38)
    EWidgetNameEx WidgetName;                                                         // 0x02B0 (size: 0x4)

    void UIClose();
    void PreCloseUpdateView();
}; // Size: 0x2C0

class UViewBaseExtended : public UViewBase
{
}; // Size: 0x2C8

class UVoiceModulatorControllerSubsystem : public UWorldSubsystem
{
}; // Size: 0x40

class UVoiceoverSpeechComponent : public USpeechComponent
{
    class UAkComponent* AkVoiceoverSpeakerComponent;                                  // 0x00D0 (size: 0x8)

    void OnAKEventFinished(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
}; // Size: 0x220

class UWLCylinderShapeComponent : public UDebugDrawComponent
{
}; // Size: 0x5B0

class UWalkIPU : public UBehaviorBasedIPU
{
}; // Size: 0x58

class UWanderingLightInstanceSpline : public USplineComponent
{
}; // Size: 0x680

class UWaterComponent : public UActorComponent
{
    bool bAffectedByRain;                                                             // 0x00A8 (size: 0x1)
    class UMaterialInterface* RegularWaterMaterial;                                   // 0x00B8 (size: 0x8)

    void OnEndOverlap(class AActor* OverlappedComponent, class AActor* OtherActor);
    void OnBeginOverlap(class AActor* OverlappedComponent, class AActor* OtherActor);
}; // Size: 0xD0

class UWaterContactController : public UActorComponent
{
    TArray<class UWaterComponent*> ActiveWaterBodies;                                 // 0x00E8 (size: 0x10)

    FVector ProjectOwnerPositionOnWaterSurface();
    FWaterSurfaceObstructionResult IsPathToWaterSurfaceObstructed();
}; // Size: 0xF8

class UWaterElement : public UWidgetBase
{
    class UTextBlock* TextBlock;                                                      // 0x0278 (size: 0x8)

}; // Size: 0x280

class UWaterManager : public UBaseManager
{
}; // Size: 0xD0

class UWaterTraceComponent : public UActorComponent
{
    FVector PreviousLocation;                                                         // 0x00A0 (size: 0x18)

}; // Size: 0xC8

class UWeaponAttachAnimCollection : public UObject
{
    FComplexAttachAnimations AttachAnimations;                                        // 0x0028 (size: 0xB8)

}; // Size: 0xE0

class UWeatherParameterNamesDataAsset : public UDataAsset
{
    FName AtmosphereBrightness;                                                       // 0x0030 (size: 0x8)
    FName EmissiveBrightness;                                                         // 0x0038 (size: 0x8)
    FName ZenithColor;                                                                // 0x0040 (size: 0x8)
    FName HorizonColor;                                                               // 0x0048 (size: 0x8)
    FName CloudMapBias;                                                               // 0x0050 (size: 0x8)
    FName CloudMapDensity;                                                            // 0x0058 (size: 0x8)
    FName NoiseFlowMapAMultiplier;                                                    // 0x0060 (size: 0x8)
    FName NoiseFlowMapABias;                                                          // 0x0068 (size: 0x8)
    FName NoiseFlowMapADetail;                                                        // 0x0070 (size: 0x8)
    FName NoiseFlowMapABottomNoise;                                                   // 0x0078 (size: 0x8)
    FName NoiseFlowMapBBias;                                                          // 0x0080 (size: 0x8)
    FName NoiseFlowMapBDetail;                                                        // 0x0088 (size: 0x8)
    FName NoiseFlowMapBScale;                                                         // 0x0090 (size: 0x8)
    FName BillowyStormyCloudsHeight;                                                  // 0x0098 (size: 0x8)
    FName DensityVariationScale;                                                      // 0x00A0 (size: 0x8)
    FName DensityVariationPower;                                                      // 0x00A8 (size: 0x8)
    FName DensityVariationOutFirst;                                                   // 0x00B0 (size: 0x8)
    FName DensityVariationOutSecond;                                                  // 0x00B8 (size: 0x8)
    FName DensityVariationDarkMinDensity;                                             // 0x00C0 (size: 0x8)
    FName CloudBaseCapMaskRadius;                                                     // 0x00C8 (size: 0x8)
    FName CloudBaseSpeedMultiplier;                                                   // 0x00D0 (size: 0x8)
    FName CloudBaseECX;                                                               // 0x00D8 (size: 0x8)
    FName CloudBasePreExponentialDensity;                                             // 0x00E0 (size: 0x8)
    FName CloudBaseAlbedo;                                                            // 0x00E8 (size: 0x8)
    FName CloudBaseSecondAlbedo;                                                      // 0x00F0 (size: 0x8)
    FName EmissionParamPositionIntensity;                                             // 0x00F8 (size: 0x8)
    FName EmissionParamColor;                                                         // 0x0100 (size: 0x8)
    FName PhaseBlend;                                                                 // 0x0108 (size: 0x8)
    FName PhaseG;                                                                     // 0x0110 (size: 0x8)
    FName PhaseGSecond;                                                               // 0x0118 (size: 0x8)
    FName MultiScatteringContribution;                                                // 0x0120 (size: 0x8)
    FName MultiScatteringOcclusion;                                                   // 0x0128 (size: 0x8)
    FName MultiScatteringOcclusionPower;                                              // 0x0130 (size: 0x8)
    FName MultiScatteringEccentricity;                                                // 0x0138 (size: 0x8)
    FName MoonOpacity;                                                                // 0x0140 (size: 0x8)
    FName MoonLatitude;                                                               // 0x0148 (size: 0x8)
    FName MoonLongitude;                                                              // 0x0150 (size: 0x8)
    FName SunShadowAmount;                                                            // 0x0158 (size: 0x8)
    FName SkyAtmColorPower;                                                           // 0x0160 (size: 0x8)
    FName WindIntensity;                                                              // 0x0168 (size: 0x8)
    FName WindDirection;                                                              // 0x0170 (size: 0x8)
    FName FoliageWindDirection;                                                       // 0x0178 (size: 0x8)
    FName FoliageWindIntensity;                                                       // 0x0180 (size: 0x8)
    FName PreviousFoliageWindDirection;                                               // 0x0188 (size: 0x8)
    FName PreviousFoliageWindIntensity;                                               // 0x0190 (size: 0x8)
    FName RainActivate;                                                               // 0x0198 (size: 0x8)
    FName TimeOfDay;                                                                  // 0x01A0 (size: 0x8)
    FName Wetness;                                                                    // 0x01A8 (size: 0x8)
    FName WaterWindNormalMultiplier;                                                  // 0x01B0 (size: 0x8)
    FName RainWindDirection;                                                          // 0x01B8 (size: 0x8)
    FName RainWindStrength;                                                           // 0x01C0 (size: 0x8)
    FName RainSpawnRate;                                                              // 0x01C8 (size: 0x8)
    FName LightningSpawnRate;                                                         // 0x01D0 (size: 0x8)
    FName LightningColor;                                                             // 0x01D8 (size: 0x8)
    FName StormSpawnRate;                                                             // 0x01E0 (size: 0x8)
    FName CloudShift;                                                                 // 0x01E8 (size: 0x8)
    FName WaterShift;                                                                 // 0x01F0 (size: 0x8)

}; // Size: 0x1F8

class UWeatherPresetDataAsset : public UDataAsset
{
    FWeatherState WeatherState;                                                       // 0x0030 (size: 0x2390)

}; // Size: 0x23C0

class UWeatherSelectionPostProcessData : public UDataAsset
{
    float Priority;                                                                   // 0x0030 (size: 0x4)
    float BlendRadius;                                                                // 0x0034 (size: 0x4)
    float BlendWeight;                                                                // 0x0038 (size: 0x4)
    FPostProcessSettings Settings;                                                    // 0x0040 (size: 0x720)

}; // Size: 0x760

class UWeightBar : public UWidgetBase
{
    class UImage* BackgroundImage;                                                    // 0x0278 (size: 0x8)
    class UImage* HighlightImage;                                                     // 0x0280 (size: 0x8)
    class UImage* DifferenceImage;                                                    // 0x0288 (size: 0x8)
    class UImage* TrianglePointer;                                                    // 0x0290 (size: 0x8)
    class UOverlay* BarOverlay;                                                       // 0x0298 (size: 0x8)
    class UTextWidget* CurrentWeightText;                                             // 0x02A0 (size: 0x8)
    class UTextWidget* MaxWeightText;                                                 // 0x02A8 (size: 0x8)
    float CurrentWeightTextPosition;                                                  // 0x02B0 (size: 0x4)
    float TrianglePosition;                                                           // 0x02B4 (size: 0x4)
    FLinearColor BackgroundSegmentColor1;                                             // 0x02C0 (size: 0x10)
    FLinearColor OneItemDifferenceColor;                                              // 0x02D0 (size: 0x10)
    FLinearColor BackgroundSegmentColor2;                                             // 0x02E0 (size: 0x10)
    FLinearColor BackgroundSegmentColor3;                                             // 0x02F0 (size: 0x10)
    FLinearColor OverweightTextColor;                                                 // 0x0300 (size: 0x10)
    FLinearColor NonOverweightTextColor;                                              // 0x0310 (size: 0x10)
    float HighlightSegmentEnd;                                                        // 0x0320 (size: 0x4)
    float HighlightOpacity;                                                           // 0x0324 (size: 0x4)
    FLinearColor HighlightColor;                                                      // 0x0328 (size: 0x10)
    float DifferenceStart;                                                            // 0x0338 (size: 0x4)
    float DifferenceEnd;                                                              // 0x033C (size: 0x4)
    FLinearColor DifferencePositiveColor;                                             // 0x034C (size: 0x10)
    FLinearColor DifferenceNegativeColor;                                             // 0x035C (size: 0x10)

}; // Size: 0x388

class UWetnessComponent : public UActorComponent
{
}; // Size: 0xD0

class UWidgetBase : public UUserWidget
{

    void UpdateWidget();
}; // Size: 0x278

class UWidgetPool : public UUserWidget
{
    TSubclassOf<class UUserWidget> WidgetInPoolClass;                                 // 0x0288 (size: 0x8)

    class UUserWidget* CreateWidgetByPool();
}; // Size: 0x2A0

class UWildlifeBehaviourComponent : public UActorComponent
{
}; // Size: 0xA8

class UWindowDamageComponent : public UActorComponent
{
    float CheckRate;                                                                  // 0x00A0 (size: 0x4)
    FVector PreviousLocation;                                                         // 0x00A8 (size: 0x18)
    FTimerHandle CheckTimerHandle;                                                    // 0x00C0 (size: 0x8)

}; // Size: 0xC8

class UWorldCompositionAnalyzer : public UBaseTickableManager
{

    void OnLevelLoaded();
}; // Size: 0xC0

class UWorldMap : public UWidgetBase
{
    class USizeBox* WorldMapSizeBox;                                                  // 0x0288 (size: 0x8)
    class UCanvasPanel* MarkerStoreg;                                                 // 0x0290 (size: 0x8)
    class UOverlay* MapContainer;                                                     // 0x0298 (size: 0x8)
    class UWidget* PlayerPosition;                                                    // 0x02A0 (size: 0x8)
    float AddWorldAngle;                                                              // 0x02A8 (size: 0x4)
    FVector2D LandmarkOffset;                                                         // 0x02B0 (size: 0x10)
    FWorldMapOnMapMarkerMarker OnMapMarkerMarker;                                     // 0x02C0 (size: 0x10)
    void OnMapMarkerMarker(bool bIsHovered, class UWorldMapMarker* InHoverMarkerWidget);
    FWorldMapOnMapMarkerClick OnMapMarkerClick;                                       // 0x02D0 (size: 0x10)
    void OnMapMarkerClick(const class UWorldMapMarker* InHoverMarkerWidget);
    TArray<class UWorldMapMarker*> markers;                                           // 0x02E0 (size: 0x10)
    TArray<class UWorldMapMarker*> Landmarks;                                         // 0x02F0 (size: 0x10)
    FUID FollowMarker;                                                                // 0x0300 (size: 0x4)
    class UWorldMapMarker* CurrHoverMarker;                                           // 0x0308 (size: 0x8)

    void MarkerHover(bool bInHovered, class UWorldMapMarker* InHoverMarkerWidget);
    void MarkerClick(const class UWorldMapMarker* HoverMarkerWidget);
}; // Size: 0x320

class UWorldMapHubMarker : public UWorldMapMarker
{
    class UImage* MiniMarkerMain;                                                     // 0x0340 (size: 0x8)
    class UImage* MiniMarkerSide;                                                     // 0x0348 (size: 0x8)

}; // Size: 0x350

class UWorldMapIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UWorldMapManager : public UBaseTickableManager
{
    TSubclassOf<class UWorldMapMarker> WorldMapMarkerClass;                           // 0x00A8 (size: 0x8)
    TSubclassOf<class UWorldMapMarker> WorldMapRegionMarkerClass;                     // 0x00B0 (size: 0x8)
    TSubclassOf<class UWorldMapMarker> WorldMapLocationMarkerClass;                   // 0x00B8 (size: 0x8)
    TSubclassOf<class UWorldMapMarker> WorldMapHubMarkerClass;                        // 0x00C0 (size: 0x8)
    TSubclassOf<class UMarkerCompassWidget> MarkerCompassWidgetClass;                 // 0x00C8 (size: 0x8)
    class UDataTable* MarkerIconsDataTable;                                           // 0x00D0 (size: 0x8)
    class UMarkerSettings* MarkerSettingsAsset;                                       // 0x00D8 (size: 0x8)
    class AWorldMapScene* WorldMapScene;                                              // 0x0130 (size: 0x8)
    class USRLEAsset* RegionTexture;                                                  // 0x0158 (size: 0x8)
    TMap<class ETrackGroup, class FUID> TrackedMarkers;                               // 0x0168 (size: 0x50)

}; // Size: 0x1B8

class UWorldMapMarker : public UWidgetBase
{
    FWorldMapMarkerOnHoverMarker OnHoverMarker;                                       // 0x0278 (size: 0x10)
    void OnHoverMarker(bool bIsHovered, class UWorldMapMarker* OutHoverMarkerWidget);
    FWorldMapMarkerOnClickMarker OnClickMarker;                                       // 0x0288 (size: 0x10)
    void OnClickMarker(const class UWorldMapMarker* HoverMarkerWidget);
    bool bIsScale;                                                                    // 0x0298 (size: 0x1)
    class UImage* MarkerZone;                                                         // 0x02A0 (size: 0x8)
    class UImage* MarkerIcon;                                                         // 0x02A8 (size: 0x8)
    class USizeBox* MarkerSizeBox;                                                    // 0x02B0 (size: 0x8)
    class USizeBox* ZoneRadiuse;                                                      // 0x02B8 (size: 0x8)
    class UButton* ClickZone;                                                         // 0x02C0 (size: 0x8)
    FVector2D MarkerAlignment;                                                        // 0x02C8 (size: 0x10)
    float MarkerSize;                                                                 // 0x02D8 (size: 0x4)
    bool bEnableHoverScale;                                                           // 0x02DC (size: 0x1)
    float HoverScaleValue;                                                            // 0x02E0 (size: 0x4)
    bool bEnableMarkerClick;                                                          // 0x02E4 (size: 0x1)
    class UCanvasPanelSlot* PerentCanvasSlot;                                         // 0x0338 (size: 0x8)

    void OnMouseUnhover();
    void OnMouseHover();
    void MarkerClick();
}; // Size: 0x340

class UWorldMapMarkerSelector : public UWidgetBase
{
}; // Size: 0x278

class UWorldMapPage : public UPDAPage
{
    class UWorldMapTooltip* WorldMapTooltip;                                          // 0x02A8 (size: 0x8)
    class UMapLegend* MapLegend;                                                      // 0x02B0 (size: 0x8)
    class UWidget* ZoomContainerBox;                                                  // 0x02B8 (size: 0x8)
    class UWorldMapZoomContainer* ZoomContainer;                                      // 0x02C0 (size: 0x8)
    class UZoomIndicator* ZoomIndicator;                                              // 0x02C8 (size: 0x8)
    class USizeBox* HintZone;                                                         // 0x02D0 (size: 0x8)
    class UHintInputController* ShowMarkerSelectorHintGamepad;                        // 0x02D8 (size: 0x8)
    class UHintInputController* MoveToPlayerPositionHint;                             // 0x02E0 (size: 0x8)
    class UHintInputController* ShowMarkerSelectorHint;                               // 0x02E8 (size: 0x8)
    class UHintInputController* HideMarkerSelectorHint;                               // 0x02F0 (size: 0x8)
    class UHintInputController* SetFollowLandmarkHint;                                // 0x02F8 (size: 0x8)
    class UHintInputController* SelectMarkerHint;                                     // 0x0300 (size: 0x8)
    class UHintInputController* DeleteSelectedLandmarkHint;                           // 0x0308 (size: 0x8)
    class UHintInputController* ButtonToggleTracking;                                 // 0x0310 (size: 0x8)
    class UHintInputController* ChooseMarkerHint;                                     // 0x0318 (size: 0x8)
    class UHintInputController* ChangeZoomLevelHint;                                  // 0x0320 (size: 0x8)
    class UHintInputController* GamepadNavigationHint;                                // 0x0328 (size: 0x8)
    class UHintInputController* ShowLegendHint;                                       // 0x0330 (size: 0x8)
    class UHintInputController* ShowGotoJournalTaskHint;                              // 0x0338 (size: 0x8)
    class UHintInputController* ButtonHintExit;                                       // 0x0340 (size: 0x8)
    FVector2D DefaultPosition;                                                        // 0x0348 (size: 0x10)
    int32 DefaultZoomLVL;                                                             // 0x0358 (size: 0x4)
    bool bShouldOpenDefaultZoomLVL;                                                   // 0x035C (size: 0x1)
    bool bEnablePlayerLandmarks;                                                      // 0x035D (size: 0x1)
    FString HintZoomSID;                                                              // 0x0360 (size: 0x10)
    FString HintScrollLegendSID;                                                      // 0x0370 (size: 0x10)
    FName HintDisable;                                                                // 0x0380 (size: 0x8)
    FName HintTrack;                                                                  // 0x0388 (size: 0x8)
    TMap<class EMarkerType, class FSlateColor> MarkerHoverColors;                     // 0x0390 (size: 0x50)
    TMap<class EMarkerType, class FSlateColor> MarkerUnhoverColors;                   // 0x03E0 (size: 0x50)

    void UpdatePlatformInputMode();
    void UIPDAToggleMarkTracking();
    void UIPDAToggleLegend();
    void UIPDAOpenQuestInJournal();
    void UIPDAOpenPlayerMarkerSelector();
    void UIPDANavigationUpReleased();
    void UIPDANavigationUp();
    void UIPDANavigationRightReleased();
    void UIPDANavigationRight();
    void UIPDANavigationLeftReleased();
    void UIPDANavigationLeft();
    void UIPDANavigationDownReleased();
    void UIPDANavigationDown();
    void UIPDAMoveToPlayerPosition();
    void UIPDADeletePlayerMarker();
    void UIPDACreateTrackedPlayerMarker();
    void UIPDACreatePlayerMarker(const EMarkerType LandmarkType, const FVector& CreateMarkedLocation);
    void UIPDAChangeVisibilityPlayerMarkers();
    void OnPressExit();
    void OnMarkerSelectorShow();
    void OnMarkerSelectorHide();
    void OnLegendUnhover();
    void OnLegendHover();
    void MarkerHover(const bool bHovered, class UWorldMapMarker* HoverMarkerWidget);
    void MarkerClick(const class UWorldMapMarker* HoverMarkerWidget);
}; // Size: 0x450

class UWorldMapRegionMarker : public UWorldMapMarker
{
    class UTextWidget* RegionName;                                                    // 0x0340 (size: 0x8)

}; // Size: 0x348

class UWorldMapScrollIPU : public UInputProcessingUnit
{
}; // Size: 0x40

class UWorldMapTooltip : public UWidgetBase
{
    class UWorldMapTooltipHeader* HeaderBackground;                                   // 0x0278 (size: 0x8)
    class UTextWidget* BodyPlainText;                                                 // 0x0280 (size: 0x8)
    class UWidgetSwitcher* TooltipBodySwitcher;                                       // 0x0288 (size: 0x8)
    class UWidgetSwitcher* TooltipFooterSwitcher;                                     // 0x0290 (size: 0x8)
    class UUniformGridPanel* ChildMarkerBox;                                          // 0x0298 (size: 0x8)
    class UImage* FactionImage;                                                       // 0x02A0 (size: 0x8)
    class UTextWidget* SubtitleText;                                                  // 0x02A8 (size: 0x8)
    class UTextWidget* TitleText;                                                     // 0x02B0 (size: 0x8)
    class UImage* MarkerImage;                                                        // 0x02B8 (size: 0x8)
    class UTaskMenuWidget* QuestStage;                                                // 0x02C0 (size: 0x8)
    class UPlayerStorageData* PlayerStorageData;                                      // 0x02C8 (size: 0x8)
    class UTooltipRecord* AnomalyDetails;                                             // 0x02D0 (size: 0x8)
    class UPanelWidget* BodyMainBox;                                                  // 0x02D8 (size: 0x8)
    class UPanelWidget* FooterMainBox;                                                // 0x02E0 (size: 0x8)
    TMap<class EMarkerType, class FName> DisplayTooltipTitle;                         // 0x02E8 (size: 0x50)
    FName MainQuestColorStyle;                                                        // 0x0338 (size: 0x8)
    FName SecondaryColorQuestStyle;                                                   // 0x0340 (size: 0x8)

}; // Size: 0x350

class UWorldMapTooltipHeader : public UWidgetBase
{
    class UImage* TopBackgroundImage;                                                 // 0x0278 (size: 0x8)
    class UImage* MiddleBackgroundImage;                                              // 0x0280 (size: 0x8)
    class UImage* BottomBackgroundImage;                                              // 0x0288 (size: 0x8)
    class UImage* TopBackgroundImageColor;                                            // 0x0290 (size: 0x8)
    class UImage* MiddleBackgroundImageColor;                                         // 0x0298 (size: 0x8)
    class UImage* BottomBackgroundImageColor;                                         // 0x02A0 (size: 0x8)
    class UImage* TopBackgroundImageBlack;                                            // 0x02A8 (size: 0x8)
    class UImage* MiddleBackgroundImageBlack;                                         // 0x02B0 (size: 0x8)
    class UImage* BottomBackgroundImageBlack;                                         // 0x02B8 (size: 0x8)
    class UImage* DotsImage;                                                          // 0x02C0 (size: 0x8)

}; // Size: 0x2C8

class UWorldMapZoomContainer : public UWidgetBase
{
    class UImage* MapTexture;                                                         // 0x0278 (size: 0x8)
    class UWorldMap* WorldMap;                                                        // 0x0280 (size: 0x8)
    class UUserMarkerSelector* GamepadCursor;                                         // 0x0288 (size: 0x8)

    void MoveToPlayerLocation();
    void CenterOnCachedLocation();
}; // Size: 0x350

class UWoundedHoldComponent : public UHoldComponent
{
}; // Size: 0x238

class UXboxSaveLoadIO : public USaveLoadIO
{
}; // Size: 0x28

class UZoomIndicator : public UWidgetBase
{
    class UHorizontalBox* ZoomPointer;                                                // 0x0278 (size: 0x8)
    class UTextWidget* TextCounter;                                                   // 0x0280 (size: 0x8)
    FString TextPrefix;                                                               // 0x0288 (size: 0x10)
    TArray<float> PointerZoomLevelOffset;                                             // 0x0298 (size: 0x10)

}; // Size: 0x2A8

#endif
