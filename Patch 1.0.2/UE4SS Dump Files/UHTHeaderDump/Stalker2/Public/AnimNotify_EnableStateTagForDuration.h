#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EStateTag.h"
#include "AnimNotify_EnableStateTagForDuration.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAnimNotify_EnableStateTagForDuration : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateTag StateTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableIfDied;
    
    UAnimNotify_EnableStateTagForDuration();

};

