#include "RawInputSettings.h"

URawInputSettings::URawInputSettings() {
    this->DeviceConfigurations.AddDefaulted(6);
    this->bRegisterDefaultDevice = true;
}


