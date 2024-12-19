#ifndef UE4SS_SDK_W_EquipmentSlotNew_HPP
#define UE4SS_SDK_W_EquipmentSlotNew_HPP

class UW_EquipmentSlotNew_C : public UEquipmentSlot
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0640 (size: 0x8)
    class USizeBox* SizeBox_SlotSize;                                                 // 0x0648 (size: 0x8)
    class UTextBlock* TextBlock_SlotIndex_Preview;                                    // 0x0650 (size: 0x8)
    FVector2D SlotSize;                                                               // 0x0658 (size: 0x10)
    FVector2D SlotDimensions;                                                         // 0x0668 (size: 0x10)
    int32 SlotIndex_0;                                                                // 0x0678 (size: 0x4)
    FSlateBrush ButtonDefaultNormalState;                                             // 0x0680 (size: 0xF0)
    class UTexture2D* DefaultIconBP;                                                  // 0x0770 (size: 0x8)
    class UTexture2D* BackgroundIconBP;                                               // 0x0778 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_W_EquipmentSlotNew(int32 EntryPoint);
}; // Size: 0x780

#endif
