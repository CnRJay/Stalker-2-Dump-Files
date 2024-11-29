#pragma once
#include "CoreMinimal.h"
#include "EOffsetRootBoneMode.generated.h"

UENUM(BlueprintType)
enum class EOffsetRootBoneMode : uint8 {
    Accumulate,
    Interpolate,
    Hold,
    Release,
};

