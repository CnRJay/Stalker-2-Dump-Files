#include "PoseSearchIndexBase.h"

FPoseSearchIndexBase::FPoseSearchIndexBase() {
    this->NumPoses = 0;
    this->OverallFlags = EPoseSearchPoseFlags::None;
    this->MinCostAddend = 0.00f;
}

