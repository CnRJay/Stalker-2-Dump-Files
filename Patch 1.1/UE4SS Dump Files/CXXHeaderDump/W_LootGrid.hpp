#ifndef UE4SS_SDK_W_LootGrid_HPP
#define UE4SS_SDK_W_LootGrid_HPP

class UW_LootGrid_C : public UCustomGrid
{
    class UImage* Bottom;                                                             // 0x0650 (size: 0x8)
    class UImage* Image_1957;                                                         // 0x0658 (size: 0x8)
    class UImage* ItemPlace;                                                          // 0x0660 (size: 0x8)
    class UImage* Left;                                                               // 0x0668 (size: 0x8)
    class UImage* Right;                                                              // 0x0670 (size: 0x8)
    class UImage* Tittle;                                                             // 0x0678 (size: 0x8)
    FVector2D VisibleGridSize;                                                        // 0x0680 (size: 0x10)
    int32 CellSize_0;                                                                 // 0x0690 (size: 0x4)
    ESlateVisibility BackgroundCenterVisibility;                                      // 0x0694 (size: 0x1)
    FText TextHeader;                                                                 // 0x0698 (size: 0x18)
    ESlateVisibility MoneyVisibility;                                                 // 0x06B0 (size: 0x1)
    FMargin MoneyPadding;                                                             // 0x06B4 (size: 0x10)
    FSlateColor MoneyColor;                                                           // 0x06C4 (size: 0x14)

}; // Size: 0x6D8

#endif
