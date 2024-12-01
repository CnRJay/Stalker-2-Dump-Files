#include "InitialCharacterControls.h"

FInitialCharacterControls::FInitialCharacterControls() {
    this->CharacterActor = NULL;
    this->bEnableWorldSpaceControls = false;
    this->bEnableParentSpaceControls = false;
    this->PhysicsMovementType = EPhysicsMovementType::Static;
}

