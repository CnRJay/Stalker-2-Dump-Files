#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent
#include "EnvironmentNiagaraComponent.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEnvironmentNiagaraComponent : public UNiagaraComponent {
    GENERATED_BODY()
public:
    UEnvironmentNiagaraComponent(const FObjectInitializer& ObjectInitializer);

};

