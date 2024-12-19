#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_PoseSearchBase.h"
#include "AnimNotifyState_PoseSearchExcludeFromDatabase.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class POSESEARCH_API UAnimNotifyState_PoseSearchExcludeFromDatabase : public UAnimNotifyState_PoseSearchBase {
    GENERATED_BODY()
public:
    UAnimNotifyState_PoseSearchExcludeFromDatabase();

};

