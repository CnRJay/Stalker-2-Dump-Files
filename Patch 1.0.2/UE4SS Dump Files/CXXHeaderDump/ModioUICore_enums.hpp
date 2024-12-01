enum class EModioEnabledFilterType {
    None = 0,
    Enabled = 1,
    Disabled = 2,
    EModioEnabledFilterType_MAX = 3,
};

enum class EModioInstalledFilterType {
    None = 0,
    CurrentUser = 1,
    AnotherUser = 2,
    EModioInstalledFilterType_MAX = 3,
};

enum class EModioManualSortType {
    AToZ = 0,
    ZToA = 1,
    SizeOnDisk = 2,
    RecentlyUpdated = 3,
    EModioManualSortType_MAX = 4,
};

enum class EModioUIAsyncOperationWidgetState {
    Success = 0,
    Error = 1,
    InProgress = 2,
    EModioUIAsyncOperationWidgetState_MAX = 3,
};

enum class EModioUIMediaDownloadEventType {
    ModGalleryImages = 0,
    ModCreatorAvatarImage = 1,
    ModLogo = 2,
    EModioUIMediaDownloadEventType_MAX = 3,
};

enum class EModioUIModInfoEventType {
    ListAllMods = 0,
    GetModInfo = 1,
    EModioUIModInfoEventType_MAX = 2,
};

