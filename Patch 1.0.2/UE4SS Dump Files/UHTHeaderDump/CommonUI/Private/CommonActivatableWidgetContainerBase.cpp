#include "CommonActivatableWidgetContainerBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "Templates/SubclassOf.h"

UCommonActivatableWidgetContainerBase::UCommonActivatableWidgetContainerBase() {
    this->Visibility = ESlateVisibility::Collapsed;
    this->TransitionType = ECommonSwitcherTransition::FadeOnly;
    this->TransitionCurveType = ETransitionCurve::Linear;
    this->TransitionDuration = 0.40f;
    this->DisplayedWidget = NULL;
}

void UCommonActivatableWidgetContainerBase::SetTransitionDuration(float Duration) {
}

void UCommonActivatableWidgetContainerBase::RemoveWidget(UCommonActivatableWidget* WidgetToRemove) {
}

float UCommonActivatableWidgetContainerBase::GetTransitionDuration() const {
    return 0.0f;
}

UCommonActivatableWidget* UCommonActivatableWidgetContainerBase::GetActiveWidget() const {
    return NULL;
}

void UCommonActivatableWidgetContainerBase::ClearWidgets() {
}

UCommonActivatableWidget* UCommonActivatableWidgetContainerBase::BP_AddWidget(TSubclassOf<UCommonActivatableWidget> ActivatableWidgetClass) {
    return NULL;
}


