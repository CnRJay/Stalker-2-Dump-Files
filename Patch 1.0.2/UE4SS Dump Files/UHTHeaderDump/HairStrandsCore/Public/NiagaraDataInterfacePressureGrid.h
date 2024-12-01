#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceVelocityGrid.h"
#include "NiagaraDataInterfacePressureGrid.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HAIRSTRANDSCORE_API UNiagaraDataInterfacePressureGrid : public UNiagaraDataInterfaceVelocityGrid {
    GENERATED_BODY()
public:
    UNiagaraDataInterfacePressureGrid();

};

