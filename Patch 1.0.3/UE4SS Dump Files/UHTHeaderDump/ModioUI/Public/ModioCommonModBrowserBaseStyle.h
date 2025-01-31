#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Templates/SubclassOf.h"
#include "ModioCommonModBrowserBaseStyle.generated.h"

class UModioCommonAuthViewBase;
class UModioCommonDialogViewBase;
class UModioCommonModDetailsViewBase;
class UModioCommonReportViewBase;

UCLASS(Abstract, Blueprintable)
class MODIOUI_API UModioCommonModBrowserBaseStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonModDetailsViewBase> ModDetailsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonAuthViewBase> UserAuthClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonReportViewBase> ReportClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonDialogViewBase> DialogClass;
    
    UModioCommonModBrowserBaseStyle();

};

