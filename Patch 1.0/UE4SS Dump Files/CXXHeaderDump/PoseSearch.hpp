#ifndef UE4SS_SDK_PoseSearch_HPP
#define UE4SS_SDK_PoseSearch_HPP

#include "PoseSearch_enums.hpp"

struct FAnimNode_BlendStack : public FAnimNode_AssetPlayerBase
{
}; // Size: 0x58

struct FAnimNode_MotionMatching : public FAnimNode_AssetPlayerBase
{
    FPoseLink Source;                                                                 // 0x0038 (size: 0x10)
    class UPoseSearchSearchableAsset* Searchable;                                     // 0x0048 (size: 0x8)
    FGameplayTagContainer ActiveTagsContainer;                                        // 0x0050 (size: 0x20)
    FTrajectorySampleRange Trajectory;                                                // 0x0070 (size: 0x18)
    FMotionMatchingSettings Settings;                                                 // 0x0088 (size: 0x30)
    FPoseSearchProceduralMovement ProceduralMovement;                                 // 0x00C0 (size: 0x70)
    bool bResetOnBecomingRelevant;                                                    // 0x0130 (size: 0x1)
    bool bForceInterrupt;                                                             // 0x0131 (size: 0x1)

}; // Size: 0x2E0

struct FAnimNode_PoseSearchHistoryCollector : public FAnimNode_Base
{
    FPoseLink Source;                                                                 // 0x0010 (size: 0x10)
    int32 PoseCount;                                                                  // 0x0020 (size: 0x4)
    float PoseDuration;                                                               // 0x0024 (size: 0x4)
    bool bUseRootMotion;                                                              // 0x0028 (size: 0x1)

}; // Size: 0x50

struct FMotionMatchingSettings
{
    float BlendTime;                                                                  // 0x0000 (size: 0x4)
    int32 MaxActiveBlends;                                                            // 0x0004 (size: 0x4)
    class UBlendProfile* BlendProfile;                                                // 0x0008 (size: 0x8)
    EAlphaBlendOption BlendOption;                                                    // 0x0010 (size: 0x1)
    float MirrorChangeBlendTime;                                                      // 0x0014 (size: 0x4)
    float PoseJumpThresholdTime;                                                      // 0x0018 (size: 0x4)
    float PoseReselectHistory;                                                        // 0x001C (size: 0x4)
    float SearchThrottleTime;                                                         // 0x0020 (size: 0x4)
    float SkipContinuingPoseMaxCost;                                                  // 0x0024 (size: 0x4)
    float PlayRateMin;                                                                // 0x0028 (size: 0x4)
    float PlayRateMax;                                                                // 0x002C (size: 0x4)

}; // Size: 0x30

struct FMotionMatchingState
{
    float ElapsedPoseJumpTime;                                                        // 0x0060 (size: 0x4)
    FVector WantedBlendParameters;                                                    // 0x0068 (size: 0x18)
    float WantedPlayRate;                                                             // 0x0080 (size: 0x4)
    EMotionMatchingFlags Flags;                                                       // 0x0084 (size: 0x1)
    FTransform RootMotionTransformDelta;                                              // 0x0090 (size: 0x60)

}; // Size: 0x140

struct FPoseSearchAnimPlayer
{
}; // Size: 0x1B8

struct FPoseSearchBone
{
    FBoneReference Reference;                                                         // 0x0000 (size: 0x10)
    int32 Flags;                                                                      // 0x0010 (size: 0x4)
    float Weight;                                                                     // 0x0014 (size: 0x4)
    int32 ColorPresetIndex;                                                           // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FPoseSearchBoneRotationFilter
{
    float SecondsOffset;                                                              // 0x0000 (size: 0x4)
    float ValidAngle;                                                                 // 0x0004 (size: 0x4)
    float DesiredQueryOffset;                                                         // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FPoseSearchBoneRotationSample
{
    float Offset;                                                                     // 0x0000 (size: 0x4)
    float Weight;                                                                     // 0x0004 (size: 0x4)
    int32 FocusColorPresetIndex;                                                      // 0x0008 (size: 0x4)
    float DesiredQueryOffset;                                                         // 0x000C (size: 0x4)
    float ScaleThresholdAngle;                                                        // 0x0010 (size: 0x4)
    float ScaleThresholdFactor;                                                       // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FPoseSearchCost
{
    float TotalCost;                                                                  // 0x0000 (size: 0x4)
    float ContinuingPoseCostAddend;                                                   // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FPoseSearchDatabaseAnimationAssetBase
{
}; // Size: 0x8

struct FPoseSearchDatabaseBlendSpace : public FPoseSearchDatabaseAnimationAssetBase
{
    class UBlendSpace* BlendSpace;                                                    // 0x0008 (size: 0x8)
    bool bEnabled;                                                                    // 0x0010 (size: 0x1)
    EPoseSearchMirrorOption MirrorOption;                                             // 0x0014 (size: 0x4)
    bool bUseGridForSampling;                                                         // 0x0018 (size: 0x1)
    int32 NumberOfHorizontalSamples;                                                  // 0x001C (size: 0x4)
    int32 NumberOfVerticalSamples;                                                    // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FPoseSearchDatabaseSequence : public FPoseSearchDatabaseAnimationAssetBase
{
    class UAnimSequence* Sequence;                                                    // 0x0008 (size: 0x8)
    bool bEnabled;                                                                    // 0x0010 (size: 0x1)
    FFloatInterval SamplingRange;                                                     // 0x0014 (size: 0x8)
    EPoseSearchMirrorOption MirrorOption;                                             // 0x001C (size: 0x4)
    class UAnimSequence* LeadInSequence;                                              // 0x0020 (size: 0x8)
    class UAnimSequence* FollowUpSequence;                                            // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FPoseSearchDatabaseSetEntry
{
    class UPoseSearchSearchableAsset* Searchable;                                     // 0x0000 (size: 0x8)
    FGameplayTag Tag;                                                                 // 0x0008 (size: 0x8)
    EPoseSearchPostSearchStatus PostSearchStatus;                                     // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FPoseSearchExcludeFromDatabaseParameters
{
    float SequenceStartInterval;                                                      // 0x0000 (size: 0x4)
    float SequenceEndInterval;                                                        // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FPoseSearchExtrapolationParameters
{
    float AngularSpeedThreshold;                                                      // 0x0000 (size: 0x4)
    float LinearSpeedThreshold;                                                       // 0x0004 (size: 0x4)
    float SampleTime;                                                                 // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FPoseSearchFeatureVectorBuilder
{
    TWeakObjectPtr<class UPoseSearchSchema> Schema;                                   // 0x0000 (size: 0x8)

}; // Size: 0x18

struct FPoseSearchIndex : public FPoseSearchIndexBase
{
    TArray<float> PCAValues;                                                          // 0x0048 (size: 0x10)
    TArray<float> PCAProjectionMatrix;                                                // 0x0058 (size: 0x10)
    TArray<float> Mean;                                                               // 0x0068 (size: 0x10)
    TArray<float> WeightsSqrt;                                                        // 0x0078 (size: 0x10)
    float PCAExplainedVariance;                                                       // 0x00A0 (size: 0x4)
    TArray<float> Deviation;                                                          // 0x00A8 (size: 0x10)

}; // Size: 0xB8

struct FPoseSearchIndexAsset
{
    ESearchIndexAssetType Type;                                                       // 0x0000 (size: 0x4)
    int32 SourceAssetIdx;                                                             // 0x0004 (size: 0x4)
    bool bMirrored;                                                                   // 0x0008 (size: 0x1)
    FVector BlendParameters;                                                          // 0x0010 (size: 0x18)
    FFloatInterval SamplingInterval;                                                  // 0x0028 (size: 0x8)
    int32 FirstPoseIdx;                                                               // 0x0030 (size: 0x4)
    int32 NumPoses;                                                                   // 0x0034 (size: 0x4)

}; // Size: 0x38

struct FPoseSearchIndexBase
{
    int32 NumPoses;                                                                   // 0x0000 (size: 0x4)
    TArray<float> Values;                                                             // 0x0008 (size: 0x10)
    TArray<FPoseSearchPoseMetadata> PoseMetadata;                                     // 0x0018 (size: 0x10)
    EPoseSearchPoseFlags OverallFlags;                                                // 0x0028 (size: 0x4)
    TArray<FPoseSearchIndexAsset> Assets;                                             // 0x0030 (size: 0x10)
    float MinCostAddend;                                                              // 0x0040 (size: 0x4)

}; // Size: 0x48

struct FPoseSearchKeepRootRotationSample
{
    float SecondsOffset;                                                              // 0x0000 (size: 0x4)
    float Weight;                                                                     // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FPoseSearchPoseMetadata
{
    EPoseSearchPoseFlags Flags;                                                       // 0x0000 (size: 0x4)
    float CostAddend;                                                                 // 0x0004 (size: 0x4)
    float ContinuingPoseCostAddend;                                                   // 0x0008 (size: 0x4)
    int32 AssetIndex;                                                                 // 0x000C (size: 0x4)

}; // Size: 0x10

struct FPoseSearchProceduralMovement
{
}; // Size: 0x70

struct FPoseSearchProceduralMovementSteeringSettings
{
    float MaxSteeringRotationRateDegreesPerSecond;                                    // 0x0000 (size: 0x4)
    float MinSteeringAngleDegrees;                                                    // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FPoseSearchSchemaColorPreset
{
    FLinearColor Query;                                                               // 0x0000 (size: 0x10)
    FLinearColor Result;                                                              // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FPoseSearchTrajectorySample
{
    float Offset;                                                                     // 0x0000 (size: 0x4)
    int32 Flags;                                                                      // 0x0004 (size: 0x4)
    float Weight;                                                                     // 0x0008 (size: 0x4)
    int32 ColorPresetIndex;                                                           // 0x000C (size: 0x4)

}; // Size: 0x10

class UAnimNotifyState_PoseSearchBase : public UAnimNotifyState
{
}; // Size: 0x30

class UAnimNotifyState_PoseSearchBlockTransition : public UAnimNotifyState_PoseSearchBase
{
}; // Size: 0x30

class UAnimNotifyState_PoseSearchExcludeFromDatabase : public UAnimNotifyState_PoseSearchBase
{
}; // Size: 0x30

class UAnimNotifyState_PoseSearchModifyCost : public UAnimNotifyState_PoseSearchBase
{
    float CostAddend;                                                                 // 0x0030 (size: 0x4)

}; // Size: 0x38

class UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias : public UAnimNotifyState_PoseSearchBase
{
    float CostAddend;                                                                 // 0x0030 (size: 0x4)

}; // Size: 0x38

class UNormalizationSetAsset : public UDataAsset
{
    TArray<class UPoseSearchDatabase*> Databases;                                     // 0x0030 (size: 0x10)
    bool bShouldResetOnSave;                                                          // 0x0040 (size: 0x1)

}; // Size: 0x48

class UPoseSearchDatabase : public UPoseSearchSearchableAsset
{
    class UPoseSearchSchema* Schema;                                                  // 0x0030 (size: 0x8)
    FPoseSearchExtrapolationParameters ExtrapolationParameters;                       // 0x0038 (size: 0xC)
    FPoseSearchExcludeFromDatabaseParameters ExcludeFromDatabaseParameters;           // 0x0044 (size: 0x8)
    TArray<FPoseSearchDatabaseSequence> Sequences;                                    // 0x0050 (size: 0x10)
    TArray<FPoseSearchDatabaseBlendSpace> BlendSpaces;                                // 0x0060 (size: 0x10)
    EPoseSearchMode PoseSearchMode;                                                   // 0x0070 (size: 0x4)
    int32 NumberOfPrincipalComponents;                                                // 0x0074 (size: 0x4)
    int32 KDTreeMaxLeafSize;                                                          // 0x0078 (size: 0x4)
    int32 KDTreeQueryNumNeighbors;                                                    // 0x007C (size: 0x4)
    bool bSkipSearchIfPossible;                                                       // 0x0080 (size: 0x1)
    class UNormalizationSetAsset* NormalizationSet;                                   // 0x0088 (size: 0x8)
    FPoseSearchProceduralMovementSteeringSettings SteeringSettings;                   // 0x0090 (size: 0x8)
    FPoseSearchIndex SearchIndexPrivate;                                              // 0x0098 (size: 0xB8)

}; // Size: 0x150

class UPoseSearchDatabaseSet : public UPoseSearchSearchableAsset
{
    TArray<FPoseSearchDatabaseSetEntry> AssetsToSearch;                               // 0x0030 (size: 0x10)
    bool bEvaluateContinuingPoseFirst;                                                // 0x0040 (size: 0x1)

}; // Size: 0x48

class UPoseSearchFeatureChannel : public UObject
{
    int32 ChannelIdx;                                                                 // 0x0038 (size: 0x4)
    int32 ChannelDataOffset;                                                          // 0x003C (size: 0x4)
    int32 ChannelCardinality;                                                         // 0x0040 (size: 0x4)

}; // Size: 0x48

class UPoseSearchFeatureChannel_BoneRotation : public UPoseSearchFeatureChannel
{
    float Weight;                                                                     // 0x0048 (size: 0x4)
    FBoneReference bone;                                                              // 0x004C (size: 0x10)
    TArray<FPoseSearchBoneRotationSample> Samples;                                    // 0x0060 (size: 0x10)
    TArray<FPoseSearchKeepRootRotationSample> KeepRootRotationSamples;                // 0x0070 (size: 0x10)
    TArray<FPoseSearchBoneRotationFilter> FilterAngleSamples;                         // 0x0080 (size: 0x10)
    int8 SchemaBoneIdx;                                                               // 0x0090 (size: 0x1)

}; // Size: 0x98

class UPoseSearchFeatureChannel_FilterCrashingLegs : public UPoseSearchFeatureChannel
{
    FBoneReference LeftThigh;                                                         // 0x0048 (size: 0x10)
    FBoneReference RightThigh;                                                        // 0x0058 (size: 0x10)
    FBoneReference LeftFoot;                                                          // 0x0068 (size: 0x10)
    FBoneReference RightFoot;                                                         // 0x0078 (size: 0x10)
    float Weight;                                                                     // 0x0088 (size: 0x4)
    int8 LeftThighIdx;                                                                // 0x008C (size: 0x1)
    int8 RightThighIdx;                                                               // 0x008D (size: 0x1)
    int8 LeftFootIdx;                                                                 // 0x008E (size: 0x1)
    int8 RightFootIdx;                                                                // 0x008F (size: 0x1)
    EInputQueryPose InputQueryPose;                                                   // 0x0090 (size: 0x1)
    float AllowedTolerance;                                                           // 0x0094 (size: 0x4)

}; // Size: 0x98

class UPoseSearchFeatureChannel_Heading : public UPoseSearchFeatureChannel
{
    FBoneReference bone;                                                              // 0x0048 (size: 0x10)
    float Weight;                                                                     // 0x0058 (size: 0x4)
    float SampleTimeOffset;                                                           // 0x005C (size: 0x4)
    EHeadingAxis HeadingAxis;                                                         // 0x0060 (size: 0x1)
    int8 SchemaBoneIdx;                                                               // 0x0061 (size: 0x1)
    int32 ColorPresetIndex;                                                           // 0x0064 (size: 0x4)
    EInputQueryPose InputQueryPose;                                                   // 0x0068 (size: 0x1)
    bool bUseSampleTimeOffsetRootBone;                                                // 0x0069 (size: 0x1)

}; // Size: 0x70

class UPoseSearchFeatureChannel_Pose : public UPoseSearchFeatureChannel
{
    float Weight;                                                                     // 0x0048 (size: 0x4)
    TArray<FPoseSearchBone> SampledBones;                                             // 0x0050 (size: 0x10)
    TArray<float> SampleTimes;                                                        // 0x0060 (size: 0x10)
    TArray<int8> SchemaBoneIdx;                                                       // 0x0070 (size: 0x10)
    EInputQueryPose InputQueryPose;                                                   // 0x0080 (size: 0x1)

}; // Size: 0x88

class UPoseSearchFeatureChannel_Position : public UPoseSearchFeatureChannel
{
    FBoneReference bone;                                                              // 0x0048 (size: 0x10)
    float Weight;                                                                     // 0x0058 (size: 0x4)
    float SampleTimeOffset;                                                           // 0x005C (size: 0x4)
    int8 SchemaBoneIdx;                                                               // 0x0060 (size: 0x1)
    int32 ColorPresetIndex;                                                           // 0x0064 (size: 0x4)
    EInputQueryPose InputQueryPose;                                                   // 0x0068 (size: 0x1)
    bool bUseSampleTimeOffsetRootBone;                                                // 0x0069 (size: 0x1)

}; // Size: 0x70

class UPoseSearchFeatureChannel_RemainingDistance : public UPoseSearchFeatureChannel
{
    float Weight;                                                                     // 0x0048 (size: 0x4)
    float DistanceOffset;                                                             // 0x004C (size: 0x4)
    float DistanceToNotExlcudeIdle;                                                   // 0x0050 (size: 0x4)
    bool bShouldUseAccumulatedDistance;                                               // 0x0054 (size: 0x1)
    float InitialSampleDistanceOffset;                                                // 0x0058 (size: 0x4)

}; // Size: 0x60

class UPoseSearchFeatureChannel_Trajectory : public UPoseSearchFeatureChannel
{
    EPoseSearchFeatureDomain Domain;                                                  // 0x0048 (size: 0x4)
    float Weight;                                                                     // 0x004C (size: 0x4)
    TArray<FPoseSearchTrajectorySample> Samples;                                      // 0x0050 (size: 0x10)

}; // Size: 0x60

class UPoseSearchSchema : public UDataAsset
{
    class USkeleton* Skeleton;                                                        // 0x0038 (size: 0x8)
    int32 SampleRate;                                                                 // 0x0040 (size: 0x4)
    TArray<class UPoseSearchFeatureChannel*> Channels;                                // 0x0048 (size: 0x10)
    class UMirrorDataTable* MirrorDataTable;                                          // 0x0058 (size: 0x8)
    EPoseSearchDataPreprocessor DataPreprocessor;                                     // 0x0060 (size: 0x4)
    int32 SchemaCardinality;                                                          // 0x0064 (size: 0x4)
    TArray<FBoneReference> BoneReferences;                                            // 0x0068 (size: 0x10)
    TArray<uint16> BoneIndices;                                                       // 0x0078 (size: 0x10)
    TArray<uint16> BoneIndicesWithParents;                                            // 0x0088 (size: 0x10)
    float ContinuingPoseCostBias;                                                     // 0x0098 (size: 0x4)
    float BaseCostBias;                                                               // 0x009C (size: 0x4)
    float MirrorMismatchCostBias;                                                     // 0x00A0 (size: 0x4)
    float SequenceEndExlusionTime;                                                    // 0x00A4 (size: 0x4)
    TArray<FPoseSearchSchemaColorPreset> ColorPresets;                                // 0x00A8 (size: 0x10)

}; // Size: 0xB8

class UPoseSearchSearchableAsset : public UDataAsset
{
}; // Size: 0x30

#endif
