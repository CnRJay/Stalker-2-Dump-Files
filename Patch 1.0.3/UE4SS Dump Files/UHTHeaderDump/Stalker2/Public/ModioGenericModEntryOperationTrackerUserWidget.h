#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUI -ObjectName=ModioCommonModOperationTrackerUserWidget -FallbackName=ModioCommonModOperationTrackerUserWidget
#include "ModioGenericModEntryOperationTrackerUserWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UModioGenericModEntryOperationTrackerUserWidget : public UModioCommonModOperationTrackerUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultImageColorTint;
    
    UModioGenericModEntryOperationTrackerUserWidget();

};

