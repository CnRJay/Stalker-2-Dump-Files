#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "StaticEnvironmentParticleActor.generated.h"

class UStaticEnvironmentNiagaraComponent;

UCLASS(Blueprintable)
class STALKER2_API AStaticEnvironmentParticleActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticEnvironmentNiagaraComponent* EnvironmentParticleComponent;
    
public:
    AStaticEnvironmentParticleActor(const FObjectInitializer& ObjectInitializer);

};

