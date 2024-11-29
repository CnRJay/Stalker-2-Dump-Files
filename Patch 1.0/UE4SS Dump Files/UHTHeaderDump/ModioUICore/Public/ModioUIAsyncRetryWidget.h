#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "OnRetryRequestedDelegate.h"
#include "ModioUIAsyncRetryWidget.generated.h"

UINTERFACE(Blueprintable)
class MODIOUICORE_API UModioUIAsyncRetryWidget : public UInterface {
    GENERATED_BODY()
};

class MODIOUICORE_API IModioUIAsyncRetryWidget : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRetryRequestedDelegate(const FOnRetryRequested& Delegate);
    
};

