#pragma once
#include "CoreMinimal.h"
#include "SoundNode.h"
#include "TimeDatum.h"
#include "SoundNodeTimeCrossFade.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USoundNodeTimeCrossFade : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, Export, meta=(AllowPrivateAccess=true))
    TArray<FTimeDatum> CrossFadeInput;
    
    USoundNodeTimeCrossFade();

};

