#include "GroomAnimationInfo.h"

FGroomAnimationInfo::FGroomAnimationInfo() {
    this->NumFrames = 0;
    this->SecondsPerFrame = 0.00f;
    this->Duration = 0.00f;
    this->StartTime = 0.00f;
    this->EndTime = 0.00f;
    this->StartFrame = 0;
    this->EndFrame = 0;
    this->Attributes = EGroomCacheAttributes::None;
}

