#include "RawInputSettings.h"

URawInputSettings::URawInputSettings() {
    this->DeviceConfigurations.AddDefaulted(1);
    this->bRegisterDefaultDevice = true;
}


