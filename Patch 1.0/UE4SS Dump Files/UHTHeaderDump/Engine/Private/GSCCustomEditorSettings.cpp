#include "GSCCustomEditorSettings.h"

UGSCCustomEditorSettings::UGSCCustomEditorSettings() {
    this->bShowPlaceholderMeshes = false;
    this->bHideUnloadedActors = true;
    this->bShowActorsOnWorldPartitionGridMap = false;
    this->bAutoUpdateDataLayers = false;
    this->bDrawUiOutOfFocusPartitionGridMap = false;
    this->bProcessWorldPartitionMapChecks = false;
    this->bProcessActorDescBoundsChecks = false;
    this->bDirtyActorsOnDataLayerOrGridFixupChange = false;
    this->bEnableAllowAllAccessRule = false;
}


