#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_PoseSearchBase.h"
#include "AnimNotifyState_PoseSearchBlockTransition.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class POSESEARCH_API UAnimNotifyState_PoseSearchBlockTransition : public UAnimNotifyState_PoseSearchBase {
    GENERATED_BODY()
public:
    UAnimNotifyState_PoseSearchBlockTransition();

};

