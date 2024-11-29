#include "FootPlacementTraceSettings.h"

FFootPlacementTraceSettings::FFootPlacementTraceSettings() {
    this->StartOffset = 0.00f;
    this->EndOffset = 0.00f;
    this->SweepRadius = 0.00f;
    this->ComplexTraceChannel = TraceTypeQuery1;
    this->MaxGroundPenetration = 0.00f;
    this->SimpleCollisionInfluence = 0.00f;
    this->MaxHeightGrowThreshhold = 0.00f;
    this->MaxHeightGrowInterpolation = 0.00f;
    this->SimpleTraceChannel = TraceTypeQuery1;
    this->bEnabled = false;
}

