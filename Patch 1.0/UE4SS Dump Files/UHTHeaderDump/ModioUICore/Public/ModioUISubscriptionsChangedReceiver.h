#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioModID -FallbackName=ModioModID
#include "ModioUISubscriptionsChangedReceiver.generated.h"

UINTERFACE(Blueprintable)
class MODIOUICORE_API UModioUISubscriptionsChangedReceiver : public UInterface {
    GENERATED_BODY()
};

class MODIOUICORE_API IModioUISubscriptionsChangedReceiver : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSubscriptionsChanged(FModioModID ModId, bool bNewSubscriptionState);
    
};

