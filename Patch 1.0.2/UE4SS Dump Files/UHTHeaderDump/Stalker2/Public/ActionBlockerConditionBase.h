#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ActionBlockerConditionBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UActionBlockerConditionBase : public UObject {
    GENERATED_BODY()
public:
    UActionBlockerConditionBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanTrigger() const;
    
};

