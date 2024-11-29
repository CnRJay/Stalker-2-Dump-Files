#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DynamicEnvironmentParticleActor.generated.h"

class UDynamicEnvironmentNiagaraComponent;

UCLASS(Blueprintable)
class STALKER2_API ADynamicEnvironmentParticleActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEnvironmentNiagaraComponent* EnvironmentParticleComponent;
    
public:
    ADynamicEnvironmentParticleActor(const FObjectInitializer& ObjectInitializer);

};

