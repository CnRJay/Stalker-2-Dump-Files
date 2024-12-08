#include "MotionMatchingState.h"

FMotionMatchingState::FMotionMatchingState() {
    this->ElapsedPoseJumpTime = 0.00f;
    this->WantedPlayRate = 0.00f;
    this->Flags = EMotionMatchingFlags::None;
}

