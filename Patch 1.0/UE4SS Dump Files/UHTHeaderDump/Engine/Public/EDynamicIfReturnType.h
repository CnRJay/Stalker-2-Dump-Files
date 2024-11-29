#pragma once
#include "CoreMinimal.h"
#include "EDynamicIfReturnType.generated.h"

UENUM(BlueprintType)
enum EDynamicIfReturnType {
    RETURNTYPE_Float4,
    RETURNTYPE_Float3,
    RETURNTYPE_Float2,
    RETURNTYPE_Float1,
    RETURNTYPE_LWCVector4,
    RETURNTYPE_LWCVector3,
    RETURNTYPE_LWCVector2,
    RETURNTYPE_LWCScalar,
    RETURNTYPE_Bool,
};

