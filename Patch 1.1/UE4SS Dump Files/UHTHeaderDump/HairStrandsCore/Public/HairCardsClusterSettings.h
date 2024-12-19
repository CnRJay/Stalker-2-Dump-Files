#pragma once
#include "CoreMinimal.h"
#include "EHairCardsClusterType.h"
#include "HairCardsClusterSettings.generated.h"

USTRUCT(BlueprintType)
struct HAIRSTRANDSCORE_API FHairCardsClusterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClusterDecimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHairCardsClusterType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseGuide;
    
    FHairCardsClusterSettings();
};

