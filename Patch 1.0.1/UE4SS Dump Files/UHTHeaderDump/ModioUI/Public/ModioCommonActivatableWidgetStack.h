#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonUI -ObjectName=CommonActivatableWidgetStack -FallbackName=CommonActivatableWidgetStack
#include "Templates/SubclassOf.h"
#include "ModioCommonActivatableWidgetStack.generated.h"

class UCommonActivatableWidget;

UCLASS(Blueprintable)
class MODIOUI_API UModioCommonActivatableWidgetStack : public UCommonActivatableWidgetStack {
    GENERATED_BODY()
public:
    UModioCommonActivatableWidgetStack();

    UFUNCTION(BlueprintCallable)
    UCommonActivatableWidget* BP_AddWidgetSmart(TSubclassOf<UCommonActivatableWidget> ActivatableWidgetClass, bool bSkipIfAlreadyActive, bool bRemoveIfInStack);
    
};

