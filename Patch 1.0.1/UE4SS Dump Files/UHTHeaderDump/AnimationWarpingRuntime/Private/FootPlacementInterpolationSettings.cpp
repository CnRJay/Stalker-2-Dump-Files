#include "FootPlacementInterpolationSettings.h"

FFootPlacementInterpolationSettings::FFootPlacementInterpolationSettings() {
    this->UnplantLinearStiffness = 0.00f;
    this->UnplantLinearDamping = 0.00f;
    this->UnplantAngularStiffness = 0.00f;
    this->UnplantAngularDamping = 0.00f;
    this->FloorLinearStiffness = 0.00f;
    this->FloorLinearDamping = 0.00f;
    this->FloorAngularStiffness = 0.00f;
    this->FloorAngularDamping = 0.00f;
    this->bEnableFloorInterpolation = false;
}

