#ifndef UE4SS_SDK_Modio_HPP
#define UE4SS_SDK_Modio_HPP

#include "Modio_enums.hpp"

struct FModioApiKey
{
    FString ApiKey;                                                                   // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FModioAuthenticationParams
{
    FString AuthToken;                                                                // 0x0000 (size: 0x10)
    FString UserEmail;                                                                // 0x0010 (size: 0x10)
    bool bUserHasAcceptedTerms;                                                       // 0x0020 (size: 0x1)
    TMap<class FString, class FString> ExtendedParameters;                            // 0x0028 (size: 0x50)

}; // Size: 0x78

struct FModioCreateModFileParams
{
    FString PathToModRootDirectory;                                                   // 0x0000 (size: 0x10)

}; // Size: 0x78

struct FModioCreateModParams
{
    FString PathToLogoFile;                                                           // 0x0000 (size: 0x10)
    FString Name;                                                                     // 0x0010 (size: 0x10)
    FString Summary;                                                                  // 0x0020 (size: 0x10)

}; // Size: 0xC8

struct FModioEditModParams
{
}; // Size: 0xD0

struct FModioEmailAddress
{
}; // Size: 0x10

struct FModioEmailAuthCode
{
}; // Size: 0x10

struct FModioEntitlementParams
{
    TMap<class FString, class FString> ExtendedParameters;                            // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FModioErrorCode
{
}; // Size: 0x8

struct FModioFileMetadata
{
    FModioFileMetadataID MetadataId;                                                  // 0x0000 (size: 0x8)
    FModioModID ModId;                                                                // 0x0008 (size: 0x8)
    FDateTime DateAdded;                                                              // 0x0010 (size: 0x8)
    EModioVirusScanStatus CurrentVirusScanStatus;                                     // 0x0018 (size: 0x1)
    EModioVirusStatus CurrentVirusStatus;                                             // 0x0019 (size: 0x1)
    int64 Filesize;                                                                   // 0x0020 (size: 0x8)
    FString Filename;                                                                 // 0x0028 (size: 0x10)
    FString Version;                                                                  // 0x0038 (size: 0x10)
    FString Changelog;                                                                // 0x0048 (size: 0x10)
    FString MetadataBlob;                                                             // 0x0058 (size: 0x10)

}; // Size: 0x68

struct FModioFileMetadataID
{
}; // Size: 0x8

struct FModioFilterParams
{
}; // Size: 0xA8

struct FModioGameID
{
    int64 GameId;                                                                     // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FModioGameInfo
{
    FModioGameID GameId;                                                              // 0x0000 (size: 0x8)
    FDateTime DateAdded;                                                              // 0x0008 (size: 0x8)
    FDateTime DateUpdated;                                                            // 0x0010 (size: 0x8)
    FDateTime DateLive;                                                               // 0x0018 (size: 0x8)
    FString UgcName;                                                                  // 0x0020 (size: 0x10)
    FModioIcon Icon;                                                                  // 0x0030 (size: 0x50)
    FModioLogo Logo;                                                                  // 0x0080 (size: 0x50)
    FModioHeaderImage HeaderImage;                                                    // 0x00D0 (size: 0x20)
    FString Name;                                                                     // 0x00F0 (size: 0x10)
    FString Summary;                                                                  // 0x0100 (size: 0x10)
    FString Instructions;                                                             // 0x0110 (size: 0x10)
    FString InstructionsUrl;                                                          // 0x0120 (size: 0x10)
    FString ProfileUrl;                                                               // 0x0130 (size: 0x10)
    FModioTheme Theme;                                                                // 0x0140 (size: 0x60)
    FModioGameStats Stats;                                                            // 0x01A0 (size: 0x38)
    TArray<FModioOtherUrl> OtherUrls;                                                 // 0x01D8 (size: 0x10)
    TArray<EModioModfilePlatform> Platforms;                                          // 0x01E8 (size: 0x10)
    EGameMonetizationFlags GameMonetizationOptions;                                   // 0x01F8 (size: 0x1)
    FString VirtualTokenName;                                                         // 0x0200 (size: 0x10)
    TArray<FModioGamePlatform> PlatformSupport;                                       // 0x0210 (size: 0x10)

}; // Size: 0x220

struct FModioGamePlatform
{
    EModioModfilePlatform Platform;                                                   // 0x0000 (size: 0x1)
    bool Locked;                                                                      // 0x0001 (size: 0x1)
    bool Moderated;                                                                   // 0x0002 (size: 0x1)

}; // Size: 0x3

struct FModioGameStats
{
    FModioGameID GameId;                                                              // 0x0000 (size: 0x8)
    int64 ModCountTotal;                                                              // 0x0008 (size: 0x8)
    int64 ModDownloadsToday;                                                          // 0x0010 (size: 0x8)
    int64 ModDownloadsTotal;                                                          // 0x0018 (size: 0x8)
    int64 ModDownloadsDailyAverage;                                                   // 0x0020 (size: 0x8)
    int64 ModSubscribersTotal;                                                        // 0x0028 (size: 0x8)
    int64 DateExpires;                                                                // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FModioHeaderImage
{
    FString Filename;                                                                 // 0x0000 (size: 0x10)
    FString Original;                                                                 // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FModioIcon
{
    FString Filename;                                                                 // 0x0000 (size: 0x10)
    FString Original;                                                                 // 0x0010 (size: 0x10)
    FString Thumb64x64;                                                               // 0x0020 (size: 0x10)
    FString Thumb128x128;                                                             // 0x0030 (size: 0x10)
    FString Thumb256x256;                                                             // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FModioImageWrapper
{
    FString ImagePath;                                                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FModioInitializeOptions
{
    FModioGameID GameId;                                                              // 0x0000 (size: 0x8)
    FModioApiKey ApiKey;                                                              // 0x0008 (size: 0x10)
    EModioEnvironment GameEnvironment;                                                // 0x0018 (size: 0x1)
    EModioPortal PortalInUse;                                                         // 0x0019 (size: 0x1)
    TMap<class FString, class FString> ExtendedInitializationParameters;              // 0x0020 (size: 0x50)
    bool bUseBackgroundThread;                                                        // 0x0070 (size: 0x1)

}; // Size: 0x90

struct FModioLink
{
    FString Text;                                                                     // 0x0000 (size: 0x10)
    FString URL;                                                                      // 0x0010 (size: 0x10)
    bool bRequired;                                                                   // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FModioLogo
{
    FString Filename;                                                                 // 0x0000 (size: 0x10)
    FString Original;                                                                 // 0x0010 (size: 0x10)
    FString Thumb320x180;                                                             // 0x0020 (size: 0x10)
    FString Thumb640x360;                                                             // 0x0030 (size: 0x10)
    FString Thumb1280x720;                                                            // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FModioMapPreview
{
}; // Size: 0x50

struct FModioMetadata
{
    FString Key;                                                                      // 0x0000 (size: 0x10)
    FString Value;                                                                    // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FModioModCollectionEntry
{
}; // Size: 0x218

struct FModioModCreationHandle
{
}; // Size: 0x8

struct FModioModDependency
{
    FModioModID ModId;                                                                // 0x0000 (size: 0x8)
    FString ModName;                                                                  // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FModioModDependencyList
{
    FModioPagedResult PagedResult;                                                    // 0x0000 (size: 0x14)
    TArray<FModioModDependency> InternalList;                                         // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FModioModID
{
}; // Size: 0x8

struct FModioModInfo
{
    FModioModID ModId;                                                                // 0x0000 (size: 0x8)
    bool Supported;                                                                   // 0x0008 (size: 0x1)
    FString ProfileName;                                                              // 0x0010 (size: 0x10)
    FString ProfileSummary;                                                           // 0x0020 (size: 0x10)
    FString ProfileDescription;                                                       // 0x0030 (size: 0x10)
    FString ProfileDescriptionPlaintext;                                              // 0x0040 (size: 0x10)
    FString ProfileUrl;                                                               // 0x0050 (size: 0x10)
    FModioUser ProfileSubmittedBy;                                                    // 0x0060 (size: 0x40)
    FDateTime ProfileDateAdded;                                                       // 0x00A0 (size: 0x8)
    FDateTime ProfileDateUpdated;                                                     // 0x00A8 (size: 0x8)
    FDateTime ProfileDateLive;                                                        // 0x00B0 (size: 0x8)
    EModioMaturityFlags ProfileMaturityOption;                                        // 0x00B8 (size: 0x1)
    bool bVisible;                                                                    // 0x00B9 (size: 0x1)
    EModioObjectVisibilityFlags Visibility;                                           // 0x00BA (size: 0x1)
    FString MetadataBlob;                                                             // 0x00C0 (size: 0x10)
    FModioFileMetadata FileInfo;                                                      // 0x00D0 (size: 0x68)
    TArray<FModioMetadata> MetadataKvp;                                               // 0x0138 (size: 0x10)
    TArray<FModioModTag> Tags;                                                        // 0x0148 (size: 0x10)
    int32 NumGalleryImages;                                                           // 0x0158 (size: 0x4)
    FModioYoutubeURLList YoutubeURLs;                                                 // 0x0160 (size: 0x1)
    FModioSketchfabURLList SketchfabURLs;                                             // 0x0170 (size: 0x1)
    FModioModStats Stats;                                                             // 0x0180 (size: 0x58)
    EModioModServerSideStatus ModStatus;                                              // 0x01D8 (size: 0x1)
    int32 Price;                                                                      // 0x01DC (size: 0x4)

}; // Size: 0x1E0

struct FModioModInfoList
{
    FModioPagedResult PagedResult;                                                    // 0x0000 (size: 0x14)
    TArray<FModioModInfo> InternalList;                                               // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FModioModManagementEvent
{
    FModioModID ID;                                                                   // 0x0000 (size: 0x8)
    EModioModManagementEventType Event;                                               // 0x0008 (size: 0x1)
    FModioErrorCode Status;                                                           // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FModioModProgressInfo
{
    FModioModID ID;                                                                   // 0x0000 (size: 0x8)

}; // Size: 0x50

struct FModioModStats
{
    int64 PopularityRankPosition;                                                     // 0x0000 (size: 0x8)
    int64 PopularityRankTotalMods;                                                    // 0x0008 (size: 0x8)
    int64 DownloadsTotal;                                                             // 0x0010 (size: 0x8)
    int64 SubscribersTotal;                                                           // 0x0018 (size: 0x8)
    int64 RatingTotal;                                                                // 0x0020 (size: 0x8)
    int64 RatingPositive;                                                             // 0x0028 (size: 0x8)
    int64 RatingNegative;                                                             // 0x0030 (size: 0x8)
    int64 RatingPercentagePositive;                                                   // 0x0038 (size: 0x8)
    float RatingWeightedAggregate;                                                    // 0x0040 (size: 0x4)
    FString RatingDisplayText;                                                        // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FModioModTag
{
    FString Tag;                                                                      // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FModioModTagInfo
{
    FString TagGroupName;                                                             // 0x0000 (size: 0x10)
    TArray<FString> TagGroupValues;                                                   // 0x0010 (size: 0x10)
    bool bAllowMultipleSelection;                                                     // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FModioModTagOptions
{
    FModioPagedResult PagedResult;                                                    // 0x0000 (size: 0x14)
    TArray<FModioModTagInfo> InternalList;                                            // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FModioOptionalGameInfo
{
}; // Size: 0x228

struct FModioOptionalImage
{
}; // Size: 0x18

struct FModioOptionalMapPreview
{
}; // Size: 0x58

struct FModioOptionalModDependencyList
{
}; // Size: 0x30

struct FModioOptionalModID
{
}; // Size: 0x10

struct FModioOptionalModInfo
{
}; // Size: 0x1E8

struct FModioOptionalModInfoList
{
}; // Size: 0x30

struct FModioOptionalModProgressInfo
{
}; // Size: 0x58

struct FModioOptionalModTagOptions
{
}; // Size: 0x30

struct FModioOptionalTerms
{
}; // Size: 0xD8

struct FModioOptionalTransactionRecord
{
}; // Size: 0x20

struct FModioOptionalUser
{
}; // Size: 0x48

struct FModioOptionalUserList
{
}; // Size: 0x30

struct FModioOtherUrl
{
    FString Label;                                                                    // 0x0000 (size: 0x10)
    FString URL;                                                                      // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FModioPagedResult
{
    int32 PageIndex;                                                                  // 0x0000 (size: 0x4)
    int32 PageSize;                                                                   // 0x0004 (size: 0x4)
    int32 PageCount;                                                                  // 0x0008 (size: 0x4)
    int32 TotalResultCount;                                                           // 0x000C (size: 0x4)
    int32 ResultCount;                                                                // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FModioReportParams
{
}; // Size: 0x58

struct FModioSketchfabURLList
{
}; // Size: 0x1

struct FModioTerms
{
    FString AgreeButtonText;                                                          // 0x0000 (size: 0x10)
    FString DisagreeButtonText;                                                       // 0x0010 (size: 0x10)
    FModioLink WebsiteLink;                                                           // 0x0020 (size: 0x28)
    FModioLink TermsLink;                                                             // 0x0048 (size: 0x28)
    FModioLink PrivacyLink;                                                           // 0x0070 (size: 0x28)
    FModioLink ManageLink;                                                            // 0x0098 (size: 0x28)

}; // Size: 0xD0

struct FModioTheme
{
    FString Primary;                                                                  // 0x0000 (size: 0x10)
    FString Dark;                                                                     // 0x0010 (size: 0x10)
    FString Light;                                                                    // 0x0020 (size: 0x10)
    FString Success;                                                                  // 0x0030 (size: 0x10)
    FString Warning;                                                                  // 0x0040 (size: 0x10)
    FString Danger;                                                                   // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FModioTransactionRecord
{
    FModioModID AssociatedMod;                                                        // 0x0000 (size: 0x8)
    FModioUnsigned64 Price;                                                           // 0x0008 (size: 0x8)
    FModioUnsigned64 UpdatedUserWalletBalance;                                        // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FModioUnsigned64
{
}; // Size: 0x8

struct FModioUser
{
    FModioUserID userId;                                                              // 0x0000 (size: 0x8)
    FString username;                                                                 // 0x0008 (size: 0x10)
    FDateTime DateOnline;                                                             // 0x0018 (size: 0x8)
    FString ProfileUrl;                                                               // 0x0020 (size: 0x10)
    FString DisplayNamePortal;                                                        // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FModioUserID
{
}; // Size: 0x8

struct FModioUserList
{
    FModioPagedResult PagedResult;                                                    // 0x0000 (size: 0x14)
    TArray<FModioUser> InternalList;                                                  // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FModioValidationError
{
    FString FieldName;                                                                // 0x0000 (size: 0x10)
    FString ValidationFailureDescription;                                             // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FModioYoutubeURLList
{
}; // Size: 0x1

class UModioCommonTypesLibrary : public UBlueprintFunctionLibrary
{

    FModioInitializeOptions SetSessionIdentifier(const FModioInitializeOptions& Options, FString SessionIdentifier);
    FModioInitializeOptions SetPortal(const FModioInitializeOptions& Options, EModioPortal PortalToUse);
    bool NotEqualTo(const FModioModID& A, const FModioModID& B);
    FModioInitializeOptions MakeInitializeOptions(int64 GameId, FString ApiKey, EModioEnvironment GameEnvironment, EModioPortal PortalInUse);
    FModioGameID MakeGameId(int64 GameId);
    FModioEntitlementParams MakeEntitlementParams(const TMap<class FString, class FString>& ExtendedParameters);
    FModioAuthenticationParams MakeAuthParams(const FString AuthToken, const FString EmailAddress, const bool bHasAcceptedTOS);
    FModioApiKey MakeApiKey(const FString ApiKey);
    int64 GetRawValueFromModID(const FModioModID& In);
    bool EqualTo(const FModioModID& A, const FModioModID& B);
    FString Conv_UserIDToString(FModioUserID userId);
    FModioEmailAuthCode Conv_StringToEmailAuthCode(FString AuthCode);
    FModioEmailAddress Conv_StringToEmailAddress(FString Email);
    FString Conv_ModIDToString(FModioModID ModId);
    FString Conv_GameIDToString(FModioGameID GameId);
    FString Conv_FileMetadataIDToString(FModioFileMetadataID FileMetadataID);
    FString Conv_EmailAuthCodeToString(FModioEmailAuthCode EmailAuthCode);
    FString Conv_EmailAddressToString(FModioEmailAddress EmailAddress);
    FString Conv_ApiKeyToString(FModioApiKey ApiKey);
}; // Size: 0x28

class UModioCreateModLibrary : public UBlueprintFunctionLibrary
{

    void SetVersionString(FModioCreateModFileParams& In, FString Version);
    void SetTags(FModioCreateModParams& In, TArray<FString>& Tags);
    void SetModfilePlatforms(FModioCreateModFileParams& In, TArray<EModioModfilePlatform>& Platforms);
    void SetModFileMetadataBlob(FModioCreateModFileParams& In, FString MetadataBlob);
    void SetMetadataBlob(FModioCreateModParams& In, FString MetadataBlob);
    void SetMarkAsActiveRelease(FModioCreateModFileParams& In, bool bMarkAsActiveRelease);
    void SetInitialVisibility_DEPRECATED(FModioCreateModParams& In, bool InitialVisibility);
    void SetInitialVisibility(FModioCreateModParams& In, EModioObjectVisibilityFlags InitialVisibility);
    void SetHomepageURL(FModioCreateModParams& In, FString HomepageURL);
    void SetDescription(FModioCreateModParams& In, FString Description);
    void SetChangelogString(FModioCreateModFileParams& In, FString Changelog);
}; // Size: 0x28

class UModioEditModLibrary : public UBlueprintFunctionLibrary
{

    void SetVisibility_DEPRECATED(FModioEditModParams& In, bool Visibility);
    void SetVisibility(FModioEditModParams& In, EModioObjectVisibilityFlags Visibility);
    void SetTags(FModioEditModParams& In, TArray<FString>& Tags);
    void SetSummary(FModioEditModParams& In, FString Summary);
    void SetNamePath(FModioEditModParams& In, FString NamePath);
    void SetName(FModioEditModParams& In, FString Name);
    void SetMetadataBlob(FModioEditModParams& In, FString MetadataBlob);
    void SetMaturityFlags(FModioEditModParams& In, EModioMaturityFlags MaturityFlags);
    void SetLogoPath(FModioEditModParams& In, FString LogoPath);
    void SetHomepageURL(FModioEditModParams& In, FString HomepageURL);
    void SetDescription(FModioEditModParams& In, FString Description);
}; // Size: 0x28

class UModioErrorCodeLibrary : public UBlueprintFunctionLibrary
{

    bool IsError(const FModioErrorCode& Error);
    int32 GetValue(const FModioErrorCode& Error);
    FString GetMessage(const FModioErrorCode& Error);
}; // Size: 0x28

class UModioErrorConditionLibrary : public UBlueprintFunctionLibrary
{

    bool ErrorCodeMatches(FModioErrorCode errorCode, EModioErrorCondition Condition);
}; // Size: 0x28

class UModioExampleLibrary : public UBlueprintFunctionLibrary
{

    void ListUserSubscriptionAsync(const FModioFilterParams& FilterParams, FListUserSubscriptionAsyncCallback Callback);
    EModioLogoSize GetLogoThumbnailSize();
    EModioLogoSize GetLogoFullSize();
    EModioAvatarSize GetAvatarThumbnailSize();
}; // Size: 0x28

class UModioFilterParamsLibrary : public UBlueprintFunctionLibrary
{

    FModioFilterParams WithTags(FModioFilterParams& Filter, const TArray<FString>& NewTags);
    FModioFilterParams WithTag(FModioFilterParams& Filter, FString Tag);
    FModioFilterParams WithoutTags(FModioFilterParams& Filter, const TArray<FString>& NewTags);
    FModioFilterParams WithoutTag(FModioFilterParams& Filter, FString Tag);
    FModioFilterParams SortBy(FModioFilterParams& Filter, EModioSortFieldType ByField, EModioSortDirection ByDirection);
    FModioFilterParams PagedResults(FModioFilterParams& Filter, int64 PageNumber, int64 PageSize);
    FModioFilterParams NameContainsStrings(FModioFilterParams& Filter, const TArray<FString>& SearchStrings);
    FModioFilterParams NameContains(FModioFilterParams& Filter, FString SearchString);
    FModioFilterParams MetadataLike(FModioFilterParams& Filter, FString SearchString);
    FModioFilterParams MatchingIDs(FModioFilterParams& Filter, const TArray<FModioModID>& IDs);
    FModioFilterParams MarkedLiveBefore(FModioFilterParams& Filter, FDateTime LiveBefore);
    FModioFilterParams MarkedLiveAfter(FModioFilterParams& Filter, FDateTime LiveAfter);
    FModioFilterParams IndexedResults(FModioFilterParams& Filter, int64 StartIndex, int64 ResultCount);
    FModioFilterParams ExcludingIDs(FModioFilterParams& Filter, const TArray<FModioModID>& IDs);
}; // Size: 0x28

class UModioImageLibrary : public UBlueprintFunctionLibrary
{

    void LoadAsync(const FModioImageWrapper& Image, FLoadAsyncOnImageLoaded OnImageLoaded);
    class UTexture2DDynamic* GetTexture(const FModioImageWrapper& Image);
    EModioImageState GetState(const FModioImageWrapper& Image);
    FVector2D GetLogoSize(class UTexture* Logo, EModioLogoSize LogoSize);
    FVector2D GetGallerySize(class UTexture* GalleryImage, EModioGallerySize GallerySize);
    FVector2D GetAvatarSize(class UTexture* avatar, EModioAvatarSize AvatarSize);
}; // Size: 0x28

class UModioModCollectionLibrary : public UBlueprintFunctionLibrary
{

    FString GetPath(const FModioModCollectionEntry& Entry);
    EModioModState GetModState(const FModioModCollectionEntry& Entry);
    FModioModInfo GetModProfile(const FModioModCollectionEntry& Entry);
    FModioModID GetId(const FModioModCollectionEntry& Entry);
}; // Size: 0x28

class UModioModDependenciesLibrary : public UBlueprintFunctionLibrary
{

    FModioPagedResult GetPagedResult(const FModioModDependencyList& ModTags);
    TArray<FModioModDependency> GetDependencies(const FModioModDependencyList& ModTags);
}; // Size: 0x28

class UModioModInfoListLibrary : public UBlueprintFunctionLibrary
{

    FModioPagedResult GetPagedResult(const FModioModInfoList& ModInfoList);
    TArray<FModioModInfo> GetMods(const FModioModInfoList& ModInfoList);
}; // Size: 0x28

class UModioModProgressInfoLibrary : public UBlueprintFunctionLibrary
{

    FModioUnsigned64 GetTotalProgress(const FModioModProgressInfo& Info, EModioModProgressState State);
    EModioModProgressState GetCurrentState(const FModioModProgressInfo& Info);
    FModioUnsigned64 GetCurrentProgress(const FModioModProgressInfo& Info, EModioModProgressState State);
}; // Size: 0x28

class UModioModTagOptionsLibrary : public UBlueprintFunctionLibrary
{

    TArray<FModioModTagInfo> GetTags(const FModioModTagOptions& ModTags);
    FModioPagedResult GetPagedResult(const FModioModTagOptions& ModTags);
}; // Size: 0x28

class UModioOptionalLibrary : public UBlueprintFunctionLibrary
{

    bool IsSet_ModioOptionalUser(const FModioOptionalUser& OptionalUser);
    bool IsSet_ModioOptionalTerms(const FModioOptionalTerms& OptionalTerms);
    bool IsSet_ModioOptionalModTagOptions(const FModioOptionalModTagOptions& OptionalModTagOptions);
    bool IsSet_ModioOptionalModProgressInfo(const FModioOptionalModProgressInfo& OptionalModProgressInfo);
    bool IsSet_ModioOptionalModInfoList(const FModioOptionalModInfoList& OptionalModInfoList);
    bool IsSet_ModioOptionalModInfo(const FModioOptionalModInfo& OptionalModInfo);
    bool IsSet_ModioOptionalModID(const FModioOptionalModID& OptionalID);
    bool IsSet_ModioOptionalModDependencyList(const FModioOptionalModDependencyList& OptionalDependencyList);
    bool IsSet_ModioOptionalImage(const FModioOptionalImage& OptionalImage);
    bool IsSet_ModioOptionalGameInfo(const FModioOptionalGameInfo& OptionalGameInfo);
    bool GetValue_ModioOptionalUser(const FModioOptionalUser& OptionalUser, FModioUser& User);
    bool GetValue_ModioOptionalTerms(const FModioOptionalTerms& OptionalTerms, FModioTerms& Terms);
    bool GetValue_ModioOptionalModTagOptions(const FModioOptionalModTagOptions& OptionalModTagOptions, FModioModTagOptions& ModTagOptions);
    bool GetValue_ModioOptionalModProgressInfo(const FModioOptionalModProgressInfo& OptionalModProgressInfo, FModioModProgressInfo& ModProgressInfo);
    bool GetValue_ModioOptionalModInfoList(const FModioOptionalModInfoList& OptionalModInfoList, FModioModInfoList& ModInfoList);
    bool GetValue_ModioOptionalModInfo(const FModioOptionalModInfo& OptionalModInfo, FModioModInfo& ModInfo);
    bool GetValue_ModioOptionalModID(const FModioOptionalModID& OptionalID, FModioModID& ID);
    bool GetValue_ModioOptionalModDependencyList(const FModioOptionalModDependencyList& OptionalDependencyList, FModioModDependencyList& DependencyList);
    bool GetValue_ModioOptionalImage(const FModioOptionalImage& OptionalImage, FModioImageWrapper& Image);
    bool GetValue_ModioOptionalGameInfo(const FModioOptionalGameInfo& OptionalGameInfo, FModioGameInfo& GameInfo);
}; // Size: 0x28

class UModioPlatformHelpersLibrary : public UBlueprintFunctionLibrary
{

    EModioPortal GetDefaultPortalForCurrentPlatform();
    EModioAuthenticationProvider GetDefaultAuthProviderForCurrentPlatform();
    EModioPlatformName GetCurrentPlatform();
}; // Size: 0x28

class UModioPopupBase : public UUserWidget
{
}; // Size: 0x278

class UModioPopupContainer : public UUserWidget
{
    TArray<class UModioPopupBase*> PopupStack;                                        // 0x0278 (size: 0x10)
    TArray<class UModioPopupBase*> PopupCache;                                        // 0x0288 (size: 0x10)

    class UModioPopupBase* PushPopup(TSubclassOf<class UModioPopupBase> PopupClass);
    class UModioPopupBase* PopPopup(TSubclassOf<class UModioPopupBase> PopupClass);
}; // Size: 0x298

class UModioReportLibrary : public UBlueprintFunctionLibrary
{

    FModioReportParams MakeReportForUser(FModioUserID User, EModioReportType Type, FString ReportDescription, FString ReporterName, FString ReporterContact);
    FModioReportParams MakeReportForMod(FModioModID Mod, EModioReportType Type, FString ReportDescription, FString ReporterName, FString ReporterContact);
    FModioReportParams MakeReportForGame(FModioGameID Game, EModioReportType Type, FString ReportDescription, FString ReporterName, FString ReporterContact);
}; // Size: 0x28

class UModioSDKLibrary : public UBlueprintFunctionLibrary
{

    FText RoundNumberString(FText inputText);
    float Pct_Int64Int64(int64 Dividend, int64 Divisor);
    bool IsValidSecurityCodeFormat(FString String);
    bool IsValidEmailAddressFormat(FString String);
    FString GetTimeSpanAsString(FString PastDateString);
    FString GetShortenedNumberAsString(int64 Number);
    FModioInitializeOptions GetProjectInitializeOptionsForSessionId(const FString SessionId);
    FModioInitializeOptions GetProjectInitializeOptions();
    FModioGameID GetProjectGameId();
    EModioEnvironment GetProjectEnvironment();
    FModioApiKey GetProjectApiKey();
    TEnumAsByte<EFileSizeUnit> GetDesiredFileSizeUnit(int64 Filesize);
    FString GetDefaultSessionIdWindows();
    FText Filesize_ToString(int64 Filesize, int32 MinDecimals, int32 MaxDecimals, TEnumAsByte<EFileSizeUnit> Unit, bool bIncludeUnitName);
    FText Conv_Int64ToText(int64 Value, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits);
    FString Conv_Int64ToString(int64 inInt);
}; // Size: 0x28

class UModioSettings : public UObject
{
    int64 GameId;                                                                     // 0x0028 (size: 0x8)
    FString ApiKey;                                                                   // 0x0030 (size: 0x10)
    EModioEnvironment Environment;                                                    // 0x0040 (size: 0x1)
    EModioLogLevel LogLevel;                                                          // 0x0041 (size: 0x1)
    EModioPortal DefaultPortal;                                                       // 0x0042 (size: 0x1)
    bool bUseBackgroundThread;                                                        // 0x0043 (size: 0x1)

}; // Size: 0x48

class UModioSubsystem : public UEngineSubsystem
{
    TMap<class FModioModID, class FModioModCollectionEntry> UserSubscriptionsDefaultValue; // 0x0280 (size: 0x50)
    TMap<class FModioModID, class FModioModCollectionEntry> QueryUserInstallationsDefaultValue; // 0x02D0 (size: 0x50)

    void SetLogLevel(EModioLogLevel UnrealLogLevel);
    void RunPendingHandlers();
    TMap<class FModioModID, class FModioModCollectionEntry> QueryUserSubscriptions();
    TMap<class FModioModID, class FModioModCollectionEntry> QueryUserInstallations(bool bIncludeOutdatedMods);
    TMap<class FModioModID, class FModioModCollectionEntry> QuerySystemInstallations();
    FModioErrorCode PrioritizeTransferForMod(FModioModID ModToPrioritize);
    void KillBackgroundThread();
    void K2_VerifyUserAuthenticationAsync(FK2_VerifyUserAuthenticationAsyncCallback Callback);
    void K2_UnsubscribeFromModAsync(FModioModID ModToUnsubscribeFrom, FK2_UnsubscribeFromModAsyncOnUnsubscribeComplete OnUnsubscribeComplete);
    void K2_UnmuteUserAsync(FModioUserID userId, FK2_UnmuteUserAsyncCallback Callback);
    void K2_SubscribeToModAsync(FModioModID ModToSubscribeTo, FK2_SubscribeToModAsyncOnSubscribeComplete OnSubscribeComplete);
    void K2_SubmitNewModFileForMod(FModioModID Mod, FModioCreateModFileParams Params);
    void K2_SubmitNewModAsync(FModioModCreationHandle Handle, FModioCreateModParams Params, FK2_SubmitNewModAsyncCallback Callback);
    void K2_SubmitModRatingAsync(FModioModID Mod, EModioRating Rating, FK2_SubmitModRatingAsyncCallback Callback);
    void K2_SubmitModChangesAsync(FModioModID Mod, FModioEditModParams Params, FK2_SubmitModChangesAsyncCallback Callback);
    void K2_ShutdownAsync(FK2_ShutdownAsyncOnShutdownComplete OnShutdownComplete);
    void K2_SetLanguage(EModioLanguage Locale);
    void K2_RequestEmailAuthCodeAsync(const FModioEmailAddress& EmailAddress, FK2_RequestEmailAuthCodeAsyncCallback Callback);
    void K2_ReportContentAsync(FModioReportParams Report, FK2_ReportContentAsyncCallback Callback);
    FModioOptionalUser K2_QueryUserProfile();
    FModioOptionalModProgressInfo K2_QueryCurrentModUpdate();
    void K2_PreviewExternalUpdatesAsync(FK2_PreviewExternalUpdatesAsyncOnPreviewDone OnPreviewDone);
    void K2_MuteUserAsync(FModioUserID userId, FK2_MuteUserAsyncCallback Callback);
    void K2_ListUserCreatedModsAsync(const FModioFilterParams& Filter, FK2_ListUserCreatedModsAsyncCallback Callback);
    void K2_ListAllModsAsync(const FModioFilterParams& Filter, FK2_ListAllModsAsyncCallback Callback);
    void K2_InitializeAsync(const FModioInitializeOptions& InitializeOptions, FK2_InitializeAsyncOnInitComplete OnInitComplete);
    void K2_GetUserMediaAvatarAsync(EModioAvatarSize AvatarSize, FK2_GetUserMediaAvatarAsyncCallback Callback);
    void K2_GetTermsOfUseAsync(FK2_GetTermsOfUseAsyncCallback Callback);
    void K2_GetMutedUsersAsync(FK2_GetMutedUsersAsyncCallback Callback);
    void K2_GetModTagOptionsAsync(FK2_GetModTagOptionsAsyncCallback Callback);
    void K2_GetModMediaLogoAsync(FModioModID ModId, EModioLogoSize LogoSize, FK2_GetModMediaLogoAsyncCallback Callback);
    void K2_GetModMediaGalleryImageAsync(FModioModID ModId, EModioGallerySize GallerySize, int32 Index, FK2_GetModMediaGalleryImageAsyncCallback Callback);
    void K2_GetModMediaAvatarAsync(FModioModID ModId, EModioAvatarSize AvatarSize, FK2_GetModMediaAvatarAsyncCallback Callback);
    void K2_GetModInfoAsync(FModioModID ModId, FK2_GetModInfoAsyncCallback Callback);
    void K2_GetModDependenciesAsync(FModioModID ModId, FK2_GetModDependenciesAsyncCallback Callback);
    FModioModCreationHandle K2_GetModCreationHandle();
    void K2_GetGameInfoAsync(FModioGameID GameId, FK2_GetGameInfoAsyncCallback Callback);
    FString K2_GetDefaultModInstallationDirectory(FModioGameID GameId);
    void K2_ForceUninstallModAsync(FModioModID ModToRemove, FK2_ForceUninstallModAsyncCallback Callback);
    void K2_FetchExternalUpdatesAsync(FK2_FetchExternalUpdatesAsyncOnFetchDone OnFetchDone);
    FModioErrorCode K2_EnableModManagement(FK2_EnableModManagementCallback Callback);
    void K2_ClearUserDataAsync(FK2_ClearUserDataAsyncCallback Callback);
    void K2_AuthenticateUserExternalAsync(const FModioAuthenticationParams& User, EModioAuthenticationProvider Provider, FK2_AuthenticateUserExternalAsyncCallback Callback);
    void K2_AuthenticateUserEmailAsync(const FModioEmailAuthCode& AuthenticationCode, FK2_AuthenticateUserEmailAsyncCallback Callback);
    void K2_ArchiveModAsync(FModioModID Mod, FK2_ArchiveModAsyncCallback Callback);
    bool IsUsingBackgroundThread();
    bool IsModManagementBusy();
    TArray<FModioValidationError> GetLastValidationError();
    void DisableModManagement();
}; // Size: 0x3C0

class UModioUnsigned64Library : public UBlueprintFunctionLibrary
{

    FModioUnsigned64 Subtract(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    float Percentage_Unsigned64(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    bool NotEqualTo(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    FModioUnsigned64 MakeFromComponents(const int32& High, const int32& Low);
    bool LessThan(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    bool GreaterThan(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    bool EqualTo(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    float DivideToFloat(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    float DivideFloat(const FModioUnsigned64& LHS, const float RHS);
    FModioUnsigned64 Divide(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    float Conv_FModioUnsigned64ToFloat(const FModioUnsigned64& In);
    void BreakToComponents(const FModioUnsigned64& In, int32& High, int32& Low);
    FModioUnsigned64 Add(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
}; // Size: 0x28

#endif
