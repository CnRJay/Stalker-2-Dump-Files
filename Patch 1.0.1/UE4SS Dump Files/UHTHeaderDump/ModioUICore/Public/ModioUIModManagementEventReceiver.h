#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioModManagementEvent -FallbackName=ModioModManagementEvent
#include "ModioUIModManagementEventReceiver.generated.h"

UINTERFACE(Blueprintable)
class MODIOUICORE_API UModioUIModManagementEventReceiver : public UInterface {
    GENERATED_BODY()
};

class MODIOUICORE_API IModioUIModManagementEventReceiver : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnModManagementEvent(FModioModManagementEvent Event);
    
};

