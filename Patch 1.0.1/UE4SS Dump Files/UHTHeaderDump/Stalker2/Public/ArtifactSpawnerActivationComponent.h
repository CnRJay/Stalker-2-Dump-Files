#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ArtifactSpawnerActivationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UArtifactSpawnerActivationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UArtifactSpawnerActivationComponent(const FObjectInitializer& ObjectInitializer);

};

