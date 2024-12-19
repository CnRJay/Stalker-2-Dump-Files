#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LocalPlayerSubsystem -FallbackName=LocalPlayerSubsystem
#include "CommonUIVisibilitySubsystem.generated.h"

UCLASS(Blueprintable)
class COMMONUI_API UCommonUIVisibilitySubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UCommonUIVisibilitySubsystem();

};

