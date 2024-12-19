#ifndef UE4SS_SDK_BP_Interactable_Note_Base_HPP
#define UE4SS_SDK_BP_Interactable_Note_Base_HPP

class ABP_Interactable_Note_Base_C : public AInteractableObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E8 (size: 0x8)
    class UAkComponent* Ak;                                                           // 0x02F0 (size: 0x8)
    class USignalSenderComponent* SignalSender;                                       // 0x02F8 (size: 0x8)
    class USingleClickComponent* SingleClick;                                         // 0x0300 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0308 (size: 0x8)
    class UStaticMesh* New mesh;                                                      // 0x0310 (size: 0x8)
    class UAkAudioEvent* AkEventPickUp;                                               // 0x0318 (size: 0x8)

    void ReceiveBeginPlay();
    void BndEvt__BP_Interactable_Note_SingleClick_K2Node_ComponentBoundEvent_0_InteractSignature__DelegateSignature();
    void ExecuteUbergraph_BP_Interactable_Note_Base(int32 EntryPoint);
}; // Size: 0x320

#endif
