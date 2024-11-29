#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "ParticleConditionPrototype.h"
#include "ParticleWindIntensityPrototype.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FParticleWindIntensityPrototype : public FParticleConditionPrototype {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval AllowedWindIntensityInterval;
    
    FParticleWindIntensityPrototype();
};

