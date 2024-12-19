#include "PoseSearchPoseMetadata.h"

FPoseSearchPoseMetadata::FPoseSearchPoseMetadata() {
    this->Flags = EPoseSearchPoseFlags::None;
    this->CostAddend = 0.00f;
    this->ContinuingPoseCostAddend = 0.00f;
    this->AssetIndex = 0;
}

