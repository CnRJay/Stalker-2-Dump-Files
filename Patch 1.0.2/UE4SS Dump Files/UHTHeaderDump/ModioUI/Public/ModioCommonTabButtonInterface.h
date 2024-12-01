#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ModioCommonTabDescriptor.h"
#include "ModioCommonTabButtonInterface.generated.h"

UINTERFACE(Blueprintable)
class UModioCommonTabButtonInterface : public UInterface {
    GENERATED_BODY()
};

class IModioCommonTabButtonInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTabLabelInfo(const FModioCommonTabDescriptor& InTabLabelInfo);
    
};

