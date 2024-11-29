#include "CommonTabListWidgetBase.h"
#include "Templates/SubclassOf.h"

UCommonTabListWidgetBase::UCommonTabListWidgetBase() {
    this->bAutoListenForInput = false;
    this->bDeferRebuildingTabList = false;
    this->TabButtonGroup = NULL;
}

void UCommonTabListWidgetBase::SetTabVisibility(FName TabNameID, ESlateVisibility NewVisibility) {
}

void UCommonTabListWidgetBase::SetTabInteractionEnabled(FName TabNameID, bool bEnable) {
}

void UCommonTabListWidgetBase::SetTabEnabled(FName TabNameID, bool bEnable) {
}

void UCommonTabListWidgetBase::SetListeningForInput(bool bShouldListen) {
}

void UCommonTabListWidgetBase::SetLinkedSwitcher(UCommonAnimatedSwitcher* CommonSwitcher) {
}

bool UCommonTabListWidgetBase::SelectTabByID(FName TabNameID, bool bSuppressClickFeedback) {
    return false;
}

bool UCommonTabListWidgetBase::RemoveTab(FName TabNameID) {
    return false;
}

void UCommonTabListWidgetBase::RemoveAllTabs() {
}

bool UCommonTabListWidgetBase::RegisterTab(FName TabNameID, TSubclassOf<UCommonButtonBase> ButtonWidgetType, UWidget* ContentWidget, const int32 TabIndex) {
    return false;
}

void UCommonTabListWidgetBase::HandleTabRemoval_Implementation(FName TabNameID, UCommonButtonBase* TabButton) {
}

void UCommonTabListWidgetBase::HandleTabCreation_Implementation(FName TabNameID, UCommonButtonBase* TabButton) {
}

void UCommonTabListWidgetBase::HandleTabButtonSelected(UCommonButtonBase* SelectedTabButton, int32 ButtonIndex) {
}

void UCommonTabListWidgetBase::HandlePreviousTabInputAction(bool& bPassThrough) {
}



void UCommonTabListWidgetBase::HandleNextTabInputAction(bool& bPassThrough) {
}

FName UCommonTabListWidgetBase::GetTabIdAtIndex(int32 Index) const {
    return NAME_None;
}

int32 UCommonTabListWidgetBase::GetTabCount() const {
    return 0;
}

UCommonButtonBase* UCommonTabListWidgetBase::GetTabButtonBaseByID(FName TabNameID) {
    return NULL;
}

FName UCommonTabListWidgetBase::GetSelectedTabId() const {
    return NAME_None;
}

UCommonAnimatedSwitcher* UCommonTabListWidgetBase::GetLinkedSwitcher() const {
    return NULL;
}

FName UCommonTabListWidgetBase::GetActiveTab() const {
    return NAME_None;
}

void UCommonTabListWidgetBase::DisableTabWithReason(FName TabNameID, const FText& Reason) {
}


