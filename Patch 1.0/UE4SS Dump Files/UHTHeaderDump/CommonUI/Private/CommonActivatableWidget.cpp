#include "CommonActivatableWidget.h"

UCommonActivatableWidget::UCommonActivatableWidget() {
    this->bIsBackHandler = false;
    this->bIsBackActionDisplayedInActionBar = false;
    this->bAutoActivate = false;
    this->bSupportsActivationFocus = true;
    this->bIsModal = false;
    this->bAutoRestoreFocus = false;
    this->bOverrideActionDomain = false;
    this->bIsActive = false;
    this->bSetVisibilityOnActivated = false;
    this->ActivatedVisibility = ESlateVisibility::SelfHitTestInvisible;
    this->bSetVisibilityOnDeactivated = false;
    this->DeactivatedVisibility = ESlateVisibility::Collapsed;
}

void UCommonActivatableWidget::SetBindVisibilities(ESlateVisibility OnActivatedVisibility, ESlateVisibility OnDeactivatedVisibility, bool bInAllActive) {
}

bool UCommonActivatableWidget::IsActivated() const {
    return false;
}

UWidget* UCommonActivatableWidget::GetDesiredFocusTarget() const {
    return NULL;
}

void UCommonActivatableWidget::DeactivateWidget() {
}





void UCommonActivatableWidget::BindVisibilityToActivation(UCommonActivatableWidget* ActivatableWidget) {
}

void UCommonActivatableWidget::ActivateWidget() {
}


