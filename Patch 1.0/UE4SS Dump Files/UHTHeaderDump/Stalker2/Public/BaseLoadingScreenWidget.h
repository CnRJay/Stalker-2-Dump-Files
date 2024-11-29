#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "BaseLoadingScreenWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UBaseLoadingScreenWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UBaseLoadingScreenWidget();

};

