#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioUIUserChangedReceiver -FallbackName=ModioUIUserChangedReceiver
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonQuickAccessViewBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonQuickAccessViewBase : public UModioCommonActivatableWidget, public IModioUIUserChangedReceiver {
    GENERATED_BODY()
public:
    UModioCommonQuickAccessViewBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUserAuthenticated() const;
    

    // Fix for true pure virtual functions not being implemented
};

