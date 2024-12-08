#ifndef UE4SS_SDK_CommonUI_HPP
#define UE4SS_SDK_CommonUI_HPP

#include "CommonUI_enums.hpp"

struct FCommonAnalogCursorSettings
{
    int32 PreprocessorPriority;                                                       // 0x0000 (size: 0x4)
    bool bEnableCursorAcceleration;                                                   // 0x0004 (size: 0x1)
    float CursorAcceleration;                                                         // 0x0008 (size: 0x4)
    float CursorMaxSpeed;                                                             // 0x000C (size: 0x4)
    float CursorDeadZone;                                                             // 0x0010 (size: 0x4)
    float HoverSlowdownFactor;                                                        // 0x0014 (size: 0x4)
    float ScrollDeadZone;                                                             // 0x0018 (size: 0x4)
    float ScrollUpdatePeriod;                                                         // 0x001C (size: 0x4)
    float ScrollMultiplier;                                                           // 0x0020 (size: 0x4)

}; // Size: 0x24

struct FCommonButtonStyleOptionalSlateSound
{
    bool bHasSound;                                                                   // 0x0000 (size: 0x1)
    FSlateSound Sound;                                                                // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FCommonInputActionDataBase : public FTableRowBase
{
    FText DisplayName;                                                                // 0x0008 (size: 0x18)
    FText HoldDisplayName;                                                            // 0x0020 (size: 0x18)
    int32 NavBarPriority;                                                             // 0x0038 (size: 0x4)
    FCommonInputTypeInfo KeyboardInputTypeInfo;                                       // 0x0040 (size: 0x110)
    FCommonInputTypeInfo DefaultGamepadInputTypeInfo;                                 // 0x0150 (size: 0x110)
    TMap<class FName, class FCommonInputTypeInfo> GamepadInputOverrides;              // 0x0260 (size: 0x50)
    FCommonInputTypeInfo TouchInputTypeInfo;                                          // 0x02B0 (size: 0x110)

}; // Size: 0x3C0

struct FCommonInputActionHandlerData
{
    FDataTableRowHandle InputActionRow;                                               // 0x0000 (size: 0x10)
    EInputActionState State;                                                          // 0x0010 (size: 0x1)

}; // Size: 0x20

struct FCommonInputTypeInfo
{
    FKey Key;                                                                         // 0x0000 (size: 0x18)
    EInputActionState OverrrideState;                                                 // 0x0018 (size: 0x1)
    bool bActionRequiresHold;                                                         // 0x0019 (size: 0x1)
    float HoldTime;                                                                   // 0x001C (size: 0x4)
    FSlateBrush OverrideBrush;                                                        // 0x0020 (size: 0xF0)

}; // Size: 0x110

struct FCommonNumberFormattingOptions
{
    TEnumAsByte<ERoundingMode> RoundingMode;                                          // 0x0000 (size: 0x1)
    bool UseGrouping;                                                                 // 0x0001 (size: 0x1)
    int32 MinimumIntegralDigits;                                                      // 0x0004 (size: 0x4)
    int32 MaximumIntegralDigits;                                                      // 0x0008 (size: 0x4)
    int32 MinimumFractionalDigits;                                                    // 0x000C (size: 0x4)
    int32 MaximumFractionalDigits;                                                    // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FCommonRegisteredTabInfo
{
    int32 TabIndex;                                                                   // 0x0000 (size: 0x4)
    class UCommonButtonBase* TabButton;                                               // 0x0008 (size: 0x8)
    class UWidget* ContentInstance;                                                   // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FRichTextIconData : public FTableRowBase
{
    FText DisplayName;                                                                // 0x0008 (size: 0x18)
    TSoftObjectPtr<UObject> ResourceObject;                                           // 0x0020 (size: 0x30)
    FVector2D ImageSize;                                                              // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FUIActionKeyMapping
{
    FKey Key;                                                                         // 0x0000 (size: 0x18)
    float HoldTime;                                                                   // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FUIActionTag : public FUITag
{
}; // Size: 0x8

struct FUIInputAction
{
    FUIActionTag ActionTag;                                                           // 0x0000 (size: 0x8)
    FText DefaultDisplayName;                                                         // 0x0008 (size: 0x18)
    TArray<FUIActionKeyMapping> KeyMappings;                                          // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FUITag : public FGameplayTag
{
}; // Size: 0x8

class ICommonActionHandlerInterface : public IInterface
{
}; // Size: 0x28

class ICommonBoundActionButtonInterface : public IInterface
{
}; // Size: 0x28

class ICommonPoolableWidgetInterface : public IInterface
{

    void OnReleaseToPool();
    void OnAcquireFromPool();
}; // Size: 0x28

class UAnalogSlider : public USlider
{
    FAnalogSliderOnAnalogCapture OnAnalogCapture;                                     // 0x07C0 (size: 0x10)
    void OnFloatValueChangedEvent(float Value);

}; // Size: 0x7E0

class UCommonActionWidget : public UWidget
{
    FCommonActionWidgetOnInputMethodChanged OnInputMethodChanged;                     // 0x0150 (size: 0x10)
    void OnInputMethodChanged(bool bUsingGamepad);
    FSlateBrush ProgressMaterialBrush;                                                // 0x0160 (size: 0xF0)
    FName ProgressMaterialParam;                                                      // 0x0250 (size: 0x8)
    FSlateBrush IconRimBrush;                                                         // 0x0260 (size: 0xF0)
    TArray<FDataTableRowHandle> InputActions;                                         // 0x0350 (size: 0x10)
    class UMaterialInstanceDynamic* ProgressDynamicMaterial;                          // 0x0368 (size: 0x8)

    void SetInputActions(TArray<FDataTableRowHandle> NewInputActions);
    void SetInputAction(FDataTableRowHandle InputActionRow);
    void SetIconRimBrush(FSlateBrush InIconRimBrush);
    void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
    bool IsHeldAction();
    FSlateBrush GetIcon();
    FText GetDisplayText();
}; // Size: 0x4B0

class UCommonActivatableWidget : public UCommonUserWidget
{
    bool bIsBackHandler;                                                              // 0x02A0 (size: 0x1)
    bool bIsBackActionDisplayedInActionBar;                                           // 0x02A1 (size: 0x1)
    bool bAutoActivate;                                                               // 0x02A2 (size: 0x1)
    bool bSupportsActivationFocus;                                                    // 0x02A3 (size: 0x1)
    bool bIsModal;                                                                    // 0x02A4 (size: 0x1)
    bool bAutoRestoreFocus;                                                           // 0x02A5 (size: 0x1)
    bool bOverrideActionDomain;                                                       // 0x02A6 (size: 0x1)
    TSoftObjectPtr<UCommonInputActionDomain> ActionDomainOverride;                    // 0x02A8 (size: 0x30)
    FCommonActivatableWidgetBP_OnWidgetActivated BP_OnWidgetActivated;                // 0x02D8 (size: 0x10)
    void OnWidgetActivationChanged();
    FCommonActivatableWidgetBP_OnWidgetDeactivated BP_OnWidgetDeactivated;            // 0x02E8 (size: 0x10)
    void OnWidgetActivationChanged();
    bool bIsActive;                                                                   // 0x02F8 (size: 0x1)
    TArray<TWeakObjectPtr<UCommonActivatableWidget>> VisibilityBoundWidgets;          // 0x0300 (size: 0x10)
    bool bSetVisibilityOnActivated;                                                   // 0x03C0 (size: 0x1)
    ESlateVisibility ActivatedVisibility;                                             // 0x03C1 (size: 0x1)
    bool bSetVisibilityOnDeactivated;                                                 // 0x03C2 (size: 0x1)
    ESlateVisibility DeactivatedVisibility;                                           // 0x03C3 (size: 0x1)

    void SetBindVisibilities(ESlateVisibility OnActivatedVisibility, ESlateVisibility OnDeactivatedVisibility, bool bInAllActive);
    bool IsActivated();
    class UWidget* GetDesiredFocusTarget();
    void DeactivateWidget();
    bool BP_OnHandleBackAction();
    void BP_OnDeactivated();
    void BP_OnActivated();
    class UWidget* BP_GetDesiredFocusTarget();
    void BindVisibilityToActivation(class UCommonActivatableWidget* ActivatableWidget);
    void ActivateWidget();
}; // Size: 0x3C8

class UCommonActivatableWidgetContainerBase : public UWidget
{
    ECommonSwitcherTransition TransitionType;                                         // 0x0168 (size: 0x1)
    ETransitionCurve TransitionCurveType;                                             // 0x0169 (size: 0x1)
    float TransitionDuration;                                                         // 0x016C (size: 0x4)
    TArray<class UCommonActivatableWidget*> WidgetList;                               // 0x0170 (size: 0x10)
    class UCommonActivatableWidget* DisplayedWidget;                                  // 0x0180 (size: 0x8)
    FUserWidgetPool GeneratedWidgetsPool;                                             // 0x0188 (size: 0x88)

    void SetTransitionDuration(float Duration);
    void RemoveWidget(class UCommonActivatableWidget* WidgetToRemove);
    float GetTransitionDuration();
    class UCommonActivatableWidget* GetActiveWidget();
    void ClearWidgets();
    class UCommonActivatableWidget* BP_AddWidget(TSubclassOf<class UCommonActivatableWidget> ActivatableWidgetClass);
}; // Size: 0x270

class UCommonActivatableWidgetQueue : public UCommonActivatableWidgetContainerBase
{
}; // Size: 0x270

class UCommonActivatableWidgetStack : public UCommonActivatableWidgetContainerBase
{
    TSubclassOf<class UCommonActivatableWidget> RootContentWidgetClass;               // 0x0270 (size: 0x8)
    class UCommonActivatableWidget* RootContentWidget;                                // 0x0278 (size: 0x8)

}; // Size: 0x280

class UCommonActivatableWidgetSwitcher : public UCommonAnimatedSwitcher
{
}; // Size: 0x200

class UCommonAnimatedSwitcher : public UWidgetSwitcher
{
    ECommonSwitcherTransition TransitionType;                                         // 0x01B0 (size: 0x1)
    ETransitionCurve TransitionCurveType;                                             // 0x01B1 (size: 0x1)
    float TransitionDuration;                                                         // 0x01B4 (size: 0x4)

    void SetDisableTransitionAnimation(bool bDisableAnimation);
    bool IsTransitionPlaying();
    bool IsCurrentlySwitching();
    bool HasWidgets();
    void ActivatePreviousWidget(bool bCanWrap);
    void ActivateNextWidget(bool bCanWrap);
}; // Size: 0x1F0

class UCommonBorder : public UBorder
{
    TSubclassOf<class UCommonBorderStyle> Style;                                      // 0x0328 (size: 0x8)
    bool bReducePaddingBySafezone;                                                    // 0x0330 (size: 0x1)
    FMargin MinimumPadding;                                                           // 0x0334 (size: 0x10)

    void SetStyle(TSubclassOf<class UCommonBorderStyle> InStyle);
}; // Size: 0x350

class UCommonBorderStyle : public UObject
{
    FSlateBrush Background;                                                           // 0x0030 (size: 0xF0)

    void GetBackgroundBrush(FSlateBrush& Brush);
}; // Size: 0x120

class UCommonBoundActionBar : public UDynamicEntryBoxBase
{
    TSubclassOf<class UCommonButtonBase> ActionButtonClass;                           // 0x0230 (size: 0x8)
    bool bDisplayOwningPlayerActionsOnly;                                             // 0x0238 (size: 0x1)
    bool bIgnoreDuplicateActions;                                                     // 0x0239 (size: 0x1)

    void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions);
}; // Size: 0x240

class UCommonBoundActionButton : public UCommonButtonBase
{
    class UCommonTextBlock* Text_ActionName;                                          // 0x16F8 (size: 0x8)

    void OnUpdateInputAction();
}; // Size: 0x1710

class UCommonButtonBase : public UCommonUserWidget
{
    int32 MinWidth;                                                                   // 0x02A0 (size: 0x4)
    int32 MinHeight;                                                                  // 0x02A4 (size: 0x4)
    TSubclassOf<class UCommonButtonStyle> Style;                                      // 0x02A8 (size: 0x8)
    bool bHideInputAction;                                                            // 0x02B0 (size: 0x1)
    FSlateSound PressedSlateSoundOverride;                                            // 0x02B8 (size: 0x18)
    FSlateSound HoveredSlateSoundOverride;                                            // 0x02D0 (size: 0x18)
    FSlateSound SelectedPressedSlateSoundOverride;                                    // 0x02E8 (size: 0x18)
    FSlateSound SelectedHoveredSlateSoundOverride;                                    // 0x0300 (size: 0x18)
    FSlateSound LockedPressedSlateSoundOverride;                                      // 0x0318 (size: 0x18)
    FSlateSound LockedHoveredSlateSoundOverride;                                      // 0x0330 (size: 0x18)
    uint8 bApplyAlphaOnDisable;                                                       // 0x0348 (size: 0x1)
    uint8 bLocked;                                                                    // 0x0348 (size: 0x1)
    uint8 bSelectable;                                                                // 0x0348 (size: 0x1)
    uint8 bShouldSelectUponReceivingFocus;                                            // 0x0348 (size: 0x1)
    uint8 bInteractableWhenSelected;                                                  // 0x0348 (size: 0x1)
    uint8 bToggleable;                                                                // 0x0348 (size: 0x1)
    uint8 bTriggerClickedAfterSelection;                                              // 0x0348 (size: 0x1)
    uint8 bDisplayInputActionWhenNotInteractable;                                     // 0x0348 (size: 0x1)
    uint8 bHideInputActionWithKeyboard;                                               // 0x0349 (size: 0x1)
    uint8 bShouldUseFallbackDefaultInputAction;                                       // 0x0349 (size: 0x1)
    TEnumAsByte<EButtonClickMethod::Type> ClickMethod;                                // 0x034A (size: 0x1)
    TEnumAsByte<EButtonTouchMethod::Type> TouchMethod;                                // 0x034B (size: 0x1)
    TEnumAsByte<EButtonPressMethod::Type> PressMethod;                                // 0x034C (size: 0x1)
    int32 InputPriority;                                                              // 0x0350 (size: 0x4)
    FDataTableRowHandle TriggeringInputAction;                                        // 0x0358 (size: 0x10)
    FCommonButtonBaseOnSelectedChangedBase OnSelectedChangedBase;                     // 0x0378 (size: 0x10)
    void CommonSelectedStateChangedBase(class UCommonButtonBase* Button, bool Selected);
    FCommonButtonBaseOnButtonBaseClicked OnButtonBaseClicked;                         // 0x0388 (size: 0x10)
    void CommonButtonBaseClicked(class UCommonButtonBase* Button);
    FCommonButtonBaseOnButtonBaseDoubleClicked OnButtonBaseDoubleClicked;             // 0x0398 (size: 0x10)
    void CommonButtonBaseClicked(class UCommonButtonBase* Button);
    FCommonButtonBaseOnButtonBaseHovered OnButtonBaseHovered;                         // 0x03A8 (size: 0x10)
    void CommonButtonBaseClicked(class UCommonButtonBase* Button);
    FCommonButtonBaseOnButtonBaseUnhovered OnButtonBaseUnhovered;                     // 0x03B8 (size: 0x10)
    void CommonButtonBaseClicked(class UCommonButtonBase* Button);
    bool bIsPersistentBinding;                                                        // 0x03CC (size: 0x1)
    ECommonInputMode InputModeOverride;                                               // 0x03CD (size: 0x1)
    class UMaterialInstanceDynamic* SingleMaterialStyleMID;                           // 0x0400 (size: 0x8)
    FButtonStyle NormalStyle;                                                         // 0x0410 (size: 0x470)
    FButtonStyle SelectedStyle;                                                       // 0x0880 (size: 0x470)
    FButtonStyle DisabledStyle;                                                       // 0x0CF0 (size: 0x470)
    FButtonStyle LockedStyle;                                                         // 0x1160 (size: 0x470)
    uint8 bStopDoubleClickPropagation;                                                // 0x15D0 (size: 0x1)
    class UCommonActionWidget* InputActionWidget;                                     // 0x16E8 (size: 0x8)

    void StopDoubleClickPropagation();
    void SetTriggeringInputAction(const FDataTableRowHandle& InputActionRow);
    void SetTriggeredInputAction(const FDataTableRowHandle& InputActionRow);
    void SetTouchMethod(TEnumAsByte<EButtonTouchMethod::Type> InTouchMethod);
    void SetStyle(TSubclassOf<class UCommonButtonStyle> InStyle);
    void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction);
    void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus);
    void SetSelectedPressedSoundOverride(class USoundBase* Sound);
    void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast);
    void SetSelectedHoveredSoundOverride(class USoundBase* Sound);
    void SetPressMethod(TEnumAsByte<EButtonPressMethod::Type> InPressMethod);
    void SetPressedSoundOverride(class USoundBase* Sound);
    void SetMinDimensions(int32 InMinWidth, int32 InMinHeight);
    void SetLockedPressedSoundOverride(class USoundBase* Sound);
    void SetLockedHoveredSoundOverride(class USoundBase* Sound);
    void SetIsToggleable(bool bInIsToggleable);
    void SetIsSelected(bool InSelected, bool bGiveClickFeedback);
    void SetIsSelectable(bool bInIsSelectable);
    void SetIsLocked(bool bInIsLocked);
    void SetIsInteractionEnabled(bool bInIsInteractionEnabled);
    void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected);
    void SetIsFocusable(bool bInIsFocusable);
    void SetInputActionProgressMaterial(const FSlateBrush& InProgressMaterialBrush, const FName& InProgressMaterialParam);
    void SetHoveredSoundOverride(class USoundBase* Sound);
    void SetHideInputAction(bool bInHideInputAction);
    void SetClickMethod(TEnumAsByte<EButtonClickMethod::Type> InClickMethod);
    void OnTriggeringInputActionChanged(const FDataTableRowHandle& NewTriggeredAction);
    void OnTriggeredInputActionChanged(const FDataTableRowHandle& NewTriggeredAction);
    void OnInputMethodChanged(ECommonInputType CurrentInputType);
    void OnCurrentTextStyleChanged();
    void OnActionProgress(float HeldPercent);
    void OnActionComplete();
    void NativeOnActionProgress(float HeldPercent);
    void NativeOnActionComplete();
    bool IsPressed();
    bool IsInteractionEnabled();
    void HandleTriggeringActionCommited(bool& bPassThrough);
    void HandleFocusReceived();
    void HandleFocusLost();
    void HandleButtonReleased();
    void HandleButtonPressed();
    void HandleButtonClicked();
    class UCommonButtonStyle* GetStyle();
    class UMaterialInstanceDynamic* GetSingleMaterialStyleMID();
    bool GetShouldSelectUponReceivingFocus();
    bool GetSelected();
    bool GetLocked();
    bool GetIsFocusable();
    bool GetInputAction(FDataTableRowHandle& InputActionRow);
    TSubclassOf<class UCommonTextStyle> GetCurrentTextStyleClass();
    class UCommonTextStyle* GetCurrentTextStyle();
    void GetCurrentCustomPadding(FMargin& OutCustomPadding);
    void GetCurrentButtonPadding(FMargin& OutButtonPadding);
    void DisableButtonWithReason(const FText& DisabledReason);
    void ClearSelection();
    void BP_OnUnhovered();
    void BP_OnSelected();
    void BP_OnReleased();
    void BP_OnPressed();
    void BP_OnLockedChanged(bool bIsLocked);
    void BP_OnLockDoubleClicked();
    void BP_OnLockClicked();
    void BP_OnInputMethodChanged(ECommonInputType CurrentInputType);
    void BP_OnHovered();
    void BP_OnFocusReceived();
    void BP_OnFocusLost();
    void BP_OnEnabled();
    void BP_OnDoubleClicked();
    void BP_OnDisabled();
    void BP_OnDeselected();
    void BP_OnClicked();
}; // Size: 0x16F0

class UCommonButtonGroupBase : public UCommonWidgetGroupBase
{
    FCommonButtonGroupBaseOnSelectedButtonBaseChanged OnSelectedButtonBaseChanged;    // 0x0028 (size: 0x10)
    void SimpleButtonBaseGroupDelegate(class UCommonButtonBase* AssociatedButton, int32 ButtonIndex);
    FCommonButtonGroupBaseOnHoveredButtonBaseChanged OnHoveredButtonBaseChanged;      // 0x0050 (size: 0x10)
    void SimpleButtonBaseGroupDelegate(class UCommonButtonBase* AssociatedButton, int32 ButtonIndex);
    FCommonButtonGroupBaseOnButtonBaseClicked OnButtonBaseClicked;                    // 0x0078 (size: 0x10)
    void SimpleButtonBaseGroupDelegate(class UCommonButtonBase* AssociatedButton, int32 ButtonIndex);
    FCommonButtonGroupBaseOnButtonBaseDoubleClicked OnButtonBaseDoubleClicked;        // 0x00A0 (size: 0x10)
    void SimpleButtonBaseGroupDelegate(class UCommonButtonBase* AssociatedButton, int32 ButtonIndex);
    FCommonButtonGroupBaseOnSelectionCleared OnSelectionCleared;                      // 0x00C8 (size: 0x10)
    void OnSelectionCleared();
    bool bSelectionRequired;                                                          // 0x00F0 (size: 0x1)

    void SetSelectionRequired(bool bRequireSelection);
    void SelectPreviousButton(bool bAllowWrap);
    void SelectNextButton(bool bAllowWrap);
    void SelectButtonAtIndex(int32 ButtonIndex, const bool bAllowSound);
    void OnSelectionStateChangedBase(class UCommonButtonBase* BaseButton, bool bIsSelected);
    void OnHandleButtonBaseDoubleClicked(class UCommonButtonBase* BaseButton);
    void OnHandleButtonBaseClicked(class UCommonButtonBase* BaseButton);
    void OnButtonBaseUnhovered(class UCommonButtonBase* BaseButton);
    void OnButtonBaseHovered(class UCommonButtonBase* BaseButton);
    bool HasAnyButtons();
    int32 GetSelectedButtonIndex();
    class UCommonButtonBase* GetSelectedButtonBase();
    int32 GetHoveredButtonIndex();
    int32 GetButtonCount();
    class UCommonButtonBase* GetButtonBaseAtIndex(int32 Index);
    int32 FindButtonIndex(const class UCommonButtonBase* ButtonToFind);
    void DeselectAll();
}; // Size: 0x110

class UCommonButtonInternalBase : public UButton
{
    FCommonButtonInternalBaseOnDoubleClicked OnDoubleClicked;                         // 0x0678 (size: 0x10)
    void OnButtonClickedEvent();
    int32 MinWidth;                                                                   // 0x06A8 (size: 0x4)
    int32 MinHeight;                                                                  // 0x06AC (size: 0x4)
    bool bButtonEnabled;                                                              // 0x06B0 (size: 0x1)
    bool bInteractionEnabled;                                                         // 0x06B1 (size: 0x1)

}; // Size: 0x6E0

class UCommonButtonStyle : public UObject
{
    bool bSingleMaterial;                                                             // 0x0028 (size: 0x1)
    FSlateBrush SingleMaterialBrush;                                                  // 0x0030 (size: 0xF0)
    FSlateBrush NormalBase;                                                           // 0x0120 (size: 0xF0)
    FSlateBrush NormalHovered;                                                        // 0x0210 (size: 0xF0)
    FSlateBrush NormalPressed;                                                        // 0x0300 (size: 0xF0)
    FSlateBrush SelectedBase;                                                         // 0x03F0 (size: 0xF0)
    FSlateBrush SelectedHovered;                                                      // 0x04E0 (size: 0xF0)
    FSlateBrush SelectedPressed;                                                      // 0x05D0 (size: 0xF0)
    FSlateBrush Disabled;                                                             // 0x06C0 (size: 0xF0)
    FMargin ButtonPadding;                                                            // 0x07B0 (size: 0x10)
    FMargin CustomPadding;                                                            // 0x07C0 (size: 0x10)
    int32 MinWidth;                                                                   // 0x07D0 (size: 0x4)
    int32 MinHeight;                                                                  // 0x07D4 (size: 0x4)
    TSubclassOf<class UCommonTextStyle> NormalTextStyle;                              // 0x07D8 (size: 0x8)
    TSubclassOf<class UCommonTextStyle> NormalHoveredTextStyle;                       // 0x07E0 (size: 0x8)
    TSubclassOf<class UCommonTextStyle> SelectedTextStyle;                            // 0x07E8 (size: 0x8)
    TSubclassOf<class UCommonTextStyle> SelectedHoveredTextStyle;                     // 0x07F0 (size: 0x8)
    TSubclassOf<class UCommonTextStyle> DisabledTextStyle;                            // 0x07F8 (size: 0x8)
    FSlateSound PressedSlateSound;                                                    // 0x0800 (size: 0x18)
    FCommonButtonStyleOptionalSlateSound SelectedPressedSlateSound;                   // 0x0818 (size: 0x20)
    FCommonButtonStyleOptionalSlateSound LockedPressedSlateSound;                     // 0x0838 (size: 0x20)
    FSlateSound HoveredSlateSound;                                                    // 0x0858 (size: 0x18)
    FCommonButtonStyleOptionalSlateSound SelectedHoveredSlateSound;                   // 0x0870 (size: 0x20)
    FCommonButtonStyleOptionalSlateSound LockedHoveredSlateSound;                     // 0x0890 (size: 0x20)

    class UCommonTextStyle* GetSelectedTextStyle();
    void GetSelectedPressedBrush(FSlateBrush& Brush);
    class UCommonTextStyle* GetSelectedHoveredTextStyle();
    void GetSelectedHoveredBrush(FSlateBrush& Brush);
    void GetSelectedBaseBrush(FSlateBrush& Brush);
    class UCommonTextStyle* GetNormalTextStyle();
    void GetNormalPressedBrush(FSlateBrush& Brush);
    class UCommonTextStyle* GetNormalHoveredTextStyle();
    void GetNormalHoveredBrush(FSlateBrush& Brush);
    void GetNormalBaseBrush(FSlateBrush& Brush);
    void GetMaterialBrush(FSlateBrush& Brush);
    class UCommonTextStyle* GetDisabledTextStyle();
    void GetDisabledBrush(FSlateBrush& Brush);
    void GetCustomPadding(FMargin& OutCustomPadding);
    void GetButtonPadding(FMargin& OutButtonPadding);
}; // Size: 0x8B0

class UCommonCustomNavigation : public UBorder
{
    FCommonCustomNavigationOnNavigationEvent OnNavigationEvent;                       // 0x0328 (size: 0x10)
    bool OnCustomNavigationEvent(EUINavigation NavigationType);

}; // Size: 0x340

class UCommonDateTimeTextBlock : public UCommonTextBlock
{

    void SetTimespanValue(const FTimespan InTimespan);
    void SetDateTimeValue(const FDateTime InDateTime, bool bShowAsCountdown, float InRefreshDelay);
    void SetCountDownCompletionText(const FText InCompletionText);
    FDateTime GetDateTime();
}; // Size: 0x3E0

class UCommonGameViewportClient : public UGameViewportClient
{
}; // Size: 0x3E0

class UCommonGenericInputActionDataTable : public UDataTable
{
}; // Size: 0xB0

class UCommonHardwareVisibilityBorder : public UCommonBorder
{
    FGameplayTagQuery VisibilityQuery;                                                // 0x0348 (size: 0x48)
    ESlateVisibility VisibleType;                                                     // 0x0390 (size: 0x1)
    ESlateVisibility HiddenType;                                                      // 0x0391 (size: 0x1)

}; // Size: 0x3A0

class UCommonHierarchicalScrollBox : public UScrollBox
{
}; // Size: 0xE40

class UCommonInputActionDataProcessor : public UObject
{
}; // Size: 0x28

class UCommonLazyImage : public UImage
{
    FSlateBrush LoadingBackgroundBrush;                                               // 0x02D0 (size: 0xF0)
    FName MaterialTextureParamName;                                                   // 0x03C0 (size: 0x8)
    FCommonLazyImageBP_OnLoadingStateChanged BP_OnLoadingStateChanged;                // 0x03C8 (size: 0x10)
    void OnLoadGuardStateChangedDynamic(bool bIsLoading);

    void SetMaterialTextureParamName(FName TextureParamName);
    void SetBrushFromLazyTexture(const TSoftObjectPtr<UTexture2D>& LazyTexture, bool bMatchSize);
    void SetBrushFromLazyMaterial(const TSoftObjectPtr<UMaterialInterface>& LazyMaterial);
    void SetBrushFromLazyDisplayAsset(const TSoftObjectPtr<UObject>& LazyObject, bool bMatchTextureSize);
    bool IsLoading();
}; // Size: 0x400

class UCommonLazyWidget : public UWidget
{
    FSlateBrush LoadingBackgroundBrush;                                               // 0x0150 (size: 0xF0)
    class UUserWidget* Content;                                                       // 0x0240 (size: 0x8)
    FCommonLazyWidgetBP_OnLoadingStateChanged BP_OnLoadingStateChanged;               // 0x0278 (size: 0x10)
    void OnLoadGuardStateChangedDynamic(bool bIsLoading);

    void SetLazyContent(const TSoftClassPtr<UUserWidget> SoftWidget);
    bool IsLoading();
    class UUserWidget* GetContent();
}; // Size: 0x2D0

class UCommonListView : public UListView
{

    void SetEntrySpacing(float InEntrySpacing);
}; // Size: 0xD60

class UCommonLoadGuard : public UContentWidget
{
    FSlateBrush LoadingBackgroundBrush;                                               // 0x0170 (size: 0xF0)
    TEnumAsByte<EHorizontalAlignment> ThrobberAlignment;                              // 0x0260 (size: 0x1)
    FMargin ThrobberPadding;                                                          // 0x0264 (size: 0x10)
    FText LoadingText;                                                                // 0x0278 (size: 0x18)
    TSubclassOf<class UCommonTextStyle> TextStyle;                                    // 0x0290 (size: 0x8)
    FCommonLoadGuardBP_OnLoadingStateChanged BP_OnLoadingStateChanged;                // 0x0298 (size: 0x10)
    void OnLoadGuardStateChangedDynamic(bool bIsLoading);
    FSoftObjectPath SpinnerMaterialPath;                                              // 0x02A8 (size: 0x20)

    void SetLoadingText(const FText& InLoadingText);
    void SetIsLoading(bool bInIsLoading);
    void OnAssetLoaded__DelegateSignature(class UObject* Object);
    bool IsLoading();
    void BP_GuardAndLoadAsset(const TSoftObjectPtr<UObject>& InLazyAsset, const FBP_GuardAndLoadAssetOnAssetLoaded& OnAssetLoaded);
}; // Size: 0x2F0

class UCommonNumericTextBlock : public UCommonTextBlock
{
    FCommonNumericTextBlockOnInterpolationStartedEvent OnInterpolationStartedEvent;   // 0x0388 (size: 0x10)
    void OnInterpolationStarted(class UCommonNumericTextBlock* NumericTextBlock);
    FCommonNumericTextBlockOnInterpolationUpdatedEvent OnInterpolationUpdatedEvent;   // 0x0398 (size: 0x10)
    void OnInterpolationUpdated(class UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue);
    FCommonNumericTextBlockOnOutroEvent OnOutroEvent;                                 // 0x03A8 (size: 0x10)
    void OnOutro(class UCommonNumericTextBlock* NumericTextBlock);
    FCommonNumericTextBlockOnInterpolationEndedEvent OnInterpolationEndedEvent;       // 0x03B8 (size: 0x10)
    void OnInterpolationEnded(class UCommonNumericTextBlock* NumericTextBlock, const bool HadCompleted);
    float CurrentNumericValue;                                                        // 0x03C8 (size: 0x4)
    ECommonNumericType NumericType;                                                   // 0x03CC (size: 0x1)
    FCommonNumberFormattingOptions FormattingSpecification;                           // 0x03D0 (size: 0x14)
    float EaseOutInterpolationExponent;                                               // 0x03E4 (size: 0x4)
    float InterpolationUpdateInterval;                                                // 0x03E8 (size: 0x4)
    float PostInterpolationShrinkDuration;                                            // 0x03EC (size: 0x4)
    bool PerformSizeInterpolation;                                                    // 0x03F0 (size: 0x1)
    bool IsPercentage;                                                                // 0x03F1 (size: 0x1)

    void SetNumericType(ECommonNumericType InNumericType);
    void SetCurrentValue(const float NewValue);
    void OnOutro__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);
    void OnInterpolationUpdated__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue);
    void OnInterpolationStarted__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);
    void OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, const bool HadCompleted);
    bool IsInterpolatingNumericValue();
    void InterpolateToValue(const float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset);
    float GetTargetValue();
}; // Size: 0x430

class UCommonRichTextBlock : public URichTextBlock
{
    ERichTextInlineIconDisplayMode InlineIconDisplayMode;                             // 0x0930 (size: 0x1)
    bool bTintInlineIcon;                                                             // 0x0931 (size: 0x1)
    TSubclassOf<class UCommonTextStyle> DefaultTextStyleOverrideClass;                // 0x0938 (size: 0x8)
    float MobileTextBlockScale;                                                       // 0x0940 (size: 0x4)
    TSubclassOf<class UCommonTextScrollStyle> ScrollStyle;                            // 0x0948 (size: 0x8)
    bool bIsScrollingEnabled;                                                         // 0x0950 (size: 0x1)
    bool bDisplayAllCaps;                                                             // 0x0951 (size: 0x1)
    bool bAutoCollapseWithEmptyText;                                                  // 0x0952 (size: 0x1)

    void SetScrollingEnabled(bool bInIsScrollingEnabled);
}; // Size: 0x970

class UCommonRotator : public UCommonButtonBase
{
    FCommonRotatorOnRotated OnRotated;                                                // 0x1700 (size: 0x10)
    void OnRotated(int32 Value);
    class UCommonTextBlock* MyText;                                                   // 0x1728 (size: 0x8)

    void ShiftTextRight();
    void ShiftTextLeft();
    void SetSelectedItem(int32 InValue);
    void PopulateTextLabels(TArray<FText> Labels);
    FText GetSelectedText();
    int32 GetSelectedIndex();
    void BP_OnOptionsPopulated(int32 Count);
    void BP_OnOptionSelected(int32 Index);
}; // Size: 0x1750

class UCommonStyleSheet : public UDataAsset
{
    TArray<class UCommonStyleSheetTypeBase*> Properties;                              // 0x0030 (size: 0x10)
    TArray<class UCommonStyleSheet*> ImportedStyleSheets;                             // 0x0040 (size: 0x10)

}; // Size: 0x58

class UCommonStyleSheetTypeBase : public UObject
{
    bool bIsEnabled;                                                                  // 0x0028 (size: 0x1)

}; // Size: 0x30

class UCommonStyleSheetTypeColor : public UCommonStyleSheetTypeBase
{
    FLinearColor Color;                                                               // 0x0030 (size: 0x10)

}; // Size: 0x40

class UCommonStyleSheetTypeFontLetterSpacing : public UCommonStyleSheetTypeBase
{
    int32 LetterSpacing;                                                              // 0x0030 (size: 0x4)

}; // Size: 0x38

class UCommonStyleSheetTypeFontSize : public UCommonStyleSheetTypeBase
{
    int32 size;                                                                       // 0x0030 (size: 0x4)

}; // Size: 0x38

class UCommonStyleSheetTypeFontTypeface : public UCommonStyleSheetTypeBase
{
    FSlateFontInfo Typeface;                                                          // 0x0030 (size: 0x58)

}; // Size: 0x88

class UCommonStyleSheetTypeLineHeightPercentage : public UCommonStyleSheetTypeBase
{
    float LineHeightPercentage;                                                       // 0x0030 (size: 0x4)

}; // Size: 0x38

class UCommonStyleSheetTypeMarginBottom : public UCommonStyleSheetTypeBase
{
    float Bottom;                                                                     // 0x0030 (size: 0x4)

}; // Size: 0x38

class UCommonStyleSheetTypeMarginLeft : public UCommonStyleSheetTypeBase
{
    float Left;                                                                       // 0x0030 (size: 0x4)

}; // Size: 0x38

class UCommonStyleSheetTypeMarginRight : public UCommonStyleSheetTypeBase
{
    float Right;                                                                      // 0x0030 (size: 0x4)

}; // Size: 0x38

class UCommonStyleSheetTypeMarginTop : public UCommonStyleSheetTypeBase
{
    float Top;                                                                        // 0x0030 (size: 0x4)

}; // Size: 0x38

class UCommonStyleSheetTypeOpacity : public UCommonStyleSheetTypeBase
{
    float Opacity;                                                                    // 0x0030 (size: 0x4)

}; // Size: 0x38

class UCommonTabListWidgetBase : public UCommonUserWidget
{
    FCommonTabListWidgetBaseOnTabSelected OnTabSelected;                              // 0x02A0 (size: 0x10)
    void OnTabSelected(FName TabId);
    FCommonTabListWidgetBaseOnTabButtonCreation OnTabButtonCreation;                  // 0x02B0 (size: 0x10)
    void OnTabButtonCreation(FName TabId, class UCommonButtonBase* TabButton);
    FCommonTabListWidgetBaseOnTabButtonRemoval OnTabButtonRemoval;                    // 0x02C0 (size: 0x10)
    void OnTabButtonRemoval(FName TabId, class UCommonButtonBase* TabButton);
    FCommonTabListWidgetBaseOnTabListRebuilt OnTabListRebuilt;                        // 0x02D0 (size: 0x10)
    void OnTabListRebuilt();
    FDataTableRowHandle NextTabInputActionData;                                       // 0x02E0 (size: 0x10)
    FDataTableRowHandle PreviousTabInputActionData;                                   // 0x02F0 (size: 0x10)
    bool bAutoListenForInput;                                                         // 0x0300 (size: 0x1)
    bool bDeferRebuildingTabList;                                                     // 0x0301 (size: 0x1)
    TWeakObjectPtr<class UCommonAnimatedSwitcher> LinkedSwitcher;                     // 0x0304 (size: 0x8)
    class UCommonButtonGroupBase* TabButtonGroup;                                     // 0x0310 (size: 0x8)
    TMap<class FName, class FCommonRegisteredTabInfo> RegisteredTabsByID;             // 0x0320 (size: 0x50)

    void SetTabVisibility(FName TabNameID, ESlateVisibility NewVisibility);
    void SetTabInteractionEnabled(FName TabNameID, bool bEnable);
    void SetTabEnabled(FName TabNameID, bool bEnable);
    void SetListeningForInput(bool bShouldListen);
    void SetLinkedSwitcher(class UCommonAnimatedSwitcher* CommonSwitcher);
    bool SelectTabByID(FName TabNameID, bool bSuppressClickFeedback);
    bool RemoveTab(FName TabNameID);
    void RemoveAllTabs();
    bool RegisterTab(FName TabNameID, TSubclassOf<class UCommonButtonBase> ButtonWidgetType, class UWidget* ContentWidget, const int32 TabIndex);
    void OnTabSelected__DelegateSignature(FName TabId);
    void OnTabListRebuilt__DelegateSignature();
    void OnTabButtonRemoval__DelegateSignature(FName TabId, class UCommonButtonBase* TabButton);
    void OnTabButtonCreation__DelegateSignature(FName TabId, class UCommonButtonBase* TabButton);
    void HandleTabRemoval(FName TabNameID, class UCommonButtonBase* TabButton);
    void HandleTabCreation(FName TabNameID, class UCommonButtonBase* TabButton);
    void HandleTabButtonSelected(class UCommonButtonBase* SelectedTabButton, int32 ButtonIndex);
    void HandlePreviousTabInputAction(bool& bPassThrough);
    void HandlePreLinkedSwitcherChanged_BP();
    void HandlePostLinkedSwitcherChanged_BP();
    void HandleNextTabInputAction(bool& bPassThrough);
    FName GetTabIdAtIndex(int32 Index);
    int32 GetTabCount();
    class UCommonButtonBase* GetTabButtonBaseByID(FName TabNameID);
    FName GetSelectedTabId();
    class UCommonAnimatedSwitcher* GetLinkedSwitcher();
    FName GetActiveTab();
    void DisableTabWithReason(FName TabNameID, const FText& Reason);
}; // Size: 0x388

class UCommonTextBlock : public UTextBlock
{
    TSubclassOf<class UCommonTextStyle> Style;                                        // 0x0358 (size: 0x8)
    TSubclassOf<class UCommonTextScrollStyle> ScrollStyle;                            // 0x0360 (size: 0x8)
    class UCommonStyleSheet* StyleSheet;                                              // 0x0368 (size: 0x8)
    bool bIsScrollingEnabled;                                                         // 0x0370 (size: 0x1)
    bool bDisplayAllCaps;                                                             // 0x0371 (size: 0x1)
    bool bAutoCollapseWithEmptyText;                                                  // 0x0372 (size: 0x1)
    float MobileFontSizeMultiplier;                                                   // 0x0374 (size: 0x4)

    void SetWrapTextWidth(int32 InWrapTextAt);
    void SetTextCase(bool bUseAllCaps);
    void SetStyle(TSubclassOf<class UCommonTextStyle> InStyle);
    void SetScrollingEnabled(bool bInIsScrollingEnabled);
    void SetMargin(const FMargin& InMargin);
    void SetLineHeightPercentage(float InLineHeightPercentage);
    void ResetScrollState();
    FMargin GetMargin();
}; // Size: 0x390

class UCommonTextScrollStyle : public UObject
{
    float Speed;                                                                      // 0x0028 (size: 0x4)
    float StartDelay;                                                                 // 0x002C (size: 0x4)
    float EndDelay;                                                                   // 0x0030 (size: 0x4)
    float FadeInDelay;                                                                // 0x0034 (size: 0x4)
    float FadeOutDelay;                                                               // 0x0038 (size: 0x4)

}; // Size: 0x40

class UCommonTextStyle : public UObject
{
    FSlateFontInfo Font;                                                              // 0x0028 (size: 0x58)
    FLinearColor Color;                                                               // 0x0080 (size: 0x10)
    bool bUsesDropShadow;                                                             // 0x0090 (size: 0x1)
    FVector2D ShadowOffset;                                                           // 0x0098 (size: 0x10)
    FLinearColor ShadowColor;                                                         // 0x00A8 (size: 0x10)
    FMargin Margin;                                                                   // 0x00B8 (size: 0x10)
    FSlateBrush StrikeBrush;                                                          // 0x00D0 (size: 0xF0)
    float LineHeightPercentage;                                                       // 0x01C0 (size: 0x4)

    void GetStrikeBrush(FSlateBrush& OutStrikeBrush);
    void GetShadowOffset(FVector2D& OutShadowOffset);
    void GetShadowColor(FLinearColor& OutColor);
    void GetMargin(FMargin& OutMargin);
    float GetLineHeightPercentage();
    void GetFont(FSlateFontInfo& OutFont);
    void GetColor(FLinearColor& OutColor);
}; // Size: 0x1D0

class UCommonTileView : public UTileView
{
}; // Size: 0xD80

class UCommonTreeView : public UTreeView
{
}; // Size: 0xDC0

class UCommonUIActionRouterBase : public ULocalPlayerSubsystem
{
}; // Size: 0x158

class UCommonUIEditorSettings : public UObject
{
    TSoftClassPtr<UCommonTextStyle> TemplateTextStyle;                                // 0x0028 (size: 0x30)
    TSoftClassPtr<UCommonButtonStyle> TemplateButtonStyle;                            // 0x0058 (size: 0x30)
    TSoftClassPtr<UCommonBorderStyle> TemplateBorderStyle;                            // 0x0088 (size: 0x30)

}; // Size: 0xC0

class UCommonUIInputSettings : public UObject
{
    bool bLinkCursorToGamepadFocus;                                                   // 0x0028 (size: 0x1)
    int32 UIActionProcessingPriority;                                                 // 0x002C (size: 0x4)
    TArray<FUIInputAction> InputActions;                                              // 0x0030 (size: 0x10)
    TArray<FUIInputAction> ActionOverrides;                                           // 0x0040 (size: 0x10)
    FCommonAnalogCursorSettings AnalogCursorSettings;                                 // 0x0050 (size: 0x24)

}; // Size: 0x78

class UCommonUILibrary : public UBlueprintFunctionLibrary
{

    class UWidget* FindParentWidgetOfType(class UWidget* StartingWidget, TSubclassOf<class UWidget> Type);
}; // Size: 0x28

class UCommonUIRichTextData : public UObject
{
    class UDataTable* InlineIconSet;                                                  // 0x0028 (size: 0x8)

}; // Size: 0x30

class UCommonUISettings : public UObject
{
    bool bAutoLoadData;                                                               // 0x0028 (size: 0x1)
    TSoftObjectPtr<UObject> DefaultImageResourceObject;                               // 0x0030 (size: 0x30)
    TSoftObjectPtr<UMaterialInterface> DefaultThrobberMaterial;                       // 0x0060 (size: 0x30)
    TSoftClassPtr<UCommonUIRichTextData> DefaultRichTextDataClass;                    // 0x0090 (size: 0x30)
    TArray<FGameplayTag> PlatformTraits;                                              // 0x00C0 (size: 0x10)
    class UObject* DefaultImageResourceObjectInstance;                                // 0x00F8 (size: 0x8)
    class UMaterialInterface* DefaultThrobberMaterialInstance;                        // 0x0100 (size: 0x8)
    FSlateBrush DefaultThrobberBrush;                                                 // 0x0110 (size: 0xF0)
    class UCommonUIRichTextData* RichTextDataInstance;                                // 0x0200 (size: 0x8)

}; // Size: 0x210

class UCommonUISubsystemBase : public UGameInstanceSubsystem
{

    FSlateBrush GetInputActionButtonIcon(const FDataTableRowHandle& InputActionRowHandle, ECommonInputType InputType, const FName& GamepadName);
}; // Size: 0x40

class UCommonUIVisibilitySubsystem : public ULocalPlayerSubsystem
{
}; // Size: 0x88

class UCommonUserWidget : public UUserWidget
{
    bool bDisplayInActionBar;                                                         // 0x0278 (size: 0x1)
    bool bConsumePointerInput;                                                        // 0x0279 (size: 0x1)

    void SetConsumePointerInput(bool bInConsumePointerInput);
}; // Size: 0x2A0

class UCommonVideoPlayer : public UWidget
{
    class UMediaSource* Video;                                                        // 0x0150 (size: 0x8)
    class UMediaPlayer* MediaPlayer;                                                  // 0x0158 (size: 0x8)
    class UMediaTexture* MediaTexture;                                                // 0x0160 (size: 0x8)
    class UMaterial* VideoMaterial;                                                   // 0x0168 (size: 0x8)
    class UMediaSoundComponent* SoundComponent;                                       // 0x0170 (size: 0x8)
    FSlateBrush VideoBrush;                                                           // 0x0180 (size: 0xF0)

}; // Size: 0x2D0

class UCommonVisibilitySwitcher : public UOverlay
{
    ESlateVisibility ShownVisibility;                                                 // 0x0178 (size: 0x1)
    int32 ActiveWidgetIndex;                                                          // 0x017C (size: 0x4)
    bool bAutoActivateSlot;                                                           // 0x0180 (size: 0x1)
    bool bActivateFirstSlotOnAdding;                                                  // 0x0181 (size: 0x1)

    void SetActiveWidgetIndex(int32 Index);
    void SetActiveWidget(const class UWidget* Widget);
    void IncrementActiveWidgetIndex(bool bAllowWrapping);
    int32 GetActiveWidgetIndex();
    class UWidget* GetActiveWidget();
    void DecrementActiveWidgetIndex(bool bAllowWrapping);
    void DeactivateVisibleSlot();
    void ActivateVisibleSlot();
}; // Size: 0x1A0

class UCommonVisibilitySwitcherSlot : public UOverlaySlot
{
}; // Size: 0x68

class UCommonVisualAttachment : public USizeBox
{
    FVector2D ContentAnchor;                                                          // 0x01A0 (size: 0x10)

}; // Size: 0x1C0

class UCommonWidgetCarousel : public UPanelWidget
{
    int32 ActiveWidgetIndex;                                                          // 0x0168 (size: 0x4)
    FCommonWidgetCarouselOnCurrentPageIndexChanged OnCurrentPageIndexChanged;         // 0x0170 (size: 0x10)
    void OnCurrentPageIndexChanged(class UCommonWidgetCarousel* CarouselWidget, int32 CurrentPageIndex);

    void SetActiveWidgetIndex(int32 Index);
    void SetActiveWidget(class UWidget* Widget);
    void PreviousPage();
    void NextPage();
    class UWidget* GetWidgetAtIndex(int32 Index);
    int32 GetActiveWidgetIndex();
    void EndAutoScrolling();
    void BeginAutoScrolling(float ScrollInterval);
}; // Size: 0x1B0

class UCommonWidgetCarouselNavBar : public UWidget
{
    TSubclassOf<class UCommonButtonBase> ButtonWidgetType;                            // 0x0150 (size: 0x8)
    FMargin ButtonPadding;                                                            // 0x0158 (size: 0x10)
    class UCommonWidgetCarousel* LinkedCarousel;                                      // 0x0178 (size: 0x8)
    class UCommonButtonGroupBase* ButtonGroup;                                        // 0x0180 (size: 0x8)
    TArray<class UCommonButtonBase*> Buttons;                                         // 0x0188 (size: 0x10)

    void SetLinkedCarousel(class UCommonWidgetCarousel* CommonCarousel);
    void HandlePageChanged(class UCommonWidgetCarousel* CommonCarousel, int32 PageIndex);
    void HandleButtonClicked(class UCommonButtonBase* AssociatedButton, int32 ButtonIndex);
}; // Size: 0x198

class UCommonWidgetGroupBase : public UObject
{

    void RemoveWidget(class UWidget* InWidget);
    void RemoveAll();
    void AddWidget(class UWidget* InWidget);
}; // Size: 0x28

class UDEPRECATED_UCommonVisibilityWidgetBase : public UCommonBorder
{
    TMap<class FName, class bool> VisibilityControls;                                 // 0x0348 (size: 0x50)
    bool bShowForGamepad;                                                             // 0x0398 (size: 0x1)
    bool bShowForMouseAndKeyboard;                                                    // 0x0399 (size: 0x1)
    bool bShowForTouch;                                                               // 0x039A (size: 0x1)
    ESlateVisibility VisibleType;                                                     // 0x039B (size: 0x1)
    ESlateVisibility HiddenType;                                                      // 0x039C (size: 0x1)

    TArray<FName> GetRegisteredPlatforms();
}; // Size: 0x3A0

class ULoadGuardSlot : public UPanelSlot
{
    FMargin Padding;                                                                  // 0x0038 (size: 0x10)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;                            // 0x0048 (size: 0x1)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;                                // 0x0049 (size: 0x1)

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
}; // Size: 0x60

#endif
