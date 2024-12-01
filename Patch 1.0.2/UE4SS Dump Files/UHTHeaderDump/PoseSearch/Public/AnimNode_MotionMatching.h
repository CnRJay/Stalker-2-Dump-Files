#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_AssetPlayerBase -FallbackName=AnimNode_AssetPlayerBase
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseLink -FallbackName=PoseLink
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TrajectorySampleRange -FallbackName=TrajectorySampleRange
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "MotionMatchingSettings.h"
#include "PoseSearchProceduralMovement.h"
#include "AnimNode_MotionMatching.generated.h"

class UPoseSearchSearchableAsset;

USTRUCT(BlueprintType)
struct POSESEARCH_API FAnimNode_MotionMatching : public FAnimNode_AssetPlayerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPoseSearchSearchableAsset* Searchable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ActiveTagsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrajectorySampleRange Trajectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMotionMatchingSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseSearchProceduralMovement ProceduralMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetOnBecomingRelevant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceInterrupt;
    
    FAnimNode_MotionMatching();
};

