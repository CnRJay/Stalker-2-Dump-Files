#ifndef UE4SS_SDK_W_CompassMarker_HPP
#define UE4SS_SDK_W_CompassMarker_HPP

class UW_CompassMarker_C : public UMarkerCompassWidget
{
    class UWidgetAnimation* HideShowAnim;                                             // 0x02C8 (size: 0x8)
    class UWidgetAnimation* BattleModScaleAndOpacityAnim;                             // 0x02D0 (size: 0x8)
    class UWidgetAnimation* BackStateAnim;                                            // 0x02D8 (size: 0x8)

    void Get_IconImage_Brush();
}; // Size: 0x2E0

#endif
