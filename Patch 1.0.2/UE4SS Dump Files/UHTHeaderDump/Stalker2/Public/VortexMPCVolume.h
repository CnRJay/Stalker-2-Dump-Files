#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "VortexMPCVolume.generated.h"

UCLASS(Blueprintable)
class STALKER2_API AVortexMPCVolume : public AVolume {
    GENERATED_BODY()
public:
    AVortexMPCVolume(const FObjectInitializer& ObjectInitializer);

};

