#include "ModioPopupContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "Templates/SubclassOf.h"

UModioPopupContainer::UModioPopupContainer() : UUserWidget(FObjectInitializer::Get()) {
    this->Visibility = ESlateVisibility::Collapsed;
}

UModioPopupBase* UModioPopupContainer::PushPopup_Implementation(TSubclassOf<UModioPopupBase> PopupClass) {
    return NULL;
}

UModioPopupBase* UModioPopupContainer::PopPopup(TSubclassOf<UModioPopupBase> PopupClass) {
    return NULL;
}


