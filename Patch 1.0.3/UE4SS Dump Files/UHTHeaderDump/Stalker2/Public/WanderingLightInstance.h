#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "WanderingLightInstance.generated.h"

UCLASS(Blueprintable)
class STALKER2_API AWanderingLightInstance : public AActor {
    GENERATED_BODY()
public:
    AWanderingLightInstance(const FObjectInitializer& ObjectInitializer);

};

