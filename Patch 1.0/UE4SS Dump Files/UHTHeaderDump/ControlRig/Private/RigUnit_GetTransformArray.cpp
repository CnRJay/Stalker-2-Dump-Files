#include "RigUnit_GetTransformArray.h"

FRigUnit_GetTransformArray::FRigUnit_GetTransformArray() {
    this->space = EBoneGetterSetterMode::LocalSpace;
    this->bInitial = false;
}

