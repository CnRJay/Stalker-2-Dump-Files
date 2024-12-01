#include "GroomCreateBindingOptions.h"

UGroomCreateBindingOptions::UGroomCreateBindingOptions() {
    this->GroomBindingType = EGroomBindingMeshType::SkeletalMesh;
    this->SourceSkeletalMesh = NULL;
    this->TargetSkeletalMesh = NULL;
    this->SourceGeometryCache = NULL;
    this->TargetGeometryCache = NULL;
    this->NumInterpolationPoints = 100;
    this->MatchingSection = 0;
}


