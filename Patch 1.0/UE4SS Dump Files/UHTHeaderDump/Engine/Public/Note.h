#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "GSCCustomActorValidatorInterface.h"
#include "Note.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ANote : public AActor, public IGSCCustomActorValidatorInterface {
    GENERATED_BODY()
public:
    ANote(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

