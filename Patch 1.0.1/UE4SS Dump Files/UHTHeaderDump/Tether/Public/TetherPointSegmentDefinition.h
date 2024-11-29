#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TetherSegmentSimulationOptions.h"
#include "TetherPointSegmentDefinition.generated.h"

UCLASS(Blueprintable)
class TETHER_API UTetherPointSegmentDefinition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Slack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTetherSegmentSimulationOptions SimulationOptions;
    
    UTetherPointSegmentDefinition();

};

