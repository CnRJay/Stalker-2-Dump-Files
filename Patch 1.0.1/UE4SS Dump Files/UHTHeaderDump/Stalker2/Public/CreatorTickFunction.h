#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "CreatorTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FCreatorTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    STALKER2_API FCreatorTickFunction();
};

template<>
struct TStructOpsTypeTraits<FCreatorTickFunction> : public TStructOpsTypeTraitsBase2<FCreatorTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

