#include "ParticleModuleSpawn.h"

UParticleModuleSpawn::UParticleModuleSpawn() {
    this->LODDuplicate = false;
    this->ParticleBurstMethod = EPBM_Instant;
    this->bApplyGlobalSpawnRateScale = true;
}


