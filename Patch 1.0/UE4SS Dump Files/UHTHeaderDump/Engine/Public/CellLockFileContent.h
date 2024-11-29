#pragma once
#include "CoreMinimal.h"
#include "CellLockVector2D.h"
#include "SingleCellContent.h"
#include "CellLockFileContent.generated.h"

USTRUCT(BlueprintType)
struct FCellLockFileContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClusterSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FCellLockVector2D, FSingleCellContent> Cells;
    
    ENGINE_API FCellLockFileContent();
};

