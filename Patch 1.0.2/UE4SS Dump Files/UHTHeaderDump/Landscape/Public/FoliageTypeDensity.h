#pragma once
#include "CoreMinimal.h"
#include "FoliageLayerDensity.h"
#include "FoliageTypeDensity.generated.h"

USTRUCT(BlueprintType)
struct FFoliageTypeDensity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFoliageLayerDensity OuterLayerDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasInnerLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFoliageLayerDensity InnerLayerDensity;
    
    LANDSCAPE_API FFoliageTypeDensity();
};

