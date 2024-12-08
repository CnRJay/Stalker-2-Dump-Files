#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "ModifyVFXValue.h"
#include "AnimNotifyState_ApplyDurationalEffectContextualAction.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class STALKER2_API UAnimNotifyState_ApplyDurationalEffectContextualAction : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModifyVFXValue> ModifyVFXAttachmentsValue;
    
    UAnimNotifyState_ApplyDurationalEffectContextualAction();

};

