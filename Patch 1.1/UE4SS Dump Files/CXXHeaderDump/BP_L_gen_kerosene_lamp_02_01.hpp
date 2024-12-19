#ifndef UE4SS_SDK_BP_L_gen_kerosene_lamp_02_01_HPP
#define UE4SS_SDK_BP_L_gen_kerosene_lamp_02_01_HPP

class ABP_L_gen_kerosene_lamp_02_01_C : public ABP_Light_Param_C
{
    class UPointLightComponent* MainLight;                                            // 0x0788 (size: 0x8)
    class UNiagaraComponent* NS_Fire_Kerosene_2;                                      // 0x0790 (size: 0x8)
    class UStaticMeshComponent* SM_gen_kerosene_lamp_02;                              // 0x0798 (size: 0x8)
    double Attenuation Radius;                                                        // 0x07A0 (size: 0x8)
    double Light Falloff Exponent;                                                    // 0x07A8 (size: 0x8)

    void PlayFlickeringSound();
    void UserConstructionScript();
}; // Size: 0x7B0

#endif
