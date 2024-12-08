#include "PoseSearchIndexAsset.h"

FPoseSearchIndexAsset::FPoseSearchIndexAsset() {
    this->Type = ESearchIndexAssetType::Invalid;
    this->SourceAssetIdx = 0;
    this->bMirrored = false;
    this->FirstPoseIdx = 0;
    this->NumPoses = 0;
}

