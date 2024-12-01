#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonUI -ObjectName=CommonActivatableWidgetSwitcher -FallbackName=CommonActivatableWidgetSwitcher
#include "ModioCommonWidgetSwitcher.generated.h"

UCLASS(Blueprintable)
class MODIOUI_API UModioCommonWidgetSwitcher : public UCommonActivatableWidgetSwitcher {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveIndexChanged_BP OnActiveWidgetIndexChanged_BP;
    
    UModioCommonWidgetSwitcher();

};

