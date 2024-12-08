#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "UITag.generated.h"

USTRUCT(BlueprintType)
struct FUITag : public FGameplayTag {
    GENERATED_BODY()
public:
    COMMONUI_API FUITag();
};

