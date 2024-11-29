#pragma once
#include "CoreMinimal.h"
#include "HairSimulationConstraints.h"
#include "HairSimulationForces.h"
#include "HairSimulationSetup.h"
#include "HairSimulationSolver.h"
#include "HairSimulationSettings.generated.h"

USTRUCT(BlueprintType)
struct HAIRSTRANDSCORE_API FHairSimulationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bOverrideSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FHairSimulationSetup SimulationSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FHairSimulationSolver SolverSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FHairSimulationForces ExternalForces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FHairSimulationConstraints MaterialConstraints;
    
    FHairSimulationSettings();
};

