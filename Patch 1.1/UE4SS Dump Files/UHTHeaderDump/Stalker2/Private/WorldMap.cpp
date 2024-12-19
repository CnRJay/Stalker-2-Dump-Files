#include "WorldMap.h"

UWorldMap::UWorldMap() {
    this->WorldMapSizeBox = NULL;
    this->MarkerStorage = NULL;
    this->ZoneStorage = NULL;
    this->MapContainer = NULL;
    this->PlayerPosition = NULL;
    this->AddWorldAngle = 0.00f;
    this->CurrHoverMarker = NULL;
}

void UWorldMap::MarkerHover(bool bInHovered, UWorldMapMarker* InHoverMarkerWidget) {
}

void UWorldMap::MarkerClick(const UWorldMapMarker* HoverMarkerWidget) {
}


