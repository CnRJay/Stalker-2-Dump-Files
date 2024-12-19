#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraParticleCallbackHandler -FallbackName=NiagaraParticleCallbackHandler
#include "ParticleCallbackHandler.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UParticleCallbackHandler : public UObject, public INiagaraParticleCallbackHandler {
    GENERATED_BODY()
public:
    UParticleCallbackHandler();


    // Fix for true pure virtual functions not being implemented
};

