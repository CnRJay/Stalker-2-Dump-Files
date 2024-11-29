#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "AimProcessorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UAimProcessorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAimProcessorComponent(const FObjectInitializer& ObjectInitializer);

};

