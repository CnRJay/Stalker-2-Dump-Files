#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioFilterParams -FallbackName=ModioFilterParams
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioUIModManagementEventReceiver -FallbackName=ModioUIModManagementEventReceiver
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioUISubscriptionsChangedReceiver -FallbackName=ModioUISubscriptionsChangedReceiver
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioUIUserChangedReceiver -FallbackName=ModioUIUserChangedReceiver
#include "ModioCommonModListBase.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonFeaturedView.generated.h"

class UModioCommonFeaturedViewStyle;
class UModioCommonSearchResultsView;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonFeaturedView : public UModioCommonModListBase, public IModioUIUserChangedReceiver, public IModioUISubscriptionsChangedReceiver, public IModioUIModManagementEventReceiver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonFeaturedViewStyle> ModioStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonSearchResultsView* SearchResultsView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FModioFilterParams PreviouslyAppliedFilter;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int64 OverriddenModsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasFilterAppliedAtLeastOnce;
    
public:
    UModioCommonFeaturedView();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonFeaturedViewStyle> InStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshListByFilter(const FModioFilterParams& Filter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshListByCategoryName(FName InCategoryName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshList();
    

    // Fix for true pure virtual functions not being implemented
};

