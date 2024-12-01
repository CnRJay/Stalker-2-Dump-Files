#pragma once
#include "CoreMinimal.h"
#include "VarietyMap.generated.h"

class USRLEAsset;

USTRUCT(BlueprintType)
struct LANDSCAPE_API FVarietyMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USRLEAsset* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TileFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverlapFactor;
    
    FVarietyMap();
};

