#include "RootMotionModifier.h"

URootMotionModifier::URootMotionModifier() {
    this->StartTime = 0.00f;
    this->EndTime = 0.00f;
    this->PreviousPosition = 0.00f;
    this->CurrentPosition = 0.00f;
    this->Weight = 0.00f;
    this->ActualStartTime = 0.00f;
    this->State = ERootMotionModifierState::Waiting;
}


