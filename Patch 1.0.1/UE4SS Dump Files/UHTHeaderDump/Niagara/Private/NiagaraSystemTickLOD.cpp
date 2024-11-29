#include "NiagaraSystemTickLOD.h"

FNiagaraSystemTickLOD::FNiagaraSystemTickLOD() {
    this->TickBehaviour = EFTickBehaviour::AccumulateDeltaTime;
    this->ScreenSize = 0.00f;
    this->TicksCountToSkip = 0;
    this->TickDeltaScale = 0.00f;
    this->bUseMotionVectors = false;
}

