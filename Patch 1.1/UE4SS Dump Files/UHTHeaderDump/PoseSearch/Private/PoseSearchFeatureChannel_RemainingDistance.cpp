#include "PoseSearchFeatureChannel_RemainingDistance.h"

UPoseSearchFeatureChannel_RemainingDistance::UPoseSearchFeatureChannel_RemainingDistance() {
    this->Weight = 2.00f;
    this->DistanceOffset = 150.00f;
    this->DistanceToNotExlcudeIdle = 10.00f;
    this->bShouldUseAccumulatedDistance = true;
    this->InitialSampleDistanceOffset = 0.00f;
}


