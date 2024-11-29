#pragma once
#include "CoreMinimal.h"
#include "CommonStyleSheetTypeBase.h"
#include "CommonStyleSheetTypeOpacity.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommonStyleSheetTypeOpacity : public UCommonStyleSheetTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Opacity;
    
    UCommonStyleSheetTypeOpacity();

};

