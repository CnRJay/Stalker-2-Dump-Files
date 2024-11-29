#include "DeprecatedDataLayerInstance.h"

UDeprecatedDataLayerInstance::UDeprecatedDataLayerInstance() {
    this->DataLayerType = EDataLayerType::Editor;
    this->bIsMandatory = false;
    this->bDataLayerBlockOnSlowStreaming = true;
}


