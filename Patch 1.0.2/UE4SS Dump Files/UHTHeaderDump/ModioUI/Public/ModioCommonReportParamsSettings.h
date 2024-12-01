#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "ModioCommonReportParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonReportParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ProceedInputAction;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BackInputAction;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SubmitInputAction;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CancelInputAction;
    
    FModioCommonReportParamsSettings();
};

