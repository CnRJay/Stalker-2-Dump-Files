#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "ALifePOISubsystem.generated.h"

UCLASS(Blueprintable)
class UALifePOISubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UALifePOISubsystem();

};

