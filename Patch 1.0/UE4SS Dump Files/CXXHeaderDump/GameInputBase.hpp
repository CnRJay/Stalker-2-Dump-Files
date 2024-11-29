#ifndef UE4SS_SDK_GameInputBase_HPP
#define UE4SS_SDK_GameInputBase_HPP

#include "GameInputBase_enums.hpp"

struct FGameInputControllerAxisData
{
    FName KeyName;                                                                    // 0x0000 (size: 0x8)
    float DeadZone;                                                                   // 0x0008 (size: 0x4)
    float Scalar;                                                                     // 0x000C (size: 0x4)
    bool bIsPackedPositveAndNegative;                                                 // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FGameInputDeviceConfiguration
{
    FGameInputDeviceIdentifier DeviceIdentifier;                                      // 0x0000 (size: 0x4)
    bool bOverrideHardwareDeviceIdString;                                             // 0x0004 (size: 0x1)
    FString OverriddenHardwareDeviceId;                                               // 0x0008 (size: 0x10)
    bool bProcessControllerButtons;                                                   // 0x0018 (size: 0x1)
    bool bProcessControllerSwitchState;                                               // 0x0019 (size: 0x1)
    bool bProcessControllerAxis;                                                      // 0x001A (size: 0x1)
    TMap<uint32, FName> ControllerButtonMappingData;                                  // 0x0020 (size: 0x50)
    TMap<uint32, FGameInputControllerAxisData> ControllerAxisMappingData;             // 0x0070 (size: 0x50)
    bool bProcessRawReportData;                                                       // 0x00C0 (size: 0x1)
    uint32 RawReportReadingId;                                                        // 0x00C4 (size: 0x4)
    TMap<int32, FGameInputRawDeviceReportData> RawReportMappingData;                  // 0x00C8 (size: 0x50)

}; // Size: 0x118

struct FGameInputDeviceIdentifier
{
    uint16 VendorId;                                                                  // 0x0000 (size: 0x2)
    uint16 ProductId;                                                                 // 0x0002 (size: 0x2)

}; // Size: 0x4

struct FGameInputRawDeviceReportData
{
    FName KeyName;                                                                    // 0x0000 (size: 0x8)
    ERawDeviceReportTranslationBehavior TranslationBehavior;                          // 0x0008 (size: 0x1)
    uint8 AnalogDeadzone;                                                             // 0x0009 (size: 0x1)
    float Scalar;                                                                     // 0x000C (size: 0x4)
    TMap<int32, FName> ButtonBitMaskMappings;                                         // 0x0010 (size: 0x50)
    uint8 LowerBitAxisIndex;                                                          // 0x0060 (size: 0x1)
    uint8 HigherBitAxisIndex;                                                         // 0x0061 (size: 0x1)

}; // Size: 0x68

class UGameInputDeveloperSettings : public UObject
{
    TArray<FGameInputDeviceConfiguration> DeviceConfigurations;                       // 0x0028 (size: 0x10)
    FPerPlatformSettings PlatformSpecificSettings;                                    // 0x0038 (size: 0x10)
    bool bDoNotProcessDuplicateCapabilitiesForSingleUser;                             // 0x0048 (size: 0x1)

}; // Size: 0x50

class UGameInputPlatformSettings : public UPlatformSettings
{
    bool bProcessController;                                                          // 0x0040 (size: 0x1)
    bool bProcessRawInput;                                                            // 0x0041 (size: 0x1)
    bool bSpecialDevicesRequireExplicitDeviceConfiguration;                           // 0x0042 (size: 0x1)
    bool bProcessGamepad;                                                             // 0x0043 (size: 0x1)
    bool bProcessKeyboard;                                                            // 0x0044 (size: 0x1)
    bool bProcessMouse;                                                               // 0x0045 (size: 0x1)
    bool bProcessRacingWheel;                                                         // 0x0046 (size: 0x1)
    float RacingWheelDeadzone;                                                        // 0x0048 (size: 0x4)

}; // Size: 0x50

#endif
