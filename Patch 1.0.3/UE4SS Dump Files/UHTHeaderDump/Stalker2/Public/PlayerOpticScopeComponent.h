#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PlayerOpticScopeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UPlayerOpticScopeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPlayerOpticScopeComponent(const FObjectInitializer& ObjectInitializer);

};

