#pragma once
#include "CoreMinimal.h"
#include "Volume.h"
#include "CinematicLockVolume.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ACinematicLockVolume : public AVolume {
    GENERATED_BODY()
public:
    ACinematicLockVolume(const FObjectInitializer& ObjectInitializer);

};

