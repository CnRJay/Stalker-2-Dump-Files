#ifndef UE4SS_SDK_BP_AnimatedItemContainer_HPP
#define UE4SS_SDK_BP_AnimatedItemContainer_HPP

class ABP_AnimatedItemContainer_C : public ABP_SkeletalItemContainer_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0400 (size: 0x8)

    void BndEvt__BP_AnimatedItemContainer_InteractionComponent_K2Node_ComponentBoundEvent_2_InteractSignature__DelegateSignature();
    void BndEvt__BP_AnimatedItemContainer_InteractionComponent_K2Node_ComponentBoundEvent_3_InteractSignature__DelegateSignature();
    void ExecuteUbergraph_BP_AnimatedItemContainer(int32 EntryPoint);
}; // Size: 0x408

#endif
