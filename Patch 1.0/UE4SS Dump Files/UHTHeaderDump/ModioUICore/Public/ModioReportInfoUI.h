#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioReportParams -FallbackName=ModioReportParams
#include "ModioModInfoUIDetails.h"
#include "ModioReportInfoUI.generated.h"

UCLASS(Blueprintable)
class MODIOUICORE_API UModioReportInfoUI : public UObject, public IModioModInfoUIDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioReportParams ReportData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* ModInfo;
    
    UModioReportInfoUI();


    // Fix for true pure virtual functions not being implemented
};

