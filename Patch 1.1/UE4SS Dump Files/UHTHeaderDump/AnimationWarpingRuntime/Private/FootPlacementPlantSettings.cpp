#include "FootPlacementPlantSettings.h"

FFootPlacementPlantSettings::FFootPlacementPlantSettings() {
    this->SpeedThreshold = 0.00f;
    this->DistanceToGround = 0.00f;
    this->LockType = EFootPlacementLockType::Unlocked;
    this->UnplantRadius = 0.00f;
    this->ReplantRadiusRatio = 0.00f;
    this->UnplantAngle = 0.00f;
    this->ReplantAngleRatio = 0.00f;
    this->MaxExtensionRatio = 0.00f;
    this->MinExtensionRatio = 0.00f;
    this->SeparatingDistance = 0.00f;
    this->UnalignmentSpeedThreshold = 0.00f;
    this->AnkleTwistReduction = 0.00f;
    this->bReconstructWorldPlantFromVelocity = false;
    this->bAdjustHeelBeforePlanting = false;
}

