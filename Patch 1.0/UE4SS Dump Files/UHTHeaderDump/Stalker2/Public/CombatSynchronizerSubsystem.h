#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "CombatSynchronizerSubsystem.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCombatSynchronizerSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UCombatSynchronizerSubsystem();

};

