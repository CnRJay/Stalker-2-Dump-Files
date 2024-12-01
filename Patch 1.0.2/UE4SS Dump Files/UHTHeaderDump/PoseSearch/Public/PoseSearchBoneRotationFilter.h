#pragma once
#include "CoreMinimal.h"
#include "PoseSearchBoneRotationFilter.generated.h"

USTRUCT(BlueprintType)
struct POSESEARCH_API FPoseSearchBoneRotationFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondsOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValidAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredQueryOffset;
    
    FPoseSearchBoneRotationFilter();
};

