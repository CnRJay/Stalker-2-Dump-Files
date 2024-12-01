#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "CommonRegisteredTabInfo.h"
#include "CommonUserWidget.h"
#include "Templates/SubclassOf.h"
#include "CommonTabListWidgetBase.generated.h"

class UCommonAnimatedSwitcher;
class UCommonButtonBase;
class UCommonButtonGroupBase;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class COMMONUI_API UCommonTabListWidgetBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTabSelected, FName, TabId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTabListRebuilt);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTabButtonRemoval, FName, TabId, UCommonButtonBase*, TabButton);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTabButtonCreation, FName, TabId, UCommonButtonBase*, TabButton);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTabSelected OnTabSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTabButtonCreation OnTabButtonCreation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTabButtonRemoval OnTabButtonRemoval;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTabListRebuilt OnTabListRebuilt;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle NextTabInputActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PreviousTabInputActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoListenForInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeferRebuildingTabList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCommonAnimatedSwitcher> LinkedSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonGroupBase* TabButtonGroup;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FCommonRegisteredTabInfo> RegisteredTabsByID;
    
public:
    UCommonTabListWidgetBase();

    UFUNCTION(BlueprintCallable)
    void SetTabVisibility(FName TabNameID, ESlateVisibility NewVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetTabInteractionEnabled(FName TabNameID, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetTabEnabled(FName TabNameID, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetListeningForInput(bool bShouldListen);
    
    UFUNCTION(BlueprintCallable)
    void SetLinkedSwitcher(UCommonAnimatedSwitcher* CommonSwitcher);
    
    UFUNCTION(BlueprintCallable)
    bool SelectTabByID(FName TabNameID, bool bSuppressClickFeedback);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveTab(FName TabNameID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllTabs();
    
    UFUNCTION(BlueprintCallable)
    bool RegisterTab(FName TabNameID, TSubclassOf<UCommonButtonBase> ButtonWidgetType, UWidget* ContentWidget, const int32 TabIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleTabRemoval(FName TabNameID, UCommonButtonBase* TabButton);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleTabCreation(FName TabNameID, UCommonButtonBase* TabButton);
    
    UFUNCTION(BlueprintCallable)
    void HandleTabButtonSelected(UCommonButtonBase* SelectedTabButton, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandlePreviousTabInputAction(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandlePreLinkedSwitcherChanged_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandlePostLinkedSwitcherChanged_BP();
    
    UFUNCTION(BlueprintCallable)
    void HandleNextTabInputAction(bool& bPassThrough);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetTabIdAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTabCount() const;
    
    UFUNCTION(BlueprintCallable)
    UCommonButtonBase* GetTabButtonBaseByID(FName TabNameID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSelectedTabId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonAnimatedSwitcher* GetLinkedSwitcher() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetActiveTab() const;
    
    UFUNCTION(BlueprintCallable)
    void DisableTabWithReason(FName TabNameID, const FText& Reason);
    
};

