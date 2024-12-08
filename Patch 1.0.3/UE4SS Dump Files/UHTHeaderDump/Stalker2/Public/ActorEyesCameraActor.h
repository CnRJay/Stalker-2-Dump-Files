#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraActor -FallbackName=CameraActor
#include "ActorEyesCameraActor.generated.h"

UCLASS(Blueprintable)
class STALKER2_API AActorEyesCameraActor : public ACameraActor {
    GENERATED_BODY()
public:
    AActorEyesCameraActor(const FObjectInitializer& ObjectInitializer);

};

