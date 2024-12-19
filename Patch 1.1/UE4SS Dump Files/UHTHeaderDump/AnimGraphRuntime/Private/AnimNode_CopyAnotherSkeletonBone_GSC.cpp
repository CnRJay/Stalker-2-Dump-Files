#include "AnimNode_CopyAnotherSkeletonBone_GSC.h"

FAnimNode_CopyAnotherSkeletonBone_GSC::FAnimNode_CopyAnotherSkeletonBone_GSC() {
    this->bCopyTranslation = false;
    this->bCopyRotation = false;
    this->bCopyScale = false;
    this->ControlSpace = BCS_WorldSpace;
    this->AnotherSkeletalMeshComponent = NULL;
}

