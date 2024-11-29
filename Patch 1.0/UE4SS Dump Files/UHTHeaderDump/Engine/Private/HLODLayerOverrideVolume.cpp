#include "HLODLayerOverrideVolume.h"

AHLODLayerOverrideVolume::AHLODLayerOverrideVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnlyActor = true;
    this->LandscapeCullingThreshold = 0.00f;
}

void AHLODLayerOverrideVolume::ResetConfiguration() {
}


