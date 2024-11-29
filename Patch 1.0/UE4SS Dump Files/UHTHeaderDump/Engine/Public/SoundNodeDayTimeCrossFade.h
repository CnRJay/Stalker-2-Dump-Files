#pragma once
#include "CoreMinimal.h"
#include "DayTimeDatum.h"
#include "SoundNode.h"
#include "SoundNodeDayTimeCrossFade.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USoundNodeDayTimeCrossFade : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, Export, meta=(AllowPrivateAccess=true))
    TArray<FDayTimeDatum> CrossFadeInput;
    
    USoundNodeDayTimeCrossFade();

};

