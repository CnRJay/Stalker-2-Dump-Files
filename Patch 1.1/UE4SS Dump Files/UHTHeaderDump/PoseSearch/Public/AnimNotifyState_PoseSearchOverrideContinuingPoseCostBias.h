#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_PoseSearchBase.h"
#include "AnimNotifyState_PoseSearchOverrideContinuingPoseCostBias.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class POSESEARCH_API UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias : public UAnimNotifyState_PoseSearchBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CostAddend;
    
    UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias();

};

