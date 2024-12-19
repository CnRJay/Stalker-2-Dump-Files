#ifndef UE4SS_SDK_W_ItemSelectorView_HPP
#define UE4SS_SDK_W_ItemSelectorView_HPP

class UW_ItemSelectorView_C : public UItemSelectorView
{
    class UImage* MidleSelectorBeckground;                                            // 0x0488 (size: 0x8)
    class USafeZone* SafeZone_0;                                                      // 0x0490 (size: 0x8)
    class UW_ItemSelectorSlot_C* W_ItemSelectorSlot0;                                 // 0x0498 (size: 0x8)
    class UW_ItemSelectorSlot_C* W_ItemSelectorSlot1;                                 // 0x04A0 (size: 0x8)
    class UW_ItemSelectorSlot_C* W_ItemSelectorSlot2;                                 // 0x04A8 (size: 0x8)
    class UW_ItemSelectorSlot_C* W_ItemSelectorSlot3;                                 // 0x04B0 (size: 0x8)
    class UW_ItemSelectorSlot_C* W_ItemSelectorSlot4;                                 // 0x04B8 (size: 0x8)
    class UW_ItemSelectorSlot_C* W_ItemSelectorSlot5;                                 // 0x04C0 (size: 0x8)

    TArray<class UItemSelectorWeaponSlot*> GetSlotsBP();
}; // Size: 0x4C8

#endif
