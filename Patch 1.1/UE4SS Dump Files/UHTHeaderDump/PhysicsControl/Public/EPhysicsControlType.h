#pragma once
#include "CoreMinimal.h"
#include "EPhysicsControlType.generated.h"

UENUM(BlueprintType)
enum class EPhysicsControlType : uint8 {
    WorldSpace,
    ParentSpace,
};

