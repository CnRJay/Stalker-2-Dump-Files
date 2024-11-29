#pragma once
#include "CoreMinimal.h"
#include "CellLockVector2D.generated.h"

USTRUCT(BlueprintType)
struct FCellLockVector2D {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 X;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Y;
    
    ENGINE_API FCellLockVector2D();
};
FORCEINLINE uint32 GetTypeHash(const FCellLockVector2D) { return 0; }

