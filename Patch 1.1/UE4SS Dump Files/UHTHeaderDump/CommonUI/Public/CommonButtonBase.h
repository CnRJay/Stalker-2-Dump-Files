#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonInput -ObjectName=ECommonInputMode -FallbackName=ECommonInputMode
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonInput -ObjectName=ECommonInputType -FallbackName=ECommonInputType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ButtonStyle -FallbackName=ButtonStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EButtonClickMethod -FallbackName=EButtonClickMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EButtonPressMethod -FallbackName=EButtonPressMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EButtonTouchMethod -FallbackName=EButtonTouchMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateSound -FallbackName=SlateSound
#include "CommonButtonBaseClickedDelegate.h"
#include "CommonSelectedStateChangedBaseDelegate.h"
#include "CommonUserWidget.h"
#include "Templates/SubclassOf.h"
#include "CommonButtonBase.generated.h"

class UCommonActionWidget;
class UCommonButtonStyle;
class UCommonTextStyle;
class UMaterialInstanceDynamic;
class USoundBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class COMMONUI_API UCommonButtonBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButtonStyle> Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateSound PressedSlateSoundOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateSound HoveredSlateSoundOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateSound SelectedPressedSlateSoundOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateSound SelectedHoveredSlateSoundOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateSound LockedPressedSlateSoundOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateSound LockedHoveredSlateSoundOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bApplyAlphaOnDisable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLocked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSelectable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldSelectUponReceivingFocus: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInteractableWhenSelected: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bToggleable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTriggerClickedAfterSelection: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisplayInputActionWhenNotInteractable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHideInputActionWithKeyboard: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldUseFallbackDefaultInputAction: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EButtonClickMethod::Type> ClickMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EButtonTouchMethod::Type> TouchMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EButtonPressMethod::Type> PressMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TriggeringInputAction;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonSelectedStateChangedBase OnSelectedChangedBase;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonButtonBaseClicked OnButtonBaseClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonButtonBaseClicked OnButtonBaseDoubleClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonButtonBaseClicked OnButtonBaseHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonButtonBaseClicked OnButtonBaseUnhovered;
    
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPersistentBinding;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonInputMode InputModeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* SingleMaterialStyleMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle NormalStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle SelectedStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle DisabledStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle LockedStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bStopDoubleClickPropagation: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActionWidget* InputActionWidget;
    
public:
    UCommonButtonBase();

protected:
    UFUNCTION(BlueprintCallable)
    void StopDoubleClickPropagation();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTriggeringInputAction(const FDataTableRowHandle& InputActionRow);
    
    UFUNCTION(BlueprintCallable)
    void SetTriggeredInputAction(const FDataTableRowHandle& InputActionRow);
    
    UFUNCTION(BlueprintCallable)
    void SetTouchMethod(TEnumAsByte<EButtonTouchMethod::Type> InTouchMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UCommonButtonStyle> InStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedPressedSoundOverride(USoundBase* Sound);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSelectedHoveredSoundOverride(USoundBase* Sound);
    
    UFUNCTION(BlueprintCallable)
    void SetPressMethod(TEnumAsByte<EButtonPressMethod::Type> InPressMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetPressedSoundOverride(USoundBase* Sound);
    
    UFUNCTION(BlueprintCallable)
    void SetMinDimensions(int32 InMinWidth, int32 InMinHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetLockedPressedSoundOverride(USoundBase* Sound);
    
    UFUNCTION(BlueprintCallable)
    void SetLockedHoveredSoundOverride(USoundBase* Sound);
    
    UFUNCTION(BlueprintCallable)
    void SetIsToggleable(bool bInIsToggleable);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSelected(bool InSelected, bool bGiveClickFeedback);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSelectable(bool bInIsSelectable);
    
    UFUNCTION(BlueprintCallable)
    void SetIsLocked(bool bInIsLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInteractionEnabled(bool bInIsInteractionEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFocusable(bool bInIsFocusable);
    
    UFUNCTION(BlueprintCallable)
    void SetInputActionProgressMaterial(const FSlateBrush& InProgressMaterialBrush, const FName& InProgressMaterialParam);
    
    UFUNCTION(BlueprintCallable)
    void SetHoveredSoundOverride(USoundBase* Sound);
    
    UFUNCTION(BlueprintCallable)
    void SetHideInputAction(bool bInHideInputAction);
    
    UFUNCTION(BlueprintCallable)
    void SetClickMethod(TEnumAsByte<EButtonClickMethod::Type> InClickMethod);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTriggeringInputActionChanged(const FDataTableRowHandle& NewTriggeredAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTriggeredInputActionChanged(const FDataTableRowHandle& NewTriggeredAction);
    
    UFUNCTION(BlueprintCallable)
    void OnInputMethodChanged(ECommonInputType CurrentInputType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCurrentTextStyleChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActionProgress(float HeldPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActionComplete();
    
    UFUNCTION(BlueprintCallable)
    void NativeOnActionProgress(float HeldPercent);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnActionComplete();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPressed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractionEnabled() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleTriggeringActionCommited(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void HandleFocusReceived();
    
    UFUNCTION(BlueprintCallable)
    void HandleFocusLost();
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonClicked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonButtonStyle* GetStyle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstanceDynamic* GetSingleMaterialStyleMID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShouldSelectUponReceivingFocus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFocusable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInputAction(FDataTableRowHandle& InputActionRow) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UCommonTextStyle> GetCurrentTextStyleClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonTextStyle* GetCurrentTextStyle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentCustomPadding(FMargin& OutCustomPadding) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentButtonPadding(FMargin& OutButtonPadding) const;
    
    UFUNCTION(BlueprintCallable)
    void DisableButtonWithReason(const FText& DisabledReason);
    
    UFUNCTION(BlueprintCallable)
    void ClearSelection();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnUnhovered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSelected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLockedChanged(bool bIsLocked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLockDoubleClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLockClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnInputMethodChanged(ECommonInputType CurrentInputType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHovered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnFocusReceived();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnFocusLost();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDoubleClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDeselected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnClicked();
    
};

