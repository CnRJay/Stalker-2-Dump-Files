#pragma once
#include "CoreMinimal.h"
#include "CommonStyleSheetTypeBase.h"
#include "CommonStyleSheetTypeMarginTop.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommonStyleSheetTypeMarginTop : public UCommonStyleSheetTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Top;
    
    UCommonStyleSheetTypeMarginTop();

};

