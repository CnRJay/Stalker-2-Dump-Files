#include "HairSimulationSetup.h"

FHairSimulationSetup::FHairSimulationSetup() {
    this->bResetSimulation = false;
    this->bDebugSimulation = false;
    this->bLocalSimulation = false;
    this->LinearVelocityScale = 0.00f;
    this->AngularVelocityScale = 0.00f;
    this->TeleportDistance = 0.00f;
}

