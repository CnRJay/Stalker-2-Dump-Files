#pragma once
#include "CoreMinimal.h"
#include "EPoseSearchTrajectoryFlags.generated.h"

UENUM(BlueprintType)
enum class EPoseSearchTrajectoryFlags : uint8 {
    Velocity = 1,
    Position,
    VelocityDirection = 4,
    FacingDirection = 8,
    VelocityXY = 16,
    PositionXY = 32,
    VelocityDirectionXY = 64,
    FacingDirectionXY = 128,
};

