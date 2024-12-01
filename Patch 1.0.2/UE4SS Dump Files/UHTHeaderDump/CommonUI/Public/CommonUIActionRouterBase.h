#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LocalPlayerSubsystem -FallbackName=LocalPlayerSubsystem
#include "CommonUIActionRouterBase.generated.h"

UCLASS(Blueprintable)
class COMMONUI_API UCommonUIActionRouterBase : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UCommonUIActionRouterBase();

};

