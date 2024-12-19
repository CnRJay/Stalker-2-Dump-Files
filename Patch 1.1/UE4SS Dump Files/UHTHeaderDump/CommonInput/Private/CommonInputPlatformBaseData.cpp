#include "CommonInputPlatformBaseData.h"

FCommonInputPlatformBaseData::FCommonInputPlatformBaseData() {
    this->DefaultInputType = ECommonInputType::MouseAndKeyboard;
    this->bSupportsMouseAndKeyboard = false;
    this->bSupportsGamepad = false;
    this->bCanChangeGamepadType = false;
    this->bSupportsTouch = false;
}

