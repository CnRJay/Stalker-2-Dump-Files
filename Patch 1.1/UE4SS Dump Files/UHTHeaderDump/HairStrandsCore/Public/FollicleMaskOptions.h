#pragma once
#include "CoreMinimal.h"
#include "EFollicleMaskChannel.h"
#include "FollicleMaskOptions.generated.h"

class UGroomAsset;

USTRUCT(BlueprintType)
struct HAIRSTRANDSCORE_API FFollicleMaskOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGroomAsset* Groom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFollicleMaskChannel Channel;
    
    FFollicleMaskOptions();
};

