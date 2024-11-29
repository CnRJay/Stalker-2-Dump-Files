#pragma once
#include "CoreMinimal.h"
#include "EActorMovementCompensationMode.generated.h"

UENUM(BlueprintType)
enum class EActorMovementCompensationMode : uint8 {
    ComponentSpace,
    WorldSpace,
    SuddenMotionOnly,
};

