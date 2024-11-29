#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "LightningBallNavigationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API ULightningBallNavigationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    ULightningBallNavigationComponent(const FObjectInitializer& ObjectInitializer);

};

