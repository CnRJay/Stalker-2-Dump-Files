#ifndef UE4SS_SDK_BP_Trap_Grenade_HPP
#define UE4SS_SDK_BP_Trap_Grenade_HPP

class ABP_Trap_Grenade_C : public AInteractableObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* BaseMesh;                                             // 0x02F8 (size: 0x8)
    class UStaticMeshComponent* Grenade;                                              // 0x0300 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0308 (size: 0x8)
    class UAkComponent* Ak;                                                           // 0x0310 (size: 0x8)
    class UStaticMeshComponent* Knot;                                                 // 0x0318 (size: 0x8)
    class UItemGiveComponent* ItemGive;                                               // 0x0320 (size: 0x8)
    class UStaticMeshComponent* Hook;                                                 // 0x0328 (size: 0x8)
    class USignalReceiverComponent* ReceiverDeactivation;                             // 0x0330 (size: 0x8)
    class UExplosionComponent* Explosion;                                             // 0x0338 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0340 (size: 0x8)
    class USignalSenderComponent* SenderDeactivation;                                 // 0x0348 (size: 0x8)
    class USingleClickComponent* SingleClick;                                         // 0x0350 (size: 0x8)
    class UHittableComponent* Hittable;                                               // 0x0358 (size: 0x8)
    class UDamageInteractableComponent* DamageInteractable;                           // 0x0360 (size: 0x8)
    class USignalReceiverComponent* ReceiverActivation;                               // 0x0368 (size: 0x8)
    class UParticleSystem* ParticleEffect;                                            // 0x0370 (size: 0x8)
    float ExplosionDelay;                                                             // 0x0378 (size: 0x4)
    class UAkAudioEvent* DefuseGrenade;                                               // 0x0380 (size: 0x8)
    class UAkAudioEvent* ActivateGrenade;                                             // 0x0388 (size: 0x8)

    void BndEvt__Grenade_SignalReceiver_K2Node_ComponentBoundEvent_0_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
    void BndEvt__BP_trap_grenade_SingleClick_K2Node_ComponentBoundEvent_5_InteractSignature__DelegateSignature();
    void BndEvt__BP_trap_grenade_ReceiverDeactivation_K2Node_ComponentBoundEvent_1_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
    void ReceiveBeginPlay();
    void BndEvt__BP_Trap_Grenade_DamageInteractable_K2Node_ComponentBoundEvent_3_OnDamageAccumulated__DelegateSignature(FUID LastDamageDealerUID, bool bProjectileFlownThroughObject);
    void ExecuteUbergraph_BP_Trap_Grenade(int32 EntryPoint);
}; // Size: 0x390

#endif
