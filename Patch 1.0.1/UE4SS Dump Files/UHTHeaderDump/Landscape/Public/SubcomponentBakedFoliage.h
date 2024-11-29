#pragma once
#include "CoreMinimal.h"
#include "CompressedTransformRanges.h"
#include "SubcomponentBakedFoliage.generated.h"

USTRUCT(BlueprintType)
struct FSubcomponentBakedFoliage {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> TransformRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompressedTransformRanges Ranges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstancingRNGSeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NumTransforms;
    
    LANDSCAPE_API FSubcomponentBakedFoliage();
};

