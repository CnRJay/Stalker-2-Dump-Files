#pragma once
#include "CoreMinimal.h"
#include "EPoseSearchBoneFlags.generated.h"

UENUM(BlueprintType)
enum class EPoseSearchBoneFlags : uint8 {
    Velocity = 1,
    Position,
    Rotation = 4,
    Phase = 8,
};

