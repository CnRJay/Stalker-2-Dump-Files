#ifndef UE4SS_SDK_PoseSearchLocomotion_HPP
#define UE4SS_SDK_PoseSearchLocomotion_HPP

struct FPoseSearchLocomotionAlternativeTags
{
    TArray<FGameplayTag> Tags;                                                        // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FPoseSearchLocomotionMoveData
{
    FGameplayTag Tag;                                                                 // 0x0000 (size: 0x8)
    TArray<FGameplayTag> SubTags;                                                     // 0x0008 (size: 0x10)
    bool bUseStrafe;                                                                  // 0x0018 (size: 0x1)
    float MoveBehaviorTransitionUseTime;                                              // 0x001C (size: 0x4)
    float MoveBehaviorOnlyTransitionUseTime;                                          // 0x0020 (size: 0x4)
    float LinearSpeedUnitsPerSecond;                                                  // 0x0024 (size: 0x4)
    float PredictionTimeHorizonSeconds;                                               // 0x0028 (size: 0x4)
    float PredictionDistanceHorizonUnits;                                             // 0x002C (size: 0x4)

}; // Size: 0x30

struct FPoseSearchLocomotionMovementSettings
{
    TMap<class FGameplayTag, class FPoseSearchLocomotionAlternativeTags> AlternativeTags; // 0x0000 (size: 0x50)
    TMap<class FGameplayTag, class FGameplayTagContainer> ComplimentaryTags;          // 0x0050 (size: 0x50)
    float CorridorWidth;                                                              // 0x00A0 (size: 0x4)
    TMap<FName, float> CorridorWidthByAgentType;                                      // 0x00A8 (size: 0x50)
    bool bSimplifyFlipPortals;                                                        // 0x00F8 (size: 0x1)
    bool bSimplifyConvexPortals;                                                      // 0x00F9 (size: 0x1)
    bool bSimplifyConcavePortals;                                                     // 0x00FA (size: 0x1)
    float CorridorPathOffset;                                                         // 0x00FC (size: 0x4)
    float CorridorStartOffset;                                                        // 0x0100 (size: 0x4)
    float NarrowFromEndDistance;                                                      // 0x0104 (size: 0x4)
    float IdleSteeringRotationRateDegreesPerSecond;                                   // 0x0108 (size: 0x4)
    float WalkSteeringRotationRateDegreesPerSecond;                                   // 0x010C (size: 0x4)
    float RunSteeringRotationRateDegreesPerSecond;                                    // 0x0110 (size: 0x4)
    float SprintSteeringRotationRateDegreesPerSecond;                                 // 0x0114 (size: 0x4)
    float EvadeSteeringRotationRateDegreesPerSecond;                                  // 0x0118 (size: 0x4)
    float SnappingToPathEndStartDistance;                                             // 0x011C (size: 0x4)
    float SnappingToPathEndRatio;                                                     // 0x0120 (size: 0x4)
    float SnappingToPathEndMinVelocity;                                               // 0x0124 (size: 0x4)
    FGameplayTagContainer RunTags;                                                    // 0x0128 (size: 0x20)
    FGameplayTagContainer SprintTags;                                                 // 0x0148 (size: 0x20)
    FGameplayTagContainer MoveBehaviourTransitionTags;                                // 0x0168 (size: 0x20)

}; // Size: 0x188

struct FPoseSearchLocomotionTrajectorySettings
{
    float SampleRate;                                                                 // 0x0000 (size: 0x4)
    float HistoryExpirationSeconds;                                                   // 0x0004 (size: 0x4)
    TMap<FName, float> HistoryExpirationSecondsByAgent;                               // 0x0008 (size: 0x50)
    float TransitionTimeSeconds;                                                      // 0x0058 (size: 0x4)

}; // Size: 0x60

class UPoseSearchLocomotionDescriptor : public UObject
{
    TArray<FPoseSearchLocomotionMoveData> Container;                                  // 0x0028 (size: 0x10)

}; // Size: 0x38

class UPoseSearchLocomotionSettings : public UObject
{
    FMotionMatchingSettings MotionMatchingSettings;                                   // 0x0028 (size: 0x30)
    FPoseSearchLocomotionTrajectorySettings TrajectorySettings;                       // 0x0058 (size: 0x60)
    FPoseSearchLocomotionMovementSettings MovementSettings;                           // 0x00B8 (size: 0x188)

}; // Size: 0x240

#endif
