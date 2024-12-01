#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "ModSubsystemBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UModSubsystemBase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UModSubsystemBase();

};

