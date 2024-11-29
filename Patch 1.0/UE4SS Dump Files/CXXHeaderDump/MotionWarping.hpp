#ifndef UE4SS_SDK_MotionWarping_HPP
#define UE4SS_SDK_MotionWarping_HPP

#include "MotionWarping_enums.hpp"

struct FMotionDeltaTrack
{
    TArray<FTransform> BoneTransformTrack;                                            // 0x0000 (size: 0x10)
    TArray<FVector> DeltaTranslationTrack;                                            // 0x0010 (size: 0x10)
    TArray<FRotator> DeltaRotationTrack;                                              // 0x0020 (size: 0x10)
    FVector TotalTranslation;                                                         // 0x0030 (size: 0x18)
    FRotator TotalRotation;                                                           // 0x0048 (size: 0x18)

}; // Size: 0x60

struct FMotionDeltaTrackContainer
{
    TArray<FMotionDeltaTrack> Tracks;                                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMotionWarpingTarget
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FVector Location;                                                                 // 0x0008 (size: 0x18)
    FRotator Rotation;                                                                // 0x0020 (size: 0x18)
    TWeakObjectPtr<class USceneComponent> Component;                                  // 0x0038 (size: 0x8)
    FName BoneName;                                                                   // 0x0040 (size: 0x8)
    bool bFollowComponent;                                                            // 0x0048 (size: 0x1)

}; // Size: 0x50

struct FMotionWarpingUpdateContext
{
    TWeakObjectPtr<class UAnimSequenceBase> Animation;                                // 0x0000 (size: 0x8)
    float PreviousPosition;                                                           // 0x0008 (size: 0x4)
    float CurrentPosition;                                                            // 0x000C (size: 0x4)
    float Weight;                                                                     // 0x0010 (size: 0x4)
    float PlayRate;                                                                   // 0x0014 (size: 0x4)
    float DeltaSeconds;                                                               // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FMotionWarpingWindowData
{
    class UAnimNotifyState_MotionWarping* AnimNotify;                                 // 0x0000 (size: 0x8)
    float StartTime;                                                                  // 0x0008 (size: 0x4)
    float EndTime;                                                                    // 0x000C (size: 0x4)

}; // Size: 0x10

class UAnimNotifyState_MotionWarping : public UAnimNotifyState
{
    class URootMotionModifier* RootMotionModifier;                                    // 0x0030 (size: 0x8)

    void OnWarpUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
    void OnWarpEnd(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
    void OnWarpBegin(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
    void OnRootMotionModifierUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
    void OnRootMotionModifierDeactivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
    void OnRootMotionModifierActivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
    class URootMotionModifier* AddRootMotionModifier(class UMotionWarpingComponent* MotionWarpingComp, const class UAnimSequenceBase* Animation, float StartTime, float EndTime);
}; // Size: 0x38

class UDEPRECATED_RootMotionModifier_SimpleWarp : public URootMotionModifier_Warp
{
}; // Size: 0x250

class UMotionWarpingComponent : public UActorComponent
{
    bool bSearchForWindowsInAnimsWithinMontages;                                      // 0x00A0 (size: 0x1)
    FMotionWarpingComponentOnPreUpdate OnPreUpdate;                                   // 0x00A8 (size: 0x10)
    void MotionWarpingPreUpdate(class UMotionWarpingComponent* MotionWarpingComp);
    TWeakObjectPtr<class ACharacter> CharacterOwner;                                  // 0x00B8 (size: 0x8)
    TArray<class URootMotionModifier*> Modifiers;                                     // 0x00C0 (size: 0x10)
    TArray<FMotionWarpingTarget> WarpTargets;                                         // 0x00D0 (size: 0x10)

    int32 RemoveWarpTarget(FName WarpTargetName);
    void DisableAllRootMotionModifiers();
    void AddOrUpdateWarpTargetFromTransform(FName WarpTargetName, FTransform TargetTransform);
    void AddOrUpdateWarpTargetFromLocationAndRotation(FName WarpTargetName, FVector TargetLocation, FRotator TargetRotation);
    void AddOrUpdateWarpTargetFromLocation(FName WarpTargetName, FVector TargetLocation);
    void AddOrUpdateWarpTargetFromComponent(FName WarpTargetName, const class USceneComponent* Component, FName BoneName, bool bFollowComponent);
    void AddOrUpdateWarpTarget(const FMotionWarpingTarget& WarpTarget);
}; // Size: 0xE0

class UMotionWarpingUtilities : public UBlueprintFunctionLibrary
{

    void GetMotionWarpingWindowsFromAnimation(const class UAnimSequenceBase* Animation, TArray<FMotionWarpingWindowData>& OutWindows);
    void GetMotionWarpingWindowsForWarpTargetFromAnimation(const class UAnimSequenceBase* Animation, FName WarpTargetName, TArray<FMotionWarpingWindowData>& OutWindows);
    FTransform ExtractRootMotionFromAnimation(const class UAnimSequenceBase* Animation, float StartTime, float EndTime);
}; // Size: 0x28

class URootMotionModifier : public UObject
{
    TWeakObjectPtr<class UAnimSequenceBase> Animation;                                // 0x0028 (size: 0x8)
    float StartTime;                                                                  // 0x0030 (size: 0x4)
    float EndTime;                                                                    // 0x0034 (size: 0x4)
    float PreviousPosition;                                                           // 0x0038 (size: 0x4)
    float CurrentPosition;                                                            // 0x003C (size: 0x4)
    float Weight;                                                                     // 0x0040 (size: 0x4)
    FTransform StartTransform;                                                        // 0x0050 (size: 0x60)
    float ActualStartTime;                                                            // 0x00B0 (size: 0x4)
    FRootMotionModifierOnActivateDelegate OnActivateDelegate;                         // 0x00B4 (size: 0x10)
    void OnRootMotionModifierDelegate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* RootMotionModifier);
    FRootMotionModifierOnUpdateDelegate OnUpdateDelegate;                             // 0x00C4 (size: 0x10)
    void OnRootMotionModifierDelegate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* RootMotionModifier);
    FRootMotionModifierOnDeactivateDelegate OnDeactivateDelegate;                     // 0x00D4 (size: 0x10)
    void OnRootMotionModifierDelegate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* RootMotionModifier);
    ERootMotionModifierState State;                                                   // 0x00E4 (size: 0x1)

}; // Size: 0xF0

class URootMotionModifier_AdjustmentBlendWarp : public URootMotionModifier_Warp
{
    bool bWarpIKBones;                                                                // 0x0250 (size: 0x1)
    TArray<FName> IKBones;                                                            // 0x0258 (size: 0x10)
    FTransform CachedMeshTransform;                                                   // 0x0270 (size: 0x60)
    FTransform CachedMeshRelativeTransform;                                           // 0x02D0 (size: 0x60)
    FTransform CachedRootMotion;                                                      // 0x0330 (size: 0x60)
    FAnimSequenceTrackContainer Result;                                               // 0x0390 (size: 0x20)

}; // Size: 0x3B0

class URootMotionModifier_Scale : public URootMotionModifier
{
    FVector Scale;                                                                    // 0x00E8 (size: 0x18)

    class URootMotionModifier_Scale* AddRootMotionModifierScale(class UMotionWarpingComponent* InMotionWarpingComp, const class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, FVector InScale);
}; // Size: 0x100

class URootMotionModifier_SkewWarp : public URootMotionModifier_Warp
{

    class URootMotionModifier_SkewWarp* AddRootMotionModifierSkewWarp(class UMotionWarpingComponent* InMotionWarpingComp, const class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, FName InWarpTargetName, EWarpPointAnimProvider InWarpPointAnimProvider, FTransform InWarpPointAnimTransform, FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, EMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier);
}; // Size: 0x250

class URootMotionModifier_Warp : public URootMotionModifier
{
    FName WarpTargetName;                                                             // 0x00E8 (size: 0x8)
    EWarpPointAnimProvider WarpPointAnimProvider;                                     // 0x00F0 (size: 0x1)
    FTransform WarpPointAnimTransform;                                                // 0x0100 (size: 0x60)
    FName WarpPointAnimBoneName;                                                      // 0x0160 (size: 0x8)
    bool bWarpTranslation;                                                            // 0x0168 (size: 0x1)
    bool bIgnoreZAxis;                                                                // 0x0169 (size: 0x1)
    EAlphaBlendOption AddTranslationEasingFunc;                                       // 0x016A (size: 0x1)
    class UCurveFloat* AddTranslationEasingCurve;                                     // 0x0170 (size: 0x8)
    bool bWarpRotation;                                                               // 0x0178 (size: 0x1)
    EMotionWarpRotationType RotationType;                                             // 0x0179 (size: 0x1)
    float WarpRotationTimeMultiplier;                                                 // 0x017C (size: 0x4)
    FTransform CachedTargetTransform;                                                 // 0x0180 (size: 0x60)

}; // Size: 0x250

#endif
