#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioModCollectionEntry -FallbackName=ModioModCollectionEntry
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioModID -FallbackName=ModioModID
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioUnsigned64 -FallbackName=ModioUnsigned64
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioExtendedModInfoUIDetails -FallbackName=ModioExtendedModInfoUIDetails
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioModInfoUIDetails -FallbackName=ModioModInfoUIDetails
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioUIModEnableWidget -FallbackName=ModioUIModEnableWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioUIModManagementEventReceiver -FallbackName=ModioUIModManagementEventReceiver
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioUISubscriptionsChangedReceiver -FallbackName=ModioUISubscriptionsChangedReceiver
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioUIUserChangedReceiver -FallbackName=ModioUIUserChangedReceiver
#include "ModioCommonActivatableWidget.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonModOperationTrackerUserWidget.generated.h"

class UModioCommonImage;
class UModioCommonModOperationTrackerUserWidgetStyle;
class UModioCommonModOperationTrackerWidget;
class UModioCommonProgressBar;
class UModioCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonModOperationTrackerUserWidget : public UModioCommonActivatableWidget, public IModioModInfoUIDetails, public IModioExtendedModInfoUIDetails, public IModioUIModEnableWidget, public IModioUIModManagementEventReceiver, public IModioUISubscriptionsChangedReceiver, public IModioUIUserChangedReceiver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonModOperationTrackerUserWidgetStyle> ModioStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonModOperationTrackerWidget* Tracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonImage* IconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* ModTitleTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* OverallOperationPercentageLabelTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* OverallOperationPercentageTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* QueuedOperationNumberLabelTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* QueuedOperationNumberTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* SpeedLabelTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* SpeedTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonProgressBar* ModOperationProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinDecimalsProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDecimalsProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinDecimalsSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDecimalsSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTrackAnyMods;
    
public:
    UModioCommonModOperationTrackerUserWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateQueuedOperationNumber();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTrackingModID(FModioModID ModId);
    
    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonModOperationTrackerUserWidgetStyle> InStyle);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnModOperationTrackerSpeedUpdated(FModioUnsigned64 DeltaBytes, double DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnModOperationTrackerProgressUpdated(FModioUnsigned64 Current, FModioUnsigned64 Total);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumOfQueuedMods() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetCurrentDownloadingMod(FModioModCollectionEntry& OutDownloadingMod);
    

    // Fix for true pure virtual functions not being implemented
};

