#pragma once
#include "CoreMinimal.h"
#include "EGroomInterpolationQuality.h"
#include "EGroomInterpolationWeight.h"
#include "GroomBuildSettings.generated.h"

USTRUCT(BlueprintType)
struct HAIRSTRANDSCORE_API FGroomBuildSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideGuides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HairToGuideDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGroomInterpolationQuality InterpolationQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGroomInterpolationWeight InterpolationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomizeGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseUniqueGuide;
    
    FGroomBuildSettings();
};

