#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ListView -FallbackName=ListView
#include "CommonListView.generated.h"

UCLASS(Blueprintable)
class COMMONUI_API UCommonListView : public UListView {
    GENERATED_BODY()
public:
    UCommonListView();

    UFUNCTION(BlueprintCallable)
    void SetEntrySpacing(float InEntrySpacing);
    
};

