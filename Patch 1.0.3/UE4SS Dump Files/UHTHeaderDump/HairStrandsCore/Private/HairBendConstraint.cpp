#include "HairBendConstraint.h"

FHairBendConstraint::FHairBendConstraint() {
    this->SolveBend = false;
    this->ProjectBend = false;
    this->BendDamping = 0.00f;
    this->BendStiffness = 0.00f;
}

