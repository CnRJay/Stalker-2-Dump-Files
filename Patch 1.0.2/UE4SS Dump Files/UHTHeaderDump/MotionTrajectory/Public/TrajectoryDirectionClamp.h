#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "TrajectoryDirectionClamp.generated.h"

USTRUCT(BlueprintType)
struct MOTIONTRAJECTORY_API FTrajectoryDirectionClamp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleTresholdDegrees;
    
    FTrajectoryDirectionClamp();
};

