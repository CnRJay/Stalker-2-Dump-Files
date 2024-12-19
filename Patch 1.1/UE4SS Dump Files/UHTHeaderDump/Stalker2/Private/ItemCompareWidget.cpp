#include "ItemCompareWidget.h"

UItemCompareWidget::UItemCompareWidget() {
    this->PrimaryItemInfo = NULL;
    this->SecondaryItemInfo = NULL;
    this->ItemEquippedWidget = NULL;
    this->ToggleAnimation = NULL;
    this->AnimationPlayRate = 2.50f;
    this->PrimaryWeaponSID = TEXT("sid_misc_controlsSettings_equipment_mainWeapon_MLI");
    this->SecondaryWeaponSID = TEXT("sid_misc_controlsSettings_equipment_secondaryWeapon_MLI");
}

void UItemCompareWidget::SetItemEquippedData() {
}


