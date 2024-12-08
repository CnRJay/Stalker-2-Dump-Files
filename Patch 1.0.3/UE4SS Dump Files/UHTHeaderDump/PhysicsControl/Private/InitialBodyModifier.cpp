#include "InitialBodyModifier.h"

FInitialBodyModifier::FInitialBodyModifier() {
    this->Actor = NULL;
    this->MovementType = EPhysicsMovementType::Static;
    this->GravityMultiplier = 0.00f;
    this->bUseSkeletalAnimation = false;
}

