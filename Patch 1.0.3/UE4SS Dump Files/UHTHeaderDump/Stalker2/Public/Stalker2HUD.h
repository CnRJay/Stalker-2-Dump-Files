#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HUD -FallbackName=HUD
#include "Stalker2HUD.generated.h"

UCLASS(Blueprintable, NonTransient)
class AStalker2HUD : public AHUD {
    GENERATED_BODY()
public:
    AStalker2HUD(const FObjectInitializer& ObjectInitializer);

};

