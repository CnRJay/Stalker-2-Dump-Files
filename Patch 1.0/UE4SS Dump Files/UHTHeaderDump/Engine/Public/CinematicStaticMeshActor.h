#pragma once
#include "CoreMinimal.h"
#include "StaticMeshActor.h"
#include "CinematicStaticMeshActor.generated.h"

UCLASS(Blueprintable)
class ENGINE_API ACinematicStaticMeshActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
    ACinematicStaticMeshActor(const FObjectInitializer& ObjectInitializer);

};

