#ifndef UE4SS_SDK_ModioUICore_HPP
#define UE4SS_SDK_ModioUICore_HPP

#include "ModioUICore_enums.hpp"

struct FModioModCategoryParams
{
    FText CategoryName;                                                               // 0x0000 (size: 0x18)
    TArray<FString> Tags;                                                             // 0x0018 (size: 0x10)
    TArray<FString> ExcludedTags;                                                     // 0x0028 (size: 0x10)
    EModioSortDirection Direction;                                                    // 0x0038 (size: 0x1)
    EModioSortFieldType SortField;                                                    // 0x0039 (size: 0x1)
    int64 Count;                                                                      // 0x0040 (size: 0x8)
    FString SearchKeywords;                                                           // 0x0048 (size: 0x10)
    EModioInstalledFilterType InstalledField;                                         // 0x0058 (size: 0x1)
    EModioEnabledFilterType EnabledFilter;                                            // 0x0059 (size: 0x1)
    EModioManualSortType ManualSortField;                                             // 0x005A (size: 0x1)

}; // Size: 0x60

struct FModioNotificationParams
{
    FModioErrorCode errorCode;                                                        // 0x0060 (size: 0x8)
    class UObject* NotificationContextObject;                                         // 0x0068 (size: 0x8)
    float Duration;                                                                   // 0x0070 (size: 0x4)

}; // Size: 0x78

class IModioExtendedModInfoUIDetails : public IInterface
{

    bool IsModSubscribed();
    bool IsModInstalled();
    bool IsModInQueue();
    bool IsModExtracting();
    bool IsModEnabled();
    bool IsModDownloading();
    bool HasModErrors();
}; // Size: 0x28

class IModioModBrowserInterface : public IInterface
{

    void ShowUserAuth();
    void ShowSearchResults(const FModioModCategoryParams& FilterParams);
    void ShowReportMod(class UObject* DialogDataSource);
    void ShowModUnsubscribeDialog(class UObject* DialogDataSource);
    void ShowDialog(class UObject* DialogDataSource);
    void ShowDetailsForMod(FModioModID ID);
    void RequestExternalAuthentication(EModioAuthenticationProvider Provider);
    void LogOut();
    bool IsDownloadDrawerOpen();
    bool GetIsCollectionModDisableUIEnabled();
}; // Size: 0x28

class IModioModInfoUIDetails : public IInterface
{

    FModioModID GetModID();
    FModioModInfo GetFullModInfo();
}; // Size: 0x28

class IModioUIAsyncHandlerWidget : public IInterface
{

    void LinkAsyncOperationWidget(const TScriptInterface<class IModioUIAsyncOperationWidget>& Widget);
    EModioUIAsyncOperationWidgetState GetAsyncOperationState();
}; // Size: 0x28

class IModioUIAsyncOperationWidget : public IInterface
{

    void SetOperationStateDelegate(const FSetOperationStateDelegateDelegate& Delegate);
    void RequestOperationRetry();
    void NotifyOperationState(EModioUIAsyncOperationWidgetState NewState);
}; // Size: 0x28

class IModioUIAsyncRetryWidget : public IInterface
{

    void SetRetryRequestedDelegate(const FSetRetryRequestedDelegateDelegate& Delegate);
}; // Size: 0x28

class IModioUIAuthenticationChangedReceiver : public IInterface
{

    void OnAuthenticationChanged(FModioOptionalUser User);
}; // Size: 0x28

class IModioUIMediaDownloadCompletedReceiver : public IInterface
{

    void OnModLogoDownloadCompleted(FModioModID ModId, FModioErrorCode ec, FModioOptionalImage Image, EModioLogoSize LogoSize);
    void OnModGalleryImageDownloadCompleted(FModioModID ModId, FModioErrorCode ec, int32 ImageIndex, FModioOptionalImage Image);
    void OnModCreatorAvatarDownloadCompleted(FModioModID ModId, FModioErrorCode ec, FModioOptionalImage Image);
}; // Size: 0x28

class IModioUIModEnableWidget : public IInterface
{

    void OnModEnabledStateChanged(FModioModID ModId, bool bNewSubscriptionState);
    void ModEnabledStateChangedHandler(FModioModID ModId, bool bNewSubscriptionState);
}; // Size: 0x28

class IModioUIModInfoReceiver : public IInterface
{

    void OnModInfoRequestCompleted(FModioModID ModId, FModioErrorCode ec, FModioOptionalModInfo Info);
    void OnListAllModsRequestCompleted(FString RequestIdentifier, FModioErrorCode ec, FModioOptionalModInfoList List);
}; // Size: 0x28

class IModioUIModManagementEventReceiver : public IInterface
{

    void OnModManagementEvent(FModioModManagementEvent Event);
}; // Size: 0x28

class IModioUINotification : public IInterface
{

    void SetNotificationExpireHandler(const FSetNotificationExpireHandlerInDelegate& InDelegate);
    class UWidget* GetAsWidget();
    void Display();
    void ConfigureManual(const FText& Title, const FText& message, bool bIsError);
    void Configure(const FModioNotificationParams& Params);
}; // Size: 0x28

class IModioUINotificationController : public IInterface
{

    void RegisterUserWidget(const TScriptInterface<class IModioUINotificationController>& ControllerWidget);
    void HandleDisplayNotificationWidget(TScriptInterface<class IModioUINotification>& Notification);
    void HandleDisplayNotificationParams(const FModioNotificationParams& Params);
    void HandleDisplayManual(const FText& Title, const FText& message, bool bIsError);
    void DisplayNotificationParams(const FModioNotificationParams& Params);
    void DisplayNotificationManual(const FText& Title, const FText& message, bool bIsError);
    void DisplayNotification(const TScriptInterface<class IModioUINotification>& Notification);
}; // Size: 0x28

class IModioUISubscriptionsChangedReceiver : public IInterface
{

    void OnSubscriptionsChanged(FModioModID ModId, bool bNewSubscriptionState);
}; // Size: 0x28

class IModioUIUserAvatarDownloadCompletedReceiver : public IInterface
{

    void OnUserAvatarDownloadCompleted(FModioErrorCode ec, FModioOptionalImage Image);
}; // Size: 0x28

class IModioUIUserChangedReceiver : public IInterface
{

    void OnUserChanged(FModioOptionalUser NewUser);
}; // Size: 0x28

class UModioFeaturedCategoryParams : public UObject
{
    FText CategoryName;                                                               // 0x0028 (size: 0x18)
    TArray<FString> Tags;                                                             // 0x0040 (size: 0x10)
    TArray<FString> ExcludedTags;                                                     // 0x0050 (size: 0x10)
    EModioSortDirection Direction;                                                    // 0x0060 (size: 0x1)
    EModioSortFieldType SortField;                                                    // 0x0061 (size: 0x1)
    int64 Count;                                                                      // 0x0068 (size: 0x8)

}; // Size: 0x70

class UModioFilterParamsUI : public UObject
{
    FModioFilterParams Underlying;                                                    // 0x0028 (size: 0xA8)

}; // Size: 0xD0

class UModioModCategoryParamsUI : public UObject
{
    FModioModCategoryParams Underlying;                                               // 0x0028 (size: 0x60)

}; // Size: 0x88

class UModioModCollectionEntryUI : public UObject
{
    FModioModCollectionEntry Underlying;                                              // 0x0030 (size: 0x218)
    bool bCachedSubscriptionStatus;                                                   // 0x0248 (size: 0x1)

}; // Size: 0x250

class UModioModInfoUI : public UObject
{
    FModioModInfo Underlying;                                                         // 0x0030 (size: 0x1E0)

}; // Size: 0x210

class UModioNotificationParamsLibrary : public UBlueprintFunctionLibrary
{

    FModioNotificationParams SetTextArg(FModioNotificationParams& NotificationParams, FString Name, const FText& Text);
    FModioNotificationParams SetStringArg(FModioNotificationParams& NotificationParams, FString Name, FString Value);
    FModioNotificationParams SetIntegerArg(FModioNotificationParams& NotificationParams, FString Name, int32 Value);
    FModioNotificationParams SetFloatArg(FModioNotificationParams& NotificationParams, FString Name, float Value);
    FModioNotificationParams CreateUnsubscriptionNotification(FModioErrorCode StatusCode, const TScriptInterface<class IModioModInfoUIDetails>& ModInfo);
    FModioNotificationParams CreateUninstallNotification(FModioErrorCode StatusCode, const TScriptInterface<class IModioModInfoUIDetails>& ModInfo);
    FModioNotificationParams CreateSubscriptionNotification(FModioErrorCode StatusCode, const TScriptInterface<class IModioModInfoUIDetails>& ModInfo);
    FModioNotificationParams CreateRatingNotification(FModioErrorCode StatusCode, const TScriptInterface<class IModioModInfoUIDetails>& ModInfo);
    FModioNotificationParams CreateNotificationParams(FModioErrorCode StatusCode, const FText& TitleText, const FText& SuccessText, const FText& ErrorText);
    FModioNotificationParams CreateInstallationNotification(FModioErrorCode StatusCode, const TScriptInterface<class IModioModInfoUIDetails>& ModInfo);
    FModioNotificationParams AddFormatText(FModioNotificationParams& NotificationParams, const FName& Name, const FText& Text);
}; // Size: 0x28

class UModioReportInfoUI : public UObject
{
    FModioReportParams ReportData;                                                    // 0x0030 (size: 0x58)
    class UObject* ModInfo;                                                           // 0x0088 (size: 0x8)

}; // Size: 0x90

class UModioTagInfoUI : public UObject
{
    FModioModTagInfo Underlying;                                                      // 0x0028 (size: 0x28)

}; // Size: 0x60

class UModioTagOptionsUI : public UObject
{
    FModioModTagOptions Underlying;                                                   // 0x0038 (size: 0x28)

    TArray<class UModioTagInfoUI*> GetTagCategoriesForUI();
}; // Size: 0x60

class UModioUIAsyncLoader : public UWidget
{
    EModioUIAsyncOperationWidgetState CurrentState;                                   // 0x0160 (size: 0x1)
    TMap<class FName, class UWidget*> NamedWidgets;                                   // 0x0168 (size: 0x50)

    void Retry();
    void OnRetryRequested();
    void NativeHandleAsyncOperationStateChange(EModioUIAsyncOperationWidgetState NewState);
}; // Size: 0x1C8

class UModioUISubsystem : public UEngineSubsystem
{
    class UUserWidget* ModBrowserInstance;                                            // 0x01F8 (size: 0x8)
    FModioUISubsystemOnModEnabledChanged OnModEnabledChanged;                         // 0x0260 (size: 0x10)
    void OnModEnabledChanged(FModioModID Mod, bool bNewStateIsEnabled);
    FModioUISubsystemGetModEnabledDelegate GetModEnabledDelegate;                     // 0x0270 (size: 0x10)
    bool OnGetModEnabled(FModioModID Mod);

    void UnsubscribeHandler(FModioErrorCode errorCode, FModioModID ID);
    void UninstallHandler(FModioErrorCode errorCode, FModioModID ID);
    void SubscriptionHandler(FModioErrorCode errorCode, FModioModID ID);
    bool ShowSearchResults(const FModioModCategoryParams& SearchParameters);
    class UUserWidget* ShowModBrowserUIForPlayer(TSubclassOf<class UUserWidget> MenuClass, class APlayerController* Controller, FShowModBrowserUIForPlayerOnModBrowserCloseRequestedDelegate OnModBrowserCloseRequestedDelegate);
    void ShowDialog(class UObject* DialogDataSource);
    void ShowDetailsForMod(FModioModID ID);
    void RequestUserAvatar();
    void RequestSubscriptionForModID(FModioModID ID);
    void RequestRemoveSubscriptionForModID(FModioModID ID);
    void RequestModInfoForModIDs(TArray<FModioModID> IDs);
    bool RequestModEnabledState(FModioModID ID, bool bNewEnabledState);
    void RequestLogoDownloadForModID(FModioModID ID, EModioLogoSize LogoSize);
    void RequestListAllMods(FModioFilterParams Params, FString RequestIdentifier);
    void RequestGalleryImageDownloadForModID(FModioModID ID, int32 Index, EModioGallerySize ImageSize);
    void RequestExternalAuthentication(EModioAuthenticationProvider Provider);
    void RequestEmailAuthentication(FModioEmailAuthCode Code);
    bool QueryIsModEnabled(FModioModID ID);
    void HideModBrowserUI();
    bool GetIsCollectionModDisableUIEnabled();
    float GetCurrentDPIScaleValue();
    FText FormatText(FText Input);
    void ExecuteOnModBrowserCloseRequestedDelegate();
    void DisplayNotificationParams(const FModioNotificationParams& Params);
    void DisplayNotificationManual(FText Title, FText message, bool bIsError);
    void DisplayNotification(TScriptInterface<class IModioUINotification>& Notification);
    void DisplayErrorDialog(FModioErrorCode errorCode);
    void CloseModBrowserUI();
}; // Size: 0x298

#endif
