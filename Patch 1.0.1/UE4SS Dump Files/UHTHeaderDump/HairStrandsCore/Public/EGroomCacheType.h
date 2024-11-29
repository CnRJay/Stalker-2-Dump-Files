#pragma once
#include "CoreMinimal.h"
#include "EGroomCacheType.generated.h"

UENUM(BlueprintType)
enum class EGroomCacheType : uint8 {
    None,
    Strands,
    Guides,
};

