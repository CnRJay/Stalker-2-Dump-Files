#include "PhysicsSettings.h"

UPhysicsSettings::UPhysicsSettings() {
    this->bEnableShapeSharing = true;
    this->bEnableStabilization = true;
    this->LockedAxis = ESettingsLockedAxis::Invalid;
    this->DefaultDegreesOfFreedom = ESettingsDOF::Full3D;
    this->bSuppressFaceRemapTable = false;
    this->bSupportUVFromHitResults = true;
    this->bDisableActiveActors = false;
    this->bDisableKinematicStaticPairs = false;
    this->bDisableKinematicKinematicPairs = false;
    this->bDisableCCD = false;
    this->bEnableEnhancedDeterminism = false;
    this->AnimPhysicsMinDeltaTime = 0.00f;
    this->bSimulateAnimPhysicsAfterReset = false;
    this->MinPhysicsDeltaTime = 0.00f;
    this->MaxPhysicsDeltaTime = 0.02f;
    this->bSubstepping = true;
    this->bSubsteppingAsync = true;
    this->bTickPhysicsAsync = true;
    this->AsyncFixedTimeStepSize = 0.02f;
    this->MaxSubstepDeltaTime = 0.02f;
    this->MaxSubsteps = 4;
    this->SyncSceneSmoothingFactor = 0.00f;
    this->InitialAverageFrameRate = 0.01f;
    this->PhysXTreeRebuildRate = 10;
    this->PhysicalSurfaces.AddDefaulted(43);
    this->PhysicalMaskMaterials.AddDefaulted(64);
    this->MinDeltaVelocityForHitEvents = 0.00f;
}


