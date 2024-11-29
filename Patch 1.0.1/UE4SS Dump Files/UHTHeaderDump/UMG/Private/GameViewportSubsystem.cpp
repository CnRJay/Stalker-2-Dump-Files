#include "GameViewportSubsystem.h"

UGameViewportSubsystem::UGameViewportSubsystem() {
}

FGameViewportWidgetSlot UGameViewportSubsystem::SetWidgetSlotPosition(FGameViewportWidgetSlot Slot, const UWidget* Widget, FVector2D position, bool bRemoveDPIScale) {
    return FGameViewportWidgetSlot{};
}

FGameViewportWidgetSlot UGameViewportSubsystem::SetWidgetSlotDesiredSize(FGameViewportWidgetSlot Slot, FVector2D size) {
    return FGameViewportWidgetSlot{};
}

void UGameViewportSubsystem::SetWidgetSlot(UWidget* Widget, FGameViewportWidgetSlot Slot) {
}

void UGameViewportSubsystem::RemoveWidget(UWidget* Widget) {
}

bool UGameViewportSubsystem::IsWidgetAdded(const UWidget* Widget) const {
    return false;
}

FGameViewportWidgetSlot UGameViewportSubsystem::GetWidgetSlot(const UWidget* Widget) const {
    return FGameViewportWidgetSlot{};
}

void UGameViewportSubsystem::AddWidgetForPlayer(UWidget* Widget, ULocalPlayer* Player, FGameViewportWidgetSlot Slot) {
}

void UGameViewportSubsystem::AddWidget(UWidget* Widget, FGameViewportWidgetSlot Slot) {
}


