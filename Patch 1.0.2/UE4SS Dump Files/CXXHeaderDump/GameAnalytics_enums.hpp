enum class EGAAdAction {
    undefined = 0,
    clicked = 1,
    show = 2,
    failedshow = 3,
    rewardreceived = 4,
    request = 5,
    loaded = 6,
    EGAAdAction_MAX = 7,
};

enum class EGAAdError {
    undefined = 0,
    unknown = 1,
    offline = 2,
    nofill = 3,
    internalerror = 4,
    invalidrequest = 5,
    unabletoprecache = 6,
    EGAAdError_MAX = 7,
};

enum class EGAAdType {
    undefined = 0,
    video = 1,
    rewardedvideo = 2,
    playable = 3,
    interstitial = 4,
    offerwall = 5,
    banner = 6,
    EGAAdType_MAX = 7,
};

enum class EGAErrorSeverity {
    undefined = 0,
    debug = 1,
    info = 2,
    warning = 3,
    error = 4,
    critical = 5,
    EGAErrorSeverity_MAX = 6,
};

enum class EGAProgressionStatus {
    undefined = 0,
    start = 1,
    complete = 2,
    fail = 3,
    EGAProgressionStatus_MAX = 4,
};

enum class EGAResourceFlowType {
    undefined = 0,
    source = 1,
    sink = 2,
    EGAResourceFlowType_MAX = 3,
};

