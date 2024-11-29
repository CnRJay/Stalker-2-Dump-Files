#include "TileBitmapAdapter.h"

UTileBitmapAdapter::UTileBitmapAdapter() {
    this->TileBitmapSize = 0;
    this->ActualTileBitmapSize = 0;
    this->bValid = false;
    this->LandscapeBitmap = NULL;
    this->bLoadTileBitmapsFromLandscapeBitmap = false;
    this->bLoadTileBitmapsFromFolder = false;
    this->bMergeTileBitmapsToLandscapeBitmap = false;
    this->bValidateTileBitmaps = false;
}


