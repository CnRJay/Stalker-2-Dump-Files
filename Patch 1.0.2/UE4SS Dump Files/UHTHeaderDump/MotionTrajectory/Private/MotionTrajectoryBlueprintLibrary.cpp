#include "MotionTrajectoryBlueprintLibrary.h"

UMotionTrajectoryBlueprintLibrary::UMotionTrajectoryBlueprintLibrary() {
}

FTrajectorySampleRange UMotionTrajectoryBlueprintLibrary::RotateTrajectory(FTrajectorySampleRange Trajectory, const FQuat& Rotation) {
    return FTrajectorySampleRange{};
}

FTrajectorySampleRange UMotionTrajectoryBlueprintLibrary::MakeTrajectoryRelativeToComponent(FTrajectorySampleRange ActorTrajectory, const USceneComponent* Component) {
    return FTrajectorySampleRange{};
}

bool UMotionTrajectoryBlueprintLibrary::IsStoppingTrajectory(const FTrajectorySampleRange& Trajectory, float MoveMinSpeed, float IdleMaxSpeed) {
    return false;
}

bool UMotionTrajectoryBlueprintLibrary::IsStartingTrajectory(const FTrajectorySampleRange& Trajectory, float MoveMinSpeed, float IdleMaxSpeed) {
    return false;
}

bool UMotionTrajectoryBlueprintLibrary::IsSharpVelocityDirChange(const FTrajectorySampleRange& Trajectory, float MinSharpTurnAngleDegrees, ETrajectorySampleDomain RotationConstraintDomain, float RotationConstraintValue, float MaxAlignmentAngleDegrees, float MinLinearSpeed, FVector TurnAxis, FVector ForwardAxis) {
    return false;
}

bool UMotionTrajectoryBlueprintLibrary::IsConstantSpeedTrajectory(const FTrajectorySampleRange& Trajectory, float Speed, float Tolerance) {
    return false;
}

FTrajectorySampleRange UMotionTrajectoryBlueprintLibrary::FlattenTrajectory2D(FTrajectorySampleRange Trajectory, bool PreserveSpeed) {
    return FTrajectorySampleRange{};
}

void UMotionTrajectoryBlueprintLibrary::DebugDrawTrajectory(const AActor* Actor, const FTransform& WorldTransform, const FTrajectorySampleRange& Trajectory, const FLinearColor PredictionColor, const FLinearColor HistoryColor, float TransformScale, float TransformThickness, float ArrowScale, float ArrowSize, float ArrowThickness) {
}

FTrajectorySampleRange UMotionTrajectoryBlueprintLibrary::ClampTrajectoryDirection(FTrajectorySampleRange Trajectory, const TArray<FTrajectoryDirectionClamp>& Directions, bool bPreserveRotation) {
    return FTrajectorySampleRange{};
}


