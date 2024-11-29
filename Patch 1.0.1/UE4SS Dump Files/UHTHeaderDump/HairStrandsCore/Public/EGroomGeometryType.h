#pragma once
#include "CoreMinimal.h"
#include "EGroomGeometryType.generated.h"

UENUM(BlueprintType)
enum class EGroomGeometryType : uint8 {
    Strands,
    Cards,
    Meshes,
};

