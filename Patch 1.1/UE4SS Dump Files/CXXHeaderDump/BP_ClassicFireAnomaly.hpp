#ifndef UE4SS_SDK_BP_ClassicFireAnomaly_HPP
#define UE4SS_SDK_BP_ClassicFireAnomaly_HPP

class ABP_ClassicFireAnomaly_C : public AClassicFireAnomaly
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03B8 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x03C0 (size: 0x8)
    class UNiagaraComponent* ActivationEnd_VFX;                                       // 0x03C8 (size: 0x8)
    class UNiagaraComponent* Active_VFX;                                              // 0x03D0 (size: 0x8)
    class UGeometryCacheComponent* ActivationSphere_VFX;                              // 0x03D8 (size: 0x8)
    class UNiagaraComponent* ActivationStart_VFX;                                     // 0x03E0 (size: 0x8)
    float Timeline_1_animation_4DDCB0F041F6C24F1E585E80BB256DD6;                      // 0x03E8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_4DDCB0F041F6C24F1E585E80BB256DD6; // 0x03EC (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x03F0 (size: 0x8)
    class UDecalComponent* FadeInOutDecal;                                            // 0x03F8 (size: 0x8)

    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void OnActiveStateStarted();
    void OnRechargeStateStarted();
    void ExecuteUbergraph_BP_ClassicFireAnomaly(int32 EntryPoint);
}; // Size: 0x400

#endif
