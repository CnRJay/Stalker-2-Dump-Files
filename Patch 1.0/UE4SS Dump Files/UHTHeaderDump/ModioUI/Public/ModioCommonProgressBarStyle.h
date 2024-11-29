#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ProgressBarStyle -FallbackName=ProgressBarStyle
#include "ModioCommonProgressBarStyle.generated.h"

UCLASS(Abstract, Blueprintable)
class MODIOUI_API UModioCommonProgressBarStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressBarStyle Style;
    
    UModioCommonProgressBarStyle();

};

