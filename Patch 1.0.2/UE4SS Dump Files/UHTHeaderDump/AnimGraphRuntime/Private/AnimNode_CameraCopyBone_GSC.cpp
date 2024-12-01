#include "AnimNode_CameraCopyBone_GSC.h"

FAnimNode_CameraCopyBone_GSC::FAnimNode_CameraCopyBone_GSC() {
    this->bCopyTranslation = false;
    this->bCopyRotation = false;
    this->bCopyScale = false;
    this->ControlSpace = BCS_WorldSpace;
}

