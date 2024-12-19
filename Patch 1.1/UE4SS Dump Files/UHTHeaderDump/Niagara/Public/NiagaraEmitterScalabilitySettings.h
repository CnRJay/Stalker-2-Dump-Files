#pragma once
#include "CoreMinimal.h"
#include "NiagaraLinearRamp.h"
#include "NiagaraPlatformSet.h"
#include "NiagaraEmitterScalabilitySettings.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraEmitterScalabilitySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraPlatformSet Platforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bScaleSpawnCount: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnCountScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bScaleSpawnCountByDistanceCurve: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraLinearRamp SpawnCountScaleCurve;
    
    FNiagaraEmitterScalabilitySettings();
};

