#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "GSCCustomActorValidatorInterface.h"
#include "Info.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class AInfo : public AActor, public IGSCCustomActorValidatorInterface {
    GENERATED_BODY()
public:
    AInfo(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

