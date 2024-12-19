#pragma once
#include "CoreMinimal.h"
#include "EHairCardsSourceType.generated.h"

UENUM(BlueprintType)
enum class EHairCardsSourceType : uint8 {
    Procedural,
    Imported,
};

