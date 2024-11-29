#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUI -ObjectName=ModioCommonEmailAuthLoadingViewBase -FallbackName=ModioCommonEmailAuthLoadingViewBase
#include "ModioEmailAuthLoadingPopup.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UModioEmailAuthLoadingPopup : public UModioCommonEmailAuthLoadingViewBase {
    GENERATED_BODY()
public:
    UModioEmailAuthLoadingPopup();

};

