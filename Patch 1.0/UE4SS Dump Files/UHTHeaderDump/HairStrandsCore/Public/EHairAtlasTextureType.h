#pragma once
#include "CoreMinimal.h"
#include "EHairAtlasTextureType.generated.h"

UENUM(BlueprintType)
enum class EHairAtlasTextureType : uint8 {
    Depth,
    Tangent,
    Attribute,
    Coverage,
    AuxilaryData,
    Material,
};

