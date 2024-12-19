#pragma once
#include "CoreMinimal.h"
#include "ESearchIndexAssetType.generated.h"

UENUM()
enum class ESearchIndexAssetType : int32 {
    Invalid,
    Sequence,
    BlendSpace,
};

