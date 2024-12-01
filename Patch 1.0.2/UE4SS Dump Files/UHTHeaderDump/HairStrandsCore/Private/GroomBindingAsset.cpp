#include "GroomBindingAsset.h"

UGroomBindingAsset::UGroomBindingAsset() {
    this->GroomBindingType = EGroomBindingMeshType::SkeletalMesh;
    this->Groom = NULL;
    this->NumInterpolationPoints = 100;
    this->MatchingSection = 0;
    this->bSourceMeshValid = false;
    this->bTargetMeshValid = false;
    this->bTargetGeometryCacheValid = false;
    this->bMeshesNotEqual = false;
}


