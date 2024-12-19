#pragma once
#include "CoreMinimal.h"
#include "CommonStyleSheetTypeBase.h"
#include "CommonStyleSheetTypeLineHeightPercentage.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommonStyleSheetTypeLineHeightPercentage : public UCommonStyleSheetTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineHeightPercentage;
    
    UCommonStyleSheetTypeLineHeightPercentage();

};

