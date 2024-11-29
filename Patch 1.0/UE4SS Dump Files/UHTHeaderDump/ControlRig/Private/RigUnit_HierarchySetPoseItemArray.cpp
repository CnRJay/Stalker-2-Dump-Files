#include "RigUnit_HierarchySetPoseItemArray.h"

FRigUnit_HierarchySetPoseItemArray::FRigUnit_HierarchySetPoseItemArray() {
    this->ElementType = ERigElementType::None;
    this->space = EBoneGetterSetterMode::LocalSpace;
    this->Weight = 0.00f;
}

