#include "AnimNode_OrientationWarping.h"

FAnimNode_OrientationWarping::FAnimNode_OrientationWarping() {
    this->Mode = EWarpingEvaluationMode::Manual;
    this->OrientationAngle = 0.00f;
    this->LocomotionAngle = 0.00f;
    this->MinRootMotionSpeedThreshold = 0.00f;
    this->LocomotionAngleDeltaThreshold = 0.00f;
    this->RotationAxis = EAxis::None;
    this->DistributedBoneOrientationAlpha = 0.00f;
    this->RotationInterpSpeed = 0.00f;
    this->WarpingAlpha = 0.00f;
    this->OffsetAlpha = 0.00f;
    this->MaxOffsetAngle = 0.00f;
}

