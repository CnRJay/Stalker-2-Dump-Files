#pragma once
#include "CoreMinimal.h"
#include "PoseSearchCost.generated.h"

USTRUCT(BlueprintType)
struct POSESEARCH_API FPoseSearchCost {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalCost;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ContinuingPoseCostAddend;
    
    FPoseSearchCost();
};

