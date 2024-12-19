#include "ModioSettings.h"

UModioSettings::UModioSettings() {
    this->GameId = 5761;
    this->ApiKey = TEXT("ee869e0dc0d88b8bd8b7c1f111fbd06a");
    this->Environment = EModioEnvironment::Live;
    this->LogLevel = EModioLogLevel::Info;
    this->DefaultPortal = EModioPortal::None;
    this->bUseBackgroundThread = false;
}


