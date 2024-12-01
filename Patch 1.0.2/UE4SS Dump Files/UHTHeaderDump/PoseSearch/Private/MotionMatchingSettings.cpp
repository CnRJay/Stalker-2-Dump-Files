#include "MotionMatchingSettings.h"

FMotionMatchingSettings::FMotionMatchingSettings() {
    this->BlendTime = 0.00f;
    this->MaxActiveBlends = 0;
    this->BlendProfile = NULL;
    this->BlendOption = EAlphaBlendOption::Linear;
    this->MirrorChangeBlendTime = 0.00f;
    this->PoseJumpThresholdTime = 0.00f;
    this->PoseReselectHistory = 0.00f;
    this->SearchThrottleTime = 0.00f;
    this->SkipContinuingPoseMaxCost = 0.00f;
    this->PlayRateMin = 0.00f;
    this->PlayRateMax = 0.00f;
}

