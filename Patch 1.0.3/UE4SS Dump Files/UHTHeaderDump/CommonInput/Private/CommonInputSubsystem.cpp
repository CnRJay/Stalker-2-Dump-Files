#include "CommonInputSubsystem.h"

UCommonInputSubsystem::UCommonInputSubsystem() {
    this->NumberOfInputMethodChangesRecently = 0;
    this->LastInputMethodChangeTime = 0.00f;
    this->LastTimeInputMethodThrashingBegan = 0.00f;
    this->LastInputType = ECommonInputType::MouseAndKeyboard;
    this->CurrentInputType = ECommonInputType::MouseAndKeyboard;
    this->ActionDomainTable = NULL;
    this->bIsGamepadSimulatedClick = false;
}

bool UCommonInputSubsystem::ShouldShowInputKeys() const {
    return false;
}

void UCommonInputSubsystem::SetGamepadInputType(const FName InGamepadInputType) {
}

void UCommonInputSubsystem::SetCurrentInputType(ECommonInputType NewInputType) {
}

bool UCommonInputSubsystem::IsUsingPointerInput() const {
    return false;
}

bool UCommonInputSubsystem::IsInputMethodActive(ECommonInputType InputMethod) const {
    return false;
}

ECommonInputType UCommonInputSubsystem::GetDefaultInputType() const {
    return ECommonInputType::MouseAndKeyboard;
}

ECommonInputType UCommonInputSubsystem::GetCurrentInputType() const {
    return ECommonInputType::MouseAndKeyboard;
}

FName UCommonInputSubsystem::GetCurrentGamepadName() const {
    return NAME_None;
}


