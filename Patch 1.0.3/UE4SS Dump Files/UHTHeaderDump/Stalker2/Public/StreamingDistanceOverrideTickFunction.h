#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "StreamingDistanceOverrideTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FStreamingDistanceOverrideTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    STALKER2_API FStreamingDistanceOverrideTickFunction();
};

template<>
struct TStructOpsTypeTraits<FStreamingDistanceOverrideTickFunction> : public TStructOpsTypeTraitsBase2<FStreamingDistanceOverrideTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

