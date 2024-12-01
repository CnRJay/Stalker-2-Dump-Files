#pragma once
#include "CoreMinimal.h"
#include "EResetToCachedTargetBehavior.generated.h"

UENUM(BlueprintType)
enum class EResetToCachedTargetBehavior : uint8 {
    ResetImmediately,
    ResetDuringUpdateControls,
};

