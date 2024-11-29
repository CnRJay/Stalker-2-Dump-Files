#include "WorldPartitionHLOD.h"

AWorldPartitionHLOD::AWorldPartitionHLOD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LODLevel = 0;
    this->bRequireWarmup = false;
    this->ConnectedRegularAndHQHash = 0;
    this->bIsHQ = false;
}


