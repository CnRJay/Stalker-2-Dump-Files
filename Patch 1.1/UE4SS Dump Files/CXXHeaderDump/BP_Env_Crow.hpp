#ifndef UE4SS_SDK_BP_Env_Crow_HPP
#define UE4SS_SDK_BP_Env_Crow_HPP

class ABP_Env_Crow_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UWildlifeBehaviourComponent* WildlifeBehaviour;                             // 0x02A0 (size: 0x8)
    class UStaticEnvironmentNiagaraComponent* StaticEnvironmentNiagara;               // 0x02A8 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x02B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B8 (size: 0x8)
    float Timeline_0_Fly_E4A071044EC4A5DDB08E69B2B90CC5E9;                            // 0x02C0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_E4A071044EC4A5DDB08E69B2B90CC5E9; // 0x02C4 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x02C8 (size: 0x8)
    class UAkAudioEvent* ScaredSFX;                                                   // 0x02D0 (size: 0x8)
    class UAkAudioEvent* IdleSFX;                                                     // 0x02D8 (size: 0x8)

    void TryPlayScaredSound();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BndEvt__BP_CrowLifeUp_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnEmissionWeatherStarted();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Env_Crow(int32 EntryPoint);
}; // Size: 0x2E0

#endif
