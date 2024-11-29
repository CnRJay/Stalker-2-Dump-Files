#pragma once
#include "CoreMinimal.h"
#include "EBuildingType.generated.h"

UENUM(BlueprintType)
namespace EBuildingType {
    enum Type {
        None,
        Wooden,
        Metal,
        Concrete,
        GetCount,
    };
}

