#pragma once
#include "CoreMinimal.h"
#include "EFTickBehaviour.generated.h"

UENUM()
enum class EFTickBehaviour : int32 {
    AccumulateDeltaTime,
    DontAccumulateDeltaTime,
    DontTick,
};

