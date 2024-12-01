#pragma once
#include "CoreMinimal.h"
#include "EGroomInterpolationType.generated.h"

UENUM(BlueprintType)
enum class EGroomInterpolationType : uint8 {
    None,
    RigidTransform = 2,
    OffsetTransform = 4,
    SmoothTransform = 8,
};

