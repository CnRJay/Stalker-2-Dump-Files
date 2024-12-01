#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ProgressBarStyle -FallbackName=ProgressBarStyle
#include "GSC_WidgetProgressStyle.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FGSC_WidgetProgressStyle : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressBarStyle ProgressBarStyle;
    
    FGSC_WidgetProgressStyle();
};

