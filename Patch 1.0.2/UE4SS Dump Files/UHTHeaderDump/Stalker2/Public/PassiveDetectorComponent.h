#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PassiveDetectorComponent.generated.h"

class UAkAudioEvent;
class UAkRtpc;
class UCurveFloat;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UPassiveDetectorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkRtpc* DangerLevelSoundParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DetectorWorkSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* DetectorWorkCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* SignalCurve;
    
public:
    UPassiveDetectorComponent(const FObjectInitializer& ObjectInitializer);

};

