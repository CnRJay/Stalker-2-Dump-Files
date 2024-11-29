#pragma once
#include "CoreMinimal.h"
#include "HairGroupCardsInfo.generated.h"

USTRUCT(BlueprintType)
struct HAIRSTRANDSCORE_API FHairGroupCardsInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumCards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumCardVertices;
    
    FHairGroupCardsInfo();
};

