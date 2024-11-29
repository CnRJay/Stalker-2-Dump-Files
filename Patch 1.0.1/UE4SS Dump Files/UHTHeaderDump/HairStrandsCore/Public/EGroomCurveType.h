#pragma once
#include "CoreMinimal.h"
#include "EGroomCurveType.generated.h"

UENUM(BlueprintType)
enum class EGroomCurveType : uint8 {
    Cubic,
    Linear,
    VariableOrder,
};

