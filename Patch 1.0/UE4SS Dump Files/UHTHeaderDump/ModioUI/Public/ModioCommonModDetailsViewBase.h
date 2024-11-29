#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioExtendedModInfoUIDetails -FallbackName=ModioExtendedModInfoUIDetails
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioModInfoUIDetails -FallbackName=ModioModInfoUIDetails
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioUIModEnableWidget -FallbackName=ModioUIModEnableWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioUIModManagementEventReceiver -FallbackName=ModioUIModManagementEventReceiver
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioUISubscriptionsChangedReceiver -FallbackName=ModioUISubscriptionsChangedReceiver
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioUIUserChangedReceiver -FallbackName=ModioUIUserChangedReceiver
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonModDetailsViewBase.generated.h"

class UModioCommonModOperationTrackerUserWidget;
class UModioCommonModOperationTrackerWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonModDetailsViewBase : public UModioCommonActivatableWidget, public IModioUIModEnableWidget, public IModioUIUserChangedReceiver, public IModioUIModManagementEventReceiver, public IModioUISubscriptionsChangedReceiver, public IModioModInfoUIDetails, public IModioExtendedModInfoUIDetails {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonModOperationTrackerUserWidget* ModOperationTrackerUserWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonModOperationTrackerWidget* ModOperationTrackerWidget;
    
public:
    UModioCommonModDetailsViewBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUserAuthenticated() const;
    

    // Fix for true pure virtual functions not being implemented
};

