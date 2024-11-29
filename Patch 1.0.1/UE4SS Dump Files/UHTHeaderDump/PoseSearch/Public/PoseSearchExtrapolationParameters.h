#pragma once
#include "CoreMinimal.h"
#include "PoseSearchExtrapolationParameters.generated.h"

USTRUCT(BlueprintType)
struct POSESEARCH_API FPoseSearchExtrapolationParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngularSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SampleTime;
    
    FPoseSearchExtrapolationParameters();
};

