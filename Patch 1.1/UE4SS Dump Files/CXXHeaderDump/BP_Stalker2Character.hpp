#ifndef UE4SS_SDK_BP_Stalker2Character_HPP
#define UE4SS_SDK_BP_Stalker2Character_HPP

class ABP_Stalker2Character_C : public APC
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1120 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x1128 (size: 0x8)
    class USkeletalMeshComponent* ShadowMesh;                                         // 0x1130 (size: 0x8)
    class USpotLightComponent* SpotLight1;                                            // 0x1138 (size: 0x8)
    class UCapsuleComponent* InteractionCollision;                                    // 0x1140 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x1148 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x1150 (size: 0x8)
    class UAudioComponent* AudioGeiger;                                               // 0x1158 (size: 0x8)
    FVector GunOffset_0;                                                              // 0x1160 (size: 0x18)
    double BaseTurnRate_0;                                                            // 0x1178 (size: 0x8)
    double BaseLookUpRate_0;                                                          // 0x1180 (size: 0x8)
    double ADS_Slowdown;                                                              // 0x1188 (size: 0x8)
    double FOV_Default;                                                               // 0x1190 (size: 0x8)
    double FOV_ADS;                                                                   // 0x1198 (size: 0x8)
    bool isFPP;                                                                       // 0x11A0 (size: 0x1)
    int32 IndexZero;                                                                  // 0x11A4 (size: 0x4)
    double SwappingWeaponDelay;                                                       // 0x11A8 (size: 0x8)
    FVector FPP_Camera_Default_Location;                                              // 0x11B0 (size: 0x18)
    FVector TPP_SpringArm_Default_Location;                                           // 0x11C8 (size: 0x18)
    bool ToggleCrouch;                                                                // 0x11E0 (size: 0x1)
    bool ToggleSprint;                                                                // 0x11E1 (size: 0x1)
    double GrenadeThrowingDelay;                                                      // 0x11E8 (size: 0x8)
    bool bIsLightOn;                                                                  // 0x11F0 (size: 0x1)
    bool startend;                                                                    // 0x11F1 (size: 0x1)
    FVector CurrentLocation;                                                          // 0x11F8 (size: 0x18)

    void InpActEvt_Zero_K2Node_InputKeyEvent_0(FKey Key);
    void OnJumped();
    void ExecuteUbergraph_BP_Stalker2Character(int32 EntryPoint);
}; // Size: 0x1210

#endif
