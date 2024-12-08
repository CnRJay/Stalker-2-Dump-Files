#pragma once
#include "CoreMinimal.h"
#include "DistanceFieldFlags.generated.h"

USTRUCT(BlueprintType)
struct LANDSCAPE_API FDistanceFieldFlags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverride;
    
    FDistanceFieldFlags();
};

