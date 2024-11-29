#pragma once
#include "CoreMinimal.h"
#include "EHeadingAxis.generated.h"

UENUM(BlueprintType)
enum class EHeadingAxis : uint8 {
    X,
    Y,
    Z,
    Num,
    Invalid = Num,
};

