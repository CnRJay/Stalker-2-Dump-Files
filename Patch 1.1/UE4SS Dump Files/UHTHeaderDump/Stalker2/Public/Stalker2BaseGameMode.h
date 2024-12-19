#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameModeBase -FallbackName=GameModeBase
#include "Stalker2BaseGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class STALKER2_API AStalker2BaseGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
    AStalker2BaseGameMode(const FObjectInitializer& ObjectInitializer);

};

