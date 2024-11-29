#pragma once
#include "CoreMinimal.h"
#include "PoseSearchFeatureVectorBuilder.generated.h"

class UPoseSearchSchema;

USTRUCT(BlueprintType)
struct POSESEARCH_API FPoseSearchFeatureVectorBuilder {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPoseSearchSchema> Schema;
    
public:
    FPoseSearchFeatureVectorBuilder();
};

