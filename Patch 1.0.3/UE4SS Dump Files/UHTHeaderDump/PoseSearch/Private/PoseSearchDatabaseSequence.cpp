#include "PoseSearchDatabaseSequence.h"

FPoseSearchDatabaseSequence::FPoseSearchDatabaseSequence() {
    this->Sequence = NULL;
    this->bEnabled = false;
    this->MirrorOption = EPoseSearchMirrorOption::UnmirroredOnly;
    this->LeadInSequence = NULL;
    this->FollowUpSequence = NULL;
}

