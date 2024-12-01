#ifndef UE4SS_SDK_ImGui_HPP
#define UE4SS_SDK_ImGui_HPP

#include "ImGui_enums.hpp"

struct FImGuiCanvasSizeInfo
{
    EImGuiCanvasSizeType SizeType;                                                    // 0x0000 (size: 0x1)
    int32 Width;                                                                      // 0x0004 (size: 0x4)
    int32 Height;                                                                     // 0x0008 (size: 0x4)
    bool bExtendToViewport;                                                           // 0x000C (size: 0x1)

}; // Size: 0x10

struct FImGuiDPIScaleInfo
{
    EImGuiDPIScaleMethod ScalingMethod;                                               // 0x0000 (size: 0x1)
    float Scale;                                                                      // 0x0004 (size: 0x4)
    FRuntimeFloatCurve DPICurve;                                                      // 0x0008 (size: 0x88)
    bool bScaleWithCurve;                                                             // 0x0090 (size: 0x1)

}; // Size: 0x98

struct FImGuiKeyInfo
{
    FKey Key;                                                                         // 0x0000 (size: 0x18)
    ECheckBoxState shift;                                                             // 0x0018 (size: 0x1)
    ECheckBoxState ctrl;                                                              // 0x0019 (size: 0x1)
    ECheckBoxState alt;                                                               // 0x001A (size: 0x1)
    ECheckBoxState Cmd;                                                               // 0x001B (size: 0x1)

}; // Size: 0x20

class UImGuiInputHandler : public UObject
{
}; // Size: 0x50

class UImGuiSettings : public UObject
{
    FSoftClassPath ImGuiInputHandlerClass;                                            // 0x0028 (size: 0x20)
    bool bShareKeyboardInput;                                                         // 0x0048 (size: 0x1)
    bool bShareGamepadInput;                                                          // 0x0049 (size: 0x1)
    bool bShareMouseInput;                                                            // 0x004A (size: 0x1)
    bool bUseSoftwareCursor;                                                          // 0x004B (size: 0x1)
    FImGuiKeyInfo ToggleInput;                                                        // 0x0050 (size: 0x20)
    FImGuiCanvasSizeInfo CanvasSize;                                                  // 0x0070 (size: 0x10)
    FImGuiDPIScaleInfo DPIScale;                                                      // 0x0080 (size: 0x98)

}; // Size: 0x118

#endif
