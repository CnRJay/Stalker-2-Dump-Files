#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioModInfo -FallbackName=ModioModInfo
#include "ModioModInfoUIDetails.h"
#include "ModioModInfoUI.generated.h"

UCLASS(Blueprintable)
class MODIOUICORE_API UModioModInfoUI : public UObject, public IModioModInfoUIDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioModInfo Underlying;
    
    UModioModInfoUI();


    // Fix for true pure virtual functions not being implemented
};

