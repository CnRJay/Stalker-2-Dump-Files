#pragma once
#include "CoreMinimal.h"
#include "EGroomInterpolationQuality.generated.h"

UENUM(BlueprintType)
enum class EGroomInterpolationQuality : uint8 {
    Low,
    Medium,
    High,
    Unknown,
};

