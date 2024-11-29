#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETrajectorySampleDomain -FallbackName=ETrajectorySampleDomain
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TrajectorySampleRange -FallbackName=TrajectorySampleRange
#include "TrajectoryDirectionClamp.h"
#include "MotionTrajectoryBlueprintLibrary.generated.h"

class AActor;
class USceneComponent;

UCLASS(Blueprintable)
class MOTIONTRAJECTORY_API UMotionTrajectoryBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMotionTrajectoryBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTrajectorySampleRange RotateTrajectory(FTrajectorySampleRange Trajectory, const FQuat& Rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTrajectorySampleRange MakeTrajectoryRelativeToComponent(FTrajectorySampleRange ActorTrajectory, const USceneComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStoppingTrajectory(const FTrajectorySampleRange& Trajectory, float MoveMinSpeed, float IdleMaxSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStartingTrajectory(const FTrajectorySampleRange& Trajectory, float MoveMinSpeed, float IdleMaxSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSharpVelocityDirChange(const FTrajectorySampleRange& Trajectory, float MinSharpTurnAngleDegrees, ETrajectorySampleDomain RotationConstraintDomain, float RotationConstraintValue, float MaxAlignmentAngleDegrees, float MinLinearSpeed, FVector TurnAxis, FVector ForwardAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsConstantSpeedTrajectory(const FTrajectorySampleRange& Trajectory, float Speed, float Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTrajectorySampleRange FlattenTrajectory2D(FTrajectorySampleRange Trajectory, bool PreserveSpeed);
    
    UFUNCTION(BlueprintCallable)
    static void DebugDrawTrajectory(const AActor* Actor, const FTransform& WorldTransform, const FTrajectorySampleRange& Trajectory, const FLinearColor PredictionColor, const FLinearColor HistoryColor, float TransformScale, float TransformThickness, float ArrowScale, float ArrowSize, float ArrowThickness);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTrajectorySampleRange ClampTrajectoryDirection(FTrajectorySampleRange Trajectory, const TArray<FTrajectoryDirectionClamp>& Directions, bool bPreserveRotation);
    
};

