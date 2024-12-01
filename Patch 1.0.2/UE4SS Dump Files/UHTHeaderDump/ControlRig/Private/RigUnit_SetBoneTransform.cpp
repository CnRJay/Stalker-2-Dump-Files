#include "RigUnit_SetBoneTransform.h"

FRigUnit_SetBoneTransform::FRigUnit_SetBoneTransform() {
    this->space = EBoneGetterSetterMode::LocalSpace;
    this->Weight = 0.00f;
    this->bPropagateToChildren = false;
}

