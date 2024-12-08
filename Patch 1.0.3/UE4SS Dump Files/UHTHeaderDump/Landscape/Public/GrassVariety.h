#pragma once
#include "CoreMinimal.h"
#include "GrassVarietyAdvanced.h"
#include "GrassVariety.generated.h"

class UGSCFoliagePrefab;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FGrassVariety {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* GrassMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGSCFoliagePrefab* FoliagePrefab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDistantFoliage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrassVarietyAdvanced Advanced;
    
    LANDSCAPE_API FGrassVariety();
};

