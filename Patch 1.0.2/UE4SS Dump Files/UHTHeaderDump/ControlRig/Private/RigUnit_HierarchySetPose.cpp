#include "RigUnit_HierarchySetPose.h"

FRigUnit_HierarchySetPose::FRigUnit_HierarchySetPose() {
    this->ElementType = ERigElementType::None;
    this->space = EBoneGetterSetterMode::LocalSpace;
    this->Weight = 0.00f;
}

