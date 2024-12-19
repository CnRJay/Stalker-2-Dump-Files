#ifndef UE4SS_SDK_BP_AI_Human_HPP
#define UE4SS_SDK_BP_AI_Human_HPP

class ABP_AI_Human_C : public AAgent
{
    class USpotLightComponent* AdditionalNPCSpotLight;                                // 0x0AD0 (size: 0x8)
    class UStaticMeshComponent* FakeLightBeam;                                        // 0x0AD8 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0AE0 (size: 0x8)
    class UPhysicalAnimationComponent* PhysicalAnimation;                             // 0x0AE8 (size: 0x8)
    class ULookAtSourceComponent* LookAtSource;                                       // 0x0AF0 (size: 0x8)

}; // Size: 0xAF8

#endif
