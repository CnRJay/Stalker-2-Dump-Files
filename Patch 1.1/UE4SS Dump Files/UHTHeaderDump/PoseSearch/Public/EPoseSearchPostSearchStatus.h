#pragma once
#include "CoreMinimal.h"
#include "EPoseSearchPostSearchStatus.generated.h"

UENUM(BlueprintType)
enum class EPoseSearchPostSearchStatus : uint8 {
    Continue,
    Stop,
};

