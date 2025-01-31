#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETextureRenderTargetFormat -FallbackName=ETextureRenderTargetFormat
#include "NiagaraDataInterfaceRWBase.h"
#include "NiagaraUserParameterBinding.h"
#include "NiagaraDataInterfaceRenderTarget2DArray.generated.h"

class UTextureRenderTarget2DArray;

UCLASS(Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETextureRenderTargetFormat> OverrideRenderTargetFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInheritUserParameterSettings: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideFormat: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraUserParameterBinding RenderTargetUserParameter;
    
protected:
    UPROPERTY(DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint64, UTextureRenderTarget2DArray*> ManagedRenderTargets;
    
public:
    UNiagaraDataInterfaceRenderTarget2DArray();

};

