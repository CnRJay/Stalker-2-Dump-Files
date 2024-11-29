#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "CommonUserWidget.h"
#include "OnWidgetActivationChangedDelegate.h"
#include "CommonActivatableWidget.generated.h"

class UCommonActivatableWidget;
class UCommonInputActionDomain;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class COMMONUI_API UCommonActivatableWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBackHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBackActionDisplayedInActionBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsActivationFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsModal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoRestoreFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideActionDomain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCommonInputActionDomain> ActionDomainOverride;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetActivationChanged BP_OnWidgetActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetActivationChanged BP_OnWidgetDeactivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UCommonActivatableWidget>> VisibilityBoundWidgets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetVisibilityOnActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility ActivatedVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetVisibilityOnDeactivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility DeactivatedVisibility;
    
public:
    UCommonActivatableWidget();

    UFUNCTION(BlueprintCallable)
    void SetBindVisibilities(ESlateVisibility OnActivatedVisibility, ESlateVisibility OnDeactivatedVisibility, bool bInAllActive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetDesiredFocusTarget() const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateWidget();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BP_OnHandleBackAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidget* BP_GetDesiredFocusTarget() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void BindVisibilityToActivation(UCommonActivatableWidget* ActivatableWidget);
    
    UFUNCTION(BlueprintCallable)
    void ActivateWidget();
    
};

