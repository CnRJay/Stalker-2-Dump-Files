#include "WorldPartitionRuntimeCell.h"

UWorldPartitionRuntimeCell::UWorldPartitionRuntimeCell() {
    this->Priority = 0;
    this->ContentMinZ = 0.00f;
    this->ContentMaxZ = 0.00f;
    this->bClientOnlyVisible = false;
    this->bIsHLOD = false;
    this->bBlockOnSlowLoading = false;
    this->bIsAlwaysLoaded = false;
}


