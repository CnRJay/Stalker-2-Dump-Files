#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateFontInfo -FallbackName=SlateFontInfo
#include "CommonStyleSheetTypeBase.h"
#include "CommonStyleSheetTypeFontTypeface.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommonStyleSheetTypeFontTypeface : public UCommonStyleSheetTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo Typeface;
    
    UCommonStyleSheetTypeFontTypeface();

};

