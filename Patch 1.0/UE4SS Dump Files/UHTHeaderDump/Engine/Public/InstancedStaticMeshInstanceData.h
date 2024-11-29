#pragma once
#include "CoreMinimal.h"
#include "InstanceTransform.h"
#include "InstancedStaticMeshInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FInstancedStaticMeshInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstanceTransform Transform;
    
    ENGINE_API FInstancedStaticMeshInstanceData();
};

