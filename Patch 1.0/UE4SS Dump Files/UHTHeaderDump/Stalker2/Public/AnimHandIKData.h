#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AlphaBlend -FallbackName=AlphaBlend
#include "AnimHandIKData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimHandIKData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlphaBlend BlendArgs;
    
    FAnimHandIKData();
};

