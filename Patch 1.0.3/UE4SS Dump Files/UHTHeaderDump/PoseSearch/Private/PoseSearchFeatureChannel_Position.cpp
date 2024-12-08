#include "PoseSearchFeatureChannel_Position.h"

UPoseSearchFeatureChannel_Position::UPoseSearchFeatureChannel_Position() {
    this->Weight = 1.00f;
    this->SampleTimeOffset = 0.00f;
    this->SchemaBoneIdx = 0;
    this->ColorPresetIndex = 0;
    this->InputQueryPose = EInputQueryPose::UseContinuingPose;
    this->bUseSampleTimeOffsetRootBone = true;
}


