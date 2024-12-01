#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Templates/SubclassOf.h"
#include "RichWidgetRow.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct STALKER2_API FRichWidgetRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> WidgetToDisplay;
    
    FRichWidgetRow();
};

