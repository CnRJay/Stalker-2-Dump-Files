#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "PoseSearchLocomotionMoveData.generated.h"

USTRUCT(BlueprintType)
struct FPoseSearchLocomotionMoveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> SubTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseStrafe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveBehaviorTransitionUseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveBehaviorOnlyTransitionUseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearSpeedUnitsPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PredictionTimeHorizonSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PredictionDistanceHorizonUnits;
    
    POSESEARCHLOCOMOTION_API FPoseSearchLocomotionMoveData();
};

