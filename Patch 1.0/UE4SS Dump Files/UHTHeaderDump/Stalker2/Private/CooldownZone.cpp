#include "CooldownZone.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavArea_Default -FallbackName=NavArea_Default

ACooldownZone::ACooldownZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaClass = UNavArea_Default::StaticClass();
    this->RestrictionArea = NULL;
    this->CooldownTime = 20.00f;
}


