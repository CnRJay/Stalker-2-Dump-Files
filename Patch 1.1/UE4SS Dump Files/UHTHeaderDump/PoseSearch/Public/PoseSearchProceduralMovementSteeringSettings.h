#pragma once
#include "CoreMinimal.h"
#include "PoseSearchProceduralMovementSteeringSettings.generated.h"

USTRUCT(BlueprintType)
struct FPoseSearchProceduralMovementSteeringSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSteeringRotationRateDegreesPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSteeringAngleDegrees;
    
    POSESEARCH_API FPoseSearchProceduralMovementSteeringSettings();
};

