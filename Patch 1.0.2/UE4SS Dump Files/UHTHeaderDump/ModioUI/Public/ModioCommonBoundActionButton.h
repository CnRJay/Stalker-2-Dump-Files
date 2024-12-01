#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonUI -ObjectName=CommonBoundActionButton -FallbackName=CommonBoundActionButton
#include "ModioCommonBoundActionButton.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonBoundActionButton : public UCommonBoundActionButton {
    GENERATED_BODY()
public:
    UModioCommonBoundActionButton();

};

