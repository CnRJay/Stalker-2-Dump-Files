#ifndef UE4SS_SDK_W_FirstTimeSettingsView_HPP
#define UE4SS_SDK_W_FirstTimeSettingsView_HPP

class UW_FirstTimeSettingsView_C : public USettingsView
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UImage* Background_1;                                                       // 0x0458 (size: 0x8)
    class UW_FirstTimeSettings_C* FirstTimeSettings;                                  // 0x0460 (size: 0x8)
    class UW_HintInputController_C* HintNavLeft;                                      // 0x0468 (size: 0x8)
    class UW_HintInputController_C* HintNavRight;                                     // 0x0470 (size: 0x8)
    class UW_Text_C* MainMenuOptionsText;                                             // 0x0478 (size: 0x8)
    class UW_Text_C* MainMenuText;                                                    // 0x0480 (size: 0x8)
    class UOverlay* MainOverlay;                                                      // 0x0488 (size: 0x8)
    class UWidgetSwitcher* MainSwitcher;                                              // 0x0490 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x0498 (size: 0x8)
    TSoftObjectPtr<UTexture2D> GammaTexture;                                          // 0x04A0 (size: 0x30)

    void Construct();
    void BndEvt__W_FirstTimeSettingsView_FirstTimeSettings_K2Node_ComponentBoundEvent_0_OnGammaSelected__DelegateSignature(const bool InSelected);
    void ExecuteUbergraph_W_FirstTimeSettingsView(int32 EntryPoint);
}; // Size: 0x4D0

#endif
