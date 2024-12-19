#ifndef UE4SS_SDK_MotionTrajectory_HPP
#define UE4SS_SDK_MotionTrajectory_HPP

struct FMotionTrajectorySettings
{
    int32 Domain;                                                                     // 0x0000 (size: 0x4)
    float Seconds;                                                                    // 0x0004 (size: 0x4)
    float Distance;                                                                   // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FTrajectoryDirectionClamp
{
    FVector Direction;                                                                // 0x0000 (size: 0x18)
    float AngleTresholdDegrees;                                                       // 0x0018 (size: 0x4)

}; // Size: 0x20

class UCharacterMovementTrajectoryComponent : public UMotionTrajectoryComponent
{
    FRotator LastDesiredControlRotation;                                              // 0x0268 (size: 0x18)
    FRotator DesiredControlRotationVelocity;                                          // 0x0280 (size: 0x18)

    void OnMovementUpdated(float DeltaSeconds, FVector OldLocation, FVector OldVelocity);
}; // Size: 0x2A0

class UMotionTrajectoryBlueprintLibrary : public UBlueprintFunctionLibrary
{

    FTrajectorySampleRange RotateTrajectory(FTrajectorySampleRange Trajectory, const FQuat& Rotation);
    FTrajectorySampleRange MakeTrajectoryRelativeToComponent(FTrajectorySampleRange ActorTrajectory, const class USceneComponent* Component);
    bool IsStoppingTrajectory(const FTrajectorySampleRange& Trajectory, float MoveMinSpeed, float IdleMaxSpeed);
    bool IsStartingTrajectory(const FTrajectorySampleRange& Trajectory, float MoveMinSpeed, float IdleMaxSpeed);
    bool IsSharpVelocityDirChange(const FTrajectorySampleRange& Trajectory, float MinSharpTurnAngleDegrees, ETrajectorySampleDomain RotationConstraintDomain, float RotationConstraintValue, float MaxAlignmentAngleDegrees, float MinLinearSpeed, FVector TurnAxis, FVector ForwardAxis);
    bool IsConstantSpeedTrajectory(const FTrajectorySampleRange& Trajectory, float Speed, float Tolerance);
    FTrajectorySampleRange FlattenTrajectory2D(FTrajectorySampleRange Trajectory, bool PreserveSpeed);
    void DebugDrawTrajectory(const class AActor* Actor, const FTransform& WorldTransform, const FTrajectorySampleRange& Trajectory, const FLinearColor PredictionColor, const FLinearColor HistoryColor, float TransformScale, float TransformThickness, float ArrowScale, float ArrowSize, float ArrowThickness);
    FTrajectorySampleRange ClampTrajectoryDirection(FTrajectorySampleRange Trajectory, const TArray<FTrajectoryDirectionClamp>& Directions, bool bPreserveRotation);
}; // Size: 0x28

class UMotionTrajectoryComponent : public UActorComponent
{
    FMotionTrajectorySettings PredictionSettings;                                     // 0x0240 (size: 0xC)
    FMotionTrajectorySettings HistorySettings;                                        // 0x024C (size: 0xC)
    int32 SampleRate;                                                                 // 0x0258 (size: 0x4)
    int32 MaxSamples;                                                                 // 0x025C (size: 0x4)
    bool bPredictionIncludesHistory;                                                  // 0x0260 (size: 0x1)
    bool bUniformSampledHistory;                                                      // 0x0261 (size: 0x1)
    bool bSmoothInterpolation;                                                        // 0x0262 (size: 0x1)

    void SetSampleRate(int32 rate);
    FTrajectorySampleRange GetTrajectoryWithSettings(const FMotionTrajectorySettings& Settings, bool bIncludeHistory);
    FTrajectorySampleRange GetTrajectory();
    FTrajectorySampleRange GetHistory();
}; // Size: 0x270

#endif
