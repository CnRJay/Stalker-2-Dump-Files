#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_PoseSearchBase.h"
#include "AnimNotifyState_PoseSearchModifyCost.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class POSESEARCH_API UAnimNotifyState_PoseSearchModifyCost : public UAnimNotifyState_PoseSearchBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CostAddend;
    
    UAnimNotifyState_PoseSearchModifyCost();

};

