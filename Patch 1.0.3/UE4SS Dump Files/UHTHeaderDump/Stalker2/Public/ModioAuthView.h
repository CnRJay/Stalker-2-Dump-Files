#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUI -ObjectName=ModioCommonAuthView -FallbackName=ModioCommonAuthView
#include "ModioAuthView.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UModioAuthView : public UModioCommonAuthView {
    GENERATED_BODY()
public:
    UModioAuthView();

};

