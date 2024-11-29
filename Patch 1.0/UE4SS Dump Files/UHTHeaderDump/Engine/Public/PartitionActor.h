#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "GSCCustomActorValidatorInterface.h"
#include "PartitionActor.generated.h"

UCLASS(Abstract, Blueprintable)
class ENGINE_API APartitionActor : public AActor, public IGSCCustomActorValidatorInterface {
    GENERATED_BODY()
public:
    APartitionActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

