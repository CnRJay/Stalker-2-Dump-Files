#include "PoseSearchFeatureChannel_Heading.h"

UPoseSearchFeatureChannel_Heading::UPoseSearchFeatureChannel_Heading() {
    this->Weight = 1.00f;
    this->SampleTimeOffset = 0.00f;
    this->HeadingAxis = EHeadingAxis::X;
    this->SchemaBoneIdx = 0;
    this->ColorPresetIndex = 0;
    this->InputQueryPose = EInputQueryPose::UseContinuingPose;
    this->bUseSampleTimeOffsetRootBone = true;
}


