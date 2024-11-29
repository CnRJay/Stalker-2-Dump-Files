#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "ModioCommonUserProfileWidgetParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonUserProfileWidgetParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ProfileButtonLabel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ProfileInputAction;
    
    FModioCommonUserProfileWidgetParamsSettings();
};

