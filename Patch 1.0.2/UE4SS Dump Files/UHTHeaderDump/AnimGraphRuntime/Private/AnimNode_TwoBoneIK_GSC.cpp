#include "AnimNode_TwoBoneIK_GSC.h"

FAnimNode_TwoBoneIK_GSC::FAnimNode_TwoBoneIK_GSC() {
    this->StartStretchRatio = 0.00f;
    this->MaxStretchScale = 0.00f;
    this->WeaponSkeletalMeshComponent = NULL;
    this->bUseSocketRotation = false;
    this->bAllowStretching = false;
    this->bAllowTwist = false;
}

