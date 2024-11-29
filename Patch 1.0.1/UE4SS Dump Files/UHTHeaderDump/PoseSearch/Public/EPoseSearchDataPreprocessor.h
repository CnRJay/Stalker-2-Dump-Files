#pragma once
#include "CoreMinimal.h"
#include "EPoseSearchDataPreprocessor.generated.h"

UENUM()
enum class EPoseSearchDataPreprocessor : int32 {
    None,
    Normalize,
    NormalizeOnlyByDeviation,
    Num,
    Invalid = Num,
};

