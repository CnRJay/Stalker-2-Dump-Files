#pragma once
#include "CoreMinimal.h"
#include "StaticMeshActor.h"
#include "RoadGenStaticMeshActor.generated.h"

UCLASS(Blueprintable)
class ENGINE_API ARoadGenStaticMeshActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
    ARoadGenStaticMeshActor(const FObjectInitializer& ObjectInitializer);

};

