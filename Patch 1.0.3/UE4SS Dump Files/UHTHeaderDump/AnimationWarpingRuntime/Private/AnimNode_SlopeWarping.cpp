#include "AnimNode_SlopeWarping.h"

FAnimNode_SlopeWarping::FAnimNode_SlopeWarping() {
    this->CachedDeltaTime = 0.00f;
    this->MaxStepHeight = 0.00f;
    this->bKeepMeshInsideOfCapsule = false;
    this->bPullPelvisDown = false;
    this->bUseCustomFloorOffset = false;
    this->bWasOnGround = false;
    this->bShowDebug = false;
    this->bFloorSmoothingInitialized = false;
}

