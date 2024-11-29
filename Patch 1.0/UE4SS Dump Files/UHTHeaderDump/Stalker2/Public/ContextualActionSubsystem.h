#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "ContextualActionSubsystem.generated.h"

UCLASS(Blueprintable)
class UContextualActionSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UContextualActionSubsystem();

};

