#pragma once
#include "CoreMinimal.h"
#include "AnimNode_Base.h"
#include "PoseLink.h"
#include "AnimNode_CacheBlend_GSC.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FAnimNode_CacheBlend_GSC : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink InputPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCacheToggleFlag;
    
    FAnimNode_CacheBlend_GSC();
};

