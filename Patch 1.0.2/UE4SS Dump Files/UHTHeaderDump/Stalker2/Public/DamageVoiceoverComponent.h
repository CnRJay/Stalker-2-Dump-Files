#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DamageVoiceoverComponent.generated.h"

class APC;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UDamageVoiceoverComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APC* Owner;
    
public:
    UDamageVoiceoverComponent(const FObjectInitializer& ObjectInitializer);

};

