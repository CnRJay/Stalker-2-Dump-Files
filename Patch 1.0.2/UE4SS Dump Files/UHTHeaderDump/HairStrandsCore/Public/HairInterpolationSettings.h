#pragma once
#include "CoreMinimal.h"
#include "EHairInterpolationQuality.h"
#include "EHairInterpolationWeight.h"
#include "HairInterpolationSettings.generated.h"

USTRUCT(BlueprintType)
struct HAIRSTRANDSCORE_API FHairInterpolationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideGuides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HairToGuideDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHairInterpolationQuality InterpolationQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHairInterpolationWeight InterpolationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomizeGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseUniqueGuide;
    
    FHairInterpolationSettings();
};

