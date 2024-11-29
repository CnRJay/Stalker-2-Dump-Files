#include "MeshMergingSettings.h"

FMeshMergingSettings::FMeshMergingSettings() {
    this->TargetLightMapResolution = 0;
    this->OutputUVs[0] = EUVOutput::DoNotOutputChannel;
    this->OutputUVs[1] = EUVOutput::DoNotOutputChannel;
    this->OutputUVs[2] = EUVOutput::DoNotOutputChannel;
    this->OutputUVs[3] = EUVOutput::DoNotOutputChannel;
    this->OutputUVs[4] = EUVOutput::DoNotOutputChannel;
    this->OutputUVs[5] = EUVOutput::DoNotOutputChannel;
    this->OutputUVs[6] = EUVOutput::DoNotOutputChannel;
    this->OutputUVs[7] = EUVOutput::DoNotOutputChannel;
    this->GutterSize = 0;
    this->LODSelectionType = EMeshLODSelectionType::AllLODs;
    this->SpecificLOD = 0;
    this->bGenerateLightMapUV = false;
    this->bComputedLightMapResolution = false;
    this->bPivotPointAtZero = false;
    this->bCreateCollision = false;
    this->bMergePhysicsData = false;
    this->bMergeMaterials = false;
    this->bCreateMergedMaterial = false;
    this->bBakeVertexDataToMesh = false;
    this->bUseVertexDataForBakingMaterial = false;
    this->bUseTextureBinning = false;
    this->bReuseMeshLightmapUVs = false;
    this->bMergeEquivalentMaterials = false;
    this->bUseLandscapeCulling = false;
    this->bIncludeImposters = false;
    this->bSupportRayTracing = false;
    this->bAllowDistanceField = false;
    this->MaxMaterialsForSingleMesh = 0;
    this->bEnableNaniteAfterMerge = false;
    this->bIsHQHLOD = false;
}

