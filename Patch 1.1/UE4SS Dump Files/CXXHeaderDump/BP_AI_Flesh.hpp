#ifndef UE4SS_SDK_BP_AI_Flesh_HPP
#define UE4SS_SDK_BP_AI_Flesh_HPP

class ABP_AI_Flesh_C : public AAgent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0AD0 (size: 0x8)
    class UNiagaraComponent* NS_Flesh_IdleSaliva;                                     // 0x0AD8 (size: 0x8)
    class UNiagaraComponent* NS_Flesh_IdleNose;                                       // 0x0AE0 (size: 0x8)
    class UNiagaraComponent* NS_Flesh_IdleFlies;                                      // 0x0AE8 (size: 0x8)
    class UPhysicalAnimationComponent* PhysicalAnimation;                             // 0x0AF0 (size: 0x8)
    FVector GunOffset_0;                                                              // 0x0AF8 (size: 0x18)
    double BaseTurnRate_0;                                                            // 0x0B10 (size: 0x8)
    double BaseLookUpRate_0;                                                          // 0x0B18 (size: 0x8)
    double ADS_Slowdown;                                                              // 0x0B20 (size: 0x8)
    double FOV_Default;                                                               // 0x0B28 (size: 0x8)
    double FOV_ADS;                                                                   // 0x0B30 (size: 0x8)
    bool isFPP;                                                                       // 0x0B38 (size: 0x1)
    int32 IndexZero;                                                                  // 0x0B3C (size: 0x4)
    double SwappingWeaponDelay;                                                       // 0x0B40 (size: 0x8)
    FVector FPP_Camera_Default_Location;                                              // 0x0B48 (size: 0x18)
    FVector TPP_SpringArm_Default_Location;                                           // 0x0B60 (size: 0x18)
    bool ToggleCrouch;                                                                // 0x0B78 (size: 0x1)
    bool ToggleSprint;                                                                // 0x0B79 (size: 0x1)
    double GrenadeThrowingDelay;                                                      // 0x0B80 (size: 0x8)
    double RandomTone_Index;                                                          // 0x0B88 (size: 0x8)

    void Event Died(class UObject* Object);
    void OnGameplayEvent(const FGameplayTag& EventTag, const class UGameplayEventData* EventData);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_AI_Flesh(int32 EntryPoint);
}; // Size: 0xB90

#endif
