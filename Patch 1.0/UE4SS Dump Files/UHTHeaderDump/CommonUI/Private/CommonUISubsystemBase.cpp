#include "CommonUISubsystemBase.h"

UCommonUISubsystemBase::UCommonUISubsystemBase() {
}

FSlateBrush UCommonUISubsystemBase::GetInputActionButtonIcon(const FDataTableRowHandle& InputActionRowHandle, ECommonInputType InputType, const FName& GamepadName) const {
    return FSlateBrush{};
}


