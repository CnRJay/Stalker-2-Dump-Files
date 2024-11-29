#include "SkeletalMeshShadowProxyOptimizationSettings.h"

FSkeletalMeshShadowProxyOptimizationSettings::FSkeletalMeshShadowProxyOptimizationSettings() {
    this->bOverrideTerminationCriterion = false;
    this->TerminationCriterion = SMTC_NumOfTriangles;
    this->bOverrideNumOfTrianglesPercentage = false;
    this->NumOfTrianglesPercentage = 0.00f;
    this->bOverrideNumOfVertPercentage = false;
    this->NumOfVertPercentage = 0.00f;
    this->bOverrideMaxNumOfTriangles = false;
    this->MaxNumOfTriangles = 0;
    this->bOverrideMaxNumOfVerts = false;
    this->MaxNumOfVerts = 0;
    this->bOverrideMaxDeviationPercentage = false;
    this->MaxDeviationPercentage = 0.00f;
    this->bOverrideReductionMethod = false;
    this->ReductionMethod = SMOT_NumOfTriangles;
    this->bOverrideSilhouetteImportance = false;
    this->SilhouetteImportance = SMOI_Off;
    this->bOverrideTextureImportance = false;
    this->TextureImportance = SMOI_Off;
    this->bOverrideShadingImportance = false;
    this->ShadingImportance = SMOI_Off;
    this->bOverrideSkinningImportance = false;
    this->SkinningImportance = SMOI_Off;
    this->bOverridebRemapMorphTargets = false;
    this->bRemapMorphTargets = false;
    this->bOverridebRecalcNormals = false;
    this->bRecalcNormals = false;
    this->bOverrideWeldingThreshold = false;
    this->WeldingThreshold = 0.00f;
    this->bOverrideNormalsThreshold = false;
    this->NormalsThreshold = 0.00f;
    this->bOverrideMaxBonesPerVertex = false;
    this->MaxBonesPerVertex = 0;
    this->bOverridebEnforceBoneBoundaries = false;
    this->bEnforceBoneBoundaries = false;
    this->bOverridebMergeCoincidentVertBones = false;
    this->bMergeCoincidentVertBones = false;
    this->bOverrideVolumeImportance = false;
    this->VolumeImportance = 0.00f;
    this->bOverridebLockEdges = false;
    this->bLockEdges = false;
    this->bOverridebLockColorBounaries = false;
    this->bLockColorBounaries = false;
    this->bOverrideBaseLOD = false;
    this->BaseLOD = 0;
}

