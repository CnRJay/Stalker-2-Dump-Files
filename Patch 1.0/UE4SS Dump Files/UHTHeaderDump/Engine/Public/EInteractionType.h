#pragma once
#include "CoreMinimal.h"
#include "EInteractionType.generated.h"

UENUM(BlueprintType)
enum class EInteractionType : uint8 {
    None,
    Hold,
    MultiClick,
    Combined,
    SingleClick,
    DealDamage,
    AutoInteraction,
};

