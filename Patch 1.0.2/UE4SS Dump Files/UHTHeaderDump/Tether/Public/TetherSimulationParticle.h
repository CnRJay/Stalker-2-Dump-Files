#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "TetherSimulationParticle.generated.h"

USTRUCT(BlueprintType)
struct TETHER_API FTetherSimulationParticle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ParticleUniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OldPosition;
    
    FTetherSimulationParticle();
};

