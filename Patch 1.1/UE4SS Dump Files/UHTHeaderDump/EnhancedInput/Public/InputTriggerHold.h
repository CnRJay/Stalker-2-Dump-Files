#pragma once
#include "CoreMinimal.h"
#include "InputTriggerTimedBase.h"
#include "TriggerProgress.h"
#include "InputTriggerHold.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, Config=Engine)
class UInputTriggerHold : public UInputTriggerTimedBase, public ITriggerProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTimeThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOneShot;
    
    UInputTriggerHold();


    // Fix for true pure virtual functions not being implemented
};

