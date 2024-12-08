#pragma once
#include "CoreMinimal.h"
#include "EPoseSearchPoseFlags.h"
#include "PoseSearchPoseMetadata.generated.h"

USTRUCT(BlueprintType)
struct POSESEARCH_API FPoseSearchPoseMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPoseSearchPoseFlags Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CostAddend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ContinuingPoseCostAddend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssetIndex;
    
    FPoseSearchPoseMetadata();
};

