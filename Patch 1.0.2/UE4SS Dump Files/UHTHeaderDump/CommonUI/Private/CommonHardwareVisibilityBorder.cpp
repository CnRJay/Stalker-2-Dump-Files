#include "CommonHardwareVisibilityBorder.h"

UCommonHardwareVisibilityBorder::UCommonHardwareVisibilityBorder() {
    this->VisibleType = ESlateVisibility::SelfHitTestInvisible;
    this->HiddenType = ESlateVisibility::Collapsed;
}


