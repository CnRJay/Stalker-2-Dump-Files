#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "WidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    UWidgetBase();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateWidget();
    
};

