#include "AnimNode_StrideWarping.h"

FAnimNode_StrideWarping::FAnimNode_StrideWarping() {
    this->Mode = EWarpingEvaluationMode::Manual;
    this->StrideScale = 0.00f;
    this->LocomotionSpeed = 0.00f;
    this->MinRootMotionSpeedThreshold = 0.00f;
    this->bOrientStrideDirectionUsingFloorNormal = false;
    this->bCompensateIKUsingFKThighRotation = false;
    this->bClampIKUsingFKLimits = false;
}

