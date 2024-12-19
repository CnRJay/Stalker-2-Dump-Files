#ifndef UE4SS_SDK_BP_Trap_Shotgun_HPP
#define UE4SS_SDK_BP_Trap_Shotgun_HPP

class ABP_Trap_Shotgun_C : public AInteractableObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E8 (size: 0x8)
    class UShootingWeaponComponent* ShootingWeapon;                                   // 0x02F0 (size: 0x8)
    class UAkComponent* Ak;                                                           // 0x02F8 (size: 0x8)
    class UStaticMeshComponent* Obrez;                                                // 0x0300 (size: 0x8)
    class UStaticMeshComponent* Wire;                                                 // 0x0308 (size: 0x8)
    class UStaticMeshComponent* SM_Base_9;                                            // 0x0310 (size: 0x8)
    class UStaticMeshComponent* SM_Base_8;                                            // 0x0318 (size: 0x8)
    class UStaticMeshComponent* SM_Base_7;                                            // 0x0320 (size: 0x8)
    class UStaticMeshComponent* SM_Base_6;                                            // 0x0328 (size: 0x8)
    class UStaticMeshComponent* SM_Base_5;                                            // 0x0330 (size: 0x8)
    class UStaticMeshComponent* SM_Base_4;                                            // 0x0338 (size: 0x8)
    class UStaticMeshComponent* SM_Base_3;                                            // 0x0340 (size: 0x8)
    class UStaticMeshComponent* SM_Base_2;                                            // 0x0348 (size: 0x8)
    class UStaticMeshComponent* SM_Base_1;                                            // 0x0350 (size: 0x8)
    class UStaticMeshComponent* Knot;                                                 // 0x0358 (size: 0x8)
    class UItemGiveComponent* ItemGiveObrez;                                          // 0x0360 (size: 0x8)
    class UItemGiveComponent* ItemGiveAmmo;                                           // 0x0368 (size: 0x8)
    class UHoldComponent* Hold;                                                       // 0x0370 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0378 (size: 0x8)
    class UNiagaraComponent* NS_MuzzleFlash_Obrez;                                    // 0x0380 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0388 (size: 0x8)
    class USignalReceiverComponent* ReceiverDeactivation;                             // 0x0390 (size: 0x8)
    class USignalSenderComponent* SenderDeactivation;                                 // 0x0398 (size: 0x8)
    class USingleClickComponent* SingleClick;                                         // 0x03A0 (size: 0x8)
    class UHittableComponent* Hittable;                                               // 0x03A8 (size: 0x8)
    class UDamageInteractableComponent* DamageInteractable;                           // 0x03B0 (size: 0x8)
    class USignalReceiverComponent* ReceiverActivation;                               // 0x03B8 (size: 0x8)
    class UParticleSystem* ParticleEffect;                                            // 0x03C0 (size: 0x8)
    class UAkAudioEvent* PickUpObrez;                                                 // 0x03C8 (size: 0x8)
    class UAkAudioEvent* PickUpAmmo;                                                  // 0x03D0 (size: 0x8)
    class UAkAudioEvent* Shot;                                                        // 0x03D8 (size: 0x8)

    void BndEvt__BP_trap_shotgun_ReceiverDeactivation_K2Node_ComponentBoundEvent_1_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
    void ReceiveBeginPlay();
    void BndEvt__BP_Trap_Shotgun_Hold_K2Node_ComponentBoundEvent_2_InteractSignature__DelegateSignature();
    void BndEvt__BP_trap_grenade_SingleClick_K2Node_ComponentBoundEvent_5_InteractSignature__DelegateSignature();
    void BndEvt__Grenade_SignalReceiver_K2Node_ComponentBoundEvent_0_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
    void BndEvt__BP_Trap_Shotgun_DamageInteractable_K2Node_ComponentBoundEvent_4_OnDamageAccumulated__DelegateSignature(FUID LastDamageDealerUID, bool bProjectileFlownThroughObject);
    void ExecuteUbergraph_BP_Trap_Shotgun(int32 EntryPoint);
}; // Size: 0x3E0

#endif
