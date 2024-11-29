#pragma once
#include "CoreMinimal.h"
#include "ESceneCaptureCachedShadowsLightTypes.generated.h"

UENUM(BlueprintType)
enum class ESceneCaptureCachedShadowsLightTypes : uint8 {
    None,
    Directional,
    Local = 14,
    Both,
};

