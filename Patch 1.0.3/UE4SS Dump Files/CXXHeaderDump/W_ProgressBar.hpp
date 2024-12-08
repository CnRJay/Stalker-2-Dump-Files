#ifndef UE4SS_SDK_W_ProgressBar_HPP
#define UE4SS_SDK_W_ProgressBar_HPP

class UW_ProgressBar_C : public UProgressBarWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UW_Image_C* FirstImageObj;                                                  // 0x0298 (size: 0x8)
    class UHorizontalBox* WidgetContiner;                                             // 0x02A0 (size: 0x8)

    void GetOtherObjectWidget();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_ProgressBar(int32 EntryPoint);
}; // Size: 0x2A8

#endif
