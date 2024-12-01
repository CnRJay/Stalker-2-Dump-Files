#pragma once
#include "CoreMinimal.h"
#include "HairExternalForces.h"
#include "HairMaterialConstraints.h"
#include "HairSolverSettings.h"
#include "HairStrandsParameters.h"
#include "HairGroupsPhysics.generated.h"

USTRUCT(BlueprintType)
struct HAIRSTRANDSCORE_API FHairGroupsPhysics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHairSolverSettings SolverSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHairExternalForces ExternalForces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHairMaterialConstraints MaterialConstraints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHairStrandsParameters StrandsParameters;
    
    FHairGroupsPhysics();
};

