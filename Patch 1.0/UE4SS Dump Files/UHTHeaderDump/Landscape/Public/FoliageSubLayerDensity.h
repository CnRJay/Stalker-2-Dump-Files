#pragma once
#include "CoreMinimal.h"
#include "CullDistance.h"
#include "GrassVariety.h"
#include "LayerMap.h"
#include "VarietyMap.h"
#include "FoliageSubLayerDensity.generated.h"

USTRUCT(BlueprintType)
struct FFoliageSubLayerDensity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Density;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistantDensityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideCullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCullDistance CullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCullDistance FarCullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLayerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLayerMap LayerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseVarietyMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVarietyMap VarietyMap;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisabled;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, NonTransactional, Transient, meta=(AllowPrivateAccess=true))
    bool bHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGrassVariety> FoliageVarieties;
    
    LANDSCAPE_API FFoliageSubLayerDensity();
};

