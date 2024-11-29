#pragma once
#include "CoreMinimal.h"
#include "EGroomInterpolationWeight.generated.h"

UENUM(BlueprintType)
enum class EGroomInterpolationWeight : uint8 {
    Parametric,
    Root,
    Index,
    Unknown,
};

