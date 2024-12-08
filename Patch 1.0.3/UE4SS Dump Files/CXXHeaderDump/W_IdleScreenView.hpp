#ifndef UE4SS_SDK_W_IdleScreenView_HPP
#define UE4SS_SDK_W_IdleScreenView_HPP

class UW_IdleScreenView_C : public UIdleScreenView
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UImage* Background;                                                         // 0x0320 (size: 0x8)
    class UImage* BackgroundImage;                                                    // 0x0328 (size: 0x8)
    class UImage* BottomImage;                                                        // 0x0330 (size: 0x8)
    class UW_Text_C* HeaderShaderCompiling;                                           // 0x0338 (size: 0x8)
    class UImage* Image;                                                              // 0x0340 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0348 (size: 0x8)
    class UImage* Image_178;                                                          // 0x0350 (size: 0x8)
    class UImage* RadiationImage;                                                     // 0x0358 (size: 0x8)
    class UW_Text_C* Text_PressAnyKey;                                                // 0x0360 (size: 0x8)
    class UW_Text_C* Text_SettingUp;                                                  // 0x0368 (size: 0x8)

    void InpActEvt_AnyKey_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_SpaceBar_K2Node_InputKeyEvent_0(FKey Key);
    void ExecuteUbergraph_W_IdleScreenView(int32 EntryPoint);
}; // Size: 0x370

#endif
