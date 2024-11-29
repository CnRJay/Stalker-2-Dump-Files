#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "WildlifeBehaviourComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UWildlifeBehaviourComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UWildlifeBehaviourComponent(const FObjectInitializer& ObjectInitializer);

};

