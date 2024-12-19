#ifndef UE4SS_SDK_BP_Light_Base_HPP
#define UE4SS_SDK_BP_Light_Base_HPP

class ABP_Light_Base_C : public AInteractableObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E8 (size: 0x8)
    class ULightBulbComponent* LightBulb;                                             // 0x02F0 (size: 0x8)
    class USignalReceiverComponent* SignalReceiverFlickerDestroy;                     // 0x02F8 (size: 0x8)
    class USignalReceiverComponent* SignalReceiverFlickerOff;                         // 0x0300 (size: 0x8)
    class USignalReceiverComponent* SignalReceiverFlickerOn;                          // 0x0308 (size: 0x8)
    class UPhysicsInteractionComponent* PhysicsInteraction;                           // 0x0310 (size: 0x8)
    class USingleClickComponent* SingleClick;                                         // 0x0318 (size: 0x8)
    class USignalReceiverComponent* SignalReceiverOff;                                // 0x0320 (size: 0x8)
    class UDamageInteractableComponent* DamageInteractable;                           // 0x0328 (size: 0x8)
    class UHittableComponent* Hittable;                                               // 0x0330 (size: 0x8)
    class USignalReceiverComponent* SignalReceiverOn;                                 // 0x0338 (size: 0x8)
    float FlickerPattern_LightIntencityMultiplyer_01_2DB9D6514C154342AF39149971F164DA; // 0x0340 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> FlickerPattern__Direction_2DB9D6514C154342AF39149971F164DA; // 0x0344 (size: 0x1)
    class UTimelineComponent* FlickerPattern;                                         // 0x0348 (size: 0x8)
    bool SwitchOnClick;                                                               // 0x0350 (size: 0x1)
    bool PhysicsActivateAfterDestroy;                                                 // 0x0351 (size: 0x1)
    class UNiagaraSystem* DestractionNiagaraEmitter_OnGlass;                          // 0x0358 (size: 0x8)
    TArray<class UStaticMeshComponent*> SM_DestractibleGlass;                         // 0x0360 (size: 0x10)
    TArray<class UStaticMeshComponent*> SM_UdestractibleSM;                           // 0x0370 (size: 0x10)
    TArray<class UPointLightComponent*> PointLights;                                  // 0x0380 (size: 0x10)
    TArray<class UPointLightComponent*> InnerPointLights;                             // 0x0390 (size: 0x10)
    TArray<class UPointLightComponent*> OuterPointLights;                             // 0x03A0 (size: 0x10)
    TArray<class USpotLightComponent*> SpotLights;                                    // 0x03B0 (size: 0x10)
    TArray<class USpotLightComponent*> InnerSpotLights;                               // 0x03C0 (size: 0x10)
    TArray<class USpotLightComponent*> OuterSpotLights;                               // 0x03D0 (size: 0x10)
    TArray<class ABP_Light_Base_C*> ChildActors;                                      // 0x03E0 (size: 0x10)
    float BaseIntensity;                                                              // 0x03F0 (size: 0x4)
    class UNiagaraSystem* DestractionNiagaraEmitter_OnActor;                          // 0x03F8 (size: 0x8)
    class UAkAudioEvent* OnSound;                                                     // 0x0400 (size: 0x8)
    class UAkAudioEvent* OffSound;                                                    // 0x0408 (size: 0x8)
    class UAkAudioEvent* FlickSound;                                                  // 0x0410 (size: 0x8)
    class UAkAudioEvent* DestroySound;                                                // 0x0418 (size: 0x8)
    class UCurveFloat* FlickerLightIntencityMultiplyerCurve;                          // 0x0420 (size: 0x8)
    class UCurveFloat* FlickerSoundEventsCurve;                                       // 0x0428 (size: 0x8)
    TArray<class UNiagaraComponent*> NiagaraComponents;                               // 0x0430 (size: 0x10)
    double MaxRandomFlickDelay;                                                       // 0x0440 (size: 0x8)
    float BaseInnerIntensity;                                                         // 0x0448 (size: 0x4)
    float BaseOuterIntensity;                                                         // 0x044C (size: 0x4)
    TArray<class UNiagaraComponent*> InsectNiagaraComponents;                         // 0x0450 (size: 0x10)
    bool UseInsects;                                                                  // 0x0460 (size: 0x1)
    TArray<class AActor*> ControlledLightsActors;                                     // 0x0468 (size: 0x10)
    bool NeedOffFlickerOnEndEmission;                                                 // 0x0478 (size: 0x1)
    double AutoOn/OffMaxDelay;                                                        // 0x0480 (size: 0x8)
    TArray<class UStaticMeshComponent*> SM_EmissiveGlassOpaque;                       // 0x0488 (size: 0x10)
    TArray<class UStaticMeshComponent*> SM_CustomDepth;                               // 0x0498 (size: 0x10)
    TArray<class UStaticMeshComponent*> SM_EmissiveGlow;                              // 0x04A8 (size: 0x10)
    bool bEmissionFlickering;                                                         // 0x04B8 (size: 0x1)
    bool HasBeganPlay;                                                                // 0x04B9 (size: 0x1)
    class UMaterialInterface* LightFunction_Flickering;                               // 0x04C0 (size: 0x8)
    bool bIsAffectedByEmission;                                                       // 0x04C8 (size: 0x1)
    TArray<double> MultiplyForAmbientLight;                                           // 0x04D0 (size: 0x10)
    int32 IndexMultiplyForAmbientLight;                                               // 0x04E0 (size: 0x4)
    double TurnOnOffIntensityWhileFlickering;                                         // 0x04E8 (size: 0x8)

    void TurnOnControlledLightsActors();
    void TurnOffControlledLightsActors();
    void SetMultiplyArrey();
    void GetIntensityFromLights(TArray<class ULightComponent*>& Array, double& Value, bool& Has Value);
    void CreateDynamicMaterialInstance();
    void SetMaterialEnableFalse();
    void SetMaterialEnableTrue();
    void SetCollisionProfile();
    void PlayDestroySound();
    void PlayFlickeringSound();
    void PlayOnSound();
    void PlayOffSound();
    void PlaySound(class UAkAudioEvent* Sound);
    void SetNewFlickPattern(class UCurveFloat* FlickerLightIntencityMultiplyerCurve, class UCurveFloat* FlickerSoundEventsCurve);
    void UserConstructionScript();
    void FlickerPattern__FinishedFunc();
    void FlickerPattern__UpdateFunc();
    void FlickerPattern__SoundEvents_01__EventFunc();
    void ReceiveBeginPlay();
    void BndEvt__BP_LightBulb_Base_SignalReceiver_K2Node_ComponentBoundEvent_0_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
    void LightOn();
    void LightOff();
    void DestroyLamp(bool SpawnEffect);
    void BndEvt__BP_LightBulb_Base_SignalReceiverOff_K2Node_ComponentBoundEvent_1_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
    void StartFlicker();
    void StopFlicker();
    void BndEvt__BP_Light_Base_SingleClick_K2Node_ComponentBoundEvent_2_InteractSignature__DelegateSignature();
    void BndEvt__BP_Light_Base_SignalReceiverFlickerOn_K2Node_ComponentBoundEvent_3_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
    void BndEvt__BP_Light_Base_SignalReceiverFlickerOff_K2Node_ComponentBoundEvent_4_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
    void BndEvt__BP_Light_Base_SignalReceiverFlickerDestroy_K2Node_ComponentBoundEvent_5_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
    void OnConstruction();
    void SpawnInsects();
    void RemoveInsects();
    void ResetLightsIntencity();
    void OnEmissionStart();
    void OnEmissionFinish();
    void OnDayStart();
    void OnNightStart();
    void FlickOnEmissionStart();
    void FlickOffEmissionEnd();
    void LightOnNightStart();
    void LightOffDayStart();
    void GlassEmissive(bool OnOff);
    void GlassEmissiveFlick(double LightIntensity);
    void BndEvt__BP_Light_Base_DamageInteractable_K2Node_ComponentBoundEvent_6_OnDamageAccumulated__DelegateSignature(FUID LastDamageDealerUID, bool bProjectileFlownThroughObject);
    void ExecuteUbergraph_BP_Light_Base(int32 EntryPoint);
}; // Size: 0x4F0

#endif
