#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioErrorCode -FallbackName=ModioErrorCode
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioOptionalImage -FallbackName=ModioOptionalImage
#include "ModioUIUserAvatarDownloadCompletedReceiver.generated.h"

UINTERFACE(Blueprintable)
class MODIOUICORE_API UModioUIUserAvatarDownloadCompletedReceiver : public UInterface {
    GENERATED_BODY()
};

class MODIOUICORE_API IModioUIUserAvatarDownloadCompletedReceiver : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUserAvatarDownloadCompleted(FModioErrorCode ec, FModioOptionalImage Image);
    
};

