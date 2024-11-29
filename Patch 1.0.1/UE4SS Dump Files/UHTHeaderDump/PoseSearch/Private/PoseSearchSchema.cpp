#include "PoseSearchSchema.h"

UPoseSearchSchema::UPoseSearchSchema() {
    this->Skeleton = NULL;
    this->SampleRate = 30;
    this->MirrorDataTable = NULL;
    this->DataPreprocessor = EPoseSearchDataPreprocessor::Normalize;
    this->SchemaCardinality = 0;
    this->ContinuingPoseCostBias = 0.00f;
    this->BaseCostBias = 0.00f;
    this->MirrorMismatchCostBias = 0.00f;
    this->SequenceEndExlusionTime = 0.30f;
}


