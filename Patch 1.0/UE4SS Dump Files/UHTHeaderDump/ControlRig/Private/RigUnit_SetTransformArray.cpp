#include "RigUnit_SetTransformArray.h"

FRigUnit_SetTransformArray::FRigUnit_SetTransformArray() {
    this->space = EBoneGetterSetterMode::LocalSpace;
    this->bInitial = false;
    this->Weight = 0.00f;
    this->bPropagateToChildren = false;
}

