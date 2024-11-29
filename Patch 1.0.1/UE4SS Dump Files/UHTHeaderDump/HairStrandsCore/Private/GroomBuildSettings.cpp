#include "GroomBuildSettings.h"

FGroomBuildSettings::FGroomBuildSettings() {
    this->bOverrideGuides = false;
    this->HairToGuideDensity = 0.00f;
    this->InterpolationQuality = EGroomInterpolationQuality::Low;
    this->InterpolationDistance = EGroomInterpolationWeight::Parametric;
    this->bRandomizeGuide = false;
    this->bUseUniqueGuide = false;
}

