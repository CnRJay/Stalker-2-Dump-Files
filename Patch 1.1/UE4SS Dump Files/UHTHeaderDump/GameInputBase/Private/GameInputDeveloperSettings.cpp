#include "GameInputDeveloperSettings.h"

UGameInputDeveloperSettings::UGameInputDeveloperSettings() {
    this->DeviceConfigurations.AddDefaulted(30);
    this->bDoNotProcessDuplicateCapabilitiesForSingleUser = true;
}


