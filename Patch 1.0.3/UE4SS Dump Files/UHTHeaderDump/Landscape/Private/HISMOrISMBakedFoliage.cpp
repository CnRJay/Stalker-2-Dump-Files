#include "HISMOrISMBakedFoliage.h"

FHISMOrISMBakedFoliage::FHISMOrISMBakedFoliage() {
    this->StartCullDistance = 0;
    this->EndCullDistance = 0;
    this->StartFadeInDistance = 0;
    this->EndFadeInDistance = 0;
    this->bCastsDynamicShadows = false;
    this->bCastsContactShadows = false;
    this->bAffectsDistanceLighting = false;
    this->bHasCollision = false;
    this->bReceivesDecals = false;
}

