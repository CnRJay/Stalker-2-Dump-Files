#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "AICoreSubsystem.generated.h"

UCLASS(Blueprintable)
class UAICoreSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UAICoreSubsystem();

};

