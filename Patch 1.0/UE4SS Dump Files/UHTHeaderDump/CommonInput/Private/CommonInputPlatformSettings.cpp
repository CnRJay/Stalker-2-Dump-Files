#include "CommonInputPlatformSettings.h"

UCommonInputPlatformSettings::UCommonInputPlatformSettings() {
    this->DefaultInputType = ECommonInputType::Gamepad;
    this->bSupportsMouseAndKeyboard = false;
    this->bSupportsTouch = false;
    this->bSupportsGamepad = true;
    this->DefaultGamepadName = TEXT("Generic");
    this->bCanChangeGamepadType = true;
}


