#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "SimpleVolumeForEffects.generated.h"

class UApplyEffectComponent;

UCLASS(Blueprintable)
class STALKER2_API ASimpleVolumeForEffects : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UApplyEffectComponent* EffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveEffectOnEndOverlap;
    
public:
    ASimpleVolumeForEffects(const FObjectInitializer& ObjectInitializer);

};

