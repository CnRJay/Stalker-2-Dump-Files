#ifndef UE4SS_SDK_ModioUI_HPP
#define UE4SS_SDK_ModioUI_HPP

#include "ModioUI_enums.hpp"

struct FModioCommonAuthParamsSettings
{
    FDataTableRowHandle BackInputAction;                                              // 0x0000 (size: 0x10)
    FDataTableRowHandle SubmitInputAction;                                            // 0x0010 (size: 0x10)
    FDataTableRowHandle CancelInputAction;                                            // 0x0020 (size: 0x10)
    FDataTableRowHandle TermsInputAction;                                             // 0x0030 (size: 0x10)
    FDataTableRowHandle PrivacyInputAction;                                           // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FModioCommonCodeInputTextBoxInputStyle : public FTextBlockStyle
{
    FSlateBrush CharacterBorderBrushBase;                                             // 0x03A0 (size: 0xF0)
    FSlateBrush CharacterBorderBrushFocused;                                          // 0x0490 (size: 0xF0)
    FMargin CharacterBorderPadding;                                                   // 0x0580 (size: 0x10)
    FSlateBrush FakeCaretBrush;                                                       // 0x0590 (size: 0xF0)
    TEnumAsByte<EHorizontalAlignment> FakeCaretHorizontalAlignment;                   // 0x0680 (size: 0x1)
    TEnumAsByte<EVerticalAlignment> FakeCaretVerticalAlignment;                       // 0x0681 (size: 0x1)
    FMargin CharacterPadding;                                                         // 0x0684 (size: 0x10)
    FMargin CharacterSpacing;                                                         // 0x0694 (size: 0x10)
    float MinimumCharacterWidth;                                                      // 0x06A4 (size: 0x4)

}; // Size: 0x6B0

struct FModioCommonCollectionParamsSettings
{
    FText ErrorsLabel;                                                                // 0x0000 (size: 0x18)
    FText InstalledModsLabel;                                                         // 0x0018 (size: 0x18)
    FText InstalledModsDescription;                                                   // 0x0030 (size: 0x18)
    FText DefaultFetchUpdateButtonLabel;                                              // 0x0048 (size: 0x18)
    FText SearchingFetchUpdateButtonLabel;                                            // 0x0060 (size: 0x18)
    FText OwnedModsLabel;                                                             // 0x0078 (size: 0x18)
    FText FilterButtonLabel;                                                          // 0x0090 (size: 0x18)
    FDataTableRowHandle CheckForUpdatesInputAction;                                   // 0x00A8 (size: 0x10)
    FDataTableRowHandle FilterInputAction;                                            // 0x00B8 (size: 0x10)

}; // Size: 0xC8

struct FModioCommonEmailAuthCodeParamsSettings
{
    FText TitleText;                                                                  // 0x0000 (size: 0x18)
    FText DescriptionText;                                                            // 0x0018 (size: 0x18)
    FText ValidationText;                                                             // 0x0030 (size: 0x18)
    FText BackButtonText;                                                             // 0x0048 (size: 0x18)
    FText SubmitButtonText;                                                           // 0x0060 (size: 0x18)
    FText CancelButtonText;                                                           // 0x0078 (size: 0x18)

}; // Size: 0x90

struct FModioCommonEmailAuthLoadingParamsSettings
{
    FText TitleText;                                                                  // 0x0000 (size: 0x18)
    FText DescriptionText;                                                            // 0x0018 (size: 0x18)
    FText CancelButtonText;                                                           // 0x0030 (size: 0x18)

}; // Size: 0x48

struct FModioCommonEmailAuthParamsSettings
{
    FText TitleText;                                                                  // 0x0000 (size: 0x18)
    FText DescriptionText;                                                            // 0x0018 (size: 0x18)
    FText ValidationText;                                                             // 0x0030 (size: 0x18)
    FText EmailTooltipText;                                                           // 0x0048 (size: 0x18)
    FText BackButtonText;                                                             // 0x0060 (size: 0x18)
    FText SubmitButtonText;                                                           // 0x0078 (size: 0x18)
    FText CancelButtonText;                                                           // 0x0090 (size: 0x18)

}; // Size: 0xA8

struct FModioCommonErrorWithRetryParamsSettings
{
    FText RetryButtonTextLabel;                                                       // 0x0000 (size: 0x18)
    FDataTableRowHandle RetryInputAction;                                             // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FModioCommonFeaturedParamsSettings
{
    TArray<FModioModCategoryParams> CategoryParams;                                   // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FModioCommonFilteredModListParams
{
    FText PreviousPageLabel;                                                          // 0x0000 (size: 0x18)
    FText NextPageLabel;                                                              // 0x0018 (size: 0x18)
    FText CurrentPageTextFormat;                                                      // 0x0030 (size: 0x18)
    FText TotalPagesTextFormat;                                                       // 0x0048 (size: 0x18)
    FText TotalModsTextFormat;                                                        // 0x0060 (size: 0x18)
    FText TotalSingleModTextFormat;                                                   // 0x0078 (size: 0x18)
    FDataTableRowHandle PreviousPageInputAction;                                      // 0x0090 (size: 0x10)
    FDataTableRowHandle NextPageInputAction;                                          // 0x00A0 (size: 0x10)

}; // Size: 0xB0

struct FModioCommonModBrowserParamsSettings
{
    FText CollectionViewTabText;                                                      // 0x0000 (size: 0x18)
    FText SearchResultsViewTabText;                                                   // 0x0018 (size: 0x18)
    FDataTableRowHandle PreviousTabInputAction;                                       // 0x0030 (size: 0x10)
    FDataTableRowHandle NextTabInputAction;                                           // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FModioCommonModDetailsParamsSettings
{
    FText SubscribeLabel;                                                             // 0x0000 (size: 0x18)
    FText UnsubscribeLabel;                                                           // 0x0018 (size: 0x18)
    FText CancelLabel;                                                                // 0x0030 (size: 0x18)
    FText RateUpLabel;                                                                // 0x0048 (size: 0x18)
    FText RateDownLabel;                                                              // 0x0060 (size: 0x18)
    FText ReportLabel;                                                                // 0x0078 (size: 0x18)
    FText FileSizeLabel;                                                              // 0x0090 (size: 0x18)
    FText LastUpdatedLabel;                                                           // 0x00A8 (size: 0x18)
    FText ReleaseDateLabel;                                                           // 0x00C0 (size: 0x18)
    FText SubscribersLabel;                                                           // 0x00D8 (size: 0x18)
    FText CreatedByLabel;                                                             // 0x00F0 (size: 0x18)
    FText TagsLabel;                                                                  // 0x0108 (size: 0x18)
    FText ModDescriptionLabel;                                                        // 0x0120 (size: 0x18)
    FText SimilarModsLabel;                                                           // 0x0138 (size: 0x18)
    FText DownloadingLabel;                                                           // 0x0150 (size: 0x18)
    FText ExtractingLabel;                                                            // 0x0168 (size: 0x18)
    FDataTableRowHandle SubscribeInputAction;                                         // 0x0180 (size: 0x10)
    FDataTableRowHandle CancelInputAction;                                            // 0x0190 (size: 0x10)
    FDataTableRowHandle RateUpInputAction;                                            // 0x01A0 (size: 0x10)
    FDataTableRowHandle RateDownInputAction;                                          // 0x01B0 (size: 0x10)
    FDataTableRowHandle OpenReportInputAction;                                        // 0x01C0 (size: 0x10)

}; // Size: 0x1D0

struct FModioCommonModEntryParamsSettings
{
    FText SubscribeLabel;                                                             // 0x0000 (size: 0x18)
    FText UnsubscribeLabel;                                                           // 0x0018 (size: 0x18)
    FText CancelLabel;                                                                // 0x0030 (size: 0x18)
    FText EnableLabel;                                                                // 0x0048 (size: 0x18)
    FText DisableLabel;                                                               // 0x0060 (size: 0x18)
    FText ForceUninstallLabel;                                                        // 0x0078 (size: 0x18)
    FText OpenModDetailsLabel;                                                        // 0x0090 (size: 0x18)
    FText OpenReportLabel;                                                            // 0x00A8 (size: 0x18)
    FText DownloadingLabel;                                                           // 0x00C0 (size: 0x18)
    FText ExtractingLabel;                                                            // 0x00D8 (size: 0x18)
    FText QueuedLabel;                                                                // 0x00F0 (size: 0x18)
    FText SpeedLabel;                                                                 // 0x0108 (size: 0x18)
    FText SizeLabel;                                                                  // 0x0120 (size: 0x18)
    FText ErrorLabel;                                                                 // 0x0138 (size: 0x18)
    FText InstalledByOthersLabel;                                                     // 0x0150 (size: 0x18)
    float DeselectionDelay;                                                           // 0x0168 (size: 0x4)
    FDataTableRowHandle SubscribeInputAction;                                         // 0x0170 (size: 0x10)
    FDataTableRowHandle CancelInputAction;                                            // 0x0180 (size: 0x10)
    FDataTableRowHandle SwitchEnabledInputAction;                                     // 0x0190 (size: 0x10)
    FDataTableRowHandle OpenModDetailsInputAction;                                    // 0x01A0 (size: 0x10)
    FDataTableRowHandle ForceUninstallInputAction;                                    // 0x01B0 (size: 0x10)

}; // Size: 0x1C0

struct FModioCommonModGalleryParamsSettings
{
    FDataTableRowHandle PreviousImageInputAction;                                     // 0x0000 (size: 0x10)
    FDataTableRowHandle NextImageInputAction;                                         // 0x0010 (size: 0x10)
    FDataTableRowHandle SubscribeInputAction;                                         // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FModioCommonModOperationTrackerParamsSettings
{
    FText OverallOperationPercentageLabelText;                                        // 0x0000 (size: 0x18)
    FText QueuedOperationNumberLabelText;                                             // 0x0018 (size: 0x18)
    FText SpeedLabelText;                                                             // 0x0030 (size: 0x18)

}; // Size: 0x48

struct FModioCommonQuickAccessParamsSettings
{
    FText MainGameMenuButtonLabel;                                                    // 0x0000 (size: 0x18)
    FText MyCollectionButtonLabel;                                                    // 0x0018 (size: 0x18)
    FText LogInButtonLabel;                                                           // 0x0030 (size: 0x18)
    FText LogOutButtonLabel;                                                          // 0x0048 (size: 0x18)
    FDataTableRowHandle MainGameMenuInputAction;                                      // 0x0060 (size: 0x10)
    FDataTableRowHandle AuthInputAction;                                              // 0x0070 (size: 0x10)
    FDataTableRowHandle MyCollectionInputAction;                                      // 0x0080 (size: 0x10)
    bool bShowMainGameMenu;                                                           // 0x0090 (size: 0x1)

}; // Size: 0x98

struct FModioCommonReportEmailParamsSettings
{
    FText DescriptionText;                                                            // 0x0000 (size: 0x18)
    FText ValidationText;                                                             // 0x0018 (size: 0x18)
    FText EmailTooltipText;                                                           // 0x0030 (size: 0x18)
    FText BackButtonText;                                                             // 0x0048 (size: 0x18)
    FText SubmitButtonText;                                                           // 0x0060 (size: 0x18)
    FText CancelButtonText;                                                           // 0x0078 (size: 0x18)

}; // Size: 0x90

struct FModioCommonReportMessageParamsSettings
{
    FText DescriptionText;                                                            // 0x0000 (size: 0x18)
    FText ValidationText;                                                             // 0x0018 (size: 0x18)
    int32 MessageLength;                                                              // 0x0030 (size: 0x4)
    FText MessageTooltipText;                                                         // 0x0038 (size: 0x18)
    FText BackButtonText;                                                             // 0x0050 (size: 0x18)
    FText SubmitButtonText;                                                           // 0x0068 (size: 0x18)
    FText CancelButtonText;                                                           // 0x0080 (size: 0x18)

}; // Size: 0x98

struct FModioCommonReportParamsSettings
{
    FDataTableRowHandle ProceedInputAction;                                           // 0x0008 (size: 0x10)
    FDataTableRowHandle BackInputAction;                                              // 0x0018 (size: 0x10)
    FDataTableRowHandle SubmitInputAction;                                            // 0x0028 (size: 0x10)
    FDataTableRowHandle CancelInputAction;                                            // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FModioCommonReportReasonParamsSettings
{
    FText DescriptionText;                                                            // 0x0000 (size: 0x18)
    FText ProceedButtonText;                                                          // 0x0018 (size: 0x18)
    FText CancelButtonText;                                                           // 0x0030 (size: 0x18)

}; // Size: 0x48

struct FModioCommonReportSummaryParamsSettings
{
    FText DescriptionText;                                                            // 0x0000 (size: 0x18)
    FText ReasonLabelText;                                                            // 0x0018 (size: 0x18)
    FText EmailLabelText;                                                             // 0x0030 (size: 0x18)
    FText DetailsLabelText;                                                           // 0x0048 (size: 0x18)
    FText BackButtonText;                                                             // 0x0060 (size: 0x18)
    FText SubmitButtonText;                                                           // 0x0078 (size: 0x18)
    FText CancelButtonText;                                                           // 0x0090 (size: 0x18)

}; // Size: 0xA8

struct FModioCommonSearchParamsSettings
{
    FText SearchTabTitle;                                                             // 0x0000 (size: 0x18)
    FText SearchButtonLabel;                                                          // 0x0018 (size: 0x18)
    FText ResetButtonLabel;                                                           // 0x0030 (size: 0x18)
    FText CloseButtonLabel;                                                           // 0x0048 (size: 0x18)
    FText KeywordsLabel;                                                              // 0x0060 (size: 0x18)
    FText CategoriesLabel;                                                            // 0x0078 (size: 0x18)
    FText EditSearchButtonLabel;                                                      // 0x0090 (size: 0x18)
    FText ShowingAllModsLabel;                                                        // 0x00A8 (size: 0x18)
    FDataTableRowHandle CloseInputAction;                                             // 0x00C0 (size: 0x10)
    FDataTableRowHandle SearchInputAction;                                            // 0x00D0 (size: 0x10)
    FDataTableRowHandle ResetInputAction;                                             // 0x00E0 (size: 0x10)
    FDataTableRowHandle EditSearchInputAction;                                        // 0x00F0 (size: 0x10)

}; // Size: 0x100

struct FModioCommonStorageSpaceTrackerParamsSettings
{
    FText UsedSpaceLabelText;                                                         // 0x0000 (size: 0x18)
    FText FreeSpaceLabelText;                                                         // 0x0018 (size: 0x18)
    FText TotalSpaceLabelText;                                                        // 0x0030 (size: 0x18)

}; // Size: 0x48

struct FModioCommonTabDescriptor
{
    FName TabId;                                                                      // 0x0000 (size: 0x8)
    FText TabText;                                                                    // 0x0008 (size: 0x18)
    TSubclassOf<class UModioCommonTabButtonBase> TabButtonType;                       // 0x0020 (size: 0x8)
    TSubclassOf<class UModioCommonTabButtonStyle> TabButtonStyle;                     // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FModioCommonTermsOfUseParamsSettings
{
    FText TitleText;                                                                  // 0x0000 (size: 0x18)
    FText ContentText;                                                                // 0x0018 (size: 0x18)
    FText SubmitButtonText;                                                           // 0x0030 (size: 0x18)
    FText CancelButtonText;                                                           // 0x0048 (size: 0x18)
    FText TermsButtonText;                                                            // 0x0060 (size: 0x18)
    FText PrivacyButtonText;                                                          // 0x0078 (size: 0x18)

}; // Size: 0x90

struct FModioCommonUserProfileWidgetParamsSettings
{
    FText ProfileButtonLabel;                                                         // 0x0000 (size: 0x18)
    FDataTableRowHandle ProfileInputAction;                                           // 0x0018 (size: 0x10)

}; // Size: 0x28

class IModioCommonModListViewInterface : public IInterface
{

    void SetModsFromModInfoList(const FModioModInfoList& InList, bool bAddToExisting);
    void SetModsFromModInfoArray(const TArray<FModioModInfo>& inArray, bool bAddToExisting);
    void SetModsFromModCollectionEntryArray(const TArray<FModioModCollectionEntry>& inArray, bool bAddToExisting);
    void SetModSelectionByID(FModioModID ModId);
    void SetFocusOnceListIsPopulated(bool bFocus);
    void RequestFullClearSelection(bool bResetPreviouslySelected);
    bool GetSelectedModItem(bool bIncludePreviouslySelected, class UObject*& OutModItem);
    bool GetEntryWidgetFromItem(class UObject* InItem, class UWidget*& OutEntryWidget);
    class UWidget* GetDesiredListFocusTarget(bool bIncludePreviouslySelected, bool bIncludeFirstItem);
}; // Size: 0x28

class IModioCommonTabButtonInterface : public IInterface
{

    void SetTabLabelInfo(const FModioCommonTabDescriptor& InTabLabelInfo);
}; // Size: 0x28

class UModioCommonActionBar : public UModioCommonActivatableWidget
{

    void MonitorPlayerActions(const class ULocalPlayer* NewPlayer);
    void HandlePlayerAdded(int32 PlayerIdx);
    void HandleDeferredDisplayUpdate();
    void HandleBoundActionsUpdated(bool bFromOwningPlayer);
    int32 GetNumInputActions();
}; // Size: 0x428

class UModioCommonActivatableWidget : public UCommonActivatableWidget
{
    bool bRoutedSetDataSource;                                                        // 0x03C8 (size: 0x1)
    FModioCommonActivatableWidgetOnFocusChanged OnFocusChanged;                       // 0x03E8 (size: 0x10)
    void OnCommonWidgetFocusChanged(bool bIsFocused);
    bool bAutoBindInputAction;                                                        // 0x03F8 (size: 0x1)
    bool bAutoFocusOnActivation;                                                      // 0x03F9 (size: 0x1)
    class UObject* DataSource;                                                        // 0x0400 (size: 0x8)

    void SetDataSource(class UObject* NewDataSource);
    void OnViewportResized(FVector2D NewViewportSize);
    void OnModioCommonActivatableWidgetActionFired__DelegateSignature();
    void OnDataSourceUpdated();
    void OnCommonWidgetFocusChanged__DelegateSignature(bool bIsFocused);
    FString GetRequestIdentifier();
    bool GetAutoFocusOnActivation();
    bool GetAutoBindInputAction();
    void FocusOnDesiredWidget();
    void ClearListeningInputActions();
    void ClearListeningInputAction(class UModioCommonButtonBase* Button);
    void BP_UnbindInputActions();
    void BP_SynchronizeProperties();
    void BP_ListenForInputAction(class UModioCommonButtonBase* Button, FDataTableRowHandle InputAction, const FText& DisplayName, const FBP_ListenForInputActionOnActionFired& OnActionFired);
    void BP_BindInputActions();
}; // Size: 0x428

class UModioCommonActivatableWidgetStack : public UCommonActivatableWidgetStack
{

    class UCommonActivatableWidget* BP_AddWidgetSmart(TSubclassOf<class UCommonActivatableWidget> ActivatableWidgetClass, bool bSkipIfAlreadyActive, bool bRemoveIfInStack);
}; // Size: 0x280

class UModioCommonAuthView : public UModioCommonAuthViewBase
{
    class UModioCommonWidgetSwitcher* AuthSwitcher;                                   // 0x0458 (size: 0x8)
    class UModioCommonTermsOfUseViewBase* TermsOfUseView;                             // 0x0460 (size: 0x8)
    class UModioCommonEmailAuthViewBase* EmailAuthView;                               // 0x0468 (size: 0x8)
    class UModioCommonEmailAuthLoadingViewBase* EmailAuthLoadingView;                 // 0x0470 (size: 0x8)
    class UModioCommonEmailAuthCodeViewBase* EmailAuthCodeView;                       // 0x0478 (size: 0x8)
    bool bAuthCancelled;                                                              // 0x0480 (size: 0x1)

    void SetShowTermsOfView(bool bShow);
    void OnTermsOfUseViewSubmitClicked();
    void OnTermsOfUseViewLinkClicked(FString URL);
    void OnTermsOfUseViewCancelClicked();
    void OnEmailAuthViewSubmitClicked(FString EmailAddress);
    void OnEmailAuthViewCancelClicked();
    void OnEmailAuthViewBackClicked();
    void OnEmailAuthLoadingViewCancelClicked();
    void OnEmailAuthCodeViewSubmitClicked(FString AuthCode);
    void OnEmailAuthCodeViewCancelClicked();
    void OnEmailAuthCodeViewBackClicked();
    void HandleEmailAuthenticated(FModioErrorCode ErrorCode);
    void HandleEmailAuthCodeSent(FModioErrorCode ErrorCode);
}; // Size: 0x488

class UModioCommonAuthViewBase : public UModioCommonActivatableWidget
{
    TSubclassOf<class UModioCommonTermsOfUseViewBase> TermsOfUseViewClass;            // 0x0428 (size: 0x8)
    TSubclassOf<class UModioCommonEmailAuthViewBase> EmailAuthViewClass;              // 0x0430 (size: 0x8)
    TSubclassOf<class UModioCommonEmailAuthLoadingViewBase> EmailAuthLoadingViewClass; // 0x0438 (size: 0x8)
    TSubclassOf<class UModioCommonEmailAuthCodeViewBase> EmailAuthCodeViewBaseClass;  // 0x0440 (size: 0x8)

}; // Size: 0x448

class UModioCommonBorder : public UCommonBorder
{

    FEventReply HandleOnMouseButtonDownEvent(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
}; // Size: 0x360

class UModioCommonBorderStyle : public UCommonBorderStyle
{
}; // Size: 0x120

class UModioCommonBoundActionBar : public UCommonBoundActionBar
{
}; // Size: 0x240

class UModioCommonBoundActionButton : public UCommonBoundActionButton
{
}; // Size: 0x1710

class UModioCommonButtonBase : public UCommonButtonBase
{
    FText OverrideActionDisplayName;                                                  // 0x16F0 (size: 0x18)
    bool bShouldTriggerButtonClickOnEnterOrGamepadAccept;                             // 0x1708 (size: 0x1)
    FText ButtonText;                                                                 // 0x1710 (size: 0x18)
    bool bFocusOnHover;                                                               // 0x1728 (size: 0x1)
    class UModioCommonTextBlock* TextBlock;                                           // 0x1730 (size: 0x8)
    class UModioCommonImage* Icon;                                                    // 0x1738 (size: 0x8)
    FModioCommonButtonBaseOnButtonBaseFocusReceived OnButtonBaseFocusReceived;        // 0x1740 (size: 0x10)
    void CommonButtonBaseClicked(class UCommonButtonBase* Button);
    FModioCommonButtonBaseOnButtonBaseFocusLost OnButtonBaseFocusLost;                // 0x1750 (size: 0x10)
    void CommonButtonBaseClicked(class UCommonButtonBase* Button);
    TSubclassOf<class UModioCommonButtonStyle> ModioDefaultStyleClass;                // 0x1778 (size: 0x8)
    UClass* ModioFocusedStyleClass;                                                   // 0x1780 (size: 0x8)

    void SetLabel(FText NewLabel);
    void SetButtonFocus();
}; // Size: 0x1790

class UModioCommonButtonStyle : public UCommonButtonStyle
{
    TSubclassOf<class UModioCommonImageStyle> NormalIconStyle;                        // 0x08B0 (size: 0x8)
    TSubclassOf<class UModioCommonImageStyle> FocusedIconStyle;                       // 0x08B8 (size: 0x8)

}; // Size: 0x8C0

class UModioCommonCheckBox : public UCheckBox
{
    TSubclassOf<class UModioCommonCheckBoxStyle> ModioStyle;                          // 0x0DF8 (size: 0x8)
    class UModioCommonTextBlock* LabelTextBlock;                                      // 0x0E18 (size: 0x8)
    FText LabelText;                                                                  // 0x0E20 (size: 0x18)

    void SetStyle(TSubclassOf<class UModioCommonCheckBoxStyle> InStyle);
    void SetLabel(const FText& InLabelText);
    void HandleOnCheckStateChanged(bool bIsChecked);
    FText GetLabelTextBlockText();
    FText GetLabel();
    FMargin GetCheckboxContentPadding();
}; // Size: 0xE40

class UModioCommonCheckBoxStyle : public UObject
{
    FCheckBoxStyle WidgetStyle;                                                       // 0x0030 (size: 0xC50)
    TSubclassOf<class UModioCommonTextStyle> LabelTextStyle;                          // 0x0C80 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> HoveredLabelTextStyle;                   // 0x0C88 (size: 0x8)
    FMargin ContentPadding;                                                           // 0x0C90 (size: 0x10)

}; // Size: 0xCA0

class UModioCommonCodeInputTextBox : public UWidget
{
    TSubclassOf<class UModioCommonCodeInputTextBoxStyle> ModioStyle;                  // 0x0150 (size: 0x8)
    ETextFlowDirection TextFlowDirection;                                             // 0x0158 (size: 0x1)
    FVirtualKeyboardOptions VirtualKeyboardOptions;                                   // 0x0159 (size: 0x1)
    EVirtualKeyboardTrigger VirtualKeyboardTrigger;                                   // 0x015A (size: 0x1)
    EVirtualKeyboardDismissAction VirtualKeyboardDismissAction;                       // 0x015B (size: 0x1)
    int32 NumberOfCharacters;                                                         // 0x015C (size: 0x4)
    FModioCommonCodeInputTextBoxOnCodeSubmitDynamic OnCodeSubmitDynamic;              // 0x0178 (size: 0x10)
    void OnCodeSubmitDynamic();

    void SetStyle(TSubclassOf<class UModioCommonCodeInputTextBoxStyle> InStyle);
    void SetCodeString(FString InCodeString);
    void OnCodeSubmitDynamic__DelegateSignature();
    FString GetCodeString();
}; // Size: 0x1A8

class UModioCommonCodeInputTextBoxStyle : public UObject
{
    FModioCommonCodeInputTextBoxInputStyle Style;                                     // 0x0030 (size: 0x6B0)

}; // Size: 0x6E0

class UModioCommonCollectionView : public UModioCommonModListBase
{
    TSubclassOf<class UModioCommonCollectionViewStyle> ModioStyle;                    // 0x0458 (size: 0x8)
    class UPanelWidget* NoResultsContainer;                                           // 0x0460 (size: 0x8)
    class UModioCommonTextBlock* NumOfDownloadingModsTextBlock;                       // 0x0468 (size: 0x8)
    class UModioCommonTextBlock* InstalledModsLabelTextBlock;                         // 0x0470 (size: 0x8)
    class UModioCommonTextBlock* InstalledModsDescriptionTextBlock;                   // 0x0478 (size: 0x8)
    class UModioCommonTextBlock* NumOfInstalledModsTextBlock;                         // 0x0480 (size: 0x8)
    class UModioCommonTextBlock* ErrorsTextBlock;                                     // 0x0488 (size: 0x8)
    class UModioCommonTextBlock* NumOfErrorsTextBlock;                                // 0x0490 (size: 0x8)
    class UListView* ModList;                                                         // 0x0498 (size: 0x8)
    class UModioCommonButtonBase* FetchUpdateButton;                                  // 0x04A0 (size: 0x8)
    class UModioCommonButtonBase* FilterButton;                                       // 0x04A8 (size: 0x8)
    class UModioCommonTextBlock* FilterCounterTextBlock;                              // 0x04B0 (size: 0x8)
    TSet<FModioModID> ModIDsWithErrors;                                               // 0x04B8 (size: 0x50)

    void UpdateMods();
    void UpdateInputBindings();
    void SortZToA(TArray<FModioModCollectionEntry>& ModListEntries);
    void SortSizeOnDisk(TArray<FModioModCollectionEntry>& ModListEntries);
    void SortRecentlyUpdated(TArray<FModioModCollectionEntry>& ModListEntries);
    void SortAToZ(TArray<FModioModCollectionEntry>& ModListEntries);
    void ShowSearchView();
    void SetStyle(TSubclassOf<class UModioCommonCollectionViewStyle> InStyle);
    void SetNoResultsVisibility(bool bVisible);
    void SetDefaultCategoryFilterParams(bool bUserAuthenticated);
    void OnFetchUpdatesClicked();
    void OnFetchExternalCompleted(FModioErrorCode ErrorCode);
    void ApplySortingAndFiltering(TArray<FModioModCollectionEntry>& ModListEntries);
}; // Size: 0x568

class UModioCommonCollectionViewStyle : public UObject
{
    TSubclassOf<class UModioCommonListViewStyle> ModListStyle;                        // 0x0028 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> NumOfDownloadingModsTextStyle;           // 0x0030 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> InstalledModsLabelTextStyle;             // 0x0038 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> InstalledModsDescriptionTextStyle;       // 0x0040 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> NumOfInstalledModsTextStyle;             // 0x0048 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> ErrorsTextStyle;                         // 0x0050 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> NumOfErrorsTextStyle;                    // 0x0058 (size: 0x8)
    TSubclassOf<class UModioCommonButtonStyle> FetchUpdateButtonStyle;                // 0x0060 (size: 0x8)
    TSubclassOf<class UModioCommonButtonStyle> FilterButtonStyle;                     // 0x0068 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> FilterCounterTextStyle;                  // 0x0070 (size: 0x8)

}; // Size: 0x78

class UModioCommonComboBoxString : public UComboBoxString
{
    TSubclassOf<class UModioCommonComboBoxStringStyle> ModioStyle;                    // 0x18E8 (size: 0x8)

    void SetStyle(TSubclassOf<class UModioCommonComboBoxStringStyle> InStyle);
}; // Size: 0x18F0

class UModioCommonComboBoxStringStyle : public UObject
{
    FComboBoxStyle WidgetStyle;                                                       // 0x0030 (size: 0x720)
    FTableRowStyle ItemStyle;                                                         // 0x0750 (size: 0xF50)
    FMargin ContentPadding;                                                           // 0x16A0 (size: 0x10)
    float MaxListHeight;                                                              // 0x16B0 (size: 0x4)
    bool HasDownArrow;                                                                // 0x16B4 (size: 0x1)
    bool EnableGamepadNavigationMode;                                                 // 0x16B5 (size: 0x1)
    FSlateFontInfo Font;                                                              // 0x16B8 (size: 0x58)
    FSlateColor ForegroundColor;                                                      // 0x1710 (size: 0x14)

}; // Size: 0x1730

class UModioCommonDialogInfo : public UObject
{
    FText TitleText;                                                                  // 0x0028 (size: 0x18)
    FText DialogText;                                                                 // 0x0040 (size: 0x18)
    uint8 ButtonsToDisplay;                                                           // 0x0058 (size: 0x1)
    FModioCommonDialogInfoOnDialogButtonClicked OnDialogButtonClicked;                // 0x0060 (size: 0x10)
    void OnDialogButtonClicked(EModioCommonDialogButtonType ClickedButtonType);
    class UObject* Owner;                                                             // 0x0088 (size: 0x8)

    void OnDialogButtonClicked__DelegateSignature(EModioCommonDialogButtonType ClickedButtonType);
    void HandleDialogButtonClicked(EModioCommonDialogButtonType ClickedButtonType);
}; // Size: 0x90

class UModioCommonDialogLibrary : public UBlueprintFunctionLibrary
{

    class UModioCommonDialogInfo* CreateUninstallDialogInfo(const FModioModInfo& ModInfo);
    class UModioCommonDialogInfo* CreateManualDialogInfo(const FText& TitleText, const FText& DialogText);
    class UModioCommonDialogInfo* CreateErrorDialogInfo(const FModioErrorCode& ErrorCode, const FText& TitleText);
    class UModioCommonDialogInfo* CreateConfirmUninstallDialogInfo(const FModioModInfo& ModInfo);
}; // Size: 0x28

class UModioCommonDialogMessageView : public UModioCommonDialogMessageViewBase
{
    class UModioCommonTextBlock* TitleTextBlock;                                      // 0x0428 (size: 0x8)
    class UModioCommonTextBlock* DescriptionTextBlock;                                // 0x0430 (size: 0x8)
    class UModioCommonButtonBase* BackButton;                                         // 0x0438 (size: 0x8)
    class UModioCommonButtonBase* CancelButton;                                       // 0x0440 (size: 0x8)
    class UModioCommonButtonBase* ConfirmButton;                                      // 0x0448 (size: 0x8)
    class UModioCommonButtonBase* OkButton;                                           // 0x0450 (size: 0x8)
    class UModioCommonButtonBase* ModDetailsButton;                                   // 0x0458 (size: 0x8)

    void SetButtonEnabledState(class UModioCommonButtonBase* Button, bool bEnabled);
    TMap<class EModioCommonDialogButtonType, class UModioCommonButtonBase*> GetButtons();
}; // Size: 0x460

class UModioCommonDialogMessageViewBase : public UModioCommonActivatableWidget
{
}; // Size: 0x428

class UModioCommonDialogView : public UModioCommonDialogViewBase
{
    class UModioCommonWidgetSwitcher* DialogSwitcher;                                 // 0x0428 (size: 0x8)
    TSubclassOf<class UModioCommonDialogMessageViewBase> DialogMessageViewClass;      // 0x0430 (size: 0x8)
    class UModioCommonDialogMessageViewBase* DialogMessageView;                       // 0x0438 (size: 0x8)

}; // Size: 0x440

class UModioCommonDialogViewBase : public UModioCommonActivatableWidget
{
}; // Size: 0x428

class UModioCommonDynamicImage : public UModioCommonImage
{
}; // Size: 0x2F0

class UModioCommonDynamicImageStyle : public UModioCommonImageStyle
{
    FSlateBrush ImageLoadingBrush;                                                    // 0x0210 (size: 0xF0)
    FSlateBrush ImageUnavailableBrush;                                                // 0x0300 (size: 0xF0)

}; // Size: 0x3F0

class UModioCommonEditableTextBox : public UEditableTextBox
{
    TSubclassOf<class UModioCommonEditableTextBoxStyle> ModioStyle;                   // 0x1270 (size: 0x8)
    FModioCommonEditableTextBoxOnEditableTextChanged OnEditableTextChanged;           // 0x1278 (size: 0x10)
    void OnEditableTextBoxChangedEvent(const FText& Text);

    void SetStyle(TSubclassOf<class UModioCommonEditableTextBoxStyle> InStyle);
    bool IsTextBoxFocused();
}; // Size: 0x12A0

class UModioCommonEditableTextBoxStyle : public UObject
{
    int32 MaxTextLength;                                                              // 0x0028 (size: 0x4)
    FText HintText;                                                                   // 0x0030 (size: 0x18)
    FSlateBrush NormalBackgroundBrush;                                                // 0x0050 (size: 0xF0)
    FSlateBrush HoveredBackgroundBrush;                                               // 0x0140 (size: 0xF0)
    FSlateBrush FocusedBackgroundBrush;                                               // 0x0230 (size: 0xF0)
    FSlateBrush ReadOnlyBackgroundBrush;                                              // 0x0320 (size: 0xF0)
    FMargin Padding;                                                                  // 0x0410 (size: 0x10)
    FSlateFontInfo Font;                                                              // 0x0420 (size: 0x58)
    FSlateColor ForegroundColor;                                                      // 0x0478 (size: 0x14)
    FSlateColor BackgroundColor;                                                      // 0x048C (size: 0x14)
    FSlateColor ReadOnlyForegroundColor;                                              // 0x04A0 (size: 0x14)
    FSlateColor FocusedForegroundColor;                                               // 0x04B4 (size: 0x14)
    FSlateBrush NormalBorderBrush;                                                    // 0x04D0 (size: 0xF0)
    FSlateBrush HoveredBorderBrush;                                                   // 0x05C0 (size: 0xF0)
    FSlateBrush ErrorBorderBrush;                                                     // 0x06B0 (size: 0xF0)
    bool bShowHintIcon;                                                               // 0x07A0 (size: 0x1)
    FSlateBrush HintIcon;                                                             // 0x07B0 (size: 0xF0)
    FMargin HintIconPadding;                                                          // 0x08A0 (size: 0x10)

}; // Size: 0x8B0

class UModioCommonEmailAuthCodeView : public UModioCommonEmailAuthCodeViewBase
{
    class UModioCommonTextBlock* TitleTextBlock;                                      // 0x0458 (size: 0x8)
    class UModioCommonTextBlock* DescriptionTextBlock;                                // 0x0460 (size: 0x8)
    class UModioCommonTextBlock* ValidationTextBlock;                                 // 0x0468 (size: 0x8)
    class UModioCommonButtonBase* BackButton;                                         // 0x0470 (size: 0x8)
    class UModioCommonButtonBase* SubmitButton;                                       // 0x0478 (size: 0x8)
    class UModioCommonButtonBase* CancelButton;                                       // 0x0480 (size: 0x8)
    class UModioCommonCodeInputTextBox* CodeInputTextBox;                             // 0x0488 (size: 0x8)
    class UEditableTextBox* CustomCodeInputTextBox;                                   // 0x0490 (size: 0x8)

    void SetValidationTextVisibility(ESlateVisibility Visbility);
    void SetIsBusy(bool bBusy);
    bool IsCodeValid(FString Code);
    void HandleOnSubmitClicked();
    void HandleOnCustomSubmitClicked(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    FString GetInputText();
}; // Size: 0x498

class UModioCommonEmailAuthCodeViewBase : public UModioCommonActivatableWidget
{
    FModioCommonEmailAuthCodeViewBaseOnBackClicked OnBackClicked;                     // 0x0428 (size: 0x10)
    void OnModioCommonEmailAuthCodeViewBackClicked();
    FModioCommonEmailAuthCodeViewBaseOnSubmitClicked OnSubmitClicked;                 // 0x0438 (size: 0x10)
    void OnModioCommonEmailAuthCodeViewSubmitClicked(FString AuthCode);
    FModioCommonEmailAuthCodeViewBaseOnCancelClicked OnCancelClicked;                 // 0x0448 (size: 0x10)
    void OnModioCommonEmailAuthCodeViewCancelClicked();

}; // Size: 0x458

class UModioCommonEmailAuthLoadingView : public UModioCommonEmailAuthLoadingViewBase
{
    class UModioCommonTextBlock* TitleTextBlock;                                      // 0x0438 (size: 0x8)
    class UModioCommonTextBlock* DescriptionTextBlock;                                // 0x0440 (size: 0x8)
    class UModioCommonButtonBase* CancelButton;                                       // 0x0448 (size: 0x8)

}; // Size: 0x450

class UModioCommonEmailAuthLoadingViewBase : public UModioCommonActivatableWidget
{
    FModioCommonEmailAuthLoadingViewBaseOnCancelClicked OnCancelClicked;              // 0x0428 (size: 0x10)
    void OnModioCommonEmailAuthLoadingViewCancelClicked();

}; // Size: 0x438

class UModioCommonEmailAuthView : public UModioCommonEmailAuthViewBase
{
    class UModioCommonTextBlock* TitleTextBlock;                                      // 0x0458 (size: 0x8)
    class UModioCommonTextBlock* DescriptionTextBlock;                                // 0x0460 (size: 0x8)
    class UModioCommonTextBlock* ValidationTextBlock;                                 // 0x0468 (size: 0x8)
    class UModioCommonEditableTextBox* EmailTextBox;                                  // 0x0470 (size: 0x8)
    class UModioCommonButtonBase* BackButton;                                         // 0x0478 (size: 0x8)
    class UModioCommonButtonBase* SubmitButton;                                       // 0x0480 (size: 0x8)
    class UModioCommonButtonBase* CancelButton;                                       // 0x0488 (size: 0x8)

    void SetValidationTextVisibility(ESlateVisibility Visbility);
    void OnEditableTextBoxTextChanged(const FText& InText);
    bool IsEmailValid(FString Email);
}; // Size: 0x490

class UModioCommonEmailAuthViewBase : public UModioCommonActivatableWidget
{
    FModioCommonEmailAuthViewBaseOnBackClicked OnBackClicked;                         // 0x0428 (size: 0x10)
    void OnModioCommonEmailAuthViewBackClicked();
    FModioCommonEmailAuthViewBaseOnCancelClicked OnCancelClicked;                     // 0x0438 (size: 0x10)
    void OnModioCommonEmailAuthViewCancelClicked();
    FModioCommonEmailAuthViewBaseOnSubmitClicked OnSubmitClicked;                     // 0x0448 (size: 0x10)
    void OnModioCommonEmailAuthViewSubmitClicked(FString EmailAddress);

}; // Size: 0x458

class UModioCommonErrorWithRetryParamsUI : public UObject
{
    FText ErrorTitleTextLabel;                                                        // 0x0028 (size: 0x18)
    FText ErrorDescriptionTextLabel;                                                  // 0x0040 (size: 0x18)

}; // Size: 0x58

class UModioCommonErrorWithRetryWidget : public UModioCommonActivatableWidget
{
    TSubclassOf<class UModioCommonErrorWithRetryWidgetStyle> ModioStyle;              // 0x0440 (size: 0x8)
    class UModioCommonImage* IconImage;                                               // 0x0448 (size: 0x8)
    class UModioCommonTextBlock* ErrorTitleTextBlock;                                 // 0x0450 (size: 0x8)
    class UModioCommonTextBlock* ErrorDescriptionTextBlock;                           // 0x0458 (size: 0x8)
    class UModioCommonButtonBase* RetryButton;                                        // 0x0460 (size: 0x8)
    FModioCommonErrorWithRetryWidgetRetryClickedDynamicDelegate RetryClickedDynamicDelegate; // 0x0480 (size: 0x10)
    void RetryClickedDynamicDelegate();

    void SetStyle(TSubclassOf<class UModioCommonErrorWithRetryWidgetStyle> InStyle);
    void RetryClickedDynamicDelegate__DelegateSignature();
}; // Size: 0x490

class UModioCommonErrorWithRetryWidgetStyle : public UObject
{
    TSubclassOf<class UModioCommonImageStyle> IconImageStyle;                         // 0x0028 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> ErrorTitleTextBlockStyle;                // 0x0030 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> ErrorDescriptionTextBlockStyle;          // 0x0038 (size: 0x8)
    TSubclassOf<class UModioCommonButtonStyle> RetryButtonStyle;                      // 0x0040 (size: 0x8)

}; // Size: 0x48

class UModioCommonExpandableArea : public UExpandableArea
{
    TSubclassOf<class UModioCommonExpandableAreaStyle> ModioStyle;                    // 0x04C0 (size: 0x8)
    TSubclassOf<class UModioCommonExpandableAreaStyle> CachedAppliedModioStyle;       // 0x04E0 (size: 0x8)

    void SetStyle(TSubclassOf<class UModioCommonExpandableAreaStyle> InStyle);
    void HandleOnFocusReceived();
    void HandleOnFocusLost();
}; // Size: 0x4F0

class UModioCommonExpandableAreaStyle : public UObject
{
    TSubclassOf<class UModioCommonTextStyle> NormalLabelTextStyle;                    // 0x0028 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> SelectedLabelTextStyle;                  // 0x0030 (size: 0x8)
    FExpandableAreaStyle Style;                                                       // 0x0040 (size: 0x200)
    FSlateBrush BorderBrush;                                                          // 0x0240 (size: 0xF0)
    FSlateColor BorderColor;                                                          // 0x0330 (size: 0x14)
    bool bIsExpandedByDefault;                                                        // 0x0344 (size: 0x1)
    float MaxHeight;                                                                  // 0x0348 (size: 0x4)
    FMargin HeaderPadding;                                                            // 0x034C (size: 0x10)
    FMargin AreaPadding;                                                              // 0x035C (size: 0x10)

}; // Size: 0x370

class UModioCommonFeaturedView : public UModioCommonModListBase
{
    TSubclassOf<class UModioCommonFeaturedViewStyle> ModioStyle;                      // 0x0458 (size: 0x8)
    class UModioCommonSearchResultsView* SearchResultsView;                           // 0x0460 (size: 0x8)
    FModioFilterParams PreviouslyAppliedFilter;                                       // 0x0468 (size: 0xA8)
    int64 OverriddenModsCount;                                                        // 0x0510 (size: 0x8)
    bool bWasFilterAppliedAtLeastOnce;                                                // 0x0518 (size: 0x1)

    void SetStyle(TSubclassOf<class UModioCommonFeaturedViewStyle> InStyle);
    void RefreshListByFilter(const FModioFilterParams& Filter);
    void RefreshListByCategoryName(FName InCategoryName);
    void RefreshList();
}; // Size: 0x520

class UModioCommonFeaturedViewStyle : public UObject
{
    TSubclassOf<class UModioCommonSearchResultsViewStyle> SearchResultsViewStyle;     // 0x0028 (size: 0x8)

}; // Size: 0x30

class UModioCommonFilteredModListView : public UModioCommonActivatableWidget
{
    TSubclassOf<class UModioCommonFilteredModListViewStyle> ModioStyle;               // 0x0510 (size: 0x8)
    class UListView* ModList;                                                         // 0x0518 (size: 0x8)
    class UPanelWidget* InitialScreenContainer;                                       // 0x0520 (size: 0x8)
    class UPanelWidget* NoResultsContainer;                                           // 0x0528 (size: 0x8)
    class UPanelWidget* PageNavigationContainer;                                      // 0x0530 (size: 0x8)
    class UModioCommonButtonBase* PreviousPageButton;                                 // 0x0538 (size: 0x8)
    class UModioCommonButtonBase* NextPageButton;                                     // 0x0540 (size: 0x8)
    class UModioCommonTextBlock* CurrentPageTextBlock;                                // 0x0548 (size: 0x8)
    class UModioCommonTextBlock* TotalPagesTextBlock;                                 // 0x0550 (size: 0x8)
    class UModioCommonTextBlock* TotalModsTextBlock;                                  // 0x0558 (size: 0x8)
    class UWidget* ModListLoader;                                                     // 0x0560 (size: 0x8)
    class UModioCommonErrorWithRetryWidget* ErrorWithRetryWidget;                     // 0x0568 (size: 0x8)
    FModioCommonFilteredModListViewOnSetModsFromModInfoListDynamicStarted OnSetModsFromModInfoListDynamicStarted; // 0x0588 (size: 0x10)
    void OnSetModsFromModInfoListDynamicStarted();
    FModioCommonFilteredModListViewOnSetModsFromModInfoListDynamicFinished OnSetModsFromModInfoListDynamicFinished; // 0x05B0 (size: 0x10)
    void OnSetModsFromModInfoListDynamicFinished();
    bool bHasSearchedBefore;                                                          // 0x05C0 (size: 0x1)
    int64 CurrentPageIndex;                                                           // 0x05C8 (size: 0x8)
    int64 TotalMods;                                                                  // 0x05D0 (size: 0x8)
    int64 PageSize;                                                                   // 0x05D8 (size: 0x8)
    int64 TotalPages;                                                                 // 0x05E0 (size: 0x8)

    void UpdateInputActions();
    void SetStyle(TSubclassOf<class UModioCommonFilteredModListViewStyle> InStyle);
    void SetPageNavigationVisibility(bool bIsVisible);
    void SetNoResultsVisibility(bool bIsVisible);
    void SetInitialScreenVisibility(bool bIsVisible);
    void OnSetModsFromModInfoListDynamicStarted__DelegateSignature();
    void OnSetModsFromModInfoListDynamicFinished__DelegateSignature();
    void HandlePreviousPageClicked();
    void HandleNextPageClicked();
    int32 GetNumItemsSelected();
    int32 GetNumItems();
}; // Size: 0x5E8

class UModioCommonFilteredModListViewStyle : public UObject
{
    TSubclassOf<class UModioCommonListViewStyle> ModListStyle;                        // 0x0028 (size: 0x8)
    TSubclassOf<class UModioCommonButtonStyle> PreviousPageButtonStyle;               // 0x0030 (size: 0x8)
    TSubclassOf<class UModioCommonButtonStyle> NextPageButtonStyle;                   // 0x0038 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> CurrentPageTextBlockStyle;               // 0x0040 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> TotalPagesTextBlockStyle;                // 0x0048 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> TotalModsTextBlockStyle;                 // 0x0050 (size: 0x8)

}; // Size: 0x58

class UModioCommonFilteringView : public UModioCommonActivatableWidget
{
    class UPanelWidget* FilteringTagsContainer;                                       // 0x0428 (size: 0x8)
    TSubclassOf<class UModioCommonModTagGroupList> TagGroupListClass;                 // 0x0430 (size: 0x8)

    void SynchronizeFilterParams(const TArray<FString>& PreviouslySelectedTagGroupValues);
    bool SetSelectedTagGroupValues(const TArray<FString>& TagGroupValues, bool bSelect);
    void ResetFiltering();
    bool GetSelectedTagGroupValues(TArray<FString>& OutSelectedTagGroupValues);
    FModioModCategoryParams GetFilterParamsWrapper();
    void AddModTagInfo(const FModioModTagInfo& ModTagInfo);
}; // Size: 0x438

class UModioCommonGenericModEntry : public UModioCommonModEntryBase
{
    TSubclassOf<class UModioCommonGenericModEntryStyle> ModioStyle;                   // 0x04B8 (size: 0x8)
    class UModioCommonBorder* Background;                                             // 0x04C0 (size: 0x8)
    class UPanelWidget* ForegroundContainer;                                          // 0x04C8 (size: 0x8)
    class UModioCommonDynamicImage* ModImage;                                         // 0x04D0 (size: 0x8)
    class UModioCommonRichTextBlock* ModNameTextBlock;                                // 0x04D8 (size: 0x8)
    class UModioCommonRichTextBlock* OperationLabelTextBlock;                         // 0x04E0 (size: 0x8)
    class UModioCommonRichTextBlock* OperationDetailsTextBlock;                       // 0x04E8 (size: 0x8)
    class UModioCommonRichTextBlock* SpeedLabelTextBlock;                             // 0x04F0 (size: 0x8)
    class UModioCommonRichTextBlock* SpeedDetailsTextBlock;                           // 0x04F8 (size: 0x8)
    class UModioCommonRichTextBlock* DownloadsLabelTextBlock;                         // 0x0500 (size: 0x8)
    class UModioCommonRichTextBlock* DownloadsDetailsTextBlock;                       // 0x0508 (size: 0x8)
    class UModioCommonRichTextBlock* SizeLabelTextBlock;                              // 0x0510 (size: 0x8)
    class UModioCommonRichTextBlock* SizeDetailsTextBlock;                            // 0x0518 (size: 0x8)
    class UModioCommonRichTextBlock* RatingPercentageTextBlock;                       // 0x0520 (size: 0x8)
    class UModioCommonRichTextBlock* RatingPositiveTextBlock;                         // 0x0528 (size: 0x8)
    class UModioCommonRichTextBlock* RatingNegativeTextBlock;                         // 0x0530 (size: 0x8)
    class UModioCommonButtonBase* SubscribeButton;                                    // 0x0538 (size: 0x8)
    class UModioCommonButtonBase* CancelButton;                                       // 0x0540 (size: 0x8)
    class UModioCommonButtonBase* EnableButton;                                       // 0x0548 (size: 0x8)
    class UModioCommonButtonBase* DisableButton;                                      // 0x0550 (size: 0x8)
    class UModioCommonButtonBase* OpenModDetailsButton;                               // 0x0558 (size: 0x8)
    class UModioCommonButtonBase* ForceUninstallButton;                               // 0x0560 (size: 0x8)
    class UModioCommonRichTextBlock* PercentProgressTextBlock;                        // 0x0568 (size: 0x8)
    class UModioCommonProgressBar* PercentProgressBar;                                // 0x0570 (size: 0x8)
    int32 MinDecimalsFileSize;                                                        // 0x0578 (size: 0x4)
    int32 MaxDecimalsFileSize;                                                        // 0x057C (size: 0x4)
    int32 MinDecimalsProgress;                                                        // 0x0580 (size: 0x4)
    int32 MaxDecimalsProgress;                                                        // 0x0584 (size: 0x4)
    int32 MinDecimalsSpeed;                                                           // 0x0588 (size: 0x4)
    int32 MaxDecimalsSpeed;                                                           // 0x058C (size: 0x4)

    void UpdateSpeed(FModioUnsigned64 DeltaBytes, double DeltaTime);
    void UpdateOperationProgressPercent(float InPercent);
    void UpdateOperationProgressBytes(FModioUnsigned64 Current, FModioUnsigned64 Total);
    void SwitchSpeedVisibility(bool bIsVisible);
    void SwitchForceUninstallButtonVisibility(bool bIsVisible);
    void SwitchEnableButtonVisibility(bool bIsVisible);
    void SwitchDisableButtonVisibility(bool bIsVisible);
    void SwitchCancelButtonVisibility(bool bIsVisible);
    void SetStyle(TSubclassOf<class UModioCommonGenericModEntryStyle> InStyle);
    void OnRatingSubmissionComplete(FModioErrorCode ErrorCode, EModioRating Rating);
    void HandleSwitchEnabledClicked();
    void HandleSubscribeClicked();
    void HandleOpenModDetailsClicked();
    void HandleForceUninstallClicked();
    void HandleCancelClicked();
}; // Size: 0x5A0

class UModioCommonGenericModEntryStateStyle : public UObject
{
    TSubclassOf<class UModioCommonModOperationTrackerUserWidgetStyle> ModOperationTrackerStyle; // 0x0028 (size: 0x8)
    TSubclassOf<class UModioCommonBorderStyle> BackgroundStyle;                       // 0x0030 (size: 0x8)
    TSubclassOf<class UModioCommonDynamicImageStyle> ModImageStyle;                   // 0x0038 (size: 0x8)
    TSubclassOf<class UModioCommonRichTextStyle> ModNameTextStyle;                    // 0x0040 (size: 0x8)
    TSubclassOf<class UModioCommonRichTextStyle> OperationLabelTextStyle;             // 0x0048 (size: 0x8)
    TSubclassOf<class UModioCommonRichTextStyle> OperationDetailsTextStyle;           // 0x0050 (size: 0x8)
    TSubclassOf<class UModioCommonRichTextStyle> SpeedLabelTextStyle;                 // 0x0058 (size: 0x8)
    TSubclassOf<class UModioCommonRichTextStyle> SpeedDetailsTextStyle;               // 0x0060 (size: 0x8)
    TSubclassOf<class UModioCommonRichTextStyle> DownloadsLabelTextStyle;             // 0x0068 (size: 0x8)
    TSubclassOf<class UModioCommonRichTextStyle> DownloadsDetailsTextStyle;           // 0x0070 (size: 0x8)
    TSubclassOf<class UModioCommonRichTextStyle> SizeLabelTextStyle;                  // 0x0078 (size: 0x8)
    TSubclassOf<class UModioCommonRichTextStyle> SizeDetailsTextStyle;                // 0x0080 (size: 0x8)
    TSubclassOf<class UModioCommonRichTextStyle> RatingPercentageTextStyle;           // 0x0088 (size: 0x8)
    TSubclassOf<class UModioCommonRichTextStyle> RatingPositiveTextStyle;             // 0x0090 (size: 0x8)
    TSubclassOf<class UModioCommonRichTextStyle> RatingNegativeTextStyle;             // 0x0098 (size: 0x8)
    TSubclassOf<class UModioCommonRichTextStyle> PercentProgressTextStyle;            // 0x00A0 (size: 0x8)
    TSubclassOf<class UModioCommonButtonStyle> SubscribeButtonStyle;                  // 0x00A8 (size: 0x8)
    TSubclassOf<class UModioCommonButtonStyle> CancelButtonStyle;                     // 0x00B0 (size: 0x8)
    TSubclassOf<class UModioCommonButtonStyle> EnableButtonStyle;                     // 0x00B8 (size: 0x8)
    TSubclassOf<class UModioCommonButtonStyle> DisableButtonStyle;                    // 0x00C0 (size: 0x8)
    TSubclassOf<class UModioCommonButtonStyle> OpenModDetailsButtonStyle;             // 0x00C8 (size: 0x8)
    TSubclassOf<class UModioCommonProgressBarStyle> PercentProgressBarStyle;          // 0x00D0 (size: 0x8)

}; // Size: 0xD8

class UModioCommonGenericModEntryStyle : public UObject
{
    TSubclassOf<class UModioCommonGenericModEntryStateStyle> NormalStyle;             // 0x0028 (size: 0x8)
    TSubclassOf<class UModioCommonGenericModEntryStateStyle> SelectedStyle;           // 0x0030 (size: 0x8)

}; // Size: 0x38

class UModioCommonImage : public UModioCommonImageBase
{
    TSubclassOf<class UModioCommonImageStyle> ModioStyle;                             // 0x02D0 (size: 0x8)
    class UCommonLazyImage* ImageFrame;                                               // 0x02D8 (size: 0x8)
    class UCommonLazyImage* Image;                                                    // 0x02E0 (size: 0x8)
    class UTexture2DDynamic* LoadedImageTexture;                                      // 0x02E8 (size: 0x8)

    void SetStyle(TSubclassOf<class UModioCommonImageStyle> InStyle);
    void BP_SynchronizeProperties();
}; // Size: 0x2F0

class UModioCommonImageBase : public UCommonUserWidget
{
    FModioCommonImageBaseOnImageLoadedDynamic OnImageLoadedDynamic;                   // 0x02B8 (size: 0x10)
    void OnImageLoadedDynamicDelegate(bool bSuccess);
    bool bLoadFailed;                                                                 // 0x02C8 (size: 0x1)
    bool bIsLoading;                                                                  // 0x02C9 (size: 0x1)

    void SetImageTexture(class UTexture2DDynamic* Texture);
    void OnStartLoadNewImage();
    void OnLoadNewImageError();
    void OnImageLoadedDynamicDelegate__DelegateSignature(bool bSuccess);
    void LoadImageFromLogo(FModioModID ModId, EModioLogoSize LogoSize);
    void LoadImageFromGallery(FModioModID ModId, EModioGallerySize GallerySize, int32 Index);
    void LoadImageFromFileAsync(FModioImageWrapper ImageLoader);
    void LoadImageFromAvatar(FModioModID ModId, EModioAvatarSize AvatarSize);
}; // Size: 0x2D0

class UModioCommonImageStyle : public UObject
{
    FSlateBrush ImageFrameBrush;                                                      // 0x0030 (size: 0xF0)
    FSlateBrush ImageBrush;                                                           // 0x0120 (size: 0xF0)

}; // Size: 0x210

class UModioCommonListView : public UCommonListView
{
    TSubclassOf<class UModioCommonListViewStyle> ModioStyle;                          // 0x0D60 (size: 0x8)

    void SetStyle(TSubclassOf<class UModioCommonListViewStyle> InStyle);
}; // Size: 0xD70

class UModioCommonListViewStyle : public UObject
{
    FTableViewStyle WidgetStyle;                                                      // 0x0030 (size: 0x100)
    FScrollBarStyle ScrollBarStyle;                                                   // 0x0130 (size: 0x890)
    TEnumAsByte<EOrientation> Orientation;                                            // 0x09C0 (size: 0x1)
    TEnumAsByte<ESelectionMode::Type> SelectionMode;                                  // 0x09C1 (size: 0x1)

}; // Size: 0x9D0

class UModioCommonModBrowser : public UModioCommonModBrowserBase
{
    class UWidget* NotificationController;                                            // 0x0450 (size: 0x8)
    class UModioCommonUserProfileBase* UserProfile;                                   // 0x0458 (size: 0x8)
    class UModioCommonTabListWidgetBase* TabList;                                     // 0x0460 (size: 0x8)
    class UModioCommonActivatableWidgetStack* ContentStack;                           // 0x0468 (size: 0x8)
    class UModioCommonActivatableWidgetStack* AuthStack;                              // 0x0470 (size: 0x8)
    class UModioCommonActivatableWidgetStack* ReportStack;                            // 0x0478 (size: 0x8)
    class UModioCommonActivatableWidgetStack* RightTabStack;                          // 0x0480 (size: 0x8)
    class UModioCommonActivatableWidgetStack* DialogStack;                            // 0x0488 (size: 0x8)
    class UModioCommonActionBar* ActionBar;                                           // 0x0490 (size: 0x8)

    bool ShowSearchView(EModioCommonSearchViewType SearchType, const FModioModCategoryParams& CurrentFilterParams);
    bool ShowQuickAccessView();
    bool ShowModDetailsView(const FModioModInfo& ModInfo);
    bool ShowFeaturedView();
    bool ShowCollectionView();
    void RemoveTab(FName TabNameID);
    bool HideSearchView();
    bool HideReportMod();
    bool HideQuickAccessView();
    bool HideModDetailsView();
    bool HideFeaturedView();
    bool HideCollectionView();
    void HandleViewChanged();
    bool GetViewFromTabNameID(FName TabNameID, TSubclassOf<class UModioCommonActivatableWidget>& OutView);
    void ClearTabs();
    bool AddTab(FName TabNameID, const FText& TabText, TSubclassOf<class UModioCommonActivatableWidget> ContentClass);
    bool AddEmptyTab(FName TabNameID, const FText& TabText);
    bool AddContentForTab(FName TabNameID, TSubclassOf<class UModioCommonActivatableWidget> ContentClass, class UModioCommonActivatableWidget*& OutContent);
}; // Size: 0x500

class UModioCommonModBrowserBase : public UModioCommonActivatableWidget
{
    TSubclassOf<class UModioCommonModBrowserBaseStyle> ModioStyle;                    // 0x0440 (size: 0x8)

    void SetStyle(TSubclassOf<class UModioCommonModBrowserBaseStyle> InStyle);
    bool IsUserAuthenticated();
}; // Size: 0x450

class UModioCommonModBrowserBaseStyle : public UObject
{
    TSubclassOf<class UModioCommonModDetailsViewBase> ModDetailsClass;                // 0x0028 (size: 0x8)
    TSubclassOf<class UModioCommonAuthViewBase> UserAuthClass;                        // 0x0030 (size: 0x8)
    TSubclassOf<class UModioCommonReportViewBase> ReportClass;                        // 0x0038 (size: 0x8)
    TSubclassOf<class UModioCommonDialogViewBase> DialogClass;                        // 0x0040 (size: 0x8)

}; // Size: 0x48

class UModioCommonModBrowserStyle : public UModioCommonModBrowserBaseStyle
{
    TSubclassOf<class UModioCommonTabButtonBase> TabButtonClass;                      // 0x0048 (size: 0x8)
    TSubclassOf<class UModioCommonTabButtonStyle> TabButtonStyle;                     // 0x0050 (size: 0x8)
    TSubclassOf<class UModioCommonModListBase> FeaturedViewClass;                     // 0x0058 (size: 0x8)
    TSubclassOf<class UModioCommonModListBase> CollectionViewClass;                   // 0x0060 (size: 0x8)
    TSubclassOf<class UModioCommonQuickAccessViewBase> QuickAccessViewClass;          // 0x0068 (size: 0x8)
    TSubclassOf<class UModioCommonSearchViewBase> SearchViewClass;                    // 0x0070 (size: 0x8)

}; // Size: 0x78

class UModioCommonModDetailsView : public UModioCommonModDetailsViewBase
{
    TSubclassOf<class UModioCommonModDetailsViewStyle> ModioStyle;                    // 0x04B0 (size: 0x8)
    class UModioCommonTextBlock* ModNameTextBlock;                                    // 0x04B8 (size: 0x8)
    class UModioCommonButtonBase* SubscribeButton;                                    // 0x04C0 (size: 0x8)
    class UModioCommonButtonBase* CancelButton;                                       // 0x04C8 (size: 0x8)
    class UModioCommonButtonBase* RateUpButton;                                       // 0x04D0 (size: 0x8)
    class UModioCommonButtonBase* RateDownButton;                                     // 0x04D8 (size: 0x8)
    class UModioCommonButtonBase* ReportButton;                                       // 0x04E0 (size: 0x8)
    class UButton* CollectionButton;                                                  // 0x04E8 (size: 0x8)
    class UModioCommonTextBlock* ModSummaryTextBlock;                                 // 0x04F0 (size: 0x8)
    class UModioCommonTextBlock* ModFullDescriptionLabelTextBlock;                    // 0x04F8 (size: 0x8)
    class UModioCommonTextBlock* ModFullDescriptionTextBlock;                         // 0x0500 (size: 0x8)
    class UHorizontalBox* OperationContainer;                                         // 0x0508 (size: 0x8)
    class UVerticalBox* ProgressBarContainer;                                         // 0x0510 (size: 0x8)
    class UHorizontalBox* StatusContainer;                                            // 0x0518 (size: 0x8)
    class UModioCommonCheckBox* InstalledCheckBox;                                    // 0x0520 (size: 0x8)
    class UModioCommonCheckBox* EnabledCheckBox;                                      // 0x0528 (size: 0x8)
    class UModioCommonTextBlock* OperationProgressLabelTextBlock;                     // 0x0530 (size: 0x8)
    class UModioCommonTextBlock* OperationProgressTextBlock;                          // 0x0538 (size: 0x8)
    class UModioCommonProgressBar* OperationProgressBar;                              // 0x0540 (size: 0x8)
    class UModioCommonTextBlock* FileSizeLabelTextBlock;                              // 0x0548 (size: 0x8)
    class UModioCommonTextBlock* FileSizeTextBlock;                                   // 0x0550 (size: 0x8)
    class UModioCommonTextBlock* LastUpdatedLabelTextBlock;                           // 0x0558 (size: 0x8)
    class UModioCommonTextBlock* LastUpdatedTextBlock;                                // 0x0560 (size: 0x8)
    class UModioCommonTextBlock* ReleaseDateLabelTextBlock;                           // 0x0568 (size: 0x8)
    class UModioCommonTextBlock* ReleaseDateTextBlock;                                // 0x0570 (size: 0x8)
    class UModioCommonTextBlock* SubscribersLabelTextBlock;                           // 0x0578 (size: 0x8)
    class UModioCommonTextBlock* SubscribersTextBlock;                                // 0x0580 (size: 0x8)
    class UModioCommonTextBlock* CreatedByLabelTextBlock;                             // 0x0588 (size: 0x8)
    class UModioCommonTextBlock* CreatedByTextBlock;                                  // 0x0590 (size: 0x8)
    class UModioCommonTextBlock* TagsLabelTextBlock;                                  // 0x0598 (size: 0x8)
    class UModioCommonModTagList* TagsWidget;                                         // 0x05A0 (size: 0x8)
    class UModioCommonModGalleryView* ModGalleryView;                                 // 0x05A8 (size: 0x8)
    class UModioCommonScrollBox* ModioCommonDescriptionScrollBox;                     // 0x05B0 (size: 0x8)
    class UModioCommonTextBlock* SpeedDetailsTextBlock;                               // 0x05B8 (size: 0x8)
    class UWidget* ModDetailsLoader;                                                  // 0x05C0 (size: 0x8)
    class UModioCommonErrorWithRetryWidget* ErrorWithRetryWidget;                     // 0x05C8 (size: 0x8)

    void UpdateSpeed(FModioUnsigned64 DeltaBytes, double DeltaTime);
    void UpdateOperationProgressPercent(float InPercent);
    void UpdateOperationProgressBytes(FModioUnsigned64 Current, FModioUnsigned64 Total);
    void UpdateInputActions();
    void ShowStatus();
    void ShowProgress();
    void SetStyle(TSubclassOf<class UModioCommonModDetailsViewStyle> InStyle);
    void OnRatingSubmissionComplete(FModioErrorCode ErrorCode, EModioRating SubmittedRating);
    void HideProgress();
    void HandleSwitchEnabledClicked();
    void HandleSubscribeClicked();
    void HandleReportClicked();
    void HandleRateUpClicked();
    void HandleRateDownClicked();
    void HandleCollectionClicked();
    void HandleCancelClicked();
    void ActivateTopButtonsInputBindings();
    void ActivateTagsInputBindings();
    void ActivateBottomButtonsInputBindings();
}; // Size: 0x5E0

class UModioCommonModDetailsViewBase : public UModioCommonActivatableWidget
{
    class UModioCommonModOperationTrackerUserWidget* ModOperationTrackerUserWidget;   // 0x0478 (size: 0x8)
    class UModioCommonModOperationTrackerWidget* ModOperationTrackerWidget;           // 0x0480 (size: 0x8)

    bool IsUserAuthenticated();
}; // Size: 0x490

class UModioCommonModDetailsViewStyle : public UObject
{
    TSubclassOf<class UModioCommonModGalleryViewStyle> ModGalleryViewStyle;           // 0x0028 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> ModNameTextStyle;                        // 0x0030 (size: 0x8)
    TSubclassOf<class UModioCommonButtonStyle> SubscribeButtonStyle;                  // 0x0038 (size: 0x8)
    TSubclassOf<class UModioCommonButtonStyle> CancelButtonStyle;                     // 0x0040 (size: 0x8)
    TSubclassOf<class UModioCommonButtonStyle> RateUpButtonStyle;                     // 0x0048 (size: 0x8)
    TSubclassOf<class UModioCommonButtonStyle> RateDownButtonStyle;                   // 0x0050 (size: 0x8)
    TSubclassOf<class UModioCommonButtonStyle> ReportButtonStyle;                     // 0x0058 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> ModSummaryTextStyle;                     // 0x0060 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> ModFullDescriptionLabelTextStyle;        // 0x0068 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> ModFullDescriptionTextStyle;             // 0x0070 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> DownloadProgressLabelTextStyle;          // 0x0078 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> DownloadProgressTextStyle;               // 0x0080 (size: 0x8)
    TSubclassOf<class UModioCommonProgressBarStyle> DownloadProgressBarStyle;         // 0x0088 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> StatsLabelTextStyle;                     // 0x0090 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> StatsTextStyle;                          // 0x0098 (size: 0x8)

}; // Size: 0xA0

class UModioCommonModEntryBase : public UModioCommonActivatableWidget
{
    class UModioCommonModOperationTrackerUserWidget* ModOperationTrackerUserWidget;   // 0x04A0 (size: 0x8)
    class UModioCommonModOperationTrackerWidget* ModOperationTrackerWidget;           // 0x04A8 (size: 0x8)

    void UpdateStyling(bool bIsListItemSelected);
    void UpdateInputActions();
    void SelectModListItem();
    bool IsUserAuthenticated();
    bool IsModListItemValid();
    bool IsModListItemSelected();
    void DeselectModListItem();
}; // Size: 0x4B8

class UModioCommonModGalleryEntry : public UModioCommonActivatableWidget
{
    TSubclassOf<class UModioCommonModGalleryEntryStyle> ModioStyle;                   // 0x0430 (size: 0x8)
    class UModioCommonDynamicImage* ModImage;                                         // 0x0438 (size: 0x8)

    void SetStyle(TSubclassOf<class UModioCommonModGalleryEntryStyle> InStyle);
}; // Size: 0x440

class UModioCommonModGalleryEntryStyle : public UObject
{
    TSubclassOf<class UModioCommonDynamicImageStyle> ModImageNormalStyle;             // 0x0028 (size: 0x8)
    TSubclassOf<class UModioCommonDynamicImageStyle> ModImageSelectedStyle;           // 0x0030 (size: 0x8)

}; // Size: 0x38

class UModioCommonModGalleryItem : public UObject
{
    FModioModInfo ModInfo;                                                            // 0x0028 (size: 0x1E0)
    int32 ImageGalleryIndex;                                                          // 0x0208 (size: 0x4)

}; // Size: 0x210

class UModioCommonModGalleryView : public UModioCommonActivatableWidget
{
    TSubclassOf<class UModioCommonModGalleryViewStyle> ModioStyle;                    // 0x0448 (size: 0x8)
    EModioGallerySize GallerySize;                                                    // 0x0450 (size: 0x1)
    EModioLogoSize LogoSize;                                                          // 0x0451 (size: 0x1)
    class UModioCommonListView* ImageNavButtons;                                      // 0x0458 (size: 0x8)
    class UModioCommonDynamicImage* SelectedGalleryImage;                             // 0x0460 (size: 0x8)
    class UModioCommonButtonBase* PreviousButton;                                     // 0x0468 (size: 0x8)
    class UModioCommonButtonBase* NextButton;                                         // 0x0470 (size: 0x8)
    class UWidget* ModGalleryLoader;                                                  // 0x0478 (size: 0x8)
    class UModioCommonErrorWithRetryWidget* ErrorWithRetryWidget;                     // 0x0480 (size: 0x8)

    void SetStyle(TSubclassOf<class UModioCommonModGalleryViewStyle> InStyle);
    void SetPreviousButtonVisibility(bool bIsVisible);
    void SetNextButtonVisibility(bool bIsVisible);
    void RefreshGallery();
    void GoToPreviousImage();
    void GoToNextImage();
    int32 GetSelectedImageGalleryIndex();
    int32 GetNumGalleryImages();
    void AddGalleryImage(int32 ImageGalleryIndex);
    void AddDefaultGalleryImage();
}; // Size: 0x490

class UModioCommonModGalleryViewStyle : public UObject
{
    TSubclassOf<class UModioCommonDynamicImageStyle> GalleryImageStyle;               // 0x0028 (size: 0x8)

}; // Size: 0x30

class UModioCommonModListBase : public UModioCommonActivatableWidget
{
}; // Size: 0x428

class UModioCommonModListView : public UModioCommonListView
{
    bool bFocusOnceListIsPopulatedRequested;                                          // 0x0E20 (size: 0x1)

}; // Size: 0xE30

class UModioCommonModOperationTrackerUserWidget : public UModioCommonActivatableWidget
{
    TSubclassOf<class UModioCommonModOperationTrackerUserWidgetStyle> ModioStyle;     // 0x0478 (size: 0x8)
    class UModioCommonModOperationTrackerWidget* Tracker;                             // 0x0480 (size: 0x8)
    class UModioCommonImage* IconImage;                                               // 0x0488 (size: 0x8)
    class UModioCommonTextBlock* ModTitleTextBlock;                                   // 0x0490 (size: 0x8)
    class UModioCommonTextBlock* OverallOperationPercentageLabelTextBlock;            // 0x0498 (size: 0x8)
    class UModioCommonTextBlock* OverallOperationPercentageTextBlock;                 // 0x04A0 (size: 0x8)
    class UModioCommonTextBlock* QueuedOperationNumberLabelTextBlock;                 // 0x04A8 (size: 0x8)
    class UModioCommonTextBlock* QueuedOperationNumberTextBlock;                      // 0x04B0 (size: 0x8)
    class UModioCommonTextBlock* SpeedLabelTextBlock;                                 // 0x04B8 (size: 0x8)
    class UModioCommonTextBlock* SpeedTextBlock;                                      // 0x04C0 (size: 0x8)
    class UModioCommonProgressBar* ModOperationProgressBar;                           // 0x04C8 (size: 0x8)
    int32 MinDecimalsProgress;                                                        // 0x04D0 (size: 0x4)
    int32 MaxDecimalsProgress;                                                        // 0x04D4 (size: 0x4)
    int32 MinDecimalsSpeed;                                                           // 0x04D8 (size: 0x4)
    int32 MaxDecimalsSpeed;                                                           // 0x04DC (size: 0x4)
    bool bTrackAnyMods;                                                               // 0x04E0 (size: 0x1)

    void UpdateQueuedOperationNumber();
    void SetTrackingModID(FModioModID ModId);
    void SetStyle(TSubclassOf<class UModioCommonModOperationTrackerUserWidgetStyle> InStyle);
    void OnModOperationTrackerSpeedUpdated(FModioUnsigned64 DeltaBytes, double DeltaTime);
    void OnModOperationTrackerProgressUpdated(FModioUnsigned64 Current, FModioUnsigned64 Total);
    int32 GetNumOfQueuedMods();
    bool GetCurrentDownloadingMod(FModioModCollectionEntry& OutDownloadingMod);
}; // Size: 0x4E8

class UModioCommonModOperationTrackerUserWidgetStyle : public UObject
{
    TSubclassOf<class UModioCommonImageStyle> IconImageStyle;                         // 0x0028 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> OverallOperationPercentageLabelTextStyle; // 0x0030 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> OverallOperationPercentageTextStyle;     // 0x0038 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> QueuedOperationNumberLabelTextStyle;     // 0x0040 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> QueuedOperationNumberTextStyle;          // 0x0048 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> SpeedLabelTextStyle;                     // 0x0050 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> SpeedTextStyle;                          // 0x0058 (size: 0x8)
    TSubclassOf<class UModioCommonProgressBarStyle> ModOperationProgressBarStyle;     // 0x0060 (size: 0x8)

}; // Size: 0x68

class UModioCommonModOperationTrackerWidget : public UTickableModioCommonWidget
{
    FModioCommonModOperationTrackerWidgetOnProgress OnProgress;                       // 0x01A8 (size: 0x10)
    void OnCommonModOperationTrackerProgress(FModioUnsigned64 Current, FModioUnsigned64 Total);
    FModioCommonModOperationTrackerWidgetOnSpeed OnSpeed;                             // 0x01D0 (size: 0x10)
    void OnCommonModOperationTrackerSpeed(FModioUnsigned64 DeltaBytes, double DeltaTime);

    void SetTrackingModID(FModioModID ModId);
    void SetTrackAnyMods(bool bInTrackAnyMods);
    void OnCommonModOperationTrackerSpeed__DelegateSignature(FModioUnsigned64 DeltaBytes, double DeltaTime);
    void OnCommonModOperationTrackerProgress__DelegateSignature(FModioUnsigned64 Current, FModioUnsigned64 Total);
    int64 GetPreviewTotal();
    int64 GetPreviewCurrent();
}; // Size: 0x208

class UModioCommonModTagEntry : public UModioCommonActivatableWidget
{
    class UModioCommonButtonBase* TagButton;                                          // 0x0440 (size: 0x8)
    class UModioCommonCheckBox* TagCheckbox;                                          // 0x0448 (size: 0x8)
    FString Tag;                                                                      // 0x0450 (size: 0x10)
    bool bAllowMultipleSelection;                                                     // 0x0460 (size: 0x1)

    void SetTag(FString InTag);
    void SetSelected(bool bIsSelected);
    void SetAllowMultipleSelection(bool bInAllowMultipleSelection);
    FString GetTag();
    bool GetSelected();
    bool GetAllowMultipleSelection();
}; // Size: 0x468

class UModioCommonModTagGroupList : public UModioCommonActivatableWidget
{
    TSubclassOf<class UModioCommonModTagEntry> TagEntryClass;                         // 0x0428 (size: 0x8)
    class UModioCommonTextBlock* TagGroupNameTextBlock;                               // 0x0430 (size: 0x8)
    class UPanelWidget* TagsContainer;                                                // 0x0438 (size: 0x8)

    void UpdateSelection(class UModioCommonModTagEntry* ModTagEntry, bool bIsSelected);
    void SetTagsGroup(const FModioModTagInfo& TagInfo);
    bool SetSelectedTagGroupValues(const TArray<FString>& TagGroupValues, bool bSelect);
    void ResetTagsSelection();
    bool GetSelectedTagGroupValues(TArray<FString>& OutSelectedTagGroupValues);
}; // Size: 0x440

class UModioCommonModTagList : public UModioCommonActivatableWidget
{
    TSubclassOf<class UModioCommonModTagEntry> TagEntryClass;                         // 0x0428 (size: 0x8)
    class UPanelWidget* TagsContainer;                                                // 0x0430 (size: 0x8)

    void SetTagsString(const TArray<FString>& Tags);
    void SetTags(const TArray<FModioModTag>& ModTags);
}; // Size: 0x438

class UModioCommonModTileView : public UModioCommonTileView
{
    bool bFocusOnceListIsPopulatedRequested;                                          // 0x0E40 (size: 0x1)

}; // Size: 0xE50

class UModioCommonMultiLineEditableTextBox : public UMultiLineEditableTextBox
{
    TSubclassOf<class UModioCommonMultiLineEditableTextBoxStyle> ModioStyle;          // 0x1268 (size: 0x8)
    FModioCommonMultiLineEditableTextBoxOnMultiLineEditableTextChanged OnMultiLineEditableTextChanged; // 0x1270 (size: 0x10)
    void OnMultiLineEditableTextBoxChangedEvent(const FText& Text);
    bool IsCaretMovedWhenGainFocus;                                                   // 0x1280 (size: 0x1)
    bool SelectAllTextWhenFocused;                                                    // 0x1281 (size: 0x1)
    bool RevertTextOnEscape;                                                          // 0x1282 (size: 0x1)
    bool ClearKeyboardFocusOnCommit;                                                  // 0x1283 (size: 0x1)
    bool SelectAllTextOnCommit;                                                       // 0x1284 (size: 0x1)
    bool AlwaysShowScrollbars;                                                        // 0x1285 (size: 0x1)
    bool AllowMultiLine;                                                              // 0x1286 (size: 0x1)
    EVirtualKeyboardTrigger VirtualKeyboardTrigger;                                   // 0x1287 (size: 0x1)
    ETextOverflowPolicy OverflowPolicy;                                               // 0x1288 (size: 0x1)

    void SetStyle(TSubclassOf<class UModioCommonMultiLineEditableTextBoxStyle> InStyle);
    bool IsTextBoxFocused();
}; // Size: 0x12A0

class UModioCommonMultiLineEditableTextBoxStyle : public UObject
{
    int32 MaxTextLength;                                                              // 0x0028 (size: 0x4)
    FText HintText;                                                                   // 0x0030 (size: 0x18)
    FSlateBrush NormalBackgroundBrush;                                                // 0x0050 (size: 0xF0)
    FSlateBrush HoveredBackgroundBrush;                                               // 0x0140 (size: 0xF0)
    FSlateBrush FocusedBackgroundBrush;                                               // 0x0230 (size: 0xF0)
    FSlateBrush ReadOnlyBackgroundBrush;                                              // 0x0320 (size: 0xF0)
    FMargin Padding;                                                                  // 0x0410 (size: 0x10)
    FTextBlockStyle TextStyle;                                                        // 0x0420 (size: 0x3A0)
    FSlateColor ForegroundColor;                                                      // 0x07C0 (size: 0x14)
    FSlateColor BackgroundColor;                                                      // 0x07D4 (size: 0x14)
    FSlateColor ReadOnlyForegroundColor;                                              // 0x07E8 (size: 0x14)
    FSlateColor FocusedForegroundColor;                                               // 0x07FC (size: 0x14)
    FSlateBrush NormalBorderBrush;                                                    // 0x0810 (size: 0xF0)
    FSlateBrush HoveredBorderBrush;                                                   // 0x0900 (size: 0xF0)
    FSlateBrush ErrorBorderBrush;                                                     // 0x09F0 (size: 0xF0)
    bool bShowHintIcon;                                                               // 0x0AE0 (size: 0x1)
    FSlateBrush HintIcon;                                                             // 0x0AF0 (size: 0xF0)
    FMargin HintIconPadding;                                                          // 0x0BE0 (size: 0x10)
    bool bApplyFocusedStyleInReadOnlyMode;                                            // 0x0BF0 (size: 0x1)

}; // Size: 0xC00

class UModioCommonNotificationController : public UModioCommonActivatableWidget
{
    int32 MaxNotificationsOnScreen;                                                   // 0x0430 (size: 0x4)
    TSubclassOf<class UUserWidget> ErrorNotificationClass;                            // 0x0438 (size: 0x8)
    TSubclassOf<class UUserWidget> SuccessNotificationClass;                          // 0x0440 (size: 0x8)
    class UPanelWidget* NotificationList;                                             // 0x0448 (size: 0x8)

    void OnNotificationExpired(class UWidget* Notification);
}; // Size: 0x4F0

class UModioCommonNotificationWidget : public UModioCommonNotificationWidgetBase
{
    TSubclassOf<class UModioCommonNotificationWidgetStyle> ModioStyle;                // 0x0450 (size: 0x8)
    class UModioCommonBorder* BackgroundBorder;                                       // 0x0458 (size: 0x8)
    class UModioCommonBorder* StatusBackgroundBorder;                                 // 0x0460 (size: 0x8)
    class UModioCommonImage* StatusIndicatorImage;                                    // 0x0468 (size: 0x8)
    class UModioCommonRichTextBlock* NotificationTitleTextBlock;                      // 0x0470 (size: 0x8)
    class UModioCommonRichTextBlock* NotificationMessageTextBlock;                    // 0x0478 (size: 0x8)
    FDateTime StartTime;                                                              // 0x0480 (size: 0x8)
    bool bDisplayStarted;                                                             // 0x0488 (size: 0x1)

    void SetStyle(TSubclassOf<class UModioCommonNotificationWidgetStyle> InStyle);
}; // Size: 0x490

class UModioCommonNotificationWidgetBase : public UModioCommonActivatableWidget
{
    FModioCommonNotificationWidgetBaseExpireDelegate ExpireDelegate;                  // 0x0438 (size: 0x10)
    void OnNotificationExpired(class UWidget* NotificationWidget);
    float ExpiryDuration;                                                             // 0x0448 (size: 0x4)

    class UWidget* CreateFromParams(TSubclassOf<class UWidget> NotificationClass, const FModioNotificationParams& Params, class UWidget* Outer);
}; // Size: 0x450

class UModioCommonNotificationWidgetStyle : public UObject
{
    TSubclassOf<class UModioCommonBorderStyle> BackgroundBorderStyle;                 // 0x0028 (size: 0x8)
    TSubclassOf<class UModioCommonBorderStyle> StatusBackgroundBorderStyle;           // 0x0030 (size: 0x8)
    TSubclassOf<class UModioCommonImageStyle> StatusIndicatorImageStyle;              // 0x0038 (size: 0x8)
    TSubclassOf<class UModioCommonRichTextStyle> NotificationTitleTextStyle;          // 0x0040 (size: 0x8)
    TSubclassOf<class UModioCommonRichTextStyle> NotificationMessageTextStyle;        // 0x0048 (size: 0x8)

}; // Size: 0x50

class UModioCommonProfileImage : public UModioCommonDynamicImage
{
}; // Size: 0x310

class UModioCommonProgressBar : public UProgressBar
{
    TSubclassOf<class UModioCommonProgressBarStyle> ModioStyle;                       // 0x0498 (size: 0x8)

    void SetStyle(TSubclassOf<class UModioCommonProgressBarStyle> InStyle);
}; // Size: 0x4A0

class UModioCommonProgressBarStyle : public UObject
{
    FProgressBarStyle Style;                                                          // 0x0030 (size: 0x2F0)

}; // Size: 0x320

class UModioCommonQuickAccessTabView : public UModioCommonQuickAccessViewBase
{
    TSubclassOf<class UModioCommonQuickAccessTabViewStyle> ModioStyle;                // 0x0460 (size: 0x8)
    class UModioCommonBorder* InternalBackgroundBorder;                               // 0x0468 (size: 0x8)
    class UModioCommonBorder* OverlayBackgroundBorder;                                // 0x0470 (size: 0x8)
    class UModioCommonProfileImage* ProfileImage;                                     // 0x0478 (size: 0x8)
    class UModioCommonTextBlock* UserNameTextBlock;                                   // 0x0480 (size: 0x8)
    class UModioCommonStorageSpaceTrackerUserWidget* StorageSpaceTrackerUserWidget;   // 0x0488 (size: 0x8)
    class UModioCommonModOperationTrackerUserWidget* ModOperationTrackerUserWidget;   // 0x0490 (size: 0x8)
    class UModioCommonButtonBase* MainGameMenuButton;                                 // 0x0498 (size: 0x8)
    class UModioCommonButtonBase* AuthButton;                                         // 0x04A0 (size: 0x8)
    class UModioCommonButtonBase* MyCollectionButton;                                 // 0x04A8 (size: 0x8)

    void SetStyle(TSubclassOf<class UModioCommonQuickAccessTabViewStyle> InStyle);
    void HandleOnMainGameMenuButtonClicked();
    void HandleOnCollectionButtonClicked();
    void HandleOnCloseButtonClicked();
    void HandleOnAuthButtonClicked();
}; // Size: 0x4B0

class UModioCommonQuickAccessTabViewStyle : public UObject
{
    TSubclassOf<class UModioCommonBorderStyle> InternalBackgroundBorderStyle;         // 0x0028 (size: 0x8)
    TSubclassOf<class UModioCommonBorderStyle> OverlayBackgroundBorderStyle;          // 0x0030 (size: 0x8)
    TSubclassOf<class UModioCommonDynamicImageStyle> ProfileImageStyle;               // 0x0038 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> UserNameTextStyle;                       // 0x0040 (size: 0x8)
    TSubclassOf<class UModioCommonStorageSpaceTrackerUserWidgetStyle> StorageSpaceTrackerStyle; // 0x0048 (size: 0x8)
    TSubclassOf<class UModioCommonModOperationTrackerUserWidgetStyle> ModOperationTrackerStyle; // 0x0050 (size: 0x8)
    TSubclassOf<class UModioCommonButtonStyle> MainGameMenuButtonStyle;               // 0x0058 (size: 0x8)
    TSubclassOf<class UModioCommonButtonStyle> AuthButtonStyle;                       // 0x0060 (size: 0x8)
    TSubclassOf<class UModioCommonButtonStyle> MyCollectionButtonStyle;               // 0x0068 (size: 0x8)

}; // Size: 0x70

class UModioCommonQuickAccessViewBase : public UModioCommonActivatableWidget
{

    bool IsUserAuthenticated();
}; // Size: 0x440

class UModioCommonReportEmailView : public UModioCommonReportEmailViewBase
{
    class UModioCommonTextBlock* TitleTextBlock;                                      // 0x0458 (size: 0x8)
    class UModioCommonTextBlock* DescriptionTextBlock;                                // 0x0460 (size: 0x8)
    class UModioCommonTextBlock* ValidationTextBlock;                                 // 0x0468 (size: 0x8)
    class UModioCommonEditableTextBox* EmailTextBox;                                  // 0x0470 (size: 0x8)
    class UModioCommonButtonBase* BackButton;                                         // 0x0478 (size: 0x8)
    class UModioCommonButtonBase* SubmitButton;                                       // 0x0480 (size: 0x8)
    class UModioCommonButtonBase* CancelButton;                                       // 0x0488 (size: 0x8)

    void SetValidationTextVisibility(ESlateVisibility EVisbility);
    void OnEditableTextBoxTextChanged(const FText& InText);
}; // Size: 0x490

class UModioCommonReportEmailViewBase : public UModioCommonActivatableWidget
{
    FModioCommonReportEmailViewBaseOnBackClicked OnBackClicked;                       // 0x0428 (size: 0x10)
    void OnModioCommonReportEmailViewBackClicked();
    FModioCommonReportEmailViewBaseOnCancelClicked OnCancelClicked;                   // 0x0438 (size: 0x10)
    void OnModioCommonReportEmailViewCancelClicked();
    FModioCommonReportEmailViewBaseOnSubmitClicked OnSubmitClicked;                   // 0x0448 (size: 0x10)
    void OnModioCommonReportEmailViewSubmitClicked(FString EmailAddress);

    void OnModioCommonReportEmailViewSubmitClicked__DelegateSignature(FString EmailAddress);
    void OnModioCommonReportEmailViewCancelClicked__DelegateSignature();
    void OnModioCommonReportEmailViewBackClicked__DelegateSignature();
    bool IsEmailValid(FString Email);
}; // Size: 0x458

class UModioCommonReportMessageView : public UModioCommonReportMessageViewBase
{
    class UModioCommonTextBlock* TitleTextBlock;                                      // 0x0458 (size: 0x8)
    class UModioCommonTextBlock* DescriptionTextBlock;                                // 0x0460 (size: 0x8)
    class UModioCommonTextBlock* CharactersTextBlock;                                 // 0x0468 (size: 0x8)
    class UModioCommonTextBlock* ValidationTextBlock;                                 // 0x0470 (size: 0x8)
    class UModioCommonTextBlock* ErrorMessageTextBlock;                               // 0x0478 (size: 0x8)
    class UModioCommonMultiLineEditableTextBox* MessageTextBox;                       // 0x0480 (size: 0x8)
    class UModioCommonButtonBase* BackButton;                                         // 0x0488 (size: 0x8)
    class UModioCommonButtonBase* SubmitButton;                                       // 0x0490 (size: 0x8)
    class UModioCommonButtonBase* CancelButton;                                       // 0x0498 (size: 0x8)

    void OnMultiLineTextBoxTextChanged(const FText& Text);
}; // Size: 0x4A0

class UModioCommonReportMessageViewBase : public UModioCommonActivatableWidget
{
    FModioCommonReportMessageViewBaseOnBackClicked OnBackClicked;                     // 0x0428 (size: 0x10)
    void OnModioCommonReportMessageViewBackClicked();
    FModioCommonReportMessageViewBaseOnCancelClicked OnCancelClicked;                 // 0x0438 (size: 0x10)
    void OnModioCommonReportMessageViewCancelClicked();
    FModioCommonReportMessageViewBaseOnSubmitClicked OnSubmitClicked;                 // 0x0448 (size: 0x10)
    void OnModioCommonReportMessageViewSubmitClicked(FString message);

}; // Size: 0x458

class UModioCommonReportReasonView : public UModioCommonReportReasonViewBase
{
    TSubclassOf<class UModioCommonCheckBoxStyle> ReportCheckBoxStyle;                 // 0x0448 (size: 0x8)
    class UModioCommonTextBlock* TitleTextBlock;                                      // 0x0450 (size: 0x8)
    class UModioCommonTextBlock* DescriptionTextBlock;                                // 0x0458 (size: 0x8)
    class UModioCommonCheckBox* DMCACheckBox;                                         // 0x0460 (size: 0x8)
    class UModioCommonCheckBox* NotWorkingCheckBox;                                   // 0x0468 (size: 0x8)
    class UModioCommonCheckBox* RudeContentCheckBox;                                  // 0x0470 (size: 0x8)
    class UModioCommonCheckBox* IllegalContentCheckBox;                               // 0x0478 (size: 0x8)
    class UModioCommonCheckBox* StolenContentCheckBox;                                // 0x0480 (size: 0x8)
    class UModioCommonCheckBox* FalseInformationCheckBox;                             // 0x0488 (size: 0x8)
    class UModioCommonCheckBox* OtherCheckBox;                                        // 0x0490 (size: 0x8)
    class UModioCommonButtonBase* ProceedButton;                                      // 0x0498 (size: 0x8)
    class UModioCommonButtonBase* CancelButton;                                       // 0x04A0 (size: 0x8)

}; // Size: 0x4B0

class UModioCommonReportReasonViewBase : public UModioCommonActivatableWidget
{
    FModioCommonReportReasonViewBaseOnProceedClicked OnProceedClicked;                // 0x0428 (size: 0x10)
    void OnModioCommonReportReasonViewProceedClicked(EModioReportType ReportType);
    FModioCommonReportReasonViewBaseOnCancelClicked OnCancelClicked;                  // 0x0438 (size: 0x10)
    void OnModioCommonReportReasonViewCancelClicked();

}; // Size: 0x448

class UModioCommonReportSummaryView : public UModioCommonReportSummaryViewBase
{
    class UModioCommonTextBlock* TitleTextBlock;                                      // 0x0458 (size: 0x8)
    class UModioCommonTextBlock* DescriptionTextBlock;                                // 0x0460 (size: 0x8)
    class UModioCommonTextBlock* ReasonLabelTextBlock;                                // 0x0468 (size: 0x8)
    class UModioCommonTextBlock* ReasonContentTextBlock;                              // 0x0470 (size: 0x8)
    class UModioCommonTextBlock* EmailLabelTextBlock;                                 // 0x0478 (size: 0x8)
    class UModioCommonTextBlock* EmailContentTextBlock;                               // 0x0480 (size: 0x8)
    class UModioCommonTextBlock* DetailsLabelTextBlock;                               // 0x0488 (size: 0x8)
    class UModioCommonMultiLineEditableTextBox* DetailsContentTextBlock;              // 0x0490 (size: 0x8)
    class UModioCommonButtonBase* BackButton;                                         // 0x0498 (size: 0x8)
    class UModioCommonButtonBase* SubmitButton;                                       // 0x04A0 (size: 0x8)
    class UModioCommonButtonBase* CancelButton;                                       // 0x04A8 (size: 0x8)

}; // Size: 0x4B0

class UModioCommonReportSummaryViewBase : public UModioCommonActivatableWidget
{
    FModioCommonReportSummaryViewBaseOnBackClicked OnBackClicked;                     // 0x0428 (size: 0x10)
    void OnModioCommonReportSummaryViewBackClicked();
    FModioCommonReportSummaryViewBaseOnCancelClicked OnCancelClicked;                 // 0x0438 (size: 0x10)
    void OnModioCommonReportSummaryViewCancelClicked();
    FModioCommonReportSummaryViewBaseOnSubmitClicked OnSubmitClicked;                 // 0x0448 (size: 0x10)
    void OnModioCommonReportSummaryViewSubmitClicked();

    void SetReportParams(const FModioReportParams& ReportParams);
    void OnModioCommonReportSummaryViewSubmitClicked__DelegateSignature();
    void OnModioCommonReportSummaryViewCancelClicked__DelegateSignature();
    void OnModioCommonReportSummaryViewBackClicked__DelegateSignature();
}; // Size: 0x458

class UModioCommonReportView : public UModioCommonReportViewBase
{
    class UModioCommonWidgetSwitcher* ReportSwitcher;                                 // 0x0428 (size: 0x8)
    TSubclassOf<class UModioCommonReportReasonViewBase> ReportReasonViewClass;        // 0x0430 (size: 0x8)
    TSubclassOf<class UModioCommonReportEmailViewBase> ReportEmailViewClass;          // 0x0438 (size: 0x8)
    TSubclassOf<class UModioCommonReportMessageViewBase> ReportMessageViewClass;      // 0x0440 (size: 0x8)
    TSubclassOf<class UModioCommonReportSummaryViewBase> ReportSummaryViewClass;      // 0x0448 (size: 0x8)
    FModioReportParams ReportParams;                                                  // 0x0450 (size: 0x58)
    class UModioCommonReportReasonViewBase* ReportReasonView;                         // 0x04A8 (size: 0x8)
    class UModioCommonReportEmailViewBase* ReportEmailView;                           // 0x04B0 (size: 0x8)
    class UModioCommonReportMessageViewBase* ReportMessageView;                       // 0x04B8 (size: 0x8)
    class UModioCommonReportSummaryViewBase* ReportSummaryView;                       // 0x04C0 (size: 0x8)

    void OnReportSummaryViewSubmitClicked();
    void OnReportSummaryViewCancelClicked();
    void OnReportSummaryViewBackClicked();
    void OnReportReasonViewProceedClicked(EModioReportType Type);
    void OnReportReasonViewCancelClicked();
    void OnReportMessageViewSubmitClicked(FString message);
    void OnReportMessageViewCancelClicked();
    void OnReportMessageViewBackClicked();
    void OnReportEmailViewSubmitClicked(FString Email);
    void OnReportEmailViewCancelClicked();
    void OnReportEmailViewBackClicked();
    void HandleReportSubmit(FModioErrorCode ErrorCode);
}; // Size: 0x4C8

class UModioCommonReportViewBase : public UModioCommonActivatableWidget
{
}; // Size: 0x428

class UModioCommonRichTextBlock : public UCommonRichTextBlock
{
    TSubclassOf<class UModioCommonRichTextStyle> ModioStyle;                          // 0x0968 (size: 0x8)

    void SetStyle(TSubclassOf<class UModioCommonRichTextStyle> InStyle);
}; // Size: 0xAC0

class UModioCommonRichTextStyle : public UCommonTextStyle
{
    FSlateBrush ImageBrush;                                                           // 0x01D0 (size: 0xF0)
    EModioCommonRichTextStyleTextImageOrder TextImageOrder;                           // 0x02C0 (size: 0x1)
    FMargin ImagePadding;                                                             // 0x02C4 (size: 0x10)
    FMargin TextPadding;                                                              // 0x02D4 (size: 0x10)
    FSlateChildSize ImageSize;                                                        // 0x02E4 (size: 0x8)
    FSlateChildSize TextSize;                                                         // 0x02EC (size: 0x8)
    TEnumAsByte<EHorizontalAlignment> ImageHorizontalAlignment;                       // 0x02F4 (size: 0x1)
    TEnumAsByte<EVerticalAlignment> ImageVerticalAlignment;                           // 0x02F5 (size: 0x1)
    TEnumAsByte<EHorizontalAlignment> TextHorizontalAlignment;                        // 0x02F6 (size: 0x1)
    TEnumAsByte<EVerticalAlignment> TextVerticalAlignment;                            // 0x02F7 (size: 0x1)

}; // Size: 0x300

class UModioCommonScrollBar : public UScrollBar
{
    TSubclassOf<class UModioCommonScrollBarStyle> ModioStyle;                         // 0x0A18 (size: 0x8)

    void SetStyle(TSubclassOf<class UModioCommonScrollBarStyle> InStyle);
}; // Size: 0xA20

class UModioCommonScrollBarStyle : public UObject
{
    FScrollBarStyle Style;                                                            // 0x0030 (size: 0x890)
    bool bAlwaysShowScrollbar;                                                        // 0x08C0 (size: 0x1)
    bool bAlwaysShowScrollbarTrack;                                                   // 0x08C1 (size: 0x1)
    TEnumAsByte<EOrientation> Orientation;                                            // 0x08C2 (size: 0x1)
    FVector2D Thickness;                                                              // 0x08C8 (size: 0x10)
    FMargin Padding;                                                                  // 0x08D8 (size: 0x10)

}; // Size: 0x8F0

class UModioCommonScrollBox : public UScrollBox
{
    TSubclassOf<class UModioCommonScrollBoxStyle> ModioStyle;                         // 0x0E38 (size: 0x8)
    class UWidgetNavigation* UserDefinedNavigation;                                   // 0x0E40 (size: 0x8)

    void UpdateNavigationData(int32 PendingScrollOffset);
    void SetStyle(TSubclassOf<class UModioCommonScrollBoxStyle> InStyle);
    void OnUserScrolledHandle(float CurrentOffset);
    class UWidget* HandleCustomBoundaryNavigation(EUINavigation InNavigation);
}; // Size: 0xE60

class UModioCommonScrollBoxStyle : public UObject
{
    FScrollBoxStyle Style;                                                            // 0x0030 (size: 0x3D0)
    TSubclassOf<class UModioCommonScrollBarStyle> ScrollBarStyle;                     // 0x0400 (size: 0x8)
    ESlateVisibility ScrollBarVisibility;                                             // 0x0408 (size: 0x1)
    EConsumeMouseWheel ConsumeMouseWheel;                                             // 0x0409 (size: 0x1)
    bool AllowOverscroll;                                                             // 0x040A (size: 0x1)
    bool BackPadScrolling;                                                            // 0x040B (size: 0x1)
    bool FrontPadScrolling;                                                           // 0x040C (size: 0x1)
    bool bAnimateWheelScrolling;                                                      // 0x040D (size: 0x1)
    EDescendantScrollDestination NavigationDestination;                               // 0x040E (size: 0x1)
    float NavigationScrollPadding;                                                    // 0x0410 (size: 0x4)
    EScrollWhenFocusChanges ScrollWhenFocusChanges;                                   // 0x0414 (size: 0x1)
    bool bAllowRightClickDragScrolling;                                               // 0x0415 (size: 0x1)
    float WheelScrollMultiplier;                                                      // 0x0418 (size: 0x4)
    bool bScrollByNavigationInput;                                                    // 0x041C (size: 0x1)
    int32 NavigationScrollOffsetStep;                                                 // 0x0420 (size: 0x4)
    float NavigationScrollOffsetSpeed;                                                // 0x0424 (size: 0x4)

}; // Size: 0x430

class UModioCommonSearchResultsView : public UModioCommonModListBase
{
    TSubclassOf<class UModioCommonSearchResultsViewStyle> ModioStyle;                 // 0x0428 (size: 0x8)
    class UModioCommonFilteredModListView* FilteredModListView;                       // 0x0430 (size: 0x8)
    class UModioCommonTextBlock* KeywordsLabelTextBlock;                              // 0x0438 (size: 0x8)
    class UModioCommonTextBlock* KeywordsDetailsTextBlock;                            // 0x0440 (size: 0x8)
    class UModioCommonTextBlock* CategoriesLabelTextBlock;                            // 0x0448 (size: 0x8)
    class UModioCommonModTagList* CategoriesList;                                     // 0x0450 (size: 0x8)
    class UModioCommonButtonBase* EditSearchButton;                                   // 0x0458 (size: 0x8)
    class UModioCommonTextBlock* FilterCounterTextBlock;                              // 0x0460 (size: 0x8)
    FModioModCategoryParams AppliedFilterParams;                                      // 0x0468 (size: 0x60)
    bool bWasEverPopulated;                                                           // 0x04C8 (size: 0x1)

    void ShowSearchView();
    void SetStyle(TSubclassOf<class UModioCommonSearchResultsViewStyle> InStyle);
}; // Size: 0x4D0

class UModioCommonSearchResultsViewStyle : public UObject
{
    TSubclassOf<class UModioCommonFilteredModListViewStyle> FilteredModListViewStyle; // 0x0028 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> KeywordsLabelTextStyle;                  // 0x0030 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> KeywordsDetailsTextStyle;                // 0x0038 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> CategoriesLabelTextStyle;                // 0x0040 (size: 0x8)
    TSubclassOf<class UModioCommonButtonStyle> EditSearchButtonStyle;                 // 0x0048 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> FilterCounterTextStyle;                  // 0x0050 (size: 0x8)

}; // Size: 0x58

class UModioCommonSearchTabView : public UModioCommonSearchViewBase
{
    TSubclassOf<class UModioCommonSearchTabViewStyle> ModioStyle;                     // 0x0428 (size: 0x8)
    class UModioCommonBorder* InternalBackgroundBorder;                               // 0x0430 (size: 0x8)
    class UModioCommonBorder* OverlayBackgroundBorder;                                // 0x0438 (size: 0x8)
    class UModioCommonTextBlock* SearchTabTitleTextBlock;                             // 0x0440 (size: 0x8)
    class UModioCommonFilteringView* FilteringView;                                   // 0x0448 (size: 0x8)
    class UModioCommonEditableTextBox* SearchTextBox;                                 // 0x0450 (size: 0x8)
    class UModioCommonButtonBase* CloseButton;                                        // 0x0458 (size: 0x8)
    class UModioCommonButtonBase* SearchButton;                                       // 0x0460 (size: 0x8)
    class UModioCommonButtonBase* ResetButton;                                        // 0x0468 (size: 0x8)

    void ShowSearchResults();
    void SetStyle(TSubclassOf<class UModioCommonSearchTabViewStyle> InStyle);
    void Reset();
    void OnSearchTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    FModioModCategoryParams GetFilterParamsWrapper();
    FModioFilterParams GetFilterParams();
}; // Size: 0x470

class UModioCommonSearchTabViewStyle : public UObject
{
    TSubclassOf<class UModioCommonBorderStyle> InternalBackgroundBorderStyle;         // 0x0028 (size: 0x8)
    TSubclassOf<class UModioCommonBorderStyle> OverlayBackgroundBorderStyle;          // 0x0030 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> SearchTabTitleTextStyle;                 // 0x0038 (size: 0x8)
    TSubclassOf<class UModioCommonEditableTextBoxStyle> SearchTextBoxStyle;           // 0x0040 (size: 0x8)
    TSubclassOf<class UModioCommonButtonStyle> CloseButtonStyle;                      // 0x0048 (size: 0x8)
    TSubclassOf<class UModioCommonButtonStyle> ResetButtonStyle;                      // 0x0050 (size: 0x8)
    TSubclassOf<class UModioCommonButtonStyle> SearchButtonStyle;                     // 0x0058 (size: 0x8)

}; // Size: 0x60

class UModioCommonSearchViewBase : public UModioCommonActivatableWidget
{
}; // Size: 0x428

class UModioCommonStorageSpaceTrackerUserWidget : public UModioCommonActivatableWidget
{
    TSubclassOf<class UModioCommonStorageSpaceTrackerUserWidgetStyle> ModioStyle;     // 0x0428 (size: 0x8)
    class UModioCommonStorageSpaceTrackerWidget* Tracker;                             // 0x0430 (size: 0x8)
    class UModioCommonImage* IconImage;                                               // 0x0438 (size: 0x8)
    class UModioCommonTextBlock* UsedSpaceLabelTextBlock;                             // 0x0440 (size: 0x8)
    class UModioCommonTextBlock* UsedSpaceTextBlock;                                  // 0x0448 (size: 0x8)
    class UModioCommonTextBlock* FreeSpaceLabelTextBlock;                             // 0x0450 (size: 0x8)
    class UModioCommonTextBlock* FreeSpaceTextBlock;                                  // 0x0458 (size: 0x8)
    class UModioCommonTextBlock* TotalSpaceLabelTextBlock;                            // 0x0460 (size: 0x8)
    class UModioCommonTextBlock* TotalSpaceTextBlock;                                 // 0x0468 (size: 0x8)
    class UModioCommonProgressBar* StorageSpaceProgressBar;                           // 0x0470 (size: 0x8)
    int32 MinDecimals;                                                                // 0x0478 (size: 0x4)
    int32 MaxDecimals;                                                                // 0x047C (size: 0x4)

    void SetStyle(TSubclassOf<class UModioCommonStorageSpaceTrackerUserWidgetStyle> InStyle);
    void OnStorageSpaceTrackerUpdated(FModioUnsigned64 UsedSpace, FModioUnsigned64 FreeSpace, FModioUnsigned64 TotalSpace);
}; // Size: 0x480

class UModioCommonStorageSpaceTrackerUserWidgetStyle : public UObject
{
    TSubclassOf<class UModioCommonImageStyle> IconImageStyle;                         // 0x0028 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> UsedSpaceLabelTextStyle;                 // 0x0030 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> UsedSpaceTextStyle;                      // 0x0038 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> FreeSpaceLabelTextStyle;                 // 0x0040 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> FreeSpaceTextStyle;                      // 0x0048 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> TotalSpaceLabelTextStyle;                // 0x0050 (size: 0x8)
    TSubclassOf<class UModioCommonTextStyle> TotalSpaceTextStyle;                     // 0x0058 (size: 0x8)
    TSubclassOf<class UModioCommonProgressBarStyle> StorageSpaceProgressBarStyle;     // 0x0060 (size: 0x8)

}; // Size: 0x68

class UModioCommonStorageSpaceTrackerWidget : public UTickableModioCommonWidget
{
    FModioCommonStorageSpaceTrackerWidgetOnStorageSpaceTrackerUpdated OnStorageSpaceTrackerUpdated; // 0x0178 (size: 0x10)
    void OnStorageSpaceTrackerUpdated(FModioUnsigned64 UsedSpace, FModioUnsigned64 FreeSpace, FModioUnsigned64 TotalSpace);

}; // Size: 0x188

class UModioCommonTabButtonBase : public UModioCommonButtonBase
{
}; // Size: 0x17C0

class UModioCommonTabButtonStyle : public UModioCommonButtonStyle
{
}; // Size: 0x8C0

class UModioCommonTabListWidgetBase : public UCommonTabListWidgetBase
{
    FModioCommonTabListWidgetBaseOnTabButtonClicked OnTabButtonClicked;               // 0x03A0 (size: 0x10)
    void OnTabButtonClicked(class UCommonButtonBase* TabButton);
    class UCommonActionWidget* PreviousTabAction;                                     // 0x03C8 (size: 0x8)
    class UCommonActionWidget* NextTabAction;                                         // 0x03D0 (size: 0x8)

    void SetPreviousTabInputActionData(FDataTableRowHandle InPreviousTabInputActionData);
    void SetNextTabInputActionData(FDataTableRowHandle InNextTabInputActionData);
    bool SelectTabByIDExtended(FName TabNameID, bool bSuppressClickFeedback, bool bSuppressOnTabSelectedIfAlreadySelected);
    void RemoveAllDynamicTabs();
    bool RegisterDynamicTab(const FModioCommonTabDescriptor& TabDescriptor);
    void OnTabSelectedInternal(FName TabNameID);
    void OnTabButtonClicked__DelegateSignature(class UCommonButtonBase* TabButton);
    void HandleNavigateToPreviousTab();
    void HandleNavigateToNextTab();
}; // Size: 0x428

class UModioCommonTermsOfUseView : public UModioCommonTermsOfUseViewBase
{
    class UModioCommonTextBlock* TitleTextBlock;                                      // 0x0528 (size: 0x8)
    class UModioCommonTextBlock* ContentTextBlock;                                    // 0x0530 (size: 0x8)
    class UModioCommonButtonBase* TermsButton;                                        // 0x0538 (size: 0x8)
    class UModioCommonButtonBase* PrivacyButton;                                      // 0x0540 (size: 0x8)
    class UModioCommonButtonBase* CancelButton;                                       // 0x0548 (size: 0x8)
    class UModioCommonButtonBase* SubmitButton;                                       // 0x0550 (size: 0x8)

}; // Size: 0x558

class UModioCommonTermsOfUseViewBase : public UModioCommonActivatableWidget
{
    FModioCommonTermsOfUseViewBaseOnSubmitClicked OnSubmitClicked;                    // 0x0428 (size: 0x10)
    void OnModioCommonTermsOfUseViewSubmitClicked();
    FModioCommonTermsOfUseViewBaseOnCancelClicked OnCancelClicked;                    // 0x0438 (size: 0x10)
    void OnModioCommonTermsOfUseViewCancelClicked();
    FModioCommonTermsOfUseViewBaseOnLinkClicked OnLinkClicked;                        // 0x0448 (size: 0x10)
    void OnModioCommonTermsOfUseLinkClicked(FString URL);
    FModioTerms Terms;                                                                // 0x0458 (size: 0xD0)

}; // Size: 0x528

class UModioCommonTextBlock : public UCommonTextBlock
{
}; // Size: 0x390

class UModioCommonTextStyle : public UCommonTextStyle
{
}; // Size: 0x1D0

class UModioCommonTileView : public UCommonTileView
{
    TSubclassOf<class UModioCommonListViewStyle> ModioStyle;                          // 0x0D80 (size: 0x8)

    void SetStyle(TSubclassOf<class UModioCommonListViewStyle> InStyle);
}; // Size: 0xD90

class UModioCommonUIAsyncLoader : public UModioUIAsyncLoader
{
}; // Size: 0x1C8

class UModioCommonUISettings : public UDeveloperSettings
{
    bool bEnableCollectionModDisableUI;                                               // 0x0038 (size: 0x1)
    FModioCommonAuthParamsSettings AuthParams;                                        // 0x0040 (size: 0x50)
    FModioCommonEmailAuthCodeParamsSettings EmailAuthCodeParams;                      // 0x0090 (size: 0x90)
    FModioCommonEmailAuthLoadingParamsSettings EmailAuthLoadingParams;                // 0x0120 (size: 0x48)
    FModioCommonEmailAuthParamsSettings EmailAuthParams;                              // 0x0168 (size: 0xA8)
    FModioCommonTermsOfUseParamsSettings TermsOfUseParams;                            // 0x0210 (size: 0x90)
    FModioCommonFilteredModListParams FilteredModListParams;                          // 0x02A0 (size: 0xB0)
    FModioCommonCollectionParamsSettings CollectionParams;                            // 0x0350 (size: 0xC8)
    FModioCommonFeaturedParamsSettings FeaturedParams;                                // 0x0418 (size: 0x10)
    FModioCommonModBrowserParamsSettings ModBrowserParams;                            // 0x0428 (size: 0x50)
    FModioCommonModDetailsParamsSettings ModDetailsParams;                            // 0x0478 (size: 0x1D0)
    FModioCommonModEntryParamsSettings ModEntryParams;                                // 0x0648 (size: 0x1C0)
    FModioCommonModGalleryParamsSettings ModGalleryParams;                            // 0x0808 (size: 0x30)
    FModioCommonModOperationTrackerParamsSettings ModOperationTrackerParams;          // 0x0838 (size: 0x48)
    FModioCommonQuickAccessParamsSettings QuickAccessParams;                          // 0x0880 (size: 0x98)
    FModioCommonReportParamsSettings ReportParams;                                    // 0x0918 (size: 0x48)
    FModioCommonReportReasonParamsSettings ReportReasonParams;                        // 0x0960 (size: 0x48)
    FModioCommonReportEmailParamsSettings ReportEmailParams;                          // 0x09A8 (size: 0x90)
    FModioCommonReportMessageParamsSettings ReportMessageParams;                      // 0x0A38 (size: 0x98)
    FModioCommonReportSummaryParamsSettings ReportSummaryParams;                      // 0x0AD0 (size: 0xA8)
    FModioCommonSearchParamsSettings SearchParams;                                    // 0x0B78 (size: 0x100)
    FModioCommonStorageSpaceTrackerParamsSettings StorageSpaceTrackerParams;          // 0x0C78 (size: 0x48)
    FModioCommonUserProfileWidgetParamsSettings UserProfileParams;                    // 0x0CC0 (size: 0x28)
    FModioCommonErrorWithRetryParamsSettings ErrorWithRetryParams;                    // 0x0CE8 (size: 0x28)

}; // Size: 0xD10

class UModioCommonUserProfileBase : public UModioCommonActivatableWidget
{
}; // Size: 0x438

class UModioCommonUserProfileWidget : public UModioCommonUserProfileBase
{
    class UModioCommonButtonBase* ProfileButton;                                      // 0x0438 (size: 0x8)

}; // Size: 0x440

class UModioCommonWidgetSwitcher : public UCommonActivatableWidgetSwitcher
{
    FModioCommonWidgetSwitcherOnActiveWidgetIndexChanged_BP OnActiveWidgetIndexChanged_BP; // 0x0200 (size: 0x10)
    void OnActiveIndexChanged_BP(class UWidget* InActiveWidget, int32 InActiveWidgetIndex);

}; // Size: 0x210

class UModioCommonWrapBox : public UWrapBox
{
}; // Size: 0x190

class UModioSearchResultsParamsUI : public UObject
{
    FModioModCategoryParams FilterParams;                                             // 0x0028 (size: 0x60)
    EModioCommonSearchViewType SearchType;                                            // 0x0088 (size: 0x1)

}; // Size: 0x90

class UTickableModioCommonWidget : public UWidget
{
}; // Size: 0x160

#endif
