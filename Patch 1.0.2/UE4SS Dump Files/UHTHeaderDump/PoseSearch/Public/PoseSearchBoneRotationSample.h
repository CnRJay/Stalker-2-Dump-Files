#pragma once
#include "CoreMinimal.h"
#include "PoseSearchBoneRotationSample.generated.h"

USTRUCT(BlueprintType)
struct POSESEARCH_API FPoseSearchBoneRotationSample {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FocusColorPresetIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredQueryOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleThresholdAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleThresholdFactor;
    
    FPoseSearchBoneRotationSample();
};

