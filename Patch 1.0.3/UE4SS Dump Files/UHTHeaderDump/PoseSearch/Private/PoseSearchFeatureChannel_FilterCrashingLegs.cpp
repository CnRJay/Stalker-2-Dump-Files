#include "PoseSearchFeatureChannel_FilterCrashingLegs.h"

UPoseSearchFeatureChannel_FilterCrashingLegs::UPoseSearchFeatureChannel_FilterCrashingLegs() {
    this->Weight = 0.20f;
    this->LeftThighIdx = 0;
    this->RightThighIdx = 0;
    this->LeftFootIdx = 0;
    this->RightFootIdx = 0;
    this->InputQueryPose = EInputQueryPose::UseContinuingPose;
    this->AllowedTolerance = 0.30f;
}


