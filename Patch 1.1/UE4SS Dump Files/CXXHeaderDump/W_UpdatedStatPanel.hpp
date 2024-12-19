#ifndef UE4SS_SDK_W_UpdatedStatPanel_HPP
#define UE4SS_SDK_W_UpdatedStatPanel_HPP

class UW_UpdatedStatPanel_C : public UStatPanel
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UImage* Background;                                                         // 0x03E0 (size: 0x8)
    class UImage* HPBack;                                                             // 0x03E8 (size: 0x8)
    class UW_StatSlot_C* HPStatSlot;                                                  // 0x03F0 (size: 0x8)
    class UW_StatSlot_C* StaminaStatSlot;                                             // 0x03F8 (size: 0x8)
    FFloatCurve AnimCurve;                                                            // 0x0400 (size: 0x98)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_W_UpdatedStatPanel(int32 EntryPoint);
}; // Size: 0x498

#endif
