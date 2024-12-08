#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioErrorCode -FallbackName=ModioErrorCode
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioModID -FallbackName=ModioModID
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioOptionalModInfo -FallbackName=ModioOptionalModInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioOptionalModInfoList -FallbackName=ModioOptionalModInfoList
#include "ModioUIModInfoReceiver.generated.h"

UINTERFACE(Blueprintable)
class MODIOUICORE_API UModioUIModInfoReceiver : public UInterface {
    GENERATED_BODY()
};

class MODIOUICORE_API IModioUIModInfoReceiver : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnModInfoRequestCompleted(FModioModID ModId, FModioErrorCode ec, FModioOptionalModInfo Info);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnListAllModsRequestCompleted(const FString& RequestIdentifier, FModioErrorCode ec, FModioOptionalModInfoList List);
    
};

