#pragma once
#include "CoreMinimal.h"
#include "InputTriggerTimedBase.h"
#include "TriggerProgress.h"
#include "InputTriggerHoldWithActivationDelay.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, Config=Engine)
class UInputTriggerHoldWithActivationDelay : public UInputTriggerTimedBase, public ITriggerProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTimeThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldActivationThreshold;
    
    UInputTriggerHoldWithActivationDelay();


    // Fix for true pure virtual functions not being implemented
};

