#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "CustomGridSlot.h"
#include "TraderGridSlot.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UTraderGridSlot : public UCustomGridSlot {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CantBuyHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultHighlightColor;
    
public:
    UTraderGridSlot();

};

