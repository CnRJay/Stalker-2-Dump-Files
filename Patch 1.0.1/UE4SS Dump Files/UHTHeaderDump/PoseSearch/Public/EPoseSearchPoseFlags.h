#pragma once
#include "CoreMinimal.h"
#include "EPoseSearchPoseFlags.generated.h"

UENUM()
enum class EPoseSearchPoseFlags : uint32 {
    None,
    BlockTransition,
};

