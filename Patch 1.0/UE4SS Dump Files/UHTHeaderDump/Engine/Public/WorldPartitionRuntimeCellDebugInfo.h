#pragma once
#include "CoreMinimal.h"
#include "WorldPartitionRuntimeCellDebugInfo.generated.h"

USTRUCT(BlueprintType)
struct FWorldPartitionRuntimeCellDebugInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GridName;
    
    ENGINE_API FWorldPartitionRuntimeCellDebugInfo();
};

