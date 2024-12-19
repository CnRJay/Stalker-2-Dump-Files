#ifndef UE4SS_SDK_W_Hint_PC_HPP
#define UE4SS_SDK_W_Hint_PC_HPP

class UW_Hint_PC_C : public UHintKey
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UWidgetAnimation* OnRunActionAnim;                                          // 0x0438 (size: 0x8)
    bool bIsPlaydClickAnim;                                                           // 0x0440 (size: 0x1)

    void SequenceEvent_0();
    void SequenceEvent_1();
    void ExecuteUbergraph_W_Hint_PC(int32 EntryPoint);
}; // Size: 0x441

#endif
