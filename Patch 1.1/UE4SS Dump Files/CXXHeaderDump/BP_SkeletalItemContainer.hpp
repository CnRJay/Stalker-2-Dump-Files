#ifndef UE4SS_SDK_BP_SkeletalItemContainer_HPP
#define UE4SS_SDK_BP_SkeletalItemContainer_HPP

class ABP_SkeletalItemContainer_C : public AInteractableItemContainer
{
    class UExplosionComponent* Explosion;                                             // 0x03E0 (size: 0x8)
    class UItemContainerHoldComponent* ItemContainerHold;                             // 0x03E8 (size: 0x8)
    class USkeletalMeshComponent* MeshComponent;                                      // 0x03F0 (size: 0x8)
    bool bEnableGravity;                                                              // 0x03F8 (size: 0x1)

}; // Size: 0x3F9

#endif
