#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraDataInterfaceRWBase -FallbackName=NiagaraDataInterfaceRWBase
#include "NiagaraDataInterfaceVelocityGrid.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HAIRSTRANDSCORE_API UNiagaraDataInterfaceVelocityGrid : public UNiagaraDataInterfaceRWBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector GridSize;
    
    UNiagaraDataInterfaceVelocityGrid();

};

