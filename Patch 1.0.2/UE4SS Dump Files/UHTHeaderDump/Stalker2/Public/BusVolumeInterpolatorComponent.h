#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "BusVolumeInterpolatorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UBusVolumeInterpolatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UBusVolumeInterpolatorComponent(const FObjectInitializer& ObjectInitializer);

};

