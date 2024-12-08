#pragma once
#include "CoreMinimal.h"
#include "HairGroupInfo.h"
#include "HairGroupInfoWithVisibility.generated.h"

USTRUCT(BlueprintType)
struct HAIRSTRANDSCORE_API FHairGroupInfoWithVisibility : public FHairGroupInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVisible;
    
    FHairGroupInfoWithVisibility();
};

