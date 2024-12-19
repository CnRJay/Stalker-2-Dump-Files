#pragma once
#include "CoreMinimal.h"
#include "EPoseSearchMirrorOption.generated.h"

UENUM()
enum class EPoseSearchMirrorOption : int32 {
    UnmirroredOnly,
    MirroredOnly,
    UnmirroredAndMirrored,
    Num,
    Invalid = Num,
};

