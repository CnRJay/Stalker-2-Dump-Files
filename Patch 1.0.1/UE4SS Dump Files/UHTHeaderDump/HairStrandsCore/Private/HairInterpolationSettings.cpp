#include "HairInterpolationSettings.h"

FHairInterpolationSettings::FHairInterpolationSettings() {
    this->bOverrideGuides = false;
    this->HairToGuideDensity = 0.00f;
    this->InterpolationQuality = EHairInterpolationQuality::Low;
    this->InterpolationDistance = EHairInterpolationWeight::Parametric;
    this->bRandomizeGuide = false;
    this->bUseUniqueGuide = false;
}

