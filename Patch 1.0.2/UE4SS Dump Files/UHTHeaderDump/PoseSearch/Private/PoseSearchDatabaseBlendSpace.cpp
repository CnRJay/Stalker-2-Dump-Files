#include "PoseSearchDatabaseBlendSpace.h"

FPoseSearchDatabaseBlendSpace::FPoseSearchDatabaseBlendSpace() {
    this->BlendSpace = NULL;
    this->bEnabled = false;
    this->MirrorOption = EPoseSearchMirrorOption::UnmirroredOnly;
    this->bUseGridForSampling = false;
    this->NumberOfHorizontalSamples = 0;
    this->NumberOfVerticalSamples = 0;
}

