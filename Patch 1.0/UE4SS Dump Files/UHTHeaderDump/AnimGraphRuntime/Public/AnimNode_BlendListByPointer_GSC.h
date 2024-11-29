#pragma once
#include "CoreMinimal.h"
#include "AnimNode_BlendListBase.h"
#include "AnimNode_BlendListByPointer_GSC.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_BlendListByPointer_GSC : public FAnimNode_BlendListBase {
    GENERATED_BODY()
public:
    FAnimNode_BlendListByPointer_GSC();
};

