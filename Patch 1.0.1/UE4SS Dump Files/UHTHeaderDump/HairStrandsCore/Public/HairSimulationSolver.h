#pragma once
#include "CoreMinimal.h"
#include "HairSimulationSolver.generated.h"

USTRUCT(BlueprintType)
struct HAIRSTRANDSCORE_API FHairSimulationSolver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bEnableSimulation;
    
    FHairSimulationSolver();
};

