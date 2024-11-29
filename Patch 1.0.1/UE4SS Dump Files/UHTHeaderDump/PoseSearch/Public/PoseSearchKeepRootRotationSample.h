#pragma once
#include "CoreMinimal.h"
#include "PoseSearchKeepRootRotationSample.generated.h"

USTRUCT(BlueprintType)
struct POSESEARCH_API FPoseSearchKeepRootRotationSample {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondsOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FPoseSearchKeepRootRotationSample();
};

