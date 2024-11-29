#include "GSCFoliagePrefabChild.h"

FGSCFoliagePrefabChild::FGSCFoliagePrefabChild() {
    this->bDisabled = false;
    this->StaticMesh = NULL;
    this->bHasFoliageCollisionFootprint = false;
    this->FoliageCollisionFootprint = 0.00f;
    this->bHasFoliageCollisionCrownFootprint = false;
    this->FoliageCollisionCrownFootprint = 0.00f;
    this->bOverrideGeometryCollisionFootprint = false;
    this->GeometryCollisionFootprint = 0.00f;
    this->bOverrideGeometryCollisionCrownFootprint = false;
    this->GeometryCollisionCrownFootprint = 0.00f;
    this->bHasHeightFootprint = false;
    this->SurfaceAlignment = 0.00f;
    this->TrunkDiameter = 0.00f;
    this->bOverrideAffectsDistanceFieldLighting = false;
    this->bAffectsDistanceFieldLighting = false;
    this->bDoNotSpawnOnMeshes = false;
}

