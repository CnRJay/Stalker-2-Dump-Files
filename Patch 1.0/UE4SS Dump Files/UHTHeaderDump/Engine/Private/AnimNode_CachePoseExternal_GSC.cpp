#include "AnimNode_CachePoseExternal_GSC.h"

FAnimNode_CachePoseExternal_GSC::FAnimNode_CachePoseExternal_GSC() {
    this->ExternalPoseUse = EExternalPoseUse::Write;
    this->SkeletalMeshComponent = NULL;
}

