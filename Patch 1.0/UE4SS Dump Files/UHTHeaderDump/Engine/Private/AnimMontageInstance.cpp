#include "AnimMontageInstance.h"

FAnimMontageInstance::FAnimMontageInstance() {
    this->Montage = NULL;
    this->bPlaying = false;
    this->DefaultBlendTimeMultiplier = 0.00f;
    this->position = 0.00f;
    this->PlayRate = 0.00f;
    this->DisableRootMotionCount = 0;
}

