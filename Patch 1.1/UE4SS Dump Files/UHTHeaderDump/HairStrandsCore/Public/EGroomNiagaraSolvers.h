#pragma once
#include "CoreMinimal.h"
#include "EGroomNiagaraSolvers.generated.h"

UENUM(BlueprintType)
enum class EGroomNiagaraSolvers : uint8 {
    None,
    CosseratRods = 2,
    AngularSprings = 4,
    CustomSolver = 8,
};

