#pragma once
#include "CoreMinimal.h"
#include "EPoseSearchBooleanRequest.generated.h"

UENUM(BlueprintType)
enum class EPoseSearchBooleanRequest : uint8 {
    FalseValue,
    TrueValue,
    Indifferent,
    Num,
    Invalid = Num,
};

