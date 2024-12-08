#include "SlateBrush.h"

FSlateBrush::FSlateBrush() {
    this->bIsDynamicallyLoaded = false;
    this->bHasUObject = false;
    this->DrawAs = ESlateBrushDrawType::NoDrawType;
    this->Tiling = ESlateBrushTileType::NoTile;
    this->bOverrideTileSize = false;
    this->HorizontalTileSize = 0.00f;
    this->VerticalTileSize = 0.00f;
    this->Mirroring = ESlateBrushMirrorType::NoMirror;
    this->ImageType = ESlateBrushImageType::NoImage;
    this->ResourceObject = NULL;
}

