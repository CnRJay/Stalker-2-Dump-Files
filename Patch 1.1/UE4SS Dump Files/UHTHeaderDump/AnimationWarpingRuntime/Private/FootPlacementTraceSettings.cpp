#include "FootPlacementTraceSettings.h"

FFootPlacementTraceSettings::FFootPlacementTraceSettings() {
    this->StartOffset = 0.00f;
    this->EndOffset = 0.00f;
    this->SweepRadius = 0.00f;
    this->bDisableComplexTrace = false;
    this->ComplexTraceChannel = TraceTypeQuery1;
    this->MaxGroundPenetration = 0.00f;
    this->SimpleTraceChannel = TraceTypeQuery1;
    this->bEnabled = false;
}

