#pragma once
#include "CoreMinimal.h"
#include "HeightFootprint.generated.h"

USTRUCT(BlueprintType)
struct FHeightFootprint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Footprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideHoverAndSubmerge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Hover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Submerge;
    
    LANDSCAPE_API FHeightFootprint();
};

