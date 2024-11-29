#pragma once
#include "CoreMinimal.h"
#include "HairGeometrySettings.generated.h"

USTRUCT(BlueprintType)
struct HAIRSTRANDSCORE_API FHairGeometrySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HairWidth;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HairRootScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HairTipScale;
    
    FHairGeometrySettings();
};

