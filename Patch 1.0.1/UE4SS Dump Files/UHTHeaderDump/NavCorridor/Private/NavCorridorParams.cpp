#include "NavCorridorParams.h"

FNavCorridorParams::FNavCorridorParams() {
    this->Width = 0.00f;
    this->ObstacleTaperAngle = 0.00f;
    this->SmallSectorThreshold = 0.00f;
    this->LargeSectorThreshold = 0.00f;
    this->SimplifyEdgeThreshold = 0.00f;
    this->bSimplifyFlipPortals = false;
    this->bSimplifyConvexPortals = false;
    this->bSimplifyConcavePortals = false;
}

