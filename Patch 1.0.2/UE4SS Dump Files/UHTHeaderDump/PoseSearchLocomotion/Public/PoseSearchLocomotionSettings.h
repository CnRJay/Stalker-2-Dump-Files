#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=PoseSearch -ObjectName=MotionMatchingSettings -FallbackName=MotionMatchingSettings
#include "PoseSearchLocomotionMovementSettings.h"
#include "PoseSearchLocomotionTrajectorySettings.h"
#include "PoseSearchLocomotionSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class POSESEARCHLOCOMOTION_API UPoseSearchLocomotionSettings : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMotionMatchingSettings MotionMatchingSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseSearchLocomotionTrajectorySettings TrajectorySettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseSearchLocomotionMovementSettings MovementSettings;
    
public:
    UPoseSearchLocomotionSettings();

};

