#pragma once
#include "CoreMinimal.h"
#include "EHairInterpolationWeight.generated.h"

UENUM(BlueprintType)
enum class EHairInterpolationWeight : uint8 {
    Parametric,
    Root,
    Index,
    Distance,
    Unknown,
};

