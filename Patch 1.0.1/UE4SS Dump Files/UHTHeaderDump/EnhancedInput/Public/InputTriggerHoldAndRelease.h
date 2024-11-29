#pragma once
#include "CoreMinimal.h"
#include "InputTriggerTimedBase.h"
#include "TriggerProgress.h"
#include "InputTriggerHoldAndRelease.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, Config=Engine)
class UInputTriggerHoldAndRelease : public UInputTriggerTimedBase, public ITriggerProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTimeThreshold;
    
    UInputTriggerHoldAndRelease();


    // Fix for true pure virtual functions not being implemented
};

