#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "SlopeGroup.generated.h"

USTRUCT(BlueprintType)
struct FSlopeGroup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval SlopeRange;
    
    LANDSCAPE_API FSlopeGroup();
};

