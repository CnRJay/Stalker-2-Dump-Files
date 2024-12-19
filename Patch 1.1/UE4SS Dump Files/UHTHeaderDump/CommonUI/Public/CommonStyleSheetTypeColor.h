#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "CommonStyleSheetTypeBase.h"
#include "CommonStyleSheetTypeColor.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommonStyleSheetTypeColor : public UCommonStyleSheetTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UCommonStyleSheetTypeColor();

};

