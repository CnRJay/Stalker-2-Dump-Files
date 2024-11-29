#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioModID -FallbackName=ModioModID
#include "ModioUIModEnableWidget.generated.h"

UINTERFACE(Blueprintable)
class MODIOUICORE_API UModioUIModEnableWidget : public UInterface {
    GENERATED_BODY()
};

class MODIOUICORE_API IModioUIModEnableWidget : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnModEnabledStateChanged(FModioModID ModId, bool bNewSubscriptionState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ModEnabledStateChangedHandler(FModioModID ModId, bool bNewSubscriptionState);
    
};

