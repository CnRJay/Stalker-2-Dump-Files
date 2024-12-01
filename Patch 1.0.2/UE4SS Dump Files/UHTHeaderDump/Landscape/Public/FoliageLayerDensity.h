#pragma once
#include "CoreMinimal.h"
#include "FoliageSubLayerDensity.h"
#include "FoliageLayerDensity.generated.h"

USTRUCT(BlueprintType)
struct FFoliageLayerDensity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFoliageSubLayerDensity> Layers;
    
    LANDSCAPE_API FFoliageLayerDensity();
};

