#pragma once
#include "CoreMinimal.h"
#include "HISMOrISMBakedFoliage.h"
#include "FoliageTypeBakedFoliage.generated.h"

USTRUCT(BlueprintType)
struct FFoliageTypeBakedFoliage {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ComponentSubdivisionFactor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 DistantComponentSubdivisionFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHISMOrISMBakedFoliage> HISMsOrISMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxEndCullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistantEndCullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinStartFadeInDistance;
    
    LANDSCAPE_API FFoliageTypeBakedFoliage();
};

