#include "CommonVisibilitySwitcher.h"

UCommonVisibilitySwitcher::UCommonVisibilitySwitcher() {
    this->ShownVisibility = ESlateVisibility::SelfHitTestInvisible;
    this->ActiveWidgetIndex = 0;
    this->bAutoActivateSlot = true;
    this->bActivateFirstSlotOnAdding = false;
}

void UCommonVisibilitySwitcher::SetActiveWidgetIndex(int32 Index) {
}

void UCommonVisibilitySwitcher::SetActiveWidget(const UWidget* Widget) {
}

void UCommonVisibilitySwitcher::IncrementActiveWidgetIndex(bool bAllowWrapping) {
}

int32 UCommonVisibilitySwitcher::GetActiveWidgetIndex() const {
    return 0;
}

UWidget* UCommonVisibilitySwitcher::GetActiveWidget() const {
    return NULL;
}

void UCommonVisibilitySwitcher::DecrementActiveWidgetIndex(bool bAllowWrapping) {
}

void UCommonVisibilitySwitcher::DeactivateVisibleSlot() {
}

void UCommonVisibilitySwitcher::ActivateVisibleSlot() {
}


