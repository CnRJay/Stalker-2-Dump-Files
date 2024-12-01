#include "CommonAnimatedSwitcher.h"

UCommonAnimatedSwitcher::UCommonAnimatedSwitcher() {
    this->TransitionType = ECommonSwitcherTransition::FadeOnly;
    this->TransitionCurveType = ETransitionCurve::CubicInOut;
    this->TransitionDuration = 0.40f;
}

void UCommonAnimatedSwitcher::SetDisableTransitionAnimation(bool bDisableAnimation) {
}

bool UCommonAnimatedSwitcher::IsTransitionPlaying() const {
    return false;
}

bool UCommonAnimatedSwitcher::IsCurrentlySwitching() const {
    return false;
}

bool UCommonAnimatedSwitcher::HasWidgets() const {
    return false;
}

void UCommonAnimatedSwitcher::ActivatePreviousWidget(bool bCanWrap) {
}

void UCommonAnimatedSwitcher::ActivateNextWidget(bool bCanWrap) {
}


