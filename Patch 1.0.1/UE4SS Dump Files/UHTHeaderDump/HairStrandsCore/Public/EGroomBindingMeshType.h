#pragma once
#include "CoreMinimal.h"
#include "EGroomBindingMeshType.generated.h"

UENUM(BlueprintType)
enum class EGroomBindingMeshType : uint8 {
    SkeletalMesh,
    GeometryCache,
};

