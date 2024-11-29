#pragma once
#include "CoreMinimal.h"
#include "EGroomCacheAttributes.generated.h"

UENUM(BlueprintType)
enum class EGroomCacheAttributes : uint8 {
    None,
    Position,
    Width,
    Color = 4,
    PositionWidth = 3,
    PositionColor = 5,
    WidthColor = PositionColor,
    PositionWidthColor = 7,
};

