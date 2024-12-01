#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioModID -FallbackName=ModioModID
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioUnsigned64 -FallbackName=ModioUnsigned64
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioExtendedModInfoUIDetails -FallbackName=ModioExtendedModInfoUIDetails
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioModInfoUIDetails -FallbackName=ModioModInfoUIDetails
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioUIModEnableWidget -FallbackName=ModioUIModEnableWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioUIModManagementEventReceiver -FallbackName=ModioUIModManagementEventReceiver
#include "TickableModioCommonWidget.h"
#include "ModioCommonModOperationTrackerWidget.generated.h"

UCLASS(Blueprintable)
class MODIOUI_API UModioCommonModOperationTrackerWidget : public UTickableModioCommonWidget, public IModioModInfoUIDetails, public IModioExtendedModInfoUIDetails, public IModioUIModManagementEventReceiver, public IModioUIModEnableWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCommonModOperationTrackerSpeed, FModioUnsigned64, DeltaBytes, double, DeltaTime);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCommonModOperationTrackerProgress, FModioUnsigned64, Current, FModioUnsigned64, Total);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCommonModOperationTrackerProgress OnProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCommonModOperationTrackerSpeed OnSpeed;
    
    UModioCommonModOperationTrackerWidget();

    UFUNCTION(BlueprintCallable)
    void SetTrackingModID(FModioModID ModId);
    
    UFUNCTION(BlueprintCallable)
    void SetTrackAnyMods(bool bInTrackAnyMods);
    
    UFUNCTION(BlueprintPure)
    int64 GetPreviewTotal() const;
    
    UFUNCTION(BlueprintPure)
    int64 GetPreviewCurrent() const;
    

    // Fix for true pure virtual functions not being implemented
};

