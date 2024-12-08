enum EFileSizeUnit {
    Largest = 0,
    B = 1,
    KB = 1024,
    MB = 1048576,
    GB = 1073741824,
    EFileSizeUnit_MAX = 1073741825,
};

enum class EGameMonetizationFlags {
    None = 0,
    Monetization = 1,
    Marketplace = 2,
    PartnerProgram = 4,
    EGameMonetizationFlags_MAX = 5,
};

enum class EModioAuthenticationProvider {
    XboxLive = 0,
    Steam = 1,
    GoG = 2,
    Itch = 3,
    Switch = 4,
    Discord = 5,
    PSN = 6,
    Epic = 7,
    Oculus = 8,
    OpenID = 9,
    EModioAuthenticationProvider_MAX = 10,
};

enum class EModioAvatarSize {
    Original = 0,
    Thumb50 = 1,
    Thumb100 = 2,
    EModioAvatarSize_MAX = 3,
};

enum class EModioEnvironment {
    Test = 0,
    Live = 1,
    EModioEnvironment_MAX = 2,
};

enum class EModioErrorCondition {
    NoError = 0,
    NetworkError = 2,
    ConfigurationError = 3,
    InvalidArgsError = 4,
    FilesystemError = 5,
    InternalError = 6,
    ApiErrorRefSuccess = 7,
    EntityNotFoundError = 12,
    UserTermsOfUseError = 13,
    SubmitReportError = 14,
    UserNotAuthenticatedError = 15,
    SDKNotInitialized = 16,
    UserAlreadyAuthenticatedError = 17,
    SystemError = 18,
    OperationCanceled = 19,
    ModManagementDisabled = 20,
    RateLimited = 21,
    ModBeingProcessed = 22,
    InsufficientSpace = 23,
    SDKAlreadyInitialized = 24,
    ModManagementAlreadyEnabled = 25,
    InsufficientPermissions = 26,
    EmailLoginCodeInvalid = 27,
    EModioErrorCondition_MAX = 28,
};

enum class EModioGallerySize {
    Original = 0,
    Thumb320 = 1,
    Thumb1280 = 2,
    EModioGallerySize_MAX = 3,
};

enum class EModioImageState {
    OnDisc = 0,
    LoadingIntoMemory = 1,
    InMemory = 2,
    Corrupted = 3,
    EModioImageState_MAX = 4,
};

enum class EModioLanguage {
    English = 0,
    Bulgarian = 1,
    French = 2,
    German = 3,
    Italian = 4,
    Polish = 5,
    Portuguese = 6,
    Hungarian = 7,
    Japanese = 8,
    Korean = 9,
    Russian = 10,
    Spanish = 11,
    Thai = 12,
    ChineseSimplified = 13,
    ChineseTraditional = 14,
    EModioLanguage_MAX = 15,
};

enum class EModioLogLevel {
    Trace = 0,
    Info = 1,
    Warning = 2,
    Error = 3,
    EModioLogLevel_MAX = 4,
};

enum class EModioLogoSize {
    Thumb320 = 0,
    Thumb640 = 1,
    Thumb1280 = 2,
    Original = 3,
    EModioLogoSize_MAX = 4,
};

enum class EModioMaturityFlags {
    None = 0,
    Alcohol = 1,
    Drugs = 2,
    Violence = 4,
    Explicit = 8,
    EModioMaturityFlags_MAX = 9,
};

enum class EModioModChangeType {
    Added = 0,
    Removed = 1,
    Updated = 2,
    EModioModChangeType_MAX = 3,
};

enum class EModioModManagementEventType {
    Installed = 0,
    Uninstalled = 1,
    Updated = 2,
    Uploaded = 3,
    BeginInstall = 4,
    BeginUninstall = 5,
    BeginUpdate = 6,
    BeginUpload = 7,
    EModioModManagementEventType_MAX = 8,
};

enum class EModioModProgressState {
    Initializing = 0,
    Downloading = 1,
    Extracting = 2,
    Compressing = 3,
    Uploading = 4,
    EModioModProgressState_MAX = 5,
};

enum class EModioModServerSideStatus {
    NotAccepted = 0,
    Accepted = 1,
    Deleted = 3,
    EModioModServerSideStatus_MAX = 4,
};

enum class EModioModState {
    InstallationPending = 0,
    Installed = 1,
    UpdatePending = 2,
    Downloading = 3,
    Extracting = 4,
    UninstallPending = 5,
    EModioModState_MAX = 6,
};

enum class EModioModfilePlatform {
    Windows = 0,
    Mac = 1,
    Linux = 2,
    Android = 3,
    iOS = 4,
    XboxOne = 5,
    XboxSeriesX = 6,
    PS4 = 7,
    PS5 = 8,
    Switch = 9,
    Oculus = 10,
    Source = 11,
    EModioModfilePlatform_MAX = 12,
};

enum class EModioObjectVisibilityFlags {
    Hidden = 0,
    Public = 1,
    EModioObjectVisibilityFlags_MAX = 2,
};

enum class EModioPlatformName {
    Windows = 0,
    Mac = 1,
    Linux = 2,
    PS4 = 3,
    PS5 = 4,
    XBoxOne = 5,
    XSX = 6,
    Switch = 7,
    Unknown = 8,
    EModioPlatformName_MAX = 9,
};

enum class EModioPortal {
    None = 0,
    Apple = 1,
    EpicGamesStore = 2,
    GOG = 3,
    Google = 4,
    Itchio = 5,
    Nintendo = 6,
    PSN = 7,
    Steam = 8,
    XboxLive = 9,
    EModioPortal_MAX = 10,
};

enum class EModioRating {
    Neutral = 0,
    Positive = 1,
    Negative = 2,
    EModioRating_MAX = 3,
};

enum class EModioReportType {
    Generic = 0,
    DMCA = 1,
    NotWorking = 2,
    RudeContent = 3,
    IllegalContent = 4,
    StolenContent = 5,
    FalseInformation = 6,
    Other = 7,
    EModioReportType_MAX = 8,
};

enum class EModioRevenueFilterType {
    Free = 0,
    Paid = 1,
    FreeAndPaid = 2,
    EModioRevenueFilterType_MAX = 3,
};

enum class EModioSortDirection {
    Ascending = 0,
    Descending = 1,
    EModioSortDirection_MAX = 2,
};

enum class EModioSortFieldType {
    ID = 0,
    DownloadsToday = 1,
    SubscriberCount = 2,
    Rating = 3,
    DateMarkedLive = 4,
    DateUpdated = 5,
    DownloadsTotal = 6,
    EModioSortFieldType_MAX = 7,
};

enum class EModioVirusScanStatus {
    NotScanned = 0,
    ScanComplete = 1,
    InProgress = 2,
    TooLargeToScan = 3,
    FileNotFound = 4,
    ErrorScanning = 5,
    EModioVirusScanStatus_MAX = 6,
};

enum class EModioVirusStatus {
    NoThreat = 0,
    Malicious = 1,
    EModioVirusStatus_MAX = 2,
};

