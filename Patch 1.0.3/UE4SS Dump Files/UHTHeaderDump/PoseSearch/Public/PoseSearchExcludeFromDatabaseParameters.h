#pragma once
#include "CoreMinimal.h"
#include "PoseSearchExcludeFromDatabaseParameters.generated.h"

USTRUCT(BlueprintType)
struct FPoseSearchExcludeFromDatabaseParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SequenceStartInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SequenceEndInterval;
    
    POSESEARCH_API FPoseSearchExcludeFromDatabaseParameters();
};

