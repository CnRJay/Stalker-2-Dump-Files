#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "AsyncActionBase.h"
#include "AsyncVisibilityAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UAsyncVisibilityAction : public UAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility Visibility;
    
    UAsyncVisibilityAction();

};

