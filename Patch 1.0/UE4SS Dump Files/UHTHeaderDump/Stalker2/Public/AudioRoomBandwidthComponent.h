#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "AudioRoomBandwidthComponent.generated.h"

class UAkStateValue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UAudioRoomBandwidthComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* AudioRoomBandwidth;
    
    UAudioRoomBandwidthComponent(const FObjectInitializer& ObjectInitializer);

};

