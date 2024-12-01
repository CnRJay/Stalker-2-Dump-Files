#pragma once
#include "CoreMinimal.h"
#include "EPelvisHeightMode.generated.h"

UENUM(BlueprintType)
enum class EPelvisHeightMode : uint8 {
    AllLegs,
    AllPlantedFeet,
    FrontPlantedFeetUphill_FrontFeetDownhill,
};

