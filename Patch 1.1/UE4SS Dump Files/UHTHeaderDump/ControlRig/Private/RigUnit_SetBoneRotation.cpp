#include "RigUnit_SetBoneRotation.h"

FRigUnit_SetBoneRotation::FRigUnit_SetBoneRotation() {
    this->space = EBoneGetterSetterMode::LocalSpace;
    this->Weight = 0.00f;
    this->bPropagateToChildren = false;
}

