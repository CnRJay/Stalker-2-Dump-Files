#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonUI -ObjectName=CommonButtonStyle -FallbackName=CommonButtonStyle
#include "Templates/SubclassOf.h"
#include "ModioCommonButtonStyle.generated.h"

class UModioCommonImageStyle;

UCLASS(Abstract, Blueprintable)
class MODIOUI_API UModioCommonButtonStyle : public UCommonButtonStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonImageStyle> NormalIconStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonImageStyle> FocusedIconStyle;
    
    UModioCommonButtonStyle();

};

