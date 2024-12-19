#include "AnimNode_MotionMatching.h"

FAnimNode_MotionMatching::FAnimNode_MotionMatching() {
    this->Searchable = NULL;
    this->bResetOnBecomingRelevant = false;
    this->bForceInterrupt = false;
}

