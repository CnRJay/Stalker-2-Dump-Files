#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EModioUIAsyncOperationWidgetState.h"
#include "OnSetOperationStateDelegate.h"
#include "ModioUIAsyncOperationWidget.generated.h"

UINTERFACE(Blueprintable)
class MODIOUICORE_API UModioUIAsyncOperationWidget : public UInterface {
    GENERATED_BODY()
};

class MODIOUICORE_API IModioUIAsyncOperationWidget : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetOperationStateDelegate(const FOnSetOperationState& Delegate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestOperationRetry();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyOperationState(EModioUIAsyncOperationWidgetState NewState);
    
};

