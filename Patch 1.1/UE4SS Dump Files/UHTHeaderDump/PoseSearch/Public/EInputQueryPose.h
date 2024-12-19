#pragma once
#include "CoreMinimal.h"
#include "EInputQueryPose.generated.h"

UENUM(BlueprintType)
enum class EInputQueryPose : uint8 {
    UseCharacterPose,
    UseContinuingPose,
    UseInterpolatedContinuingPose,
    Num,
    Invalid = Num,
};

