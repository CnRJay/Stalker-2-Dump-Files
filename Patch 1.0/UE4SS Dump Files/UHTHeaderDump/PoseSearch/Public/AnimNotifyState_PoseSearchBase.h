#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "AnimNotifyState_PoseSearchBase.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class POSESEARCH_API UAnimNotifyState_PoseSearchBase : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UAnimNotifyState_PoseSearchBase();

};

