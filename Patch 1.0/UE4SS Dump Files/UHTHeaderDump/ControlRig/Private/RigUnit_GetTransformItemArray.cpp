#include "RigUnit_GetTransformItemArray.h"

FRigUnit_GetTransformItemArray::FRigUnit_GetTransformItemArray() {
    this->space = EBoneGetterSetterMode::LocalSpace;
    this->bInitial = false;
}

