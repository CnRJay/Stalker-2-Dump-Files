#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int32Interval -FallbackName=Int32Interval
#include "FoliageMapLayer.generated.h"

USTRUCT(BlueprintType)
struct LANDSCAPE_API FFoliageMapLayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Interval Interval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasVisualizationColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor VisualizationColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnTrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnBushes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnGrass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasInnerFoliage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInnerFoliage;
    
    FFoliageMapLayer();
};

