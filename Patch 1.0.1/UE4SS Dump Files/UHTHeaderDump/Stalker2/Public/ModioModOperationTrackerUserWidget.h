#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUI -ObjectName=ModioCommonModOperationTrackerUserWidget -FallbackName=ModioCommonModOperationTrackerUserWidget
#include "ModioModOperationTrackerUserWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UModioModOperationTrackerUserWidget : public UModioCommonModOperationTrackerUserWidget {
    GENERATED_BODY()
public:
    UModioModOperationTrackerUserWidget();

};

