#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpectatorPawn -FallbackName=SpectatorPawn
#include "Stalker2Spectator.generated.h"

UCLASS(Blueprintable)
class STALKER2_API AStalker2Spectator : public ASpectatorPawn {
    GENERATED_BODY()
public:
    AStalker2Spectator(const FObjectInitializer& ObjectInitializer);

};

