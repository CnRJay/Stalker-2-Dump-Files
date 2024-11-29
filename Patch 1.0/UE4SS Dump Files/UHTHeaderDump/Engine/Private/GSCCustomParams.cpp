#include "GSCCustomParams.h"

FGSCCustomParams::FGSCCustomParams() {
    this->bOverrideParamSRGB = false;
    this->SRGB = false;
    this->bOverrideParamNewMipFilter = false;
    this->bUseNewMipFilter = false;
    this->bOverrideParamVirtualTextureStreaming = false;
    this->VirtualTextureStreaming = false;
    this->bOverrideParamCompressionSettings = false;
    this->CompressionSettings = TC_Default;
}

