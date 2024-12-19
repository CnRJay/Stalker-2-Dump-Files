#ifndef UE4SS_SDK_GamepadUMGPlugin_HPP
#define UE4SS_SDK_GamepadUMGPlugin_HPP

class UGamepadCursorSettings : public UDeveloperSettings
{
    FRuntimeFloatCurve AnalogCursorAccelerationCurve;                                 // 0x0038 (size: 0x88)
    float MaxAnalogCursorSpeed;                                                       // 0x00C0 (size: 0x4)
    float MaxAnalogCursorSpeedWhenHovered;                                            // 0x00C4 (size: 0x4)
    float AnalogCursorDragCoefficient;                                                // 0x00C8 (size: 0x4)
    float AnalogCursorDragCoefficientWhenHovered;                                     // 0x00CC (size: 0x4)
    float MinAnalogCursorSpeed;                                                       // 0x00D0 (size: 0x4)
    float AnalogCursorDeadZone;                                                       // 0x00D4 (size: 0x4)
    float AnalogCursorAccelerationMultiplier;                                         // 0x00D8 (size: 0x4)
    float AnalogCursorSize;                                                           // 0x00DC (size: 0x4)
    bool bUseEngineAnalogCursor;                                                      // 0x00E0 (size: 0x1)
    bool bAnalogCursorNoAcceleration;                                                 // 0x00E1 (size: 0x1)

}; // Size: 0xF8

class UVirtualCursorFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool IsCursorOverInteractableWidget();
    void EnableVirtualCursor(class APlayerController* PC);
    void DisableVirtualCursor(class APlayerController* PC);
}; // Size: 0x28

#endif
