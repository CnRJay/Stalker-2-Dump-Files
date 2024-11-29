#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonUI -ObjectName=CommonBorderStyle -FallbackName=CommonBorderStyle
#include "ModioCommonBorderStyle.generated.h"

UCLASS(Abstract, Blueprintable)
class MODIOUI_API UModioCommonBorderStyle : public UCommonBorderStyle {
    GENERATED_BODY()
public:
    UModioCommonBorderStyle();

};

