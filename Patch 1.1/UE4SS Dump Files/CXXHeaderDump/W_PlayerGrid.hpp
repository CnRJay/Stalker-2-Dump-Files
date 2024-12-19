#ifndef UE4SS_SDK_W_PlayerGrid_HPP
#define UE4SS_SDK_W_PlayerGrid_HPP

class UW_PlayerGrid_C : public UCustomGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0650 (size: 0x8)
    class UImage* Bottom;                                                             // 0x0658 (size: 0x8)
    class UImage* Image_1957;                                                         // 0x0660 (size: 0x8)
    class UImage* ItemPlace;                                                          // 0x0668 (size: 0x8)
    class UImage* Left;                                                               // 0x0670 (size: 0x8)
    class UImage* MoneyImage;                                                         // 0x0678 (size: 0x8)
    class UImage* Right;                                                              // 0x0680 (size: 0x8)
    class UImage* Tittle;                                                             // 0x0688 (size: 0x8)
    FVector2D VisibleGridSize;                                                        // 0x0690 (size: 0x10)
    int32 CellSize_0;                                                                 // 0x06A0 (size: 0x4)
    ESlateVisibility BackgroundCenterVisibility;                                      // 0x06A4 (size: 0x1)
    FText TextHeader;                                                                 // 0x06A8 (size: 0x18)
    ESlateVisibility MoneyVisibility;                                                 // 0x06C0 (size: 0x1)
    FMargin MoneyPadding;                                                             // 0x06C4 (size: 0x10)
    FSlateColor MoneyColor;                                                           // 0x06D4 (size: 0x14)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_PlayerGrid(int32 EntryPoint);
}; // Size: 0x6E8

#endif
