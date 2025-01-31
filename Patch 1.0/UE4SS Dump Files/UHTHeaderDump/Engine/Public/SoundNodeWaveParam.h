#pragma once
#include "CoreMinimal.h"
#include "SoundNode.h"
#include "SoundNodeWaveParam.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USoundNodeWaveParam : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WaveParameterName;
    
    USoundNodeWaveParam();

};

