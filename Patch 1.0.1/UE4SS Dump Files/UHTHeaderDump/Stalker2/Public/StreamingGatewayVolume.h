#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "StreamingGatewayVolume.generated.h"

UCLASS(Blueprintable)
class STALKER2_API AStreamingGatewayVolume : public AVolume {
    GENERATED_BODY()
public:
    AStreamingGatewayVolume(const FObjectInitializer& ObjectInitializer);

};

