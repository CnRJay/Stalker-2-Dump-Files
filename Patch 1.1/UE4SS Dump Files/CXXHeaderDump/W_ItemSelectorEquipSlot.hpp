#ifndef UE4SS_SDK_W_ItemSelectorEquipSlot_HPP
#define UE4SS_SDK_W_ItemSelectorEquipSlot_HPP

class UW_ItemSelectorEquipSlot_C : public UItemSelectorEquipSlot
{
    class UImage* BackgroundImage;                                                    // 0x02E8 (size: 0x8)
    class UScaleBox* IconScale;                                                       // 0x02F0 (size: 0x8)
    class UImage* Image;                                                              // 0x02F8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0300 (size: 0x8)

    TArray<class UUserWidget*> GetHoveredWidgets();
}; // Size: 0x308

#endif
