#ifndef UE4SS_SDK_WwiseSimpleExternalSource_HPP
#define UE4SS_SDK_WwiseSimpleExternalSource_HPP

struct FWwiseExternalSourceCookieDefaultMedia : public FTableRowBase
{
    int32 ExternalSourceCookie;                                                       // 0x0008 (size: 0x4)
    FString ExternalSourceName;                                                       // 0x0010 (size: 0x10)
    int32 MediaInfoId;                                                                // 0x0020 (size: 0x4)
    FString MediaName;                                                                // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FWwiseExternalSourceMediaInfo : public FTableRowBase
{
    int32 ExternalSourceMediaInfoId;                                                  // 0x0008 (size: 0x4)
    FName MediaName;                                                                  // 0x000C (size: 0x8)
    int32 CodecID;                                                                    // 0x0014 (size: 0x4)
    bool bIsStreamed;                                                                 // 0x0018 (size: 0x1)
    bool bUseDeviceMemory;                                                            // 0x0019 (size: 0x1)
    int32 MemoryAlignment;                                                            // 0x001C (size: 0x4)
    int32 PrefetchSize;                                                               // 0x0020 (size: 0x4)

}; // Size: 0x28

class UWwiseExternalSourceSettings : public UObject
{
    FSoftObjectPath MediaInfoTable;                                                   // 0x0028 (size: 0x20)
    FSoftObjectPath ExternalSourceDefaultMedia;                                       // 0x0048 (size: 0x20)
    FDirectoryPath ExternalSourceStagingDirectory;                                    // 0x0068 (size: 0x10)

}; // Size: 0x90

#endif
