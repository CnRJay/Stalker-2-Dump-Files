#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioUIUserChangedReceiver -FallbackName=ModioUIUserChangedReceiver
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonUserProfileBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonUserProfileBase : public UModioCommonActivatableWidget, public IModioUIUserChangedReceiver {
    GENERATED_BODY()
public:
    UModioCommonUserProfileBase();


    // Fix for true pure virtual functions not being implemented
};

