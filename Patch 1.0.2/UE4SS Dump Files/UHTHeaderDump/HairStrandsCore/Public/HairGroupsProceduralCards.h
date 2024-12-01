#pragma once
#include "CoreMinimal.h"
#include "HairCardsClusterSettings.h"
#include "HairCardsGeometrySettings.h"
#include "HairCardsTextureSettings.h"
#include "HairGroupsProceduralCards.generated.h"

USTRUCT(BlueprintType)
struct HAIRSTRANDSCORE_API FHairGroupsProceduralCards {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHairCardsClusterSettings ClusterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHairCardsGeometrySettings GeometrySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHairCardsTextureSettings TextureSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    FHairGroupsProceduralCards();
};

