#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=AnimNode_SkeletalControlBase -FallbackName=AnimNode_SkeletalControlBase
#include "AnimNode_OffsetRootBone.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONWARPINGRUNTIME_API FAnimNode_OffsetRootBone : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    FAnimNode_OffsetRootBone();
};

