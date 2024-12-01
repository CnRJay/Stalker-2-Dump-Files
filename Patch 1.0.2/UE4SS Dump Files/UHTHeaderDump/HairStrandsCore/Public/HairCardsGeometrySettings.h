#pragma once
#include "CoreMinimal.h"
#include "EHairCardsClusterType.h"
#include "EHairCardsGenerationType.h"
#include "HairCardsGeometrySettings.generated.h"

USTRUCT(BlueprintType)
struct HAIRSTRANDSCORE_API FHairCardsGeometrySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHairCardsGenerationType GenerationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CardsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHairCardsClusterType ClusterType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSegmentLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngularThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinCardsLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCardsLength;
    
    FHairCardsGeometrySettings();
};

