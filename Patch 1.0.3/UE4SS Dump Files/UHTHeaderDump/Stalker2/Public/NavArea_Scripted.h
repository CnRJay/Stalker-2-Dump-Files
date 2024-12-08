#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavArea -FallbackName=NavArea
#include "NavArea_Scripted.generated.h"

UCLASS(Abstract, Blueprintable)
class STALKER2_API UNavArea_Scripted : public UNavArea {
    GENERATED_BODY()
public:
    UNavArea_Scripted();

};

