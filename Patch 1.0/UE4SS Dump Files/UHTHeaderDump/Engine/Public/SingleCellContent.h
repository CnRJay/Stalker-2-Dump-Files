#pragma once
#include "CoreMinimal.h"
#include "CellLock.h"
#include "SingleCellContent.generated.h"

USTRUCT(BlueprintType)
struct FSingleCellContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCellLock> Locks;
    
    ENGINE_API FSingleCellContent();
};

