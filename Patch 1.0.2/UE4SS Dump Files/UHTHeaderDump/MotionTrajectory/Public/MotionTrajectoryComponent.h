#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TrajectorySampleRange -FallbackName=TrajectorySampleRange
#include "MotionTrajectorySettings.h"
#include "MotionTrajectoryComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MOTIONTRAJECTORY_API UMotionTrajectoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMotionTrajectorySettings PredictionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMotionTrajectorySettings HistorySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SampleRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSamples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPredictionIncludesHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUniformSampledHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSmoothInterpolation;
    
    UMotionTrajectoryComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSampleRate(int32 rate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTrajectorySampleRange GetTrajectoryWithSettings(const FMotionTrajectorySettings& Settings, bool bIncludeHistory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTrajectorySampleRange GetTrajectory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTrajectorySampleRange GetHistory() const;
    
};

