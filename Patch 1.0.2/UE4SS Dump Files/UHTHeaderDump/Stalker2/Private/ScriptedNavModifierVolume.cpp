#include "ScriptedNavModifierVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavArea_Default -FallbackName=NavArea_Default

AScriptedNavModifierVolume::AScriptedNavModifierVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaClass = UNavArea_Default::StaticClass();
    this->TargetNavArea = NULL;
}

void AScriptedNavModifierVolume::Deactivate() {
}

void AScriptedNavModifierVolume::Activate() {
}


