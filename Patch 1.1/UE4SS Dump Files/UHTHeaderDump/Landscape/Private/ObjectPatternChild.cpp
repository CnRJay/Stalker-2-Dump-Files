#include "ObjectPatternChild.h"

FObjectPatternChild::FObjectPatternChild() {
    this->ChildMesh = NULL;
    this->StartCullDistance = 0;
    this->EndCullDistance = 0;
    this->Footprint = 0;
    this->bEnableCollision = false;
}

