#include "WorldMapMarker.h"

UWorldMapMarker::UWorldMapMarker() {
    this->bIsScale = false;
    this->ZoneWidgetClass = NULL;
    this->MarkerIcon = NULL;
    this->MarkerSizeBox = NULL;
    this->ClickZone = NULL;
    this->MarkerSize = 48.00f;
    this->bEnableHoverScale = true;
    this->HoverScaleValue = 1.10f;
    this->bEnableMarkerClick = true;
    this->ParentCanvasSlot = NULL;
    this->ZoneWidget = NULL;
    this->ZoneCanvas = NULL;
}

void UWorldMapMarker::OnMouseUnhover() {
}

void UWorldMapMarker::OnMouseHover() {
}

void UWorldMapMarker::MarkerClick() {
}


