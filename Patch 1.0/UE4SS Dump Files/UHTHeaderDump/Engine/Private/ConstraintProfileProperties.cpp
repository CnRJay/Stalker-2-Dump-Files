#include "ConstraintProfileProperties.h"

FConstraintProfileProperties::FConstraintProfileProperties() {
    this->ProjectionLinearTolerance = 0.00f;
    this->ProjectionAngularTolerance = 0.00f;
    this->ProjectionLinearAlpha = 0.00f;
    this->ProjectionAngularAlpha = 0.00f;
    this->ShockPropagationAlpha = 0.00f;
    this->LinearBreakThreshold = 0.00f;
    this->LinearPlasticityThreshold = 0.00f;
    this->AngularBreakThreshold = 0.00f;
    this->AngularPlasticityThreshold = 0.00f;
    this->ContactTransferScale = 0.00f;
    this->bDisableCollision = false;
    this->bParentDominates = false;
    this->bEnableShockPropagation = false;
    this->bEnableProjection = false;
    this->bAngularBreakable = false;
    this->bAngularPlasticity = false;
    this->bLinearBreakable = false;
    this->bLinearPlasticity = false;
    this->LinearPlasticityType = CCPT_Free;
}

