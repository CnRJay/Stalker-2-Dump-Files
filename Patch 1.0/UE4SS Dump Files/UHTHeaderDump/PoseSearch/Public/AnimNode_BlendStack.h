#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_AssetPlayerBase -FallbackName=AnimNode_AssetPlayerBase
#include "AnimNode_BlendStack.generated.h"

USTRUCT(BlueprintType)
struct POSESEARCH_API FAnimNode_BlendStack : public FAnimNode_AssetPlayerBase {
    GENERATED_BODY()
public:
    FAnimNode_BlendStack();
};

