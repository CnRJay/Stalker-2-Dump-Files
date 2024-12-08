#include "RigUnit_PoseGetTransformArray.h"

FRigUnit_PoseGetTransformArray::FRigUnit_PoseGetTransformArray() {
    this->space = EBoneGetterSetterMode::LocalSpace;
    this->Valid = false;
}

