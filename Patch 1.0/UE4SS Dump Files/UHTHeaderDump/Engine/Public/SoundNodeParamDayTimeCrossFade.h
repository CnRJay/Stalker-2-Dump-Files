#pragma once
#include "CoreMinimal.h"
#include "SoundNodeDayTimeCrossFade.h"
#include "SoundNodeParamDayTimeCrossFade.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USoundNodeParamDayTimeCrossFade : public USoundNodeDayTimeCrossFade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName;
    
    USoundNodeParamDayTimeCrossFade();

};

