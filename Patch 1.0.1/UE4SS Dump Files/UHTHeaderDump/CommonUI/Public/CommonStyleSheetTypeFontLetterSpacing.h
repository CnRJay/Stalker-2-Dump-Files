#pragma once
#include "CoreMinimal.h"
#include "CommonStyleSheetTypeBase.h"
#include "CommonStyleSheetTypeFontLetterSpacing.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommonStyleSheetTypeFontLetterSpacing : public UCommonStyleSheetTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LetterSpacing;
    
    UCommonStyleSheetTypeFontLetterSpacing();

};

