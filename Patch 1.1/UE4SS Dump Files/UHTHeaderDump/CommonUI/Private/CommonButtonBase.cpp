#include "CommonButtonBase.h"
#include "Templates/SubclassOf.h"

UCommonButtonBase::UCommonButtonBase() {
    this->bIsFocusable = true;
    this->MinWidth = 0;
    this->MinHeight = 0;
    this->Style = NULL;
    this->bHideInputAction = false;
    this->bApplyAlphaOnDisable = true;
    this->bLocked = false;
    this->bSelectable = false;
    this->bShouldSelectUponReceivingFocus = false;
    this->bInteractableWhenSelected = false;
    this->bToggleable = false;
    this->bTriggerClickedAfterSelection = false;
    this->bDisplayInputActionWhenNotInteractable = true;
    this->bHideInputActionWithKeyboard = false;
    this->bShouldUseFallbackDefaultInputAction = true;
    this->ClickMethod = EButtonClickMethod::DownAndUp;
    this->TouchMethod = EButtonTouchMethod::DownAndUp;
    this->PressMethod = EButtonPressMethod::DownAndUp;
    this->InputPriority = 0;
    this->bIsPersistentBinding = false;
    this->InputModeOverride = ECommonInputMode::Menu;
    this->SingleMaterialStyleMID = NULL;
    this->bStopDoubleClickPropagation = false;
    this->InputActionWidget = NULL;
}

void UCommonButtonBase::StopDoubleClickPropagation() {
}

void UCommonButtonBase::SetTriggeringInputAction(const FDataTableRowHandle& InputActionRow) {
}

void UCommonButtonBase::SetTriggeredInputAction(const FDataTableRowHandle& InputActionRow) {
}

void UCommonButtonBase::SetTouchMethod(TEnumAsByte<EButtonTouchMethod::Type> InTouchMethod) {
}

void UCommonButtonBase::SetStyle(TSubclassOf<UCommonButtonStyle> InStyle) {
}

void UCommonButtonBase::SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction) {
}

void UCommonButtonBase::SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus) {
}

void UCommonButtonBase::SetSelectedPressedSoundOverride(USoundBase* Sound) {
}

void UCommonButtonBase::SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast) {
}

void UCommonButtonBase::SetSelectedHoveredSoundOverride(USoundBase* Sound) {
}

void UCommonButtonBase::SetPressMethod(TEnumAsByte<EButtonPressMethod::Type> InPressMethod) {
}

void UCommonButtonBase::SetPressedSoundOverride(USoundBase* Sound) {
}

void UCommonButtonBase::SetMinDimensions(int32 InMinWidth, int32 InMinHeight) {
}

void UCommonButtonBase::SetLockedPressedSoundOverride(USoundBase* Sound) {
}

void UCommonButtonBase::SetLockedHoveredSoundOverride(USoundBase* Sound) {
}

void UCommonButtonBase::SetIsToggleable(bool bInIsToggleable) {
}

void UCommonButtonBase::SetIsSelected(bool InSelected, bool bGiveClickFeedback) {
}

void UCommonButtonBase::SetIsSelectable(bool bInIsSelectable) {
}

void UCommonButtonBase::SetIsLocked(bool bInIsLocked) {
}

void UCommonButtonBase::SetIsInteractionEnabled(bool bInIsInteractionEnabled) {
}

void UCommonButtonBase::SetIsInteractableWhenSelected(bool bInInteractableWhenSelected) {
}

void UCommonButtonBase::SetIsFocusable(bool bInIsFocusable) {
}

void UCommonButtonBase::SetInputActionProgressMaterial(const FSlateBrush& InProgressMaterialBrush, const FName& InProgressMaterialParam) {
}

void UCommonButtonBase::SetHoveredSoundOverride(USoundBase* Sound) {
}

void UCommonButtonBase::SetHideInputAction(bool bInHideInputAction) {
}

void UCommonButtonBase::SetClickMethod(TEnumAsByte<EButtonClickMethod::Type> InClickMethod) {
}



void UCommonButtonBase::OnInputMethodChanged(ECommonInputType CurrentInputType) {
}




void UCommonButtonBase::NativeOnActionProgress(float HeldPercent) {
}

void UCommonButtonBase::NativeOnActionComplete() {
}

bool UCommonButtonBase::IsPressed() const {
    return false;
}

bool UCommonButtonBase::IsInteractionEnabled() const {
    return false;
}

void UCommonButtonBase::HandleTriggeringActionCommited(bool& bPassThrough) {
}

void UCommonButtonBase::HandleFocusReceived() {
}

void UCommonButtonBase::HandleFocusLost() {
}

void UCommonButtonBase::HandleButtonReleased() {
}

void UCommonButtonBase::HandleButtonPressed() {
}

void UCommonButtonBase::HandleButtonClicked() {
}

UCommonButtonStyle* UCommonButtonBase::GetStyle() const {
    return NULL;
}

UMaterialInstanceDynamic* UCommonButtonBase::GetSingleMaterialStyleMID() const {
    return NULL;
}

bool UCommonButtonBase::GetShouldSelectUponReceivingFocus() const {
    return false;
}

bool UCommonButtonBase::GetSelected() const {
    return false;
}

bool UCommonButtonBase::GetLocked() const {
    return false;
}

bool UCommonButtonBase::GetIsFocusable() const {
    return false;
}

bool UCommonButtonBase::GetInputAction(FDataTableRowHandle& InputActionRow) const {
    return false;
}

TSubclassOf<UCommonTextStyle> UCommonButtonBase::GetCurrentTextStyleClass() const {
    return NULL;
}

UCommonTextStyle* UCommonButtonBase::GetCurrentTextStyle() const {
    return NULL;
}

void UCommonButtonBase::GetCurrentCustomPadding(FMargin& OutCustomPadding) const {
}

void UCommonButtonBase::GetCurrentButtonPadding(FMargin& OutButtonPadding) const {
}

void UCommonButtonBase::DisableButtonWithReason(const FText& DisabledReason) {
}

void UCommonButtonBase::ClearSelection() {
}


















