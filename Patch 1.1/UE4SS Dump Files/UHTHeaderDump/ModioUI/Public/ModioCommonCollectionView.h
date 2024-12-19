#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioErrorCode -FallbackName=ModioErrorCode
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioModCollectionEntry -FallbackName=ModioModCollectionEntry
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioModID -FallbackName=ModioModID
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioUIModManagementEventReceiver -FallbackName=ModioUIModManagementEventReceiver
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioUISubscriptionsChangedReceiver -FallbackName=ModioUISubscriptionsChangedReceiver
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioUIUserChangedReceiver -FallbackName=ModioUIUserChangedReceiver
#include "ModioCommonModListBase.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonCollectionView.generated.h"

class UListView;
class UModioCommonButtonBase;
class UModioCommonCollectionViewStyle;
class UModioCommonTextBlock;
class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonCollectionView : public UModioCommonModListBase, public IModioUIModManagementEventReceiver, public IModioUISubscriptionsChangedReceiver, public IModioUIUserChangedReceiver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonCollectionViewStyle> ModioStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* NoResultsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* NumOfDownloadingModsTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* InstalledModsLabelTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* InstalledModsDescriptionTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* NumOfInstalledModsTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* ErrorsTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* NumOfErrorsTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UListView* ModList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* FetchUpdateButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonButtonBase* FilterButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* FilterCounterTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FModioModID> ModIDsWithErrors;
    
public:
    UModioCommonCollectionView();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateMods();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateInputBindings();
    
    UFUNCTION(BlueprintCallable)
    void SortZToA(TArray<FModioModCollectionEntry>& ModListEntries);
    
    UFUNCTION(BlueprintCallable)
    void SortSizeOnDisk(TArray<FModioModCollectionEntry>& ModListEntries);
    
    UFUNCTION(BlueprintCallable)
    void SortRecentlyUpdated(TArray<FModioModCollectionEntry>& ModListEntries);
    
    UFUNCTION(BlueprintCallable)
    void SortAToZ(TArray<FModioModCollectionEntry>& ModListEntries);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowSearchView();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonCollectionViewStyle> InStyle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNoResultsVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDefaultCategoryFilterParams(bool bUserAuthenticated);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFetchUpdatesClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFetchExternalCompleted(FModioErrorCode ErrorCode);
    
    UFUNCTION(BlueprintCallable)
    void ApplySortingAndFiltering(TArray<FModioModCollectionEntry>& ModListEntries);
    

    // Fix for true pure virtual functions not being implemented
};

