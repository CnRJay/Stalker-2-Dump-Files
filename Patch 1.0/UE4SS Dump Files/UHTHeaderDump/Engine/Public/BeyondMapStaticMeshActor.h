#pragma once
#include "CoreMinimal.h"
#include "GSCCustomActorValidatorInterface.h"
#include "StaticMeshActor.h"
#include "BeyondMapStaticMeshActor.generated.h"

UCLASS(Blueprintable)
class ENGINE_API ABeyondMapStaticMeshActor : public AStaticMeshActor, public IGSCCustomActorValidatorInterface {
    GENERATED_BODY()
public:
    ABeyondMapStaticMeshActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

