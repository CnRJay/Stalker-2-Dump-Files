#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PlayerEffectsSFXComponent.generated.h"

class UAkAudioEvent;
class UAkRtpc;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UPlayerEffectsSFXComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SFXStartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SFXStopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* SFXParameter;
    
public:
    UPlayerEffectsSFXComponent(const FObjectInitializer& ObjectInitializer);

};

