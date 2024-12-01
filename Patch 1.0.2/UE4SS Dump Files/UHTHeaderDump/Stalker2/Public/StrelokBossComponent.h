#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CustomDamageHandleComponent.h"
#include "StrelokBossComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UStrelokBossComponent : public UActorComponent, public ICustomDamageHandleComponent {
    GENERATED_BODY()
public:
    UStrelokBossComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnDashAbilityUsed(const bool bAbilityUsed);
    

    // Fix for true pure virtual functions not being implemented
};

