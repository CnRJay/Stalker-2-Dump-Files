#include "RuntimeVirtualTexture.h"

URuntimeVirtualTexture::URuntimeVirtualTexture() {
    this->TileCount = 8;
    this->TileSize = 2;
    this->TileBorderSize = 2;
    this->MaterialType = ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular;
    this->bCompressTextures = true;
    this->bUseLowQualityCompression = false;
    this->bClearTextures = true;
    this->bSinglePhysicalSpace = true;
    this->bPrivateSpace = true;
    this->bAdaptive = false;
    this->bContinuousUpdate = false;
    this->RemoveLowMips = 0;
    this->LODGroup = TEXTUREGROUP_World;
    this->size = -1;
    this->StreamingTexture = NULL;
}

int32 URuntimeVirtualTexture::GetTileSize() const {
    return 0;
}

int32 URuntimeVirtualTexture::GetTileCount() const {
    return 0;
}

int32 URuntimeVirtualTexture::GetTileBorderSize() const {
    return 0;
}

int32 URuntimeVirtualTexture::GetSize() const {
    return 0;
}

int32 URuntimeVirtualTexture::GetPageTableSize() const {
    return 0;
}


