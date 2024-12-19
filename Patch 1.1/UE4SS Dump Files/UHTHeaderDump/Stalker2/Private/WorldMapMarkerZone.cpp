#include "WorldMapMarkerZone.h"

UWorldMapMarkerZone::UWorldMapMarkerZone() {
    this->ZoneMaterial = NULL;
    this->SizeBox = NULL;
    this->MaterialScaleFieldName = TEXT("RadiusPixelSize");
    this->MaterialColorFieldName = TEXT("Color");
    this->ParentCanvasSlot = NULL;
    this->ZoneCanvas = NULL;
}


