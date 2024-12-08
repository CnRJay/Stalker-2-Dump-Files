#pragma once
#include "CoreMinimal.h"
#include "HairAdvancedRenderingSettings.h"
#include "HairGeometrySettings.h"
#include "HairShadowSettings.h"
#include "HairGroupsRendering.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct HAIRSTRANDSCORE_API FHairGroupsRendering {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHairGeometrySettings GeometrySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHairShadowSettings ShadowSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHairAdvancedRenderingSettings AdvancedSettings;
    
    FHairGroupsRendering();
};

