#include "HairGroupDesc.h"

FHairGroupDesc::FHairGroupDesc() {
    this->HairLength = 0.00f;
    this->HairWidth = 0.00f;
    this->HairWidth_Override = false;
    this->HairRootScale = 0.00f;
    this->HairRootScale_Override = false;
    this->HairTipScale = 0.00f;
    this->HairTipScale_Override = false;
    this->HairShadowDensity = 0.00f;
    this->HairShadowDensity_Override = false;
    this->HairRaytracingRadiusScale = 0.00f;
    this->HairRaytracingRadiusScale_Override = false;
    this->bUseHairRaytracingGeometry = false;
    this->bUseHairRaytracingGeometry_Override = false;
    this->LODBias = 0.00f;
    this->bUseStableRasterization = false;
    this->bUseStableRasterization_Override = false;
    this->bScatterSceneLighting = false;
    this->bScatterSceneLighting_Override = false;
    this->bSupportVoxelization = false;
    this->bSupportVoxelization_Override = false;
    this->HairLengthScale = 0.00f;
    this->HairLengthScale_Override = false;
}

