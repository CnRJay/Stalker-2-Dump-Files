#include "GroomCacheImportSettings.h"

FGroomCacheImportSettings::FGroomCacheImportSettings() {
    this->bImportGroomCache = false;
    this->FrameStart = 0;
    this->FrameEnd = 0;
    this->bSkipEmptyFrames = false;
    this->bImportGroomAsset = false;
}

