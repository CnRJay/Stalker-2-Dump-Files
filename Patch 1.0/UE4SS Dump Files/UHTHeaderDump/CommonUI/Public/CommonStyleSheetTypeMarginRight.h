#pragma once
#include "CoreMinimal.h"
#include "CommonStyleSheetTypeBase.h"
#include "CommonStyleSheetTypeMarginRight.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommonStyleSheetTypeMarginRight : public UCommonStyleSheetTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Right;
    
    UCommonStyleSheetTypeMarginRight();

};

