#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_Base -FallbackName=AnimNode_Base
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseLink -FallbackName=PoseLink
#include "AnimNode_PoseSearchHistoryCollector.generated.h"

USTRUCT(BlueprintType)
struct POSESEARCH_API FAnimNode_PoseSearchHistoryCollector : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PoseCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PoseDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRootMotion;
    
    FAnimNode_PoseSearchHistoryCollector();
};

