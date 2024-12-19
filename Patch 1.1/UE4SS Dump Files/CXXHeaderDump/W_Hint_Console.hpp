#ifndef UE4SS_SDK_W_Hint_Console_HPP
#define UE4SS_SDK_W_Hint_Console_HPP

class UW_Hint_Console_C : public UHintKey
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UWidgetAnimation* OnRunActionAnim;                                          // 0x0438 (size: 0x8)
    class UWidgetAnimation* SingleCliskAnim;                                          // 0x0440 (size: 0x8)
    class UW_Image_C* circle;                                                         // 0x0448 (size: 0x8)
    class UW_Image_C* CircleBeck;                                                     // 0x0450 (size: 0x8)
    class USizeBox* HintSizeBox;                                                      // 0x0458 (size: 0x8)
    bool bIsPlaydClickAnim;                                                           // 0x0460 (size: 0x1)

    TArray<class UImageWidget*> GetAllBackgroundsImage();
    TArray<class UImageWidget*> GetAllFirstPlanImage();
    void FinishAnimation();
    void PlayHintAnimation_1(bool IsSingleClick);
    void ExecuteUbergraph_W_Hint_Console(int32 EntryPoint);
}; // Size: 0x461

#endif
