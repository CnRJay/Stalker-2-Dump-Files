#pragma once
#include "CoreMinimal.h"
#include "EParticleSysParamType.generated.h"

UENUM(BlueprintType)
enum EParticleSysParamType {
    PSPT_None,
    PSPT_Scalar,
    PSPT_ScalarRand,
    PSPT_Vector,
    PSPT_VectorRand,
    PSPT_Color,
    PSPT_Actor,
    PSPT_Material,
    PSPT_VectorUnitRand,
};

