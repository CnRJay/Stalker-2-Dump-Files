#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EDataLayerRuntimeState -FallbackName=EDataLayerRuntimeState
#include "DataLayerPhysicsComponent.generated.h"

class UDataLayerInstance;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UDataLayerPhysicsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UDataLayerPhysicsComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnDataLayersUpdated(const UDataLayerInstance* DataLayer, EDataLayerRuntimeState State);
    
};

