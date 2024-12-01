#ifndef UE4SS_SDK_W_SettingElementPercent_HPP
#define UE4SS_SDK_W_SettingElementPercent_HPP

class UW_SettingElementPercent_C : public USettingsElementPercent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1DD0 (size: 0x8)
    class UImage* TapZone;                                                            // 0x1DD8 (size: 0x8)
    bool Down;                                                                        // 0x1DE0 (size: 0x1)

    FEventReply OnMouseTapZoneDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_W_SettingElementPercent(int32 EntryPoint);
}; // Size: 0x1DE1

#endif
