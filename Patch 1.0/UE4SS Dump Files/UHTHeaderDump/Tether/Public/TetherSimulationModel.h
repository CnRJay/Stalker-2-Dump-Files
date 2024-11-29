#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "TetherSimulationSegment.h"
#include "TetherSimulationSegmentSeries.h"
#include "TetherSimulationModel.generated.h"

USTRUCT(BlueprintType)
struct TETHER_API FTetherSimulationModel : public FTetherSimulationSegmentSeries {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SimulationBaseWorldTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTetherSimulationSegment> Segments;
    
    FTetherSimulationModel();
};

