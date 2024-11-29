#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioExtendedModInfoUIDetails -FallbackName=ModioExtendedModInfoUIDetails
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioModInfoUIDetails -FallbackName=ModioModInfoUIDetails
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioUIAuthenticationChangedReceiver -FallbackName=ModioUIAuthenticationChangedReceiver
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioUIMediaDownloadCompletedReceiver -FallbackName=ModioUIMediaDownloadCompletedReceiver
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioUIModEnableWidget -FallbackName=ModioUIModEnableWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioUIModManagementEventReceiver -FallbackName=ModioUIModManagementEventReceiver
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioUISubscriptionsChangedReceiver -FallbackName=ModioUISubscriptionsChangedReceiver
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioUIUserChangedReceiver -FallbackName=ModioUIUserChangedReceiver
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserObjectListEntry -FallbackName=UserObjectListEntry
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonModEntryBase.generated.h"

class UModioCommonModOperationTrackerUserWidget;
class UModioCommonModOperationTrackerWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonModEntryBase : public UModioCommonActivatableWidget, public IUserObjectListEntry, public IModioUIUserChangedReceiver, public IModioUIMediaDownloadCompletedReceiver, public IModioUIAuthenticationChangedReceiver, public IModioUISubscriptionsChangedReceiver, public IModioUIModEnableWidget, public IModioUIModManagementEventReceiver, public IModioModInfoUIDetails, public IModioExtendedModInfoUIDetails {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonModOperationTrackerUserWidget* ModOperationTrackerUserWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonModOperationTrackerWidget* ModOperationTrackerWidget;
    
public:
    UModioCommonModEntryBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateStyling(bool bIsListItemSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateInputActions();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SelectModListItem();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUserAuthenticated() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsModListItemValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsModListItemSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeselectModListItem();
    

    // Fix for true pure virtual functions not being implemented
};

