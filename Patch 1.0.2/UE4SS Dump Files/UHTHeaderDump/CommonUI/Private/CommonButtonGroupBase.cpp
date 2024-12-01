#include "CommonButtonGroupBase.h"

UCommonButtonGroupBase::UCommonButtonGroupBase() {
    this->bSelectionRequired = false;
}

void UCommonButtonGroupBase::SetSelectionRequired(bool bRequireSelection) {
}

void UCommonButtonGroupBase::SelectPreviousButton(bool bAllowWrap) {
}

void UCommonButtonGroupBase::SelectNextButton(bool bAllowWrap) {
}

void UCommonButtonGroupBase::SelectButtonAtIndex(int32 ButtonIndex, const bool bAllowSound) {
}

void UCommonButtonGroupBase::OnSelectionStateChangedBase(UCommonButtonBase* BaseButton, bool bIsSelected) {
}

void UCommonButtonGroupBase::OnHandleButtonBaseDoubleClicked(UCommonButtonBase* BaseButton) {
}

void UCommonButtonGroupBase::OnHandleButtonBaseClicked(UCommonButtonBase* BaseButton) {
}

void UCommonButtonGroupBase::OnButtonBaseUnhovered(UCommonButtonBase* BaseButton) {
}

void UCommonButtonGroupBase::OnButtonBaseHovered(UCommonButtonBase* BaseButton) {
}

bool UCommonButtonGroupBase::HasAnyButtons() const {
    return false;
}

int32 UCommonButtonGroupBase::GetSelectedButtonIndex() const {
    return 0;
}

UCommonButtonBase* UCommonButtonGroupBase::GetSelectedButtonBase() const {
    return NULL;
}

int32 UCommonButtonGroupBase::GetHoveredButtonIndex() const {
    return 0;
}

int32 UCommonButtonGroupBase::GetButtonCount() const {
    return 0;
}

UCommonButtonBase* UCommonButtonGroupBase::GetButtonBaseAtIndex(int32 Index) const {
    return NULL;
}

int32 UCommonButtonGroupBase::FindButtonIndex(const UCommonButtonBase* ButtonToFind) const {
    return 0;
}

void UCommonButtonGroupBase::DeselectAll() {
}


