#include "RigUnit_GetTransform.h"

FRigUnit_GetTransform::FRigUnit_GetTransform() {
    this->space = EBoneGetterSetterMode::LocalSpace;
    this->bInitial = false;
}

