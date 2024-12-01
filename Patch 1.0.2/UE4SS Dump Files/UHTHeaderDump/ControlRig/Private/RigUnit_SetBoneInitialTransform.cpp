#include "RigUnit_SetBoneInitialTransform.h"

FRigUnit_SetBoneInitialTransform::FRigUnit_SetBoneInitialTransform() {
    this->space = EBoneGetterSetterMode::LocalSpace;
    this->bPropagateToChildren = false;
}

