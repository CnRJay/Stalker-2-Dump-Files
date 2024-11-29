#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioOptionalUser -FallbackName=ModioOptionalUser
#include "ModioUIAuthenticationChangedReceiver.generated.h"

UINTERFACE(Blueprintable)
class MODIOUICORE_API UModioUIAuthenticationChangedReceiver : public UInterface {
    GENERATED_BODY()
};

class MODIOUICORE_API IModioUIAuthenticationChangedReceiver : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAuthenticationChanged(FModioOptionalUser User);
    
};

