#include "ShelterNavModifierVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavArea_Default -FallbackName=NavArea_Default

AShelterNavModifierVolume::AShelterNavModifierVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaClass = UNavArea_Default::StaticClass();
}


