#pragma once
#include "CoreMinimal.h"
#include "AnimNode_Base.h"
#include "PoseLink.h"
#include "AnimNode_EvaluateInputs_GSC.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FAnimNode_EvaluateInputs_GSC : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableEvaluation;
    
    FAnimNode_EvaluateInputs_GSC();
};

