#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraAnimNotifies -ObjectName=AnimNotify_PlayNiagaraEffect -FallbackName=AnimNotify_PlayNiagaraEffect
#include "EParticleAction.h"
#include "AnimNotify_AttachNiagaraSystem.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class STALKER2_API UAnimNotify_AttachNiagaraSystem : public UAnimNotify_PlayNiagaraEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EParticleAction AttachAction;
    
    UAnimNotify_AttachNiagaraSystem();

};

