#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "NavRebuildVolume.generated.h"

UCLASS(Blueprintable, Transient)
class STALKER2_API ANavRebuildVolume : public AVolume {
    GENERATED_BODY()
public:
    ANavRebuildVolume(const FObjectInitializer& ObjectInitializer);

};

