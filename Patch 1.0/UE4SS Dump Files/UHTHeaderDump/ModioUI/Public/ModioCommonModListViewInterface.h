#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioModCollectionEntry -FallbackName=ModioModCollectionEntry
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioModID -FallbackName=ModioModID
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioModInfo -FallbackName=ModioModInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioModInfoList -FallbackName=ModioModInfoList
#include "ModioCommonModListViewInterface.generated.h"

class UObject;
class UWidget;

UINTERFACE(Blueprintable)
class MODIOUI_API UModioCommonModListViewInterface : public UInterface {
    GENERATED_BODY()
};

class MODIOUI_API IModioCommonModListViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetModsFromModInfoList(const FModioModInfoList& InList, bool bAddToExisting);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetModsFromModInfoArray(const TArray<FModioModInfo>& inArray, bool bAddToExisting);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetModsFromModCollectionEntryArray(const TArray<FModioModCollectionEntry>& inArray, bool bAddToExisting);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetModSelectionByID(FModioModID ModId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFocusOnceListIsPopulated(bool bFocus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestFullClearSelection(bool bResetPreviouslySelected);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetSelectedModItem(bool bIncludePreviouslySelected, UObject*& OutModItem);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetEntryWidgetFromItem(UObject* InItem, UWidget*& OutEntryWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* GetDesiredListFocusTarget(bool bIncludePreviouslySelected, bool bIncludeFirstItem);
    
};

