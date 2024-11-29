#pragma once
#include "CoreMinimal.h"
#include "EMotionMatchingFlags.generated.h"

UENUM(BlueprintType)
enum class EMotionMatchingFlags : uint8 {
    None,
    JumpedToPose,
    JumpedToFollowUp,
};

