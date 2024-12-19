#pragma once
#include "CoreMinimal.h"
#include "EScaleMode.generated.h"

UENUM(BlueprintType)
enum class EScaleMode : uint8 {
    Uniform,
    HorizontalUniform,
    NonUniform,
};

