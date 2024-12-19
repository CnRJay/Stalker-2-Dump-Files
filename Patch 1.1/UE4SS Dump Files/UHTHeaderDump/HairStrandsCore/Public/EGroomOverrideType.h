#pragma once
#include "CoreMinimal.h"
#include "EGroomOverrideType.generated.h"

UENUM(BlueprintType)
enum class EGroomOverrideType : uint8 {
    Auto,
    Enable,
    Disable,
};

