#pragma once
#include "CoreMinimal.h"
#include "HairShadowSettings.generated.h"

USTRUCT(BlueprintType)
struct HAIRSTRANDSCORE_API FHairShadowSettings {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HairShadowDensity;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HairRaytracingRadiusScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHairRaytracingGeometry;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVoxelize;
    
    FHairShadowSettings();
};

