#pragma once
#include "CoreMinimal.h"
#include "EStrandsTexturesTraceType.generated.h"

UENUM(BlueprintType)
enum class EStrandsTexturesTraceType : uint8 {
    TraceInside,
    TraceOuside,
    TraceBidirectional,
};

