#ifndef UE4SS_SDK_BP_IntChestItemContainer_HPP
#define UE4SS_SDK_BP_IntChestItemContainer_HPP

class ABP_IntChestItemContainer_C : public ABP_AnimatedItemContainer_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UArrowComponent* ArrowLookAt;                                               // 0x0410 (size: 0x8)

    void OnPaintSettingsChanged(const bool bInteractPaint);
    void ExecuteUbergraph_BP_IntChestItemContainer(int32 EntryPoint);
}; // Size: 0x418

#endif
