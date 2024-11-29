#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PhysicsControlActor.generated.h"

class UPhysicsControlComponent;
class UPhysicsControlInitializerComponent;

UCLASS(Blueprintable, MinimalAPI)
class APhysicsControlActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsControlComponent* ControlComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsControlInitializerComponent* ControlInitializerComponent;
    
public:
    APhysicsControlActor(const FObjectInitializer& ObjectInitializer);

};

