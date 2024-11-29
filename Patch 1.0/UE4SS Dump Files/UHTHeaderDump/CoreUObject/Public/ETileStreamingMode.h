#pragma once
#include "CoreMinimal.h"
#include "ETileStreamingMode.generated.h"

UENUM(BlueprintType)
enum class ETileStreamingMode : uint8 {
    Default,
    Never,
};

