#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavArea -FallbackName=NavArea
#include "NavArea_SafeZone.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UNavArea_SafeZone : public UNavArea {
    GENERATED_BODY()
public:
    UNavArea_SafeZone();

};

