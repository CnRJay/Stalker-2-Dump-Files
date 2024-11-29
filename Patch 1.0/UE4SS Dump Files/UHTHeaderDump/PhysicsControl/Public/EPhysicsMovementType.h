#pragma once
#include "CoreMinimal.h"
#include "EPhysicsMovementType.generated.h"

UENUM(BlueprintType)
enum class EPhysicsMovementType : uint8 {
    Static,
    Kinematic,
    Simulated,
};

