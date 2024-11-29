#pragma once
#include "CoreMinimal.h"
#include "EFootPlacementLockType.generated.h"

UENUM(BlueprintType)
enum class EFootPlacementLockType : uint8 {
    Unlocked,
    PivotAroundBall,
    PivotAroundAnkle,
    LockRotation,
};

