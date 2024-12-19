#ifndef UE4SS_SDK_W_ItemSelectorSlot_HPP
#define UE4SS_SDK_W_ItemSelectorSlot_HPP

class UW_ItemSelectorSlot_C : public UItemSelectorWeaponSlot
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05F0 (size: 0x8)
    TEnumAsByte<EStretch::Type> SlotStretch;                                          // 0x05F8 (size: 0x1)

    TArray<class UUserWidget*> GetHoveredWidgets();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_ItemSelectorSlot(int32 EntryPoint);
}; // Size: 0x5F9

#endif
