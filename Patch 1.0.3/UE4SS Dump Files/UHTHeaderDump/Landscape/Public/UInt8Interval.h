#pragma once
#include "CoreMinimal.h"
#include "UInt8Interval.generated.h"

USTRUCT(BlueprintType)
struct FUInt8Interval {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 LowerBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UpperBound;
    
    LANDSCAPE_API FUInt8Interval();
};

