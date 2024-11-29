#include "RainWetnessSettings.h"

URainWetnessSettings::URainWetnessSettings() {
    this->bAllow = false;
    this->FadeStartDistanceFraction = 0.85f;
    this->MinAngleForDryness = 32.00f;
    this->MaxAngleForDryness = 54.00f;
    this->MinWetnessFactorForVerticalSurface = 0.75f;
    this->BaseColorDarkeningPorous = 0.40f;
    this->BaseColorDarkeningGlossy = 0.80f;
    this->BaseColorDarkeningFoliage = 0.20f;
    this->WetRoughnessPorous = 0.50f;
    this->WetRoughnessGlossy = 0.27f;
    this->WetSpecular = 0.50f;
    this->NormalFlatteningPorous = 0.00f;
    this->NormalFlatteningGlossy = 0.00f;
    this->WetRoughnessForFoliage = 0.50f;
    this->WetSpecularForFoliage = 0.50f;
    this->WetnessOverride = -1.00f;
    this->bRainShadow = true;
    this->RainShadowCMsPerTexel = 16;
    this->RainShadowFarPlane = 12000.00f;
    this->RainShadowCaptureHeight = 8000.00f;
    this->RainShadowDepthBias = 8.00f;
    this->RainShadowBlurRadius = 40.00f;
    this->RainShadowBlurFadeStartDistanceFraction = 0.80f;
    this->RainShadowBlurMaxDistance = 5000.00f;
    this->RainShadowFilteringQuality = 2;
    this->RainRipplesTiling = 0.01f;
    this->RainRipplesSpeed = 1.00f;
    this->RainRipplesMaxRoughness = 1.00f;
    this->RainRipplesMinNormalFactor = 0.10f;
    this->bRainPuddles = true;
    this->RainPuddlesTiling = 0.00f;
    this->RainPuddlesRemappedWetness = 0.50f;
    this->RainPuddlesWetRoughness = 0.50f;
    this->RainPuddlesBaseColorStrength = 1.00f;
    this->RainPuddlesNormalFlattening = 0.00f;
    this->WetSpecular_Puddles = 0.33f;
    this->RainPuddlesSmoothnessBaseColor = 0.30f;
    this->RainPuddlesHeightMaxBaseColor = 0.50f;
    this->RainPuddlesMaxAngle = 15.00f;
    this->RainPuddlesRoughnessMaskRadius = 1.50f;
    this->RainPuddlesNormalMaskRadius = 1.20f;
    this->bRainSpots = true;
    this->RainSpotsTiling = 0.00f;
    this->RainSpotsRemappedWetness = 0.50f;
    this->RainSpotsBaseColorDarkeningPorous = 0.40f;
    this->RainSpotsBaseColorDarkeningGlossy = 0.80f;
    this->RainSpotsWetRoughness = 0.50f;
    this->RainSpotsWetSpecular = 0.33f;
    this->RainSpotsSmoothnessBaseColor = 0.30f;
    this->RainSpotsHeightMaxBaseColor = 0.50f;
    this->RainSpotsRoughnessMaskRadius = 1.50f;
}


