#pragma once
#include "CoreMinimal.h"
#include "EHairInterpolationQuality.generated.h"

UENUM(BlueprintType)
enum class EHairInterpolationQuality : uint8 {
    Low,
    Medium,
    High,
    Unknown,
};

