#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "ManagerTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FManagerTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    STALKER2_API FManagerTickFunction();
};

template<>
struct TStructOpsTypeTraits<FManagerTickFunction> : public TStructOpsTypeTraitsBase2<FManagerTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

