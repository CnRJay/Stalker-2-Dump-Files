#ifndef UE4SS_SDK_WwiseFileHandler_HPP
#define UE4SS_SDK_WwiseFileHandler_HPP

#include "WwiseFileHandler_enums.hpp"

struct FWwiseExternalSourceCookedData
{
    int32 Cookie;                                                                     // 0x0000 (size: 0x4)
    FName DebugName;                                                                  // 0x0004 (size: 0x8)

}; // Size: 0xC

struct FWwiseLanguageCookedData
{
    int32 LanguageId;                                                                 // 0x0000 (size: 0x4)
    FName LanguageName;                                                               // 0x0004 (size: 0x8)
    EWwiseLanguageRequirement LanguageRequirement;                                    // 0x000C (size: 0x1)

}; // Size: 0x10

struct FWwiseMediaCookedData
{
    int32 MediaId;                                                                    // 0x0000 (size: 0x4)
    FName MediaPathName;                                                              // 0x0004 (size: 0x8)
    int32 PrefetchSize;                                                               // 0x000C (size: 0x4)
    int32 MemoryAlignment;                                                            // 0x0010 (size: 0x4)
    bool bDeviceMemory;                                                               // 0x0014 (size: 0x1)
    bool bStreaming;                                                                  // 0x0015 (size: 0x1)
    FName DebugName;                                                                  // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FWwiseSoundBankCookedData
{
    int32 SoundBankId;                                                                // 0x0000 (size: 0x4)
    FName SoundBankPathName;                                                          // 0x0004 (size: 0x8)
    int32 MemoryAlignment;                                                            // 0x000C (size: 0x4)
    bool bDeviceMemory;                                                               // 0x0010 (size: 0x1)
    bool bContainsMedia;                                                              // 0x0011 (size: 0x1)
    EWwiseSoundBankType SoundBankType;                                                // 0x0012 (size: 0x1)
    FName DebugName;                                                                  // 0x0014 (size: 0x8)

}; // Size: 0x1C

class UWwiseExternalSourceStatics : public UBlueprintFunctionLibrary
{

    void SetExternalSourceMediaWithIds(const FAkUniqueID ExternalSourceCookie, const int32 MediaId);
    void SetExternalSourceMediaByName(FString ExternalSourceName, FString MediaName);
    void SetExternalSourceMediaById(FString ExternalSourceName, const int32 MediaId);
}; // Size: 0x28

#endif
