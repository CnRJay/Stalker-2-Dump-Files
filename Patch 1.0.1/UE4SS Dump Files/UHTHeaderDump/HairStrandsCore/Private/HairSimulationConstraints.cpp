#include "HairSimulationConstraints.h"

FHairSimulationConstraints::FHairSimulationConstraints() {
    this->BendDamping = 0.00f;
    this->BendStiffness = 0.00f;
    this->StretchDamping = 0.00f;
    this->StretchStiffness = 0.00f;
    this->StaticFriction = 0.00f;
    this->KineticFriction = 0.00f;
    this->StrandsViscosity = 0.00f;
    this->CollisionRadius = 0.00f;
}

