#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "ActorPackInstance.generated.h"

UCLASS(Blueprintable)
class ENGINE_API AActorPackInstance : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AssociatedGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AssociatedDataLayer;
    
public:
    AActorPackInstance(const FObjectInitializer& ObjectInitializer);

};

