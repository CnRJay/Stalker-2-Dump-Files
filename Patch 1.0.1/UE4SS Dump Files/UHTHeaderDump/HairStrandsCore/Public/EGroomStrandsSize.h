#pragma once
#include "CoreMinimal.h"
#include "EGroomStrandsSize.generated.h"

UENUM(BlueprintType)
enum class EGroomStrandsSize : uint8 {
    None,
    Size2 = 2,
    Size4 = 4,
    Size8 = 8,
    Size16 = 16,
    Size32 = 32,
};

