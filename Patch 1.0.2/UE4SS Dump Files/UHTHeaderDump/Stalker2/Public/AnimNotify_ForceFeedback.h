#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AnimNotifyBase.h"
#include "AnimNotify_ForceFeedback.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_ForceFeedback : public UAnimNotifyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FeedbackTag;
    
public:
    UAnimNotify_ForceFeedback();

};

