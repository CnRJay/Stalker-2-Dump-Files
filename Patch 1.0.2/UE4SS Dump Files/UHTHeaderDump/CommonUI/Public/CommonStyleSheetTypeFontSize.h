#pragma once
#include "CoreMinimal.h"
#include "CommonStyleSheetTypeBase.h"
#include "CommonStyleSheetTypeFontSize.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommonStyleSheetTypeFontSize : public UCommonStyleSheetTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 size;
    
    UCommonStyleSheetTypeFontSize();

};

