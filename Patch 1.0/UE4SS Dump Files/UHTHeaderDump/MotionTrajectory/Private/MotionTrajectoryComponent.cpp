#include "MotionTrajectoryComponent.h"

UMotionTrajectoryComponent::UMotionTrajectoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SampleRate = 30;
    this->MaxSamples = 1000;
    this->bPredictionIncludesHistory = true;
    this->bUniformSampledHistory = true;
    this->bSmoothInterpolation = false;
}

void UMotionTrajectoryComponent::SetSampleRate(int32 rate) {
}

FTrajectorySampleRange UMotionTrajectoryComponent::GetTrajectoryWithSettings(const FMotionTrajectorySettings& Settings, bool bIncludeHistory) const {
    return FTrajectorySampleRange{};
}

FTrajectorySampleRange UMotionTrajectoryComponent::GetTrajectory() const {
    return FTrajectorySampleRange{};
}

FTrajectorySampleRange UMotionTrajectoryComponent::GetHistory() const {
    return FTrajectorySampleRange{};
}


