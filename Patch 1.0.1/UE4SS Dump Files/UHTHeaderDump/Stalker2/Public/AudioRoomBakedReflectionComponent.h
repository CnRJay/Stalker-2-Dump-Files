#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "AudioRoomBakedReflectionComponent.generated.h"

class UAkSwitchValue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UAudioRoomBakedReflectionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* AudioRoomBakedReflection;
    
    UAudioRoomBakedReflectionComponent(const FObjectInitializer& ObjectInitializer);

};

