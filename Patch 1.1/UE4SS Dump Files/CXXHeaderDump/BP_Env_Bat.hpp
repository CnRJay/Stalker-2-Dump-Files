#ifndef UE4SS_SDK_BP_Env_Bat_HPP
#define UE4SS_SDK_BP_Env_Bat_HPP

class ABP_Env_Bat_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UWildlifeBehaviourComponent* WildlifeBehaviour;                             // 0x02A0 (size: 0x8)
    class UStaticEnvironmentNiagaraComponent* StaticEnvironmentNiagara;               // 0x02A8 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x02B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B8 (size: 0x8)
    class UAkAudioEvent* ScaredSFX;                                                   // 0x02C0 (size: 0x8)
    class UAkAudioEvent* IdleSFX;                                                     // 0x02C8 (size: 0x8)

    void TryPlayScaredSound();
    void ReceiveBeginPlay();
    void BndEvt__BP_CrowLifeUp_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnEmissionWeatherStarted();
    void ExecuteUbergraph_BP_Env_Bat(int32 EntryPoint);
}; // Size: 0x2D0

#endif
