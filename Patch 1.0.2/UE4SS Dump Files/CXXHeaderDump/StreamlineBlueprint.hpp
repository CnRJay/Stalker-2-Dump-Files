#ifndef UE4SS_SDK_StreamlineBlueprint_HPP
#define UE4SS_SDK_StreamlineBlueprint_HPP

#include "StreamlineBlueprint_enums.hpp"

struct FStreamlineFeatureRequirements
{
    UStreamlineFeatureSupport Support;                                                // 0x0000 (size: 0x1)
    UStreamlineFeatureRequirementsFlags Requirements;                                 // 0x0001 (size: 0x1)
    FStreamlineVersion RequiredOperatingSystemVersion;                                // 0x0004 (size: 0xC)
    FStreamlineVersion DetectedOperatingSystemVersion;                                // 0x0010 (size: 0xC)
    FStreamlineVersion RequiredDriverVersion;                                         // 0x001C (size: 0xC)
    FStreamlineVersion DetectedDriverVersion;                                         // 0x0028 (size: 0xC)

}; // Size: 0x34

struct FStreamlineVersion
{
    int32 Major;                                                                      // 0x0000 (size: 0x4)
    int32 Minor;                                                                      // 0x0004 (size: 0x4)
    int32 Build;                                                                      // 0x0008 (size: 0x4)

}; // Size: 0xC

class UStreamlineLibrary : public UBlueprintFunctionLibrary
{

    UStreamlineFeatureSupport QueryStreamlineFeatureSupport(UStreamlineFeature Feature);
    bool IsStreamlineFeatureSupported(UStreamlineFeature Feature);
    FStreamlineFeatureRequirements GetStreamlineFeatureInformation(UStreamlineFeature Feature);
    void BreakStreamlineFeatureRequirements(UStreamlineFeatureRequirementsFlags Requirements, bool& D3D11Supported, bool& D3D12Supported, bool& VulkanSupported, bool& VSyncOffRequired, bool& HardwareSchedulingRequired);
}; // Size: 0x28

class UStreamlineLibraryDLSSG : public UBlueprintFunctionLibrary
{

    void SetDLSSGMode(UStreamlineDLSSGMode DLSSGMode);
    UStreamlineFeatureSupport QueryDLSSGSupport();
    bool IsDLSSGSupported();
    bool IsDLSSGModeSupported(UStreamlineDLSSGMode DLSSGMode);
    TArray<UStreamlineDLSSGMode> GetSupportedDLSSGModes();
    UStreamlineDLSSGMode GetDLSSGMode();
    void GetDLSSGFrameTiming(float& FrameRateInHertz, int32& FramesPresented);
    UStreamlineDLSSGMode GetDefaultDLSSGMode();
}; // Size: 0x28

class UStreamlineLibraryReflex : public UBlueprintFunctionLibrary
{

    void SetReflexMode(const UStreamlineReflexMode Mode);
    UStreamlineFeatureSupport QueryReflexSupport();
    bool IsReflexSupported();
    float GetRenderLatencyInMs();
    UStreamlineReflexMode GetReflexMode();
    float GetGameToRenderLatencyInMs();
    float GetGameLatencyInMs();
    UStreamlineReflexMode GetDefaultReflexMode();
}; // Size: 0x28

#endif
