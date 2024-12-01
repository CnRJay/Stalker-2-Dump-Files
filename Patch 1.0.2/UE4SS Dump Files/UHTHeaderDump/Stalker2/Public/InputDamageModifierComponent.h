#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CustomDamageHandleComponent.h"
#include "InputDamageModifierComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UInputDamageModifierComponent : public UActorComponent, public ICustomDamageHandleComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageModifier;
    
public:
    UInputDamageModifierComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetIgnoreHitFeedback(const bool bInIgnore);
    

    // Fix for true pure virtual functions not being implemented
};

