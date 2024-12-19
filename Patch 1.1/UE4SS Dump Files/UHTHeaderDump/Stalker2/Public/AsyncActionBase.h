#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AsyncActionBase.generated.h"

class UHintControllerBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UAsyncActionBase : public UObject {
    GENERATED_BODY()
public:
    UAsyncActionBase();

    UFUNCTION(BlueprintCallable)
    void ExecuteAction(UHintControllerBase* InHintController);
    
};

