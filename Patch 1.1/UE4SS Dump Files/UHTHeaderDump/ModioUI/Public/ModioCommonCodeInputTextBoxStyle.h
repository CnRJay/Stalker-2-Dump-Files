#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ModioCommonCodeInputTextBoxInputStyle.h"
#include "ModioCommonCodeInputTextBoxStyle.generated.h"

UCLASS(Abstract, Blueprintable)
class MODIOUI_API UModioCommonCodeInputTextBoxStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioCommonCodeInputTextBoxInputStyle Style;
    
    UModioCommonCodeInputTextBoxStyle();

};

