#include "CommonAnalogCursorSettings.h"

FCommonAnalogCursorSettings::FCommonAnalogCursorSettings() {
    this->PreprocessorPriority = 0;
    this->bEnableCursorAcceleration = false;
    this->CursorAcceleration = 0.00f;
    this->CursorMaxSpeed = 0.00f;
    this->CursorDeadZone = 0.00f;
    this->HoverSlowdownFactor = 0.00f;
    this->ScrollDeadZone = 0.00f;
    this->ScrollUpdatePeriod = 0.00f;
    this->ScrollMultiplier = 0.00f;
}

