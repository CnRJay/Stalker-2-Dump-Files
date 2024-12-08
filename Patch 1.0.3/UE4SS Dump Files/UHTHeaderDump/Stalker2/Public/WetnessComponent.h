#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "WetnessComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UWetnessComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UWetnessComponent(const FObjectInitializer& ObjectInitializer);

};

