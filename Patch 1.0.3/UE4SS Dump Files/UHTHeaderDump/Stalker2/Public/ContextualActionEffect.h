#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ContextualActionEffect.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UContextualActionEffect : public UObject {
    GENERATED_BODY()
public:
    UContextualActionEffect();

};

