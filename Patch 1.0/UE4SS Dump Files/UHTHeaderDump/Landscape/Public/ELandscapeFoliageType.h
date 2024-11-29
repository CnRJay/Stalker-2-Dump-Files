#pragma once
#include "CoreMinimal.h"
#include "ELandscapeFoliageType.generated.h"

UENUM(BlueprintType)
enum class ELandscapeFoliageType : uint8 {
    Trees,
    Bushes,
    Grass,
    LowGrass,
};

