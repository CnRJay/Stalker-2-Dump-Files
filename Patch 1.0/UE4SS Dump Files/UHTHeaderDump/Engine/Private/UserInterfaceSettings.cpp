#include "UserInterfaceSettings.h"

UUserInterfaceSettings::UUserInterfaceSettings() {
    this->RenderFocusRule = ERenderFocusRule::NavigationOnly;
    this->ApplicationScale = 2.00f;
    this->UIScaleRule = EUIScalingRule::ScaleToFit;
    this->bAllowHighDPIInGameMode = false;
    this->bLoadWidgetsOnDedicatedServer = true;
    this->CustomScalingRuleClassInstance = NULL;
    this->CustomScalingRule = NULL;
}


