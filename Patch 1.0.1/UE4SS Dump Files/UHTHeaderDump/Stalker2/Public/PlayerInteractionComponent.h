#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PlayerInteractionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UPlayerInteractionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPlayerInteractionComponent(const FObjectInitializer& ObjectInitializer);

};

