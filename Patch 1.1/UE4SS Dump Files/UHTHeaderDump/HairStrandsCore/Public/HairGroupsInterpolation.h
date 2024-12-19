#pragma once
#include "CoreMinimal.h"
#include "HairDecimationSettings.h"
#include "HairDeformationSettings.h"
#include "HairInterpolationSettings.h"
#include "HairGroupsInterpolation.generated.h"

USTRUCT(BlueprintType)
struct HAIRSTRANDSCORE_API FHairGroupsInterpolation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHairDecimationSettings DecimationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHairInterpolationSettings InterpolationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHairDeformationSettings RiggingSettings;
    
    FHairGroupsInterpolation();
};

