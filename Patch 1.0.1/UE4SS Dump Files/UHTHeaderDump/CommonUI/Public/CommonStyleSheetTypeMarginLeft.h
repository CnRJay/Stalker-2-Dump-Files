#pragma once
#include "CoreMinimal.h"
#include "CommonStyleSheetTypeBase.h"
#include "CommonStyleSheetTypeMarginLeft.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommonStyleSheetTypeMarginLeft : public UCommonStyleSheetTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Left;
    
    UCommonStyleSheetTypeMarginLeft();

};

