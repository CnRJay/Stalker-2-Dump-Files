#include "HairSolverSettings.h"

FHairSolverSettings::FHairSolverSettings() {
    this->EnableSimulation = false;
    this->NiagaraSolver = EGroomNiagaraSolvers::None;
    this->GravityPreloading = 0.00f;
    this->SubSteps = 0;
    this->IterationCount = 0;
}

