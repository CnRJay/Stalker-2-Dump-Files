#pragma once
#include "CoreMinimal.h"
#include "EGroomBasisType.generated.h"

UENUM(BlueprintType)
enum class EGroomBasisType : uint8 {
    NoBasis,
    BezierBasis,
    BsplineBasis,
    CatmullromBasis,
    HermiteBasis,
    PowerBasis,
};

