#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "AIDebugSubsystem.generated.h"

UCLASS(Blueprintable)
class UAIDebugSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UAIDebugSubsystem();

};

