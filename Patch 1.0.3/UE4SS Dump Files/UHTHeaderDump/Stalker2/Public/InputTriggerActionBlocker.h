#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=EnhancedInput -ObjectName=InputTrigger -FallbackName=InputTrigger
#include "InputTriggerActionBlocker.generated.h"

class UActionBlockerConditionBase;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class STALKER2_API UInputTriggerActionBlocker : public UInputTrigger {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActionBlockerConditionBase* Condition;
    
public:
    UInputTriggerActionBlocker();

};

