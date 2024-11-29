#pragma once
#include "CoreMinimal.h"
#include "EExternalPoseUse.generated.h"

UENUM(BlueprintType)
enum class EExternalPoseUse : uint8 {
    Write,
    Read,
};

