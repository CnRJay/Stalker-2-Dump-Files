#pragma once
#include "CoreMinimal.h"
#include "SoundNode.h"
#include "SoundNodeTextSwitch.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USoundNodeTextSwitch : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> NameParameters;
    
    USoundNodeTextSwitch();

};

