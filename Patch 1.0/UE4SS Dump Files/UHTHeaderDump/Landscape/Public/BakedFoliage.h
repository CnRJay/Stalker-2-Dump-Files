#pragma once
#include "CoreMinimal.h"
#include "FoliageTypeBakedFoliage.h"
#include "BakedFoliage.generated.h"

USTRUCT(BlueprintType)
struct FBakedFoliage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFoliageTypeBakedFoliage TreeBakedFoliage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFoliageTypeBakedFoliage BushBakedFoliage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFoliageTypeBakedFoliage GrassBakedFoliage;
    
    LANDSCAPE_API FBakedFoliage();
};

