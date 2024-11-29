#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "UIActionKeyMapping.generated.h"

USTRUCT(BlueprintType)
struct FUIActionKeyMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTime;
    
    COMMONUI_API FUIActionKeyMapping();
};

