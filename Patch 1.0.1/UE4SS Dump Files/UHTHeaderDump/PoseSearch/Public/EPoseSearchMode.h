#pragma once
#include "CoreMinimal.h"
#include "EPoseSearchMode.generated.h"

UENUM()
enum class EPoseSearchMode : int32 {
    BruteForce,
    PCAKDTree,
    PCAKDTree_Validate,
    PCAKDTree_Compare,
    Num,
    Invalid = Num,
};

