#pragma once
#include "CoreMinimal.h"
#include "MotionTrajectorySettings.generated.h"

USTRUCT(BlueprintType)
struct MOTIONTRAJECTORY_API FMotionTrajectorySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Domain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Seconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    FMotionTrajectorySettings();
};

