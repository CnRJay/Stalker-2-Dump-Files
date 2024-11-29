#include "UCommonVisibilityWidgetBase.h"

UDEPRECATED_UCommonVisibilityWidgetBase::UDEPRECATED_UCommonVisibilityWidgetBase() {
    this->bShowForGamepad = true;
    this->bShowForMouseAndKeyboard = true;
    this->bShowForTouch = true;
    this->VisibleType = ESlateVisibility::SelfHitTestInvisible;
    this->HiddenType = ESlateVisibility::Collapsed;
}

TArray<FName> UDEPRECATED_UCommonVisibilityWidgetBase::GetRegisteredPlatforms() {
    return TArray<FName>();
}


