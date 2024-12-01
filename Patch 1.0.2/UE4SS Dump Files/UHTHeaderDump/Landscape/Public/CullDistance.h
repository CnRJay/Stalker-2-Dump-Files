#pragma once
#include "CoreMinimal.h"
#include "CullDistance.generated.h"

USTRUCT(BlueprintType)
struct LANDSCAPE_API FCullDistance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CullRange;
    
    FCullDistance();
};

