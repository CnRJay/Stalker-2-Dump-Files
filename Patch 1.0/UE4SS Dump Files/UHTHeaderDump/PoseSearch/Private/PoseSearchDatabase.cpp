#include "PoseSearchDatabase.h"

UPoseSearchDatabase::UPoseSearchDatabase() {
    this->Schema = NULL;
    this->PoseSearchMode = EPoseSearchMode::PCAKDTree;
    this->NumberOfPrincipalComponents = 3;
    this->KDTreeMaxLeafSize = 32;
    this->KDTreeQueryNumNeighbors = 100;
    this->bSkipSearchIfPossible = true;
    this->NormalizationSet = NULL;
}


