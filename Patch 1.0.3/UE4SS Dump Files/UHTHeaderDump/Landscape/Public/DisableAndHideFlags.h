#pragma once
#include "CoreMinimal.h"
#include "DisableAndHideFlags.generated.h"

USTRUCT(BlueprintType)
struct LANDSCAPE_API FDisableAndHideFlags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHide;
    
    FDisableAndHideFlags();
};

