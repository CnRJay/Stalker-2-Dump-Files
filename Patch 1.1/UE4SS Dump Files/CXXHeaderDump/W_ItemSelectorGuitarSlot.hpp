#ifndef UE4SS_SDK_W_ItemSelectorGuitarSlot_HPP
#define UE4SS_SDK_W_ItemSelectorGuitarSlot_HPP

class UW_ItemSelectorGuitarSlot_C : public UViewBaseExtended
{
    class UImage* BackgroundImage;                                                    // 0x02C8 (size: 0x8)
    class UHintSwitcher_C* HintSwitcher;                                              // 0x02D0 (size: 0x8)
    class UImage* Image;                                                              // 0x02D8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02E0 (size: 0x8)
    class UImage* Image_263;                                                          // 0x02E8 (size: 0x8)

    TArray<class UUserWidget*> GetHoveredWidgets();
}; // Size: 0x2F0

#endif
