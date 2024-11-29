#pragma once
#include "CoreMinimal.h"
#include "NiagaraSystemTickLOD.h"
#include "NiagaraSystemTickLODArray.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraSystemTickLODArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraSystemTickLOD> LODs;
    
    NIAGARA_API FNiagaraSystemTickLODArray();
};

