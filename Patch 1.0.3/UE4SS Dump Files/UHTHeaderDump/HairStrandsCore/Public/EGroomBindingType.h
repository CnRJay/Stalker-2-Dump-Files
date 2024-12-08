#pragma once
#include "CoreMinimal.h"
#include "EGroomBindingType.generated.h"

UENUM(BlueprintType)
enum class EGroomBindingType : uint8 {
    NoneBinding,
    Rigid,
    Skinning,
};

