#pragma once
#include "CoreMinimal.h"
#include "PoseSearchTrajectorySample.generated.h"

USTRUCT(BlueprintType)
struct POSESEARCH_API FPoseSearchTrajectorySample {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColorPresetIndex;
    
    FPoseSearchTrajectorySample();
};

