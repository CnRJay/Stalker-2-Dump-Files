#include "MotionWarpingUpdateContext.h"

FMotionWarpingUpdateContext::FMotionWarpingUpdateContext() {
    this->PreviousPosition = 0.00f;
    this->CurrentPosition = 0.00f;
    this->Weight = 0.00f;
    this->PlayRate = 0.00f;
    this->DeltaSeconds = 0.00f;
}

