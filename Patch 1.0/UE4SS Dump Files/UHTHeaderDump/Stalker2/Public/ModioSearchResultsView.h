#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUI -ObjectName=ModioCommonSearchResultsView -FallbackName=ModioCommonSearchResultsView
#include "ModioSearchResultsView.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UModioSearchResultsView : public UModioCommonSearchResultsView {
    GENERATED_BODY()
public:
    UModioSearchResultsView();

};

