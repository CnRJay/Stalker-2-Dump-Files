#ifndef UE4SS_SDK_W_ItemCompareWidget_HPP
#define UE4SS_SDK_W_ItemCompareWidget_HPP

class UW_ItemCompareWidget_C : public UItemCompareWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C8 (size: 0x8)

    void SequenceEvent__ENTRYPOINTW_ItemCompareWidget();
    void DataRefresh();
    void ExecuteUbergraph_W_ItemCompareWidget(int32 EntryPoint);
}; // Size: 0x2D0

#endif
