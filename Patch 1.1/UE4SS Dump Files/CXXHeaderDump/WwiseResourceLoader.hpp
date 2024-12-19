#ifndef UE4SS_SDK_WwiseResourceLoader_HPP
#define UE4SS_SDK_WwiseResourceLoader_HPP

#include "WwiseResourceLoader_enums.hpp"

struct FWwiseAcousticTextureCookedData
{
    float AbsorptionLow;                                                              // 0x0000 (size: 0x4)
    float AbsorptionMidLow;                                                           // 0x0004 (size: 0x4)
    float AbsorptionMidHigh;                                                          // 0x0008 (size: 0x4)
    float AbsorptionHigh;                                                             // 0x000C (size: 0x4)
    int32 ShortId;                                                                    // 0x0010 (size: 0x4)
    FName DebugName;                                                                  // 0x0014 (size: 0x8)

}; // Size: 0x1C

struct FWwiseAudioDeviceShareSetCookedData
{
    int32 ShortId;                                                                    // 0x0000 (size: 0x4)
    FName DebugName;                                                                  // 0x0004 (size: 0x8)

}; // Size: 0xC

struct FWwiseAuxBusCookedData
{
    int32 AuxBusId;                                                                   // 0x0000 (size: 0x4)
    TArray<FWwiseSoundBankCookedData> SoundBanks;                                     // 0x0008 (size: 0x10)
    TArray<FWwiseMediaCookedData> Media;                                              // 0x0018 (size: 0x10)
    FName DebugName;                                                                  // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FWwiseEventCookedData
{
    int32 EventId;                                                                    // 0x0000 (size: 0x4)
    TArray<FWwiseSoundBankCookedData> SoundBanks;                                     // 0x0008 (size: 0x10)
    TArray<FWwiseMediaCookedData> Media;                                              // 0x0018 (size: 0x10)
    TArray<FWwiseExternalSourceCookedData> ExternalSources;                           // 0x0028 (size: 0x10)
    TArray<FWwiseSwitchContainerLeafCookedData> SwitchContainerLeaves;                // 0x0038 (size: 0x10)
    TSet<FWwiseGroupValueCookedData> RequiredGroupValueSet;                           // 0x0048 (size: 0x50)
    EWwiseEventDestroyOptions DestroyOptions;                                         // 0x0098 (size: 0x1)
    FName DebugName;                                                                  // 0x009C (size: 0x8)

}; // Size: 0xA8

struct FWwiseEventInfo : public FWwiseObjectInfo
{
    EWwiseEventSwitchContainerLoading SwitchContainerLoading;                         // 0x0020 (size: 0x1)
    EWwiseEventDestroyOptions DestroyOptions;                                         // 0x0021 (size: 0x1)

}; // Size: 0x24

struct FWwiseGameParameterCookedData
{
    int32 ShortId;                                                                    // 0x0000 (size: 0x4)
    FName DebugName;                                                                  // 0x0004 (size: 0x8)

}; // Size: 0xC

struct FWwiseGroupValueCookedData
{
    EWwiseGroupType Type;                                                             // 0x0000 (size: 0x1)
    int32 GroupID;                                                                    // 0x0004 (size: 0x4)
    int32 ID;                                                                         // 0x0008 (size: 0x4)
    FName DebugName;                                                                  // 0x000C (size: 0x8)

}; // Size: 0x14

struct FWwiseGroupValueInfo : public FWwiseObjectInfo
{
    uint32 GroupShortId;                                                              // 0x0020 (size: 0x4)

}; // Size: 0x24

struct FWwiseInitBankCookedData : public FWwiseSoundBankCookedData
{
    TArray<FWwiseSoundBankCookedData> SoundBanks;                                     // 0x0020 (size: 0x10)
    TArray<FWwiseMediaCookedData> Media;                                              // 0x0030 (size: 0x10)
    TArray<FWwiseLanguageCookedData> Language;                                        // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FWwiseLanguageId
{
    int32 LanguageId;                                                                 // 0x0000 (size: 0x4)
    FName LanguageName;                                                               // 0x0004 (size: 0x8)

}; // Size: 0xC

struct FWwiseLocalizedAuxBusCookedData
{
    TMap<class FWwiseLanguageCookedData, class FWwiseAuxBusCookedData> AuxBusLanguageMap; // 0x0000 (size: 0x50)
    FName DebugName;                                                                  // 0x0050 (size: 0x8)
    int32 AuxBusId;                                                                   // 0x0058 (size: 0x4)

}; // Size: 0x60

struct FWwiseLocalizedEventCookedData
{
    TMap<class FWwiseLanguageCookedData, class FWwiseEventCookedData> EventLanguageMap; // 0x0000 (size: 0x50)
    FName DebugName;                                                                  // 0x0050 (size: 0x8)
    int32 EventId;                                                                    // 0x0058 (size: 0x4)

}; // Size: 0x60

struct FWwiseLocalizedShareSetCookedData
{
    TMap<class FWwiseLanguageCookedData, class FWwiseShareSetCookedData> ShareSetLanguageMap; // 0x0000 (size: 0x50)
    FName DebugName;                                                                  // 0x0050 (size: 0x8)
    int32 ShareSetId;                                                                 // 0x0058 (size: 0x4)

}; // Size: 0x60

struct FWwiseLocalizedSoundBankCookedData
{
    TMap<class FWwiseLanguageCookedData, class FWwiseSoundBankCookedData> SoundBankLanguageMap; // 0x0000 (size: 0x50)
    FName DebugName;                                                                  // 0x0050 (size: 0x8)
    int32 SoundBankId;                                                                // 0x0058 (size: 0x4)

}; // Size: 0x60

struct FWwiseObjectInfo
{
    FGuid WwiseGuid;                                                                  // 0x0000 (size: 0x10)
    uint32 WwiseShortId;                                                              // 0x0010 (size: 0x4)
    FName WwiseName;                                                                  // 0x0014 (size: 0x8)
    uint32 HardCodedSoundBankShortId;                                                 // 0x001C (size: 0x4)

}; // Size: 0x20

struct FWwisePlatformId
{
    FGuid PlatformGuid;                                                               // 0x0000 (size: 0x10)
    FName PlatformName;                                                               // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FWwiseShareSetCookedData
{
    int32 ShareSetId;                                                                 // 0x0000 (size: 0x4)
    TArray<FWwiseSoundBankCookedData> SoundBanks;                                     // 0x0008 (size: 0x10)
    TArray<FWwiseMediaCookedData> Media;                                              // 0x0018 (size: 0x10)
    FName DebugName;                                                                  // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FWwiseSharedGroupValueKey
{
}; // Size: 0x10

struct FWwiseSharedLanguageId
{
    EWwiseLanguageRequirement LanguageRequirement;                                    // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FWwiseSharedPlatformId
{
}; // Size: 0x10

struct FWwiseSwitchContainerLeafCookedData
{
    TSet<FWwiseGroupValueCookedData> GroupValueSet;                                   // 0x0000 (size: 0x50)
    TArray<FWwiseSoundBankCookedData> SoundBanks;                                     // 0x0050 (size: 0x10)
    TArray<FWwiseMediaCookedData> Media;                                              // 0x0060 (size: 0x10)
    TArray<FWwiseExternalSourceCookedData> ExternalSources;                           // 0x0070 (size: 0x10)

}; // Size: 0x80

struct FWwiseTriggerCookedData
{
    int32 TriggerId;                                                                  // 0x0000 (size: 0x4)
    FName DebugName;                                                                  // 0x0004 (size: 0x8)

}; // Size: 0xC

class UWwiseEventInfoLibrary : public UBlueprintFunctionLibrary
{

    FWwiseEventInfo SetWwiseShortId(const FWwiseEventInfo& Ref, int32 WwiseShortId);
    FWwiseEventInfo SetWwiseName(const FWwiseEventInfo& Ref, FString WwiseName);
    FWwiseEventInfo SetWwiseGuid(const FWwiseEventInfo& Ref, const FGuid& WwiseGuid);
    FWwiseEventInfo SetSwitchContainerLoading(const FWwiseEventInfo& Ref, const EWwiseEventSwitchContainerLoading& SwitchContainerLoading);
    FWwiseEventInfo SetHardCodedSoundBankShortId(const FWwiseEventInfo& Ref, int32 HardCodedSoundBankShortId);
    FWwiseEventInfo SetDestroyOptions(const FWwiseEventInfo& Ref, const EWwiseEventDestroyOptions& DestroyOptions);
    FWwiseEventInfo MakeStruct(const FGuid& WwiseGuid, int32 WwiseShortId, FString WwiseName, EWwiseEventSwitchContainerLoading SwitchContainerLoading, EWwiseEventDestroyOptions DestroyOptions, int32 HardCodedSoundBankShortId);
    int32 GetWwiseShortID(const FWwiseEventInfo& Ref);
    FString GetWwiseName(const FWwiseEventInfo& Ref);
    FGuid GetWwiseGuid(const FWwiseEventInfo& Ref);
    EWwiseEventSwitchContainerLoading GetSwitchContainerLoading(const FWwiseEventInfo& Ref);
    int32 GetHardCodedSoundBankShortId(const FWwiseEventInfo& Ref);
    EWwiseEventDestroyOptions GetDestroyOptions(const FWwiseEventInfo& Ref);
    void BreakStruct(FWwiseEventInfo Ref, FGuid& OutWwiseGuid, int32& OutWwiseShortId, FString& OutWwiseName, EWwiseEventSwitchContainerLoading& OutSwitchContainerLoading, EWwiseEventDestroyOptions& OutDestroyOptions, int32& OutHardCodedSoundBankShortId);
}; // Size: 0x28

class UWwiseGroupValueInfoLibrary : public UBlueprintFunctionLibrary
{

    FWwiseGroupValueInfo SetWwiseShortId(const FWwiseGroupValueInfo& Ref, int32 WwiseShortId);
    FWwiseGroupValueInfo SetWwiseName(const FWwiseGroupValueInfo& Ref, FString WwiseName);
    FWwiseGroupValueInfo SetGroupShortId(const FWwiseGroupValueInfo& Ref, int32 GroupShortId);
    FWwiseGroupValueInfo SetAssetGuid(const FWwiseGroupValueInfo& Ref, const FGuid& AssetGuid);
    FWwiseGroupValueInfo MakeStruct(const FGuid& AssetGuid, int32 GroupShortId, int32 WwiseShortId, FString WwiseName);
    int32 GetWwiseShortID(const FWwiseGroupValueInfo& Ref);
    FString GetWwiseName(const FWwiseGroupValueInfo& Ref);
    int32 GetGroupShortId(const FWwiseGroupValueInfo& Ref);
    FGuid GetAssetGuid(const FWwiseGroupValueInfo& Ref);
    void BreakStruct(FWwiseGroupValueInfo Ref, FGuid& OutAssetGuid, int32& OutGroupShortId, int32& OutWwiseShortId, FString& OutWwiseName);
}; // Size: 0x28

class UWwiseObjectInfoLibrary : public UBlueprintFunctionLibrary
{

    FWwiseObjectInfo SetWwiseShortId(const FWwiseObjectInfo& Ref, int32 WwiseShortId);
    FWwiseObjectInfo SetWwiseName(const FWwiseObjectInfo& Ref, FString WwiseName);
    FWwiseObjectInfo SetWwiseGuid(const FWwiseObjectInfo& Ref, const FGuid& WwiseGuid);
    FWwiseObjectInfo SetHardCodedSoundBankShortId(const FWwiseObjectInfo& Ref, int32 HardCodedSoundBankShortId);
    FWwiseObjectInfo MakeStruct(const FGuid& WwiseGuid, int32 WwiseShortId, FString WwiseName, int32 HardCodedSoundBankShortId);
    int32 GetWwiseShortID(const FWwiseObjectInfo& Ref);
    FString GetWwiseName(const FWwiseObjectInfo& Ref);
    FGuid GetWwiseGuid(const FWwiseObjectInfo& Ref);
    int32 GetHardCodedSoundBankShortId(const FWwiseObjectInfo& Ref);
    void BreakStruct(FWwiseObjectInfo Ref, FGuid& OutWwiseGuid, int32& OutWwiseShortId, FString& OutWwiseName, int32& OutHardCodedSoundBankShortId);
}; // Size: 0x28

#endif
