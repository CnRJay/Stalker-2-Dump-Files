enum class EFileMediaOutputPixelFormat {
    B8G8R8A8 = 0,
    FloatRGBA = 1,
    EFileMediaOutputPixelFormat_MAX = 2,
};

enum class EMediaCaptureCroppingType {
    None = 0,
    Center = 1,
    TopLeft = 2,
    Custom = 3,
    EMediaCaptureCroppingType_MAX = 4,
};

enum class EMediaCaptureOverrunAction {
    Flush = 0,
    Skip = 1,
    EMediaCaptureOverrunAction_MAX = 2,
};

enum class EMediaCaptureResourceType {
    Texture = 0,
    Buffer = 1,
    EMediaCaptureResourceType_MAX = 2,
};

enum class EMediaCaptureState {
    Error = 0,
    Capturing = 1,
    Preparing = 2,
    StopRequested = 3,
    Stopped = 4,
    EMediaCaptureState_MAX = 5,
};

enum class EMediaIOAutoDetectableTimecodeFormat {
    None = 0,
    LTC = 1,
    VITC = 2,
    Auto = 255,
    EMediaIOAutoDetectableTimecodeFormat_MAX = 256,
};

enum class EMediaIOInputType {
    Fill = 0,
    FillAndKey = 1,
    EMediaIOInputType_MAX = 2,
};

enum class EMediaIOOutputType {
    Fill = 0,
    FillAndKey = 1,
    EMediaIOOutputType_MAX = 2,
};

enum class EMediaIOQuadLinkTransportType {
    SquareDivision = 0,
    TwoSampleInterleave = 1,
    EMediaIOQuadLinkTransportType_MAX = 2,
};

enum class EMediaIOReferenceType {
    FreeRun = 0,
    External = 1,
    Input = 2,
    EMediaIOReferenceType_MAX = 3,
};

enum class EMediaIOStandardType {
    Progressive = 0,
    Interlaced = 1,
    ProgressiveSegmentedFrame = 2,
    EMediaIOStandardType_MAX = 3,
};

enum class EMediaIOTimecodeFormat {
    None = 0,
    LTC = 1,
    VITC = 2,
    EMediaIOTimecodeFormat_MAX = 3,
};

enum class EMediaIOTransportType {
    SingleLink = 0,
    DualLink = 1,
    QuadLink = 2,
    HDMI = 3,
    EMediaIOTransportType_MAX = 4,
};

