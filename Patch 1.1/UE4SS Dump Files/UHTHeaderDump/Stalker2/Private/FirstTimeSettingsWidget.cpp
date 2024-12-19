#include "FirstTimeSettingsWidget.h"

UFirstTimeSettingsWidget::UFirstTimeSettingsWidget() {
    this->ColorBlindness = NULL;
    this->InterfaceLanguage = NULL;
    this->VoicingLanguage = NULL;
    this->Gamma = NULL;
    this->DynamicRange = NULL;
}

void UFirstTimeSettingsWidget::OnVoiceLanguageChanged(const int32 Value) {
}

void UFirstTimeSettingsWidget::OnInterfaceLanguageChanged(const int32 Value) {
}

void UFirstTimeSettingsWidget::OnGammaSelected(const bool InSelected) {
}

void UFirstTimeSettingsWidget::OnGammaChanged(const float Value) {
}

void UFirstTimeSettingsWidget::OnDynamicRangeChanged(const int32 Value) {
}

void UFirstTimeSettingsWidget::OnColorBlindnessChanged(const int32 Value) {
}


