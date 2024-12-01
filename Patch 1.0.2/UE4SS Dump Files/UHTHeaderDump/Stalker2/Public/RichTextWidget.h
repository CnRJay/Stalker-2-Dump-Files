#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=RichTextBlock -FallbackName=RichTextBlock
#include "RichTextWidget.generated.h"

UCLASS(Blueprintable)
class STALKER2_API URichTextWidget : public URichTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableStyleManager;
    
    URichTextWidget();

};

