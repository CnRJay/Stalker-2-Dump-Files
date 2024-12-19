#pragma once
#include "CoreMinimal.h"
#include "ECommonInputEventFlowBehavior.generated.h"

UENUM()
enum class ECommonInputEventFlowBehavior : int32 {
    BlockIfActive,
    BlockIfHandled,
    NeverBlock,
};

