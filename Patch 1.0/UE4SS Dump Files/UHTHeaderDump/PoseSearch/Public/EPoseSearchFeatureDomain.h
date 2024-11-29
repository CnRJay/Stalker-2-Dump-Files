#pragma once
#include "CoreMinimal.h"
#include "EPoseSearchFeatureDomain.generated.h"

UENUM()
enum class EPoseSearchFeatureDomain : int32 {
    Time,
    Distance,
    Num,
    Invalid = Num,
};

