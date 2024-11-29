#pragma once
#include "CoreMinimal.h"
#include "ETreeType.generated.h"

UENUM(BlueprintType)
enum class ETreeType : uint8 {
    Unknown,
    InnerTree,
    OuterTree,
};

