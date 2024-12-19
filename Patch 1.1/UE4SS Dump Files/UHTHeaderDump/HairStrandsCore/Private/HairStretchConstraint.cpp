#include "HairStretchConstraint.h"

FHairStretchConstraint::FHairStretchConstraint() {
    this->SolveStretch = false;
    this->ProjectStretch = false;
    this->StretchDamping = 0.00f;
    this->StretchStiffness = 0.00f;
}

