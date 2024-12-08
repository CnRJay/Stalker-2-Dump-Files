#pragma once
#include "CoreMinimal.h"
#include "CommonStyleSheetTypeBase.h"
#include "CommonStyleSheetTypeMarginBottom.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommonStyleSheetTypeMarginBottom : public UCommonStyleSheetTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Bottom;
    
    UCommonStyleSheetTypeMarginBottom();

};

