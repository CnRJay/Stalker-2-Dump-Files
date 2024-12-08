#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "GameGraphContextualAction.generated.h"

USTRUCT(BlueprintType)
struct FGameGraphContextualAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid QuestGuid;
    
    STALKER2_API FGameGraphContextualAction();
};

