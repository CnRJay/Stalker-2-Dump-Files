#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "AIConstraintSubsystem.generated.h"

UCLASS(Blueprintable)
class UAIConstraintSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UAIConstraintSubsystem();

};

