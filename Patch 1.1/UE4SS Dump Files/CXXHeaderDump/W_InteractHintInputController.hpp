#ifndef UE4SS_SDK_W_InteractHintInputController_HPP
#define UE4SS_SDK_W_InteractHintInputController_HPP

class UW_InteractHintInputController_C : public UInteractHintInputController
{
    class UW_HintViewGamepad_C* HintViewGamepad;                                      // 0x03B0 (size: 0x8)
    class UW_HintViewKeyboard_C* HintViewKeyboard;                                    // 0x03B8 (size: 0x8)
    class UW_ActionMimicButton_C* MimicButtonElement;                                 // 0x03C0 (size: 0x8)

}; // Size: 0x3C8

#endif
