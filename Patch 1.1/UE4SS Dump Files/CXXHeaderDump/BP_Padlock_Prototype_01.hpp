#ifndef UE4SS_SDK_BP_Padlock_Prototype_01_HPP
#define UE4SS_SDK_BP_Padlock_Prototype_01_HPP

class ABP_Padlock_Prototype_01_C : public AInteractableObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E8 (size: 0x8)
    class UAkComponent* Ak;                                                           // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* Padlock_a;                                            // 0x02F8 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0300 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0308 (size: 0x8)
    class UStaticMeshComponent* Padlock_b;                                            // 0x0310 (size: 0x8)
    class USignalReceiverComponent* SignalReceiver;                                   // 0x0318 (size: 0x8)
    class USignalSenderComponent* SignalSender;                                       // 0x0320 (size: 0x8)
    class UHittableComponent* Hittable;                                               // 0x0328 (size: 0x8)
    class UDamageInteractableComponent* DamageInteractable;                           // 0x0330 (size: 0x8)
    class UAkAudioEvent* Ak Event;                                                    // 0x0338 (size: 0x8)

    void BndEvt__BP_Padlock_Prototype_SignalReceiver_K2Node_ComponentBoundEvent_1_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
    void ReceiveBeginPlay();
    void BndEvt__BP_Padlock_Prototype_01_DamageInteractable_K2Node_ComponentBoundEvent_0_OnDamageAccumulated__DelegateSignature(FUID LastDamageDealerUID, bool bProjectileFlownThroughObject);
    void OnPaintSettingsChanged(const bool bInteractPaint);
    void ExecuteUbergraph_BP_Padlock_Prototype_01(int32 EntryPoint);
}; // Size: 0x340

#endif
