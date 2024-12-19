#include "HairCollisionConstraint.h"

FHairCollisionConstraint::FHairCollisionConstraint() {
    this->SolveCollision = false;
    this->ProjectCollision = false;
    this->StaticFriction = 0.00f;
    this->KineticFriction = 0.00f;
    this->StrandsViscosity = 0.00f;
    this->CollisionRadius = 0.00f;
}

