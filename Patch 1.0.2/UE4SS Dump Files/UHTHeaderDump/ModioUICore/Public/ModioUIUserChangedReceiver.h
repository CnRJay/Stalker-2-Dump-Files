#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioOptionalUser -FallbackName=ModioOptionalUser
#include "ModioUIUserChangedReceiver.generated.h"

UINTERFACE(Blueprintable)
class MODIOUICORE_API UModioUIUserChangedReceiver : public UInterface {
    GENERATED_BODY()
};

class MODIOUICORE_API IModioUIUserChangedReceiver : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUserChanged(FModioOptionalUser NewUser);
    
};

