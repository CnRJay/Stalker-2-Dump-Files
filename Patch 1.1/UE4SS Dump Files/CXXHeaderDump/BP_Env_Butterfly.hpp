#ifndef UE4SS_SDK_BP_Env_Butterfly_HPP
#define UE4SS_SDK_BP_Env_Butterfly_HPP

class ABP_Env_Butterfly_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UWildlifeBehaviourComponent* WildlifeBehaviour;                             // 0x02A0 (size: 0x8)
    class UStaticEnvironmentNiagaraComponent* StaticEnvironmentNiagara;               // 0x02A8 (size: 0x8)
    class UAkComponent* Ak;                                                           // 0x02B0 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x02B8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02C0 (size: 0x8)
    float Timeline_0_Fly_6BE8B8A14D29AE8DECB92F8F98F90E59;                            // 0x02C8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_6BE8B8A14D29AE8DECB92F8F98F90E59; // 0x02CC (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x02D0 (size: 0x8)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BndEvt__BP_CrowLifeUp_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnEmissionWeatherStarted();
    void ExecuteUbergraph_BP_Env_Butterfly(int32 EntryPoint);
}; // Size: 0x2D8

#endif
