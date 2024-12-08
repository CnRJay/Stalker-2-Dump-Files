#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioModID -FallbackName=ModioModID
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioModInfo -FallbackName=ModioModInfo
#include "ModioModInfoUIDetails.generated.h"

UINTERFACE(Blueprintable)
class MODIOUICORE_API UModioModInfoUIDetails : public UInterface {
    GENERATED_BODY()
};

class MODIOUICORE_API IModioModInfoUIDetails : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FModioModID GetModID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FModioModInfo GetFullModInfo();
    
};

