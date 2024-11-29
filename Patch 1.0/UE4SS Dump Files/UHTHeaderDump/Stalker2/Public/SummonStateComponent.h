#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SummonStateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API USummonStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USummonStateComponent(const FObjectInitializer& ObjectInitializer);

};

