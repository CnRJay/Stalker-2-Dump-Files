#include "GrassVarietyAdvanced.h"

FGrassVarietyAdvanced::FGrassVarietyAdvanced() {
    this->GrassMesh = NULL;
    this->bUseGrid = false;
    this->PlacementJitter = 0.00f;
    this->MinLOD = 0;
    this->Scaling = EGrassScaling::Uniform;
    this->RandomRotation = false;
    this->MaxPitchRotation = 0.00f;
    this->MaxRollRotation = 0.00f;
    this->bUseSpecificSlopeRotationPerAxis = false;
    this->SurfaceAlignment = 0.00f;
    this->TrunkDiameter = 0.00f;
    this->bOverrideSlopeGroup = false;
    this->SlopeGroupIndex = 0;
    this->bOverrideCastsDynamicShadows = false;
    this->bCastsDynamicShadows = false;
    this->bOverrideCastsContactShadows = false;
    this->bCastsContactShadows = false;
    this->bUseLandscapeLightmap = false;
    this->bReceivesDecals = false;
    this->bAffectDistanceFieldLighting = false;
    this->bCastDynamicShadow = false;
    this->bCastContactShadow = false;
    this->bKeepInstanceBufferCPUCopy = false;
    this->InstanceWorldPositionOffsetDisableDistance = 0;
    this->bHasFoliageCollisionFootprint = false;
    this->FoliageCollisionFootprint = 0.00f;
    this->bHasFoliageCollisionCrownFootprint = false;
    this->FoliageCollisionCrownFootprint = 0.00f;
    this->bOverrideGeometryCollisionFootprint = false;
    this->GeometryCollisionFootprint = 0.00f;
    this->bOverrideGeometryCollisionCrownFootprint = false;
    this->GeometryCollisionCrownFootprint = 0.00f;
    this->bHasHeightFootprint = false;
    this->GeneratorWeight = 0.00f;
    this->bOverrideAffectsDistanceFieldLighting = false;
    this->bAffectsDistanceFieldLighting = false;
    this->bDoNotSpawnOnMeshes = false;
}

