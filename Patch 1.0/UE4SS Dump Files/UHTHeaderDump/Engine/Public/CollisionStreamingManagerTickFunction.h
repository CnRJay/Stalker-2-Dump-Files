#pragma once
#include "CoreMinimal.h"
#include "TickFunction.h"
#include "CollisionStreamingManagerTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FCollisionStreamingManagerTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    ENGINE_API FCollisionStreamingManagerTickFunction();
};

template<>
struct TStructOpsTypeTraits<FCollisionStreamingManagerTickFunction> : public TStructOpsTypeTraitsBase2<FCollisionStreamingManagerTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

