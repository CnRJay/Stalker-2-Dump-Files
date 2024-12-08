#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "AnimNotify_AttackHitDetection.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class STALKER2_API UAnimNotify_AttackHitDetection : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UAnimNotify_AttackHitDetection();

};

