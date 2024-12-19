#ifndef UE4SS_SDK_BP_Wire_HPP
#define UE4SS_SDK_BP_Wire_HPP

class ABP_Wire_C : public AInteractableObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E8 (size: 0x8)
    class UBP_BaseForceFeedbackSphere_C* BP_BaseForceFeedbackSphere;                  // 0x02F0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02F8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0300 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0308 (size: 0x8)
    class UAkComponent* Ak;                                                           // 0x0310 (size: 0x8)
    class UDamageInteractableComponent* DamageInteractable;                           // 0x0318 (size: 0x8)
    class UHittableComponent* Hittable;                                               // 0x0320 (size: 0x8)
    class USignalReceiverComponent* ReceiverDeactivation;                             // 0x0328 (size: 0x8)
    class USignalSenderComponent* SenderDeactivation;                                 // 0x0330 (size: 0x8)
    class USingleClickComponent* SingleClick;                                         // 0x0338 (size: 0x8)
    class USignalSenderComponent* SenderActivation;                                   // 0x0340 (size: 0x8)
    float Timeline_NewTrack_0_37FF747847F86B65A33B7FA696C1E301;                       // 0x0348 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline__Direction_37FF747847F86B65A33B7FA696C1E301; // 0x034C (size: 0x1)
    class UTimelineComponent* Timeline;                                               // 0x0350 (size: 0x8)
    class UAkAudioEvent* Activate;                                                    // 0x0358 (size: 0x8)
    class UAkAudioEvent* Defuse;                                                      // 0x0360 (size: 0x8)

    void Timeline__FinishedFunc();
    void Timeline__UpdateFunc();
    void BndEvt__Wire_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_trap_wire_SignalReceiver_Deactivation_K2Node_ComponentBoundEvent_4_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
    void BndEvt__BP_trap_wire_SingleClick_K2Node_ComponentBoundEvent_5_InteractSignature__DelegateSignature();
    void ReceiveBeginPlay();
    void BndEvt__BP_Wire_DamageInteractable_K2Node_ComponentBoundEvent_2_OnDamageAccumulated__DelegateSignature(FUID LastDamageDealerUID, bool bProjectileFlownThroughObject);
    void ExecuteUbergraph_BP_Wire(int32 EntryPoint);
}; // Size: 0x368

#endif
