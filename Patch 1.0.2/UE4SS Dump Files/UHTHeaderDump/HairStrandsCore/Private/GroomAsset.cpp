#include "GroomAsset.h"

UGroomAsset::UGroomAsset() {
    this->EnableGlobalInterpolation = false;
    this->HairInterpolationType = EGroomInterpolationType::SmoothTransform;
    this->RiggedSkeletalMesh = NULL;
}


