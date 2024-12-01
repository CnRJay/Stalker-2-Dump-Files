#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonUI -ObjectName=CommonTextStyle -FallbackName=CommonTextStyle
#include "ModioCommonTextStyle.generated.h"

UCLASS(Abstract, Blueprintable)
class MODIOUI_API UModioCommonTextStyle : public UCommonTextStyle {
    GENERATED_BODY()
public:
    UModioCommonTextStyle();

};

