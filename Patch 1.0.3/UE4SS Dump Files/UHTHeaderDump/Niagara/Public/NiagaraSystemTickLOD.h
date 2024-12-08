#pragma once
#include "CoreMinimal.h"
#include "EFTickBehaviour.h"
#include "NiagaraSystemTickLOD.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraSystemTickLOD {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EFTickBehaviour TickBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TicksCountToSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickDeltaScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMotionVectors;
    
    NIAGARA_API FNiagaraSystemTickLOD();
};

